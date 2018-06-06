// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VRQuickPlugin_Movement.generated.h"


UCLASS( ClassGroup=(VRQuick), meta=(BlueprintSpawnableComponent) )
class VRQUICKPLUGIN_API UVRQuickPlugin_Movement : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UVRQuickPlugin_Movement();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Movement Speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VR Movement")
	float CurrentMovementSpeed = 3.f;

	// Object that Movement Reference is facing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VR Movement")
	FRotator TargetRotation = FRotator::ZeroRotator;

	// Movement Reference
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VR Movement")
	USceneComponent* CurrentMovementDirectionReference = nullptr;

	// Check Pawn is Moving
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VR Movement")
	bool IsMoving = false;

	// Movement Input Function
	UFUNCTION(BlueprintCallable, Category = "VR Movement")
	void ActivateVRMovement(
		float MovementSpeed = 3.f,
		USceneComponent* MovementDirectionReference = nullptr,
		bool LockPitchY = false,
		bool LockYawZ = false,
		bool LockRollX = false
	);

	UFUNCTION(BlueprintCallable, Category = "VR Movement")
	void DisableVRMovement();

private:
	AActor * VRPawn = nullptr;

	bool bLockPitchY = false;
	bool bLockYawZ = false;
	bool bLockRollX = false;

	// Move VR Pawn
	void MoveVRPawn(
		float MovementSpeed,
		USceneComponent* MovementDirectionReference,
		bool LockXAxis,
		bool LockYAxis,
		bool LockZAxis
	);
};
