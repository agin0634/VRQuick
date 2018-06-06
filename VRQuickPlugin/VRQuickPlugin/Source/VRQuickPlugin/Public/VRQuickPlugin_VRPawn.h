// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Public/MotionControllerComponent.h"
#include "GameFramework/Pawn.h"
#include "VRQuickPlugin_VRPawn.generated.h"

UCLASS()
class VRQUICKPLUGIN_API AVRQuickPlugin_VRPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AVRQuickPlugin_VRPawn();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRPawn")
	UStaticMeshComponent* RootMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRPawn")
	USceneComponent* Scene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRPawn")
	UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRPawn")
	UMotionControllerComponent* MotionController_L;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRPawn")
	UMotionControllerComponent* MotionController_R;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
