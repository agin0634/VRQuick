// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRQuickPlugin_Grabber.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRQuickPlugin_Grabber() {}
// Cross Module References
	VRQUICKPLUGIN_API UEnum* Z_Construct_UEnum_VRQuickPlugin_EGrabRule();
	UPackage* Z_Construct_UPackage__Script_VRQuickPlugin();
	VRQUICKPLUGIN_API UFunction* Z_Construct_UFunction_UVRQuickPlugin_Grabber_Grab();
	VRQUICKPLUGIN_API UClass* Z_Construct_UClass_UVRQuickPlugin_Grabber();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VRQUICKPLUGIN_API UFunction* Z_Construct_UFunction_UVRQuickPlugin_Grabber_Release();
	VRQUICKPLUGIN_API UClass* Z_Construct_UClass_UVRQuickPlugin_Grabber_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
// End Cross Module References
static UEnum* EGrabRule_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRQuickPlugin_EGrabRule, Z_Construct_UPackage__Script_VRQuickPlugin(), TEXT("EGrabRule"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGrabRule(EGrabRule_StaticEnum, TEXT("/Script/VRQuickPlugin"), TEXT("EGrabRule"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRQuickPlugin_EGrabRule()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRQuickPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRQuickPlugin_EGrabRule_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGrabRule"), 0, Get_Z_Construct_UEnum_VRQuickPlugin_EGrabRule_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EGrabRule"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EGrabRule::SNAP_GRAB"), 0);
			EnumNames.Emplace(TEXT("EGrabRule::PRECISION_GRAB"), 1);
			EnumNames.Emplace(TEXT("EGrabRule::EGrabRule_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EGrabRule");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Grabber.h"));
			MetaData->SetValue(ReturnEnum, TEXT("PRECISION_GRAB.DisplayName"), TEXT("Precision Grab"));
			MetaData->SetValue(ReturnEnum, TEXT("SNAP_GRAB.DisplayName"), TEXT("Snap to Target Origin"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRQuickPlugin_EGrabRule_CRC() { return 1528100837U; }
	void UVRQuickPlugin_Grabber::StaticRegisterNativesUVRQuickPlugin_Grabber()
	{
		UClass* Class = UVRQuickPlugin_Grabber::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Grab", (Native)&UVRQuickPlugin_Grabber::execGrab },
			{ "Release", (Native)&UVRQuickPlugin_Grabber::execRelease },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UVRQuickPlugin_Grabber_Grab()
	{
		struct VRQuickPlugin_Grabber_eventGrab_Parms
		{
			float Reach;
			bool RadialTrace;
			bool ManuallyAttach;
			EGrabRule GrabRule;
			FName TagName;
			bool RetainTargetRotation;
			bool RetainTargetDistance;
			bool ShowDebug;
			AActor* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRQuickPlugin_Grabber();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Grab"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(VRQuickPlugin_Grabber_eventGrab_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, VRQuickPlugin_Grabber_eventGrab_Parms), 0x0010000000000580, Z_Construct_UClass_AActor_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ShowDebug, VRQuickPlugin_Grabber_eventGrab_Parms);
			UProperty* NewProp_ShowDebug = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ShowDebug"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ShowDebug, VRQuickPlugin_Grabber_eventGrab_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(ShowDebug, VRQuickPlugin_Grabber_eventGrab_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(RetainTargetDistance, VRQuickPlugin_Grabber_eventGrab_Parms);
			UProperty* NewProp_RetainTargetDistance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RetainTargetDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(RetainTargetDistance, VRQuickPlugin_Grabber_eventGrab_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(RetainTargetDistance, VRQuickPlugin_Grabber_eventGrab_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(RetainTargetRotation, VRQuickPlugin_Grabber_eventGrab_Parms);
			UProperty* NewProp_RetainTargetRotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RetainTargetRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(RetainTargetRotation, VRQuickPlugin_Grabber_eventGrab_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(RetainTargetRotation, VRQuickPlugin_Grabber_eventGrab_Parms), sizeof(bool), true);
			UProperty* NewProp_TagName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TagName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(TagName, VRQuickPlugin_Grabber_eventGrab_Parms), 0x0010000000000080);
			UProperty* NewProp_GrabRule = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GrabRule"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(GrabRule, VRQuickPlugin_Grabber_eventGrab_Parms), 0x0010000000000080, Z_Construct_UEnum_VRQuickPlugin_EGrabRule());
			UProperty* NewProp_GrabRule_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_GrabRule, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ManuallyAttach, VRQuickPlugin_Grabber_eventGrab_Parms);
			UProperty* NewProp_ManuallyAttach = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ManuallyAttach"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ManuallyAttach, VRQuickPlugin_Grabber_eventGrab_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(ManuallyAttach, VRQuickPlugin_Grabber_eventGrab_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(RadialTrace, VRQuickPlugin_Grabber_eventGrab_Parms);
			UProperty* NewProp_RadialTrace = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RadialTrace"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(RadialTrace, VRQuickPlugin_Grabber_eventGrab_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(RadialTrace, VRQuickPlugin_Grabber_eventGrab_Parms), sizeof(bool), true);
			UProperty* NewProp_Reach = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Reach"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Reach, VRQuickPlugin_Grabber_eventGrab_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VR Grabber"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_GrabRule"), TEXT("SNAP_GRAB"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_ManuallyAttach"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_RadialTrace"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Reach"), TEXT("5.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_RetainTargetDistance"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_RetainTargetRotation"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_ShowDebug"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Grabber.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Grab Input Function"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRQuickPlugin_Grabber_Release()
	{
		struct VRQuickPlugin_Grabber_eventRelease_Parms
		{
			AActor* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRQuickPlugin_Grabber();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Release"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(VRQuickPlugin_Grabber_eventRelease_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, VRQuickPlugin_Grabber_eventRelease_Parms), 0x0010000000000580, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VR Grabber"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Grabber.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRQuickPlugin_Grabber_NoRegister()
	{
		return UVRQuickPlugin_Grabber::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRQuickPlugin_Grabber()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_VRQuickPlugin();
			OuterClass = UVRQuickPlugin_Grabber::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UVRQuickPlugin_Grabber_Grab());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRQuickPlugin_Grabber_Release());

				UProperty* NewProp_Grabbable_ObjectTypes = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Grabbable_ObjectTypes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Grabbable_ObjectTypes, UVRQuickPlugin_Grabber), 0x0010000000000005);
				UProperty* NewProp_Grabbable_ObjectTypes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Grabbable_ObjectTypes, TEXT("Grabbable_ObjectTypes"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UEnum_Engine_EObjectTypeQuery());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRQuickPlugin_Grabber_Grab(), "Grab"); // 1446157083
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRQuickPlugin_Grabber_Release(), "Release"); // 1343124215
				static TCppClassTypeInfo<TCppClassTypeTraits<UVRQuickPlugin_Grabber> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("VRQuick"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRQuickPlugin_Grabber.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Grabber.h"));
				MetaData->SetValue(NewProp_Grabbable_ObjectTypes, TEXT("Category"), TEXT("Grabber"));
				MetaData->SetValue(NewProp_Grabbable_ObjectTypes, TEXT("ModuleRelativePath"), TEXT("Public/VRQuickPlugin_Grabber.h"));
				MetaData->SetValue(NewProp_Grabbable_ObjectTypes, TEXT("ToolTip"), TEXT("The Objects that can br grabbed, need a physics handle component if you want object to auto attach"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRQuickPlugin_Grabber, 408033882);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRQuickPlugin_Grabber(Z_Construct_UClass_UVRQuickPlugin_Grabber, &UVRQuickPlugin_Grabber::StaticClass, TEXT("/Script/VRQuickPlugin"), TEXT("UVRQuickPlugin_Grabber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRQuickPlugin_Grabber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
