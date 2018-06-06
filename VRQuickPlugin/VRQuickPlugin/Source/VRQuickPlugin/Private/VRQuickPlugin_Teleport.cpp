// Fill out your copyright notice in the Description page of Project Settings.

#include "VRQuickPlugin_Teleport.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UVRQuickPlugin_Teleport::UVRQuickPlugin_Teleport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UVRQuickPlugin_Teleport::BeginPlay()
{
	Super::BeginPlay();
	if (!TeleportPinComponent) {
		SpawnTeleportPin();
	}
	if (!TraceMeshComponent) {
		SpawnTraceMesh();
	}
}

// Called every frame
void UVRQuickPlugin_Teleport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Check Teleport Mode and Active the Trace Line
	if (TeleportTraceMode == 0) {
		// Ray Trace Mode
		if (bIsTeleporterActive) {
			DrawRayTrace(TraceStartLocation(), this->GetForwardVector(), Speed);
		}
	}
	else if (TeleportTraceMode == 1) {
		// Parabloa Mode
		if (bIsTeleporterActive) {
			DrawParabola(TraceStartLocation(), this->GetForwardVector(), Steps, TimeStep, Speed);
		}
	}

	// Check Teleport Pin Visibility
	if (TeleportPinComponent && !TeleportDistination) {
		TeleportPinComponent->SetVisibility(false);
	}
	else if (TeleportPinComponent && TeleportDistination) {
		TeleportPinComponent->SetVisibility(true);
	}

	// Render Trace Mesh
	if (TraceMeshComponent && bIsTeleporterActive) {
		TraceMeshComponent->SetVisibility(true);
		RenderTraceMesh(TraceStartLocation(), this->GetForwardVector(), Speed, Steps, TimeStep);
	}
	else if (TraceMeshComponent && !bIsTeleporterActive) {
		TraceMeshComponent->SetVisibility(false);
	}
}

/*Teleport Input Function*/
bool UVRQuickPlugin_Teleport::ActivateTeleporter(ETraceMode TraceMode, bool DrawDebugLine) {
	// Switch Trace Mode
	switch (TraceMode) {
	case ETraceMode::TraceMode_RayTrace:
		TeleportTraceMode = 0;
		break;

	case ETraceMode::TraceMode_Parabola:
		TeleportTraceMode = 1;
		break;
	}

	// Debug line
	bDrawDebugLine = DrawDebugLine;

	// Show Teleport Pin
	bIsTeleporterActive = true;
	if (TeleportPinComponent) {
		TeleportPinComponent->SetVisibility(true);
	}
	return bIsTeleporterActive;
}

bool UVRQuickPlugin_Teleport::DisableTeleporter() {
	if (bIsTeleporterActive) {
		bIsTeleporterActive = false;
		if (TeleportPinComponent) {
			TeleportPinComponent->SetVisibility(false);
		}
	}
	TeleportDistination = false;
	return bIsTeleporterActive;
}

void UVRQuickPlugin_Teleport::ExecuteTeleportation() {
	bool bIsTeleporting = false;
	auto Player = GetOwner();

	if (!bIsTeleporting && bIsTeleporterActive) {
		if (TeleportDistination) {
			bIsTeleporting = true;
			DisableTeleporter();
			Player->SetActorLocation(FVector(TeleportLocation.X, TeleportLocation.Y, 110.f));
			bIsTeleporting = false;
		}
		else {
			DisableTeleporter();
		}
	}
}

/*Trace*/
// Get Trace Start Location
FVector UVRQuickPlugin_Teleport::TraceStartLocation() {
	FVector StartLocation = this->GetComponentLocation();
	return StartLocation;
}

// Draw Ray Trace
FVector UVRQuickPlugin_Teleport::DrawRayTrace(FVector Location, FVector Forward, float Speed) {
	FVector InitialLocation = Location;
	FVector PreviousLocation = InitialLocation;
	FVector Velocity = Forward * Speed;
	FHitResult Hit;
	FVector LineTraceStart = PreviousLocation;
	FVector LineTraceEnd = Velocity + InitialLocation;

	if (GetWorld()->LineTraceSingleByChannel(
		Hit,
		LineTraceStart,
		LineTraceEnd,
		ECollisionChannel::ECC_GameTraceChannel1
	)) {
		//Trace Success
		PreviousLocation = LineTraceEnd;
		if (FVector::DotProduct(Hit.Normal, FVector(0, 0, 1)) > 0.9f) {
			TeleportDistination = true;
			TeleportLocation = Hit.Location;
		}
		else
		{
			TeleportDistination = false;
		}
	}
	else
	{
		TeleportDistination = false;
	}

	// Draw Ray Trace Debug Line
	if (bDrawDebugLine) {
		DrawDebugLine(
			GetWorld(),
			LineTraceStart,
			LineTraceEnd,
			FColor(255, 0, 0, 1),
			false,
			0.f,
			0.f,
			1.f
		);
	}

	// Set Teleport pin
	SetTeleportPinLocation(TeleportLocation);

	return TeleportLocation;
}

