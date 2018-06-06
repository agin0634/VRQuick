// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRQuickPlugin_Teleport.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRQuickPlugin_Teleport() {}
// Cross Module References
	VRQUICKPLUGIN_API UEnum* Z_Construct_UEnum_VRQuickPlugin_ETraceMode();
	UPackage* Z_Construct_UPackage__Script_VRQuickPlugin();
	VRQUICKPLUGIN_API UFunction* Z_Construct_UFunction_UVRQuickPlugin_Teleport_ActivateTeleporter();
	VRQUICKPLUGIN_API UClass* Z_Construct_UClass_UVRQuickPlugin_Teleport();
	VRQUICKPLUGIN_API UFunction* Z_Construct_UFunction_UVRQuickPlugin_Teleport_DisableTeleporter();
	VRQUICKPLUGIN_API UFunction* Z_Construct_UFunction_UVRQuickPlugin_Teleport_ExecuteTeleportation();
	VRQUICKPLUGIN_API UClass* Z_Construct_UClass_UVRQuickPlugin_Teleport_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
static UEnum* ETraceMode_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRQuickPlugin_ETraceMode, Z_Construct_UPackage__Script_VRQuickPlugin(), TEXT("ETraceMode"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETraceMode(ETraceMode_StaticEnum, TEXT("/Script/VRQuickPlugin"), TEXT("ETraceMode"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRQuickPlugin_ETraceMode()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRQuickPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRQuickPlugin_ETraceMode_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETraceMode"), 0, Get_Z_Construct_UEnum_VRQuickPlugin_ETraceMode_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ETraceMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ETraceMode::TraceMode_RayTrace"), 0);
			EnumNames.Emplace(TEXT("ETraceMode::TraceMode_Parabola"), 1);
			EnumNames.Emplace(TEXT("ETraceMode::TraceMode_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ETraceMode");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Teleport.h"));
			MetaData->SetValue(ReturnEnum, TEXT("TraceMode_Parabola.DisplayName"), TEXT("Parabola"));
			MetaData->SetValue(ReturnEnum, TEXT("TraceMode_RayTrace.DisplayName"), TEXT("Ray Trace"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRQuickPlugin_ETraceMode_CRC() { return 952995305U; }
	void UVRQuickPlugin_Teleport::StaticRegisterNativesUVRQuickPlugin_Teleport()
	{
		UClass* Class = UVRQuickPlugin_Teleport::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ActivateTeleporter", (Native)&UVRQuickPlugin_Teleport::execActivateTeleporter },
			{ "DisableTeleporter", (Native)&UVRQuickPlugin_Teleport::execDisableTeleporter },
			{ "ExecuteTeleportation", (Native)&UVRQuickPlugin_Teleport::execExecuteTeleportation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UVRQuickPlugin_Teleport_ActivateTeleporter()
	{
		struct VRQuickPlugin_Teleport_eventActivateTeleporter_Parms
		{
			ETraceMode TraceMode;
			bool DrawDebugLine;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRQuickPlugin_Teleport();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ActivateTeleporter"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(VRQuickPlugin_Teleport_eventActivateTeleporter_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, VRQuickPlugin_Teleport_eventActivateTeleporter_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, VRQuickPlugin_Teleport_eventActivateTeleporter_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, VRQuickPlugin_Teleport_eventActivateTeleporter_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(DrawDebugLine, VRQuickPlugin_Teleport_eventActivateTeleporter_Parms);
			UProperty* NewProp_DrawDebugLine = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DrawDebugLine"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(DrawDebugLine, VRQuickPlugin_Teleport_eventActivateTeleporter_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(DrawDebugLine, VRQuickPlugin_Teleport_eventActivateTeleporter_Parms), sizeof(bool), true);
			UProperty* NewProp_TraceMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TraceMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(TraceMode, VRQuickPlugin_Teleport_eventActivateTeleporter_Parms), 0x0010000000000080, Z_Construct_UEnum_VRQuickPlugin_ETraceMode());
			UProperty* NewProp_TraceMode_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_TraceMode, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Teleport"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Teleport.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Teleport Input Function"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRQuickPlugin_Teleport_DisableTeleporter()
	{
		struct VRQuickPlugin_Teleport_eventDisableTeleporter_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRQuickPlugin_Teleport();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DisableTeleporter"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(VRQuickPlugin_Teleport_eventDisableTeleporter_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, VRQuickPlugin_Teleport_eventDisableTeleporter_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, VRQuickPlugin_Teleport_eventDisableTeleporter_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, VRQuickPlugin_Teleport_eventDisableTeleporter_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Teleport"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Teleport.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRQuickPlugin_Teleport_ExecuteTeleportation()
	{
		UObject* Outer = Z_Construct_UClass_UVRQuickPlugin_Teleport();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ExecuteTeleportation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Teleport"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Teleport.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRQuickPlugin_Teleport_NoRegister()
	{
		return UVRQuickPlugin_Teleport::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRQuickPlugin_Teleport()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_VRQuickPlugin();
			OuterClass = UVRQuickPlugin_Teleport::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UVRQuickPlugin_Teleport_ActivateTeleporter());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRQuickPlugin_Teleport_DisableTeleporter());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRQuickPlugin_Teleport_ExecuteTeleportation());

				UProperty* NewProp_SegmentScale = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SegmentScale"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SegmentScale, UVRQuickPlugin_Teleport), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_AnimationSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnimationSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AnimationSpeed, UVRQuickPlugin_Teleport), 0x0010000000000001);
				UProperty* NewProp_TraceMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TraceMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TraceMesh, UVRQuickPlugin_Teleport), 0x0010000000000001, Z_Construct_UClass_UStaticMesh_NoRegister());
				UProperty* NewProp_Speed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Speed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Speed, UVRQuickPlugin_Teleport), 0x0010000000000001);
				UProperty* NewProp_TimeStep = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TimeStep"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStep, UVRQuickPlugin_Teleport), 0x0010000000000001);
				UProperty* NewProp_Steps = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Steps"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Steps, UVRQuickPlugin_Teleport), 0x0010000000000001);
				UProperty* NewProp_TeleportPin_Z = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TeleportPin_Z"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TeleportPin_Z, UVRQuickPlugin_Teleport), 0x0010000000000001);
				UProperty* NewProp_TeleportPinScale = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TeleportPinScale"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TeleportPinScale, UVRQuickPlugin_Teleport), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_TeleportPinMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TeleportPinMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TeleportPinMesh, UVRQuickPlugin_Teleport), 0x0010000000000001, Z_Construct_UClass_UStaticMesh_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRQuickPlugin_Teleport_ActivateTeleporter(), "ActivateTeleporter"); // 1944321041
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRQuickPlugin_Teleport_DisableTeleporter(), "DisableTeleporter"); // 1206400482
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRQuickPlugin_Teleport_ExecuteTeleportation(), "ExecuteTeleportation"); // 1896626565
				static TCppClassTypeInfo<TCppClassTypeTraits<UVRQuickPlugin_Teleport> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("VRQuick"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRQuickPlugin_Teleport.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Teleport.h"));
				MetaData->SetValue(NewProp_SegmentScale, TEXT("Category"), TEXT("Teleport Trace"));
				MetaData->SetValue(NewProp_SegmentScale, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Teleport.h"));
				MetaData->SetValue(NewProp_AnimationSpeed, TEXT("Category"), TEXT("Teleport Trace"));
				MetaData->SetValue(NewProp_AnimationSpeed, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Teleport.h"));
				MetaData->SetValue(NewProp_TraceMesh, TEXT("Category"), TEXT("Teleport Trace"));
				MetaData->SetValue(NewProp_TraceMesh, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Teleport.h"));
				MetaData->SetValue(NewProp_Speed, TEXT("Category"), TEXT("Teleport Trace"));
				MetaData->SetValue(NewProp_Speed, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Teleport.h"));
				MetaData->SetValue(NewProp_TimeStep, TEXT("Category"), TEXT("Teleport Trace"));
				MetaData->SetValue(NewProp_TimeStep, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Teleport.h"));
				MetaData->SetValue(NewProp_Steps, TEXT("Category"), TEXT("Teleport Trace"));
				MetaData->SetValue(NewProp_Steps, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Teleport.h"));
				MetaData->SetValue(NewProp_TeleportPin_Z, TEXT("Category"), TEXT("Teleport Pin"));
				MetaData->SetValue(NewProp_TeleportPin_Z, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Teleport.h"));
				MetaData->SetValue(NewProp_TeleportPinScale, TEXT("Category"), TEXT("Teleport Pin"));
				MetaData->SetValue(NewProp_TeleportPinScale, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Teleport.h"));
				MetaData->SetValue(NewProp_TeleportPinMesh, TEXT("Category"), TEXT("Teleport Pin"));
				MetaData->SetValue(NewProp_TeleportPinMesh, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Teleport.h"));
				MetaData->SetValue(NewProp_TeleportPinMesh, TEXT("ToolTip"), TEXT("TeleportPin"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRQuickPlugin_Teleport, 3932162804);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRQuickPlugin_Teleport(Z_Construct_UClass_UVRQuickPlugin_Teleport, &UVRQuickPlugin_Teleport::StaticClass, TEXT("/Script/VRQuickPlugin"), TEXT("UVRQuickPlugin_Teleport"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRQuickPlugin_Teleport);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
