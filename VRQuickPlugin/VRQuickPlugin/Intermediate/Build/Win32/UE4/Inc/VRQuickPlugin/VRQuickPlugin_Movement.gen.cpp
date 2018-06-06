// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRQuickPlugin_Movement.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRQuickPlugin_Movement() {}
// Cross Module References
	VRQUICKPLUGIN_API UFunction* Z_Construct_UFunction_UVRQuickPlugin_Movement_ActivateVRMovement();
	VRQUICKPLUGIN_API UClass* Z_Construct_UClass_UVRQuickPlugin_Movement();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VRQUICKPLUGIN_API UFunction* Z_Construct_UFunction_UVRQuickPlugin_Movement_DisableVRMovement();
	VRQUICKPLUGIN_API UClass* Z_Construct_UClass_UVRQuickPlugin_Movement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VRQuickPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UVRQuickPlugin_Movement::StaticRegisterNativesUVRQuickPlugin_Movement()
	{
		UClass* Class = UVRQuickPlugin_Movement::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ActivateVRMovement", (Native)&UVRQuickPlugin_Movement::execActivateVRMovement },
			{ "DisableVRMovement", (Native)&UVRQuickPlugin_Movement::execDisableVRMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UVRQuickPlugin_Movement_ActivateVRMovement()
	{
		struct VRQuickPlugin_Movement_eventActivateVRMovement_Parms
		{
			float MovementSpeed;
			USceneComponent* MovementDirectionReference;
			bool LockPitchY;
			bool LockYawZ;
			bool LockRollX;
		};
		UObject* Outer = Z_Construct_UClass_UVRQuickPlugin_Movement();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ActivateVRMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(VRQuickPlugin_Movement_eventActivateVRMovement_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(LockRollX, VRQuickPlugin_Movement_eventActivateVRMovement_Parms);
			UProperty* NewProp_LockRollX = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LockRollX"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(LockRollX, VRQuickPlugin_Movement_eventActivateVRMovement_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(LockRollX, VRQuickPlugin_Movement_eventActivateVRMovement_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(LockYawZ, VRQuickPlugin_Movement_eventActivateVRMovement_Parms);
			UProperty* NewProp_LockYawZ = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LockYawZ"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(LockYawZ, VRQuickPlugin_Movement_eventActivateVRMovement_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(LockYawZ, VRQuickPlugin_Movement_eventActivateVRMovement_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(LockPitchY, VRQuickPlugin_Movement_eventActivateVRMovement_Parms);
			UProperty* NewProp_LockPitchY = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LockPitchY"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(LockPitchY, VRQuickPlugin_Movement_eventActivateVRMovement_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(LockPitchY, VRQuickPlugin_Movement_eventActivateVRMovement_Parms), sizeof(bool), true);
			UProperty* NewProp_MovementDirectionReference = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MovementDirectionReference"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MovementDirectionReference, VRQuickPlugin_Movement_eventActivateVRMovement_Parms), 0x0010000000080080, Z_Construct_UClass_USceneComponent_NoRegister());
			UProperty* NewProp_MovementSpeed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MovementSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MovementSpeed, VRQuickPlugin_Movement_eventActivateVRMovement_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VR Movement"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_LockPitchY"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_LockRollX"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_LockYawZ"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_MovementSpeed"), TEXT("3.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Movement.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Movement Input Function"));
			MetaData->SetValue(NewProp_MovementDirectionReference, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRQuickPlugin_Movement_DisableVRMovement()
	{
		UObject* Outer = Z_Construct_UClass_UVRQuickPlugin_Movement();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DisableVRMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VR Movement"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Movement.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRQuickPlugin_Movement_NoRegister()
	{
		return UVRQuickPlugin_Movement::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRQuickPlugin_Movement()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_VRQuickPlugin();
			OuterClass = UVRQuickPlugin_Movement::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UVRQuickPlugin_Movement_ActivateVRMovement());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRQuickPlugin_Movement_DisableVRMovement());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsMoving, UVRQuickPlugin_Movement);
				UProperty* NewProp_IsMoving = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IsMoving"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsMoving, UVRQuickPlugin_Movement), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(IsMoving, UVRQuickPlugin_Movement), sizeof(bool), true);
				UProperty* NewProp_CurrentMovementDirectionReference = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentMovementDirectionReference"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CurrentMovementDirectionReference, UVRQuickPlugin_Movement), 0x001000000008000d, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_TargetRotation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TargetRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TargetRotation, UVRQuickPlugin_Movement), 0x0010000000000005, Z_Construct_UScriptStruct_FRotator());
				UProperty* NewProp_CurrentMovementSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentMovementSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentMovementSpeed, UVRQuickPlugin_Movement), 0x0010000000000005);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRQuickPlugin_Movement_ActivateVRMovement(), "ActivateVRMovement"); // 3021808514
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRQuickPlugin_Movement_DisableVRMovement(), "DisableVRMovement"); // 181933026
				static TCppClassTypeInfo<TCppClassTypeTraits<UVRQuickPlugin_Movement> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("VRQuick"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRQuickPlugin_Movement.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Movement.h"));
				MetaData->SetValue(NewProp_IsMoving, TEXT("Category"), TEXT("VR Movement"));
				MetaData->SetValue(NewProp_IsMoving, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Movement.h"));
				MetaData->SetValue(NewProp_IsMoving, TEXT("ToolTip"), TEXT("Check Pawn is Moving"));
				MetaData->SetValue(NewProp_CurrentMovementDirectionReference, TEXT("Category"), TEXT("VR Movement"));
				MetaData->SetValue(NewProp_CurrentMovementDirectionReference, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CurrentMovementDirectionReference, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Movement.h"));
				MetaData->SetValue(NewProp_CurrentMovementDirectionReference, TEXT("ToolTip"), TEXT("Movement Reference"));
				MetaData->SetValue(NewProp_TargetRotation, TEXT("Category"), TEXT("VR Movement"));
				MetaData->SetValue(NewProp_TargetRotation, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Movement.h"));
				MetaData->SetValue(NewProp_TargetRotation, TEXT("ToolTip"), TEXT("Object that Movement Reference is facing"));
				MetaData->SetValue(NewProp_CurrentMovementSpeed, TEXT("Category"), TEXT("VR Movement"));
				MetaData->SetValue(NewProp_CurrentMovementSpeed, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Movement.h"));
				MetaData->SetValue(NewProp_CurrentMovementSpeed, TEXT("ToolTip"), TEXT("Movement Speed"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRQuickPlugin_Movement, 2763605041);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRQuickPlugin_Movement(Z_Construct_UClass_UVRQuickPlugin_Movement, &UVRQuickPlugin_Movement::StaticClass, TEXT("/Script/VRQuickPlugin"), TEXT("UVRQuickPlugin_Movement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRQuickPlugin_Movement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
