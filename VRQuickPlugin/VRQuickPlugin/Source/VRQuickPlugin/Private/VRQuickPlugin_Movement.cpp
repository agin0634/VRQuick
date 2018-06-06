// Fill out your copyright notice in the Description page of Project Settings.

#include "VRQuickPlugin_Movement.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UVRQuickPlugin_Movement::UVRQuickPlugin_Movement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UVRQuickPlugin_Movement::BeginPlay()
{
	Super::BeginPlay();

	// Get Reference to the Pawn
	VRPawn = GetOwner();
}

// Called every frame
void UVRQuickPlugin_Movement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//
	if (VRPawn && IsMoving) {
		// Check Movement Reference Actor
		if (CurrentMovementDirectionReference) {
			// Set Rotation
			TargetRotation = FRotator(CurrentMovementDirectionReference->GetComponentTransform().GetRotation());
			//TODO Offset		
		}
		else {
			// TODO offset
		}

		// Set Axis Lock
		if (bLockPitchY) {
			TargetRotation = FRotator(0.f, TargetRotation.Yaw, TargetRotation.Roll);
		}
		if (bLockYawZ) {
			TargetRotation = FRotator(TargetRotation.Pitch, 0.f, TargetRotation.Roll);
		}
		if (bLockRollX) {
			TargetRotation = FRotator(TargetRotation.Pitch, TargetRotation.Yaw, 0.f);
		}

		// Set TargetLocation
		FVector TargetLocation = VRPawn->GetActorLocation() + (TargetRotation.Vector() * CurrentMovementSpeed);

		// Move Pawn to Target Location
		VRPawn->TeleportTo(TargetLocation, VRPawn->GetActorRotation());
	}
}

/*Movement Input Function*/
// Activate VR Movement
void UVRQuickPlugin_Movement::ActivateVRMovement(float MovementSpeed, USceneComponent* MovementDirectionReference, bool LockPitchY, bool LockYawZ, bool LockRollX) {
	if (VRPawn) {
		MoveVRPawn(MovementSpeed, MovementDirectionReference, LockPitchY, LockYawZ, LockRollX);
	}
}

// Disable VR Movement
void UVRQuickPlugin_Movement::DisableVRMovement() {
	IsMoving = false;
}

/*Move VRPawn Master Function*/
void UVRQuickPlugin_Movement::MoveVRPawn(float MovementSpeed, USceneComponent* MovementDirectionReference, bool LockXAxis, bool LockYAxis, bool LockZAxis) {
	// Check Movement Reference Actor
	if (MovementDirectionReference) {
		CurrentMovementDirectionReference = MovementDirectionReference;

		// Set Axis Lock
		this->bLockPitchY = LockYAxis;
		this->bLockYawZ = LockZAxis;
		this->bLockRollX = LockXAxis;
	}
	else {
		CurrentMovementDirectionReference = nullptr;
	}

	// Set Movement Speed
	if (MovementSpeed > 0.0001f || MovementSpeed < 0.0001f) {
		CurrentMovementSpeed = MovementSpeed;
	}

	IsMoving = true;
}

