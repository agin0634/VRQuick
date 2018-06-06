// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EGrabRule : uint8;
#ifdef VRQUICKPLUGIN_VRQuickPlugin_Grabber_generated_h
#error "VRQuickPlugin_Grabber.generated.h already included, missing '#pragma once' in VRQuickPlugin_Grabber.h"
#endif
#define VRQUICKPLUGIN_VRQuickPlugin_Grabber_generated_h

#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRelease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->Release(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrab) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Reach); \
		P_GET_UBOOL(Z_Param_RadialTrace); \
		P_GET_UBOOL(Z_Param_ManuallyAttach); \
		P_GET_ENUM(EGrabRule,Z_Param_GrabRule); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TagName); \
		P_GET_UBOOL(Z_Param_RetainTargetRotation); \
		P_GET_UBOOL(Z_Param_RetainTargetDistance); \
		P_GET_UBOOL(Z_Param_ShowDebug); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->Grab(Z_Param_Reach,Z_Param_RadialTrace,Z_Param_ManuallyAttach,EGrabRule(Z_Param_GrabRule),Z_Param_TagName,Z_Param_RetainTargetRotation,Z_Param_RetainTargetDistance,Z_Param_ShowDebug); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRelease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->Release(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrab) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Reach); \
		P_GET_UBOOL(Z_Param_RadialTrace); \
		P_GET_UBOOL(Z_Param_ManuallyAttach); \
		P_GET_ENUM(EGrabRule,Z_Param_GrabRule); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TagName); \
		P_GET_UBOOL(Z_Param_RetainTargetRotation); \
		P_GET_UBOOL(Z_Param_RetainTargetDistance); \
		P_GET_UBOOL(Z_Param_ShowDebug); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->Grab(Z_Param_Reach,Z_Param_RadialTrace,Z_Param_ManuallyAttach,EGrabRule(Z_Param_GrabRule),Z_Param_TagName,Z_Param_RetainTargetRotation,Z_Param_RetainTargetDistance,Z_Param_ShowDebug); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRQuickPlugin_Grabber(); \
	friend VRQUICKPLUGIN_API class UClass* Z_Construct_UClass_UVRQuickPlugin_Grabber(); \
public: \
	DECLARE_CLASS(UVRQuickPlugin_Grabber, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRQuickPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRQuickPlugin_Grabber) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUVRQuickPlugin_Grabber(); \
	friend VRQUICKPLUGIN_API class UClass* Z_Construct_UClass_UVRQuickPlugin_Grabber(); \
public: \
	DECLARE_CLASS(UVRQuickPlugin_Grabber, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRQuickPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRQuickPlugin_Grabber) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRQuickPlugin_Grabber(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRQuickPlugin_Grabber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRQuickPlugin_Grabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRQuickPlugin_Grabber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRQuickPlugin_Grabber(UVRQuickPlugin_Grabber&&); \
	NO_API UVRQuickPlugin_Grabber(const UVRQuickPlugin_Grabber&); \
public:


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRQuickPlugin_Grabber(UVRQuickPlugin_Grabber&&); \
	NO_API UVRQuickPlugin_Grabber(const UVRQuickPlugin_Grabber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRQuickPlugin_Grabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRQuickPlugin_Grabber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVRQuickPlugin_Grabber)


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h_21_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h_18_PROLOG
#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h_21_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h_21_RPC_WRAPPERS \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h_21_INCLASS \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h_21_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h_21_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Grabber_h


#define FOREACH_ENUM_EGRABRULE(op) \
	op(EGrabRule::SNAP_GRAB) \
	op(EGrabRule::PRECISION_GRAB) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
