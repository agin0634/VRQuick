// Fill out your copyright notice in the Description page of Project Settings.

#include "VRQuickPlugin_VRPawn.h"


// Sets default values
AVRQuickPlugin_VRPawn::AVRQuickPlugin_VRPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set Root Static Mesh
	RootMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootMesh"));
	RootComponent = RootMesh;

	// Set Scene Component
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	Scene->SetRelativeLocation(FVector(0.f, 0.f, -110.f));
	Scene->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	// Set Camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);

	// Set Motion Controller
	MotionController_L = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController_L"));
	MotionController_L->Hand = EControllerHand::Left;
	MotionController_L->SetRelativeLocation(FVector(0.f, 0.f, 110.f));
	MotionController_L->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);

	MotionController_R = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController_R"));
	MotionController_R->Hand = EControllerHand::Right;
	MotionController_R->SetRelativeLocation(FVector(0.f, 0.f, 110.f));
	MotionController_R->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void AVRQuickPlugin_VRPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVRQuickPlugin_VRPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVRQuickPlugin_VRPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

