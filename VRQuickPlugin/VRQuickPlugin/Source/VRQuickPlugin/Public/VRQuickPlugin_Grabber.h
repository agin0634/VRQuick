// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Engine/World.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "VRQuickPlugin_Grabber.generated.h"

UENUM(BlueprintType)
enum class EGrabRule : uint8
{
	SNAP_GRAB 		UMETA(DisplayName = "Snap to Target Origin"),
	PRECISION_GRAB 	UMETA(DisplayName = "Precision Grab")
};

UCLASS( ClassGroup=(VRQuick), meta=(BlueprintSpawnableComponent) )
class VRQUICKPLUGIN_API UVRQuickPlugin_Grabber : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UVRQuickPlugin_Grabber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/** The Objects that can br grabbed, need a physics handle component if you want object to auto attach*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grabber")
	TArray<TEnumAsByte<EObjectTypeQuery>> Grabbable_ObjectTypes;

	// Grab Input Function
	UFUNCTION(BlueprintCallable, Category = "VR Grabber")
	AActor* Grab(
		float Reach = 5.f,
		bool RadialTrace = false,
		bool ManuallyAttach = false,
		EGrabRule GrabRule = EGrabRule::SNAP_GRAB,
		FName TagName = FName(TEXT("")),
		bool RetainTargetRotation = true,
		bool RetainTargetDistance = false,
		bool ShowDebug = false
	);

	UFUNCTION(BlueprintCallable, Category = "VR Grabber")
	AActor* Release();

private:
	// Motion Controller Transform
	FVector ControllerLocation = FVector::ZeroVector;
	FRotator ControllerRotation = FRotator::ZeroRotator;

	// Get Actor Hit by Trace
	AActor* GetHitActor(
		bool RadialTrace,
		float Reach,
		FVector LineTraceStart,
		FVector LineTraceEnd,
		bool RetainDistance
	);

	FVector PrecisionGrabbedLocation = FVector::ZeroVector;
	UPhysicsHandleComponent* GrabbedObject = nullptr;
	EGrabRule eGrabRule = EGrabRule::SNAP_GRAB;
	float DistanceFromController = 10.f;
	bool bManualAttach = false;

};
