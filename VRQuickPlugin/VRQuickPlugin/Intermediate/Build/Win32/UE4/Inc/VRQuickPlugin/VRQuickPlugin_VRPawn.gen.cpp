// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRQuickPlugin_VRPawn.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRQuickPlugin_VRPawn() {}
// Cross Module References
	VRQUICKPLUGIN_API UClass* Z_Construct_UClass_AVRQuickPlugin_VRPawn_NoRegister();
	VRQUICKPLUGIN_API UClass* Z_Construct_UClass_AVRQuickPlugin_VRPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_VRQuickPlugin();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AVRQuickPlugin_VRPawn::StaticRegisterNativesAVRQuickPlugin_VRPawn()
	{
	}
	UClass* Z_Construct_UClass_AVRQuickPlugin_VRPawn_NoRegister()
	{
		return AVRQuickPlugin_VRPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRQuickPlugin_VRPawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_VRQuickPlugin();
			OuterClass = AVRQuickPlugin_VRPawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_MotionController_R = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MotionController_R"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MotionController_R, AVRQuickPlugin_VRPawn), 0x00100000000a001d, Z_Construct_UClass_UMotionControllerComponent_NoRegister());
				UProperty* NewProp_MotionController_L = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MotionController_L"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MotionController_L, AVRQuickPlugin_VRPawn), 0x00100000000a001d, Z_Construct_UClass_UMotionControllerComponent_NoRegister());
				UProperty* NewProp_Camera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Camera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Camera, AVRQuickPlugin_VRPawn), 0x00100000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_Scene = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Scene"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Scene, AVRQuickPlugin_VRPawn), 0x00100000000a001d, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_RootMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RootMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RootMesh, AVRQuickPlugin_VRPawn), 0x00100000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AVRQuickPlugin_VRPawn> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRQuickPlugin_VRPawn.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_VRPawn.h"));
				MetaData->SetValue(NewProp_MotionController_R, TEXT("Category"), TEXT("VRPawn"));
				MetaData->SetValue(NewProp_MotionController_R, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MotionController_R, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_VRPawn.h"));
				MetaData->SetValue(NewProp_MotionController_L, TEXT("Category"), TEXT("VRPawn"));
				MetaData->SetValue(NewProp_MotionController_L, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MotionController_L, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_VRPawn.h"));
				MetaData->SetValue(NewProp_Camera, TEXT("Category"), TEXT("VRPawn"));
				MetaData->SetValue(NewProp_Camera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_VRPawn.h"));
				MetaData->SetValue(NewProp_Scene, TEXT("Category"), TEXT("VRPawn"));
				MetaData->SetValue(NewProp_Scene, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Scene, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_VRPawn.h"));
				MetaData->SetValue(NewProp_RootMesh, TEXT("Category"), TEXT("VRPawn"));
				MetaData->SetValue(NewProp_RootMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_RootMesh, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_VRPawn.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRQuickPlugin_VRPawn, 1170863336);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRQuickPlugin_VRPawn(Z_Construct_UClass_AVRQuickPlugin_VRPawn, &AVRQuickPlugin_VRPawn::StaticClass, TEXT("/Script/VRQuickPlugin"), TEXT("AVRQuickPlugin_VRPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRQuickPlugin_VRPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
