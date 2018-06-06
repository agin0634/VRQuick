// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "VRQuickPlugin_Teleport.generated.h"

UENUM(BlueprintType)
enum class ETraceMode : uint8
{
	TraceMode_RayTrace  UMETA(DisplayName = "Ray Trace"),
	TraceMode_Parabola	UMETA(DisplayName = "Parabola")
};

UCLASS( ClassGroup=(VRQuick), meta=(BlueprintSpawnableComponent) )
class VRQUICKPLUGIN_API UVRQuickPlugin_Teleport : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UVRQuickPlugin_Teleport();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Teleport Input Function
	UFUNCTION(BlueprintCallable, Category = "Teleport")
	bool ActivateTeleporter(ETraceMode TraceMode, bool DrawDebugLine);
	UFUNCTION(BlueprintCallable, Category = "Teleport")
	bool DisableTeleporter();
	UFUNCTION(BlueprintCallable, Category = "Teleport")
	void ExecuteTeleportation();

	bool bIsTeleporterActive = false;

	// TeleportPin
	UPROPERTY(EditAnyWhere, Category = "Teleport Pin")
	class UStaticMesh* TeleportPinMesh = nullptr;
	UPROPERTY(EditAnyWhere, Category = "Teleport Pin")
	FVector TeleportPinScale = FVector(1.f, 1.f, 1.f);
	UPROPERTY(EditAnyWhere, Category = "Teleport Pin")
	float TeleportPin_Z = 0;

	UStaticMeshComponent* TeleportPinComponent = nullptr;
	void SpawnTeleportPin();
	void SetTeleportPinLocation(FVector PinLocation);

	// Trace
	bool bDrawDebugLine = false;
	bool TeleportDistination = false;
	FVector TeleportLocation = FVector(0.f, 0.f, 0.f);
	FVector TraceStartLocation();

	UPROPERTY(EditAnyWhere, Category = "Teleport Trace")
	int32 Steps = 20;
	UPROPERTY(EditAnyWhere, Category = "Teleport Trace")
	float TimeStep = 0.1;
	UPROPERTY(EditAnyWhere, Category = "Teleport Trace")
	float Speed = 1000;
	UPROPERTY(EditAnyWhere, Category = "Teleport Trace")
	class UStaticMesh* TraceMesh = nullptr;
	UPROPERTY(EditAnyWhere, Category = "Teleport Trace")
	float AnimationSpeed = 1;
	UPROPERTY(EditAnyWhere, Category = "Teleport Trace")
	FVector SegmentScale = FVector(8.f, 8.f, 0.8f);

	UInstancedStaticMeshComponent* TraceMeshComponent = nullptr;
	float AnimationProgress();
	void SpawnTraceMesh();
	void RenderTraceMesh(FVector StartLocation, FVector Forward, float Speed, int32 Steps, float TimeSteps);

	FVector DrawRayTrace(FVector Location, FVector Forward, float Speed);
	FVector DrawParabola(FVector Location, FVector Forward, int32 Steps, float TimeSteps, float Speed);

private:
	//Teleport Trace Mode
	int TeleportTraceMode = -1;
		
};
