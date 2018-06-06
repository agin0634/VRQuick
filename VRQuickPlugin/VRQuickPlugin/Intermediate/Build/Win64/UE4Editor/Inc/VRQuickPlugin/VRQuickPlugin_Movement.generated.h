// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef VRQUICKPLUGIN_VRQuickPlugin_Movement_generated_h
#error "VRQuickPlugin_Movement.generated.h already included, missing '#pragma once' in VRQuickPlugin_Movement.h"
#endif
#define VRQUICKPLUGIN_VRQuickPlugin_Movement_generated_h

#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableVRMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DisableVRMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateVRMovement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MovementSpeed); \
		P_GET_OBJECT(USceneComponent,Z_Param_MovementDirectionReference); \
		P_GET_UBOOL(Z_Param_LockPitchY); \
		P_GET_UBOOL(Z_Param_LockYawZ); \
		P_GET_UBOOL(Z_Param_LockRollX); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ActivateVRMovement(Z_Param_MovementSpeed,Z_Param_MovementDirectionReference,Z_Param_LockPitchY,Z_Param_LockYawZ,Z_Param_LockRollX); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableVRMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DisableVRMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateVRMovement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MovementSpeed); \
		P_GET_OBJECT(USceneComponent,Z_Param_MovementDirectionReference); \
		P_GET_UBOOL(Z_Param_LockPitchY); \
		P_GET_UBOOL(Z_Param_LockYawZ); \
		P_GET_UBOOL(Z_Param_LockRollX); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ActivateVRMovement(Z_Param_MovementSpeed,Z_Param_MovementDirectionReference,Z_Param_LockPitchY,Z_Param_LockYawZ,Z_Param_LockRollX); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRQuickPlugin_Movement(); \
	friend VRQUICKPLUGIN_API class UClass* Z_Construct_UClass_UVRQuickPlugin_Movement(); \
public: \
	DECLARE_CLASS(UVRQuickPlugin_Movement, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRQuickPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRQuickPlugin_Movement) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUVRQuickPlugin_Movement(); \
	friend VRQUICKPLUGIN_API class UClass* Z_Construct_UClass_UVRQuickPlugin_Movement(); \
public: \
	DECLARE_CLASS(UVRQuickPlugin_Movement, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRQuickPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRQuickPlugin_Movement) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRQuickPlugin_Movement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRQuickPlugin_Movement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRQuickPlugin_Movement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRQuickPlugin_Movement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRQuickPlugin_Movement(UVRQuickPlugin_Movement&&); \
	NO_API UVRQuickPlugin_Movement(const UVRQuickPlugin_Movement&); \
public:


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRQuickPlugin_Movement(UVRQuickPlugin_Movement&&); \
	NO_API UVRQuickPlugin_Movement(const UVRQuickPlugin_Movement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRQuickPlugin_Movement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRQuickPlugin_Movement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVRQuickPlugin_Movement)


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h_13_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h_10_PROLOG
#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h_13_RPC_WRAPPERS \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h_13_INCLASS \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h_13_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Movement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
