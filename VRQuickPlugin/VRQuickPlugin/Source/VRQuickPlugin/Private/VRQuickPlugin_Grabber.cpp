// Fill out your copyright notice in the Description page of Project Settings.

#include "VRQuickPlugin_Grabber.h"
#include "DrawDebugHelpers.h"

// Sets default values for this component's properties
UVRQuickPlugin_Grabber::UVRQuickPlugin_Grabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UVRQuickPlugin_Grabber::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UVRQuickPlugin_Grabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Update Grabbed Object Locatiob $ Rotation
	if (GrabbedObject && !bManualAttach) {
		// Update Controller Location $ Rotation
		ControllerLocation = GetAttachParent()->GetComponentLocation();
		ControllerRotation = GetAttachParent()->GetComponentRotation();

		switch (eGrabRule)
		{
		case EGrabRule::PRECISION_GRAB:
		case EGrabRule::SNAP_GRAB:

			// Set Grabbed Object
			GrabbedObject->SetTargetLocation(ControllerLocation + (ControllerRotation.Vector() * DistanceFromController));
			GrabbedObject->SetTargetRotation(ControllerRotation);
			break;
		}
	}
}

/*Grab Input Function*/

AActor* UVRQuickPlugin_Grabber::Grab(float Reach, bool RadialTrace, bool ManuallyAttach, EGrabRule GrabRule, FName TagName, bool RetainTargetRotation, bool RetainTargetDistance, bool ShowDebug) {
	// Set Component vars
	DistanceFromController = Reach;
	bManualAttach = ManuallyAttach;
	eGrabRule = GrabRule;

	// Update Controller Location & Rotation
	ControllerLocation = GetAttachParent()->GetComponentLocation();
	ControllerRotation = GetAttachParent()->GetComponentRotation();

	// Show Debug Line
	if (ShowDebug) {
		if (RadialTrace) {
			// Draw Debug Radial Trace
			DrawDebugSphere(
				GetWorld(),
				this->GetComponentLocation(),
				Reach / 2,
				8,
				FColor(255, 0, 0),
				false,
				0.f,
				0.f,
				1.f
			);
		}
		else {
			// Draw Debug Line Trace
			DrawDebugLine(
				GetWorld(),
				this->GetComponentLocation(),
				this->GetComponentLocation() + (this->GetComponentRotation().Vector() * Reach),
				FColor(255, 0, 0),
				false,
				0.f,
				0.f,
				5.f
			);
		}
	}

	// Calculate Reach
	Reach = RadialTrace ? Reach / 2 : Reach;

	// Line Trace Get Hit
	AActor* ActorHit = GetHitActor(RadialTrace, Reach, this->GetComponentLocation(), this->GetComponentLocation() + (this->GetComponentRotation().Vector() * Reach), RetainTargetDistance);

	// Check if ActorHit is Valid
	if (ActorHit) {
		// Only Grab an Object with Physics Handle
		GrabbedObject = ActorHit->FindComponentByClass<UPhysicsHandleComponent>();

		// Automatic Attachment - Attach to Physics Handle
		if (GrabbedObject) {
			// Check Actor Tag
			if (!TagName.IsNone()) {
				if (!GrabbedObject->ComponentHasTag(TagName)) {
					return nullptr;
				}
			}
		}

		// Do a Physics Handle Grab if automatic attachment is selected
		if (!bManualAttach) {
			UPrimitiveComponent* ComponentToGrab = Cast<UPrimitiveComponent>(ActorHit->GetRootComponent());

			//Check Grab Rule
			if (eGrabRule == EGrabRule::SNAP_GRAB) {
				// Grab
				GrabbedObject->GrabComponentAtLocationWithRotation(
					ComponentToGrab,
					NAME_None,
					ActorHit->GetActorLocation(),
					RetainTargetRotation ? ActorHit->GetActorRotation() : ControllerRotation
				);

				// Set Transform
				GrabbedObject->SetTargetLocation(ControllerLocation + (ControllerRotation.Vector() * DistanceFromController));
				GrabbedObject->SetTargetRotation(ControllerRotation);
			}
			if (eGrabRule == EGrabRule::PRECISION_GRAB) {
				// Grab
				GrabbedObject->GrabComponentAtLocationWithRotation(
					ComponentToGrab,
					NAME_None,
					PrecisionGrabbedLocation,
					RetainTargetRotation ? ActorHit->GetActorRotation() : ControllerRotation
				);

				// Set Transform
				GrabbedObject->SetTargetLocation(ControllerLocation + (ControllerRotation.Vector() * DistanceFromController));
				GrabbedObject->SetTargetRotation(ControllerRotation);
			}
		}

		return ActorHit;
	}

	return nullptr;
}

AActor* UVRQuickPlugin_Grabber::Release() {
	if (GrabbedObject) {
		// TODO Check Pull Push

		// Save Currently Attached Object
		AActor* CurrentlyGrabbedActor = GrabbedObject->GetOwner();

		if (!bManualAttach) {
			GrabbedObject->ReleaseComponent();
		}

		GrabbedObject = nullptr;
		return CurrentlyGrabbedActor;
	}
	return nullptr;
}

/*Get Actor Hit by Trace*/
AActor* UVRQuickPlugin_Grabber::GetHitActor(bool RadialTrace, float Reach, FVector LineTraceStart, FVector LineTraceEnd, bool RetainDistance) {

	// Set Default Grabbable Type
	if (Grabbable_ObjectTypes.Num() < 1) {
		Grabbable_ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_PhysicsBody));
	}

	// Check it's Radial Trace or Line Trace
	FHitResult Hit;
	FCollisionQueryParams TraceParameters(FName(TEXT("")), false, GetOwner());
	if (RadialTrace) {
		// Radial Trace
		TArray<struct FHitResult> HitResults;
		FCollisionShape CollisionShape;
		CollisionShape.ShapeType = ECollisionShape::Sphere;
		CollisionShape.SetSphere(Reach);

		GetWorld()->SweepMultiByObjectType(
			HitResults,
			LineTraceStart,
			LineTraceStart,
			FQuat(0.f, 0.f, 0.f, 0.f),
			FCollisionObjectQueryParams(Grabbable_ObjectTypes),
			CollisionShape,
			TraceParameters
		);

		// Return the first hit results
		if (HitResults.Num() > 0) {
			Hit = HitResults[0];
		}
	}
	else {
		// Line Trace
		GetWorld()->LineTraceSingleByObjectType(
			Hit,
			LineTraceStart,
			LineTraceEnd,
			FCollisionObjectQueryParams(Grabbable_ObjectTypes),
			TraceParameters
		);
	}

	// Check Hit Actor
	auto HitActor = Hit.GetActor();

	// Return Hit
	if (HitActor) {
		// Update Distance with Hit Distance
		if (!RetainDistance) {
			DistanceFromController = Hit.Distance;
		}

		// Set Transform for Precision Grabs
		PrecisionGrabbedLocation = Hit.ImpactPoint;

		return HitActor;
	}
	else {
		return nullptr;
	}
}