// Draw Parabola
FVector UVRQuickPlugin_Teleport::DrawParabola(FVector Location, FVector Forward, int32 Steps, float TimeSteps, float Speed) {
	FVector InitialLocation = Location;
	FVector PreviousLocation = InitialLocation;
	FVector Velocity = Forward * Speed;
	float Time = TimeSteps;

	for (int32 index = 1; index <= Steps; index++) {
		FHitResult Hit;
		FVector LineTraceStart = PreviousLocation;
		FVector LineTraceEnd = FVector(Velocity.X * index * Time, Velocity.Y * index * Time, (Velocity.Z * index * Time) - ((index * Time)*(index * Time) * 0.5 * 980)) + InitialLocation;

		if (GetWorld()->LineTraceSingleByChannel(
			Hit,
			LineTraceStart,
			LineTraceEnd,
			ECollisionChannel::ECC_GameTraceChannel1
		)) {
			// Trace Success
			PreviousLocation = LineTraceEnd;
			if (FVector::DotProduct(Hit.Normal, FVector(0, 0, 1)) > 0.9f) {
				TeleportDistination = true;
				TeleportLocation = Hit.Location;
			}
			else
			{
				TeleportDistination = false;
			}
			break;
		}
		else
		{
			TeleportDistination = false;
		}

		// Draw Parabola Debug Line
		if (bDrawDebugLine) {
			DrawDebugLine(
				GetWorld(),
				LineTraceStart,
				LineTraceEnd,
				FColor(255, 0, 0, 1),
				false,
				0.f,
				0.f,
				1.f
			);
		}
	}

	// Set Teleport pin
	SetTeleportPinLocation(TeleportLocation);

	return TeleportLocation;
}

// Render Visualise Trace Mesh
void UVRQuickPlugin_Teleport::RenderTraceMesh(FVector StartLocation, FVector Forward, float Speed, int32 Steps, float TimeSteps) {
	FVector InLocation = StartLocation;
	FVector InVelocity = Forward * Speed;
	FVector PreviousLocation = InLocation;// -InVelocity.Normalize();
	int32 InSteps = Steps;
	float InTimeStep = TimeSteps;

	// Check Which Type of Trace Mode is Using
	TraceMeshComponent->ClearInstances();
	if (TeleportTraceMode == 0) {
		// Ray Trace Mode
		for (int32 index = 0; index < InSteps; index++) {
			float I = (index * InTimeStep) + (InTimeStep * AnimationProgress());
			FVector EndLocation = InLocation + FVector(InVelocity.X*I, InVelocity.Y*I, InVelocity.Z*I);
			FRotator LookLocation = UKismetMathLibrary::FindLookAtRotation(PreviousLocation, EndLocation);

			TraceMeshComponent->AddInstanceWorldSpace(FTransform(LookLocation, EndLocation, SegmentScale));
			PreviousLocation = EndLocation;
		}
	}
	else if (TeleportTraceMode == 1) {
		// Parabola Mode
		for (int32 index = 0; index < InSteps; index++) {
			float I = (index * InTimeStep) + (InTimeStep * AnimationProgress());
			FVector EndLocation = InLocation + FVector(InVelocity.X*I, InVelocity.Y*I, (InVelocity.Z*I - (I*I*0.5 * 980)));
			FRotator LookLocation = UKismetMathLibrary::FindLookAtRotation(PreviousLocation, EndLocation);
			FTransform WorldTransform = FTransform(LookLocation, EndLocation, SegmentScale);

			TraceMeshComponent->AddInstanceWorldSpace(WorldTransform);
			PreviousLocation = EndLocation;
		}
	}
}

// Spawn Trace Mesh
void UVRQuickPlugin_Teleport::SpawnTraceMesh() {
	if (TraceMesh) {
		TraceMeshComponent = NewObject<UInstancedStaticMeshComponent>(this);
		TraceMeshComponent->RegisterComponentWithWorld(GetWorld());
		TraceMeshComponent->SetMobility(EComponentMobility::Movable);
		TraceMeshComponent->SetSimulatePhysics(false);
		TraceMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		TraceMeshComponent->AttachToComponent(GetOwner()->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
		TraceMeshComponent->SetVisibility(false);
		TraceMeshComponent->SetStaticMesh(TraceMesh);
	}
}

// Advance animation from game time
float UVRQuickPlugin_Teleport::AnimationProgress() {
	float TimeSecond = UKismetSystemLibrary::GetGameTimeInSeconds(GetWorld());
	float AnimationProgress = UKismetMathLibrary::GenericPercent_FloatFloat((TimeSecond * AnimationSpeed), 1.f);
	return AnimationProgress;
}

/*TeleportPin*/
// Spawn Teleport Pin
void UVRQuickPlugin_Teleport::SpawnTeleportPin() {
	if (TeleportPinMesh) {
		TeleportPinComponent = NewObject<UStaticMeshComponent>(this);
		TeleportPinComponent->RegisterComponentWithWorld(GetWorld());
		TeleportPinComponent->SetMobility(EComponentMobility::Movable);
		TeleportPinComponent->SetSimulatePhysics(false);
		TeleportPinComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		TeleportPinComponent->AttachToComponent(GetOwner()->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
		TeleportPinComponent->SetVisibility(false);
		TeleportPinComponent->SetWorldScale3D(TeleportPinScale);
		TeleportPinComponent->SetStaticMesh(TeleportPinMesh);
	}
}

//Set Teleport Pin Location
void UVRQuickPlugin_Teleport::SetTeleportPinLocation(FVector PinLocation) {
	if (TeleportPinComponent) {
		TeleportPinComponent->SetWorldLocation(FVector(PinLocation.X, PinLocation.Y, TeleportPin_Z));
	}
}

