// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETraceMode : uint8;
#ifdef VRQUICKPLUGIN_VRQuickPlugin_Teleport_generated_h
#error "VRQuickPlugin_Teleport.generated.h already included, missing '#pragma once' in VRQuickPlugin_Teleport.h"
#endif
#define VRQUICKPLUGIN_VRQuickPlugin_Teleport_generated_h

#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExecuteTeleportation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ExecuteTeleportation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableTeleporter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DisableTeleporter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateTeleporter) \
	{ \
		P_GET_ENUM(ETraceMode,Z_Param_TraceMode); \
		P_GET_UBOOL(Z_Param_DrawDebugLine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ActivateTeleporter(ETraceMode(Z_Param_TraceMode),Z_Param_DrawDebugLine); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecuteTeleportation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ExecuteTeleportation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableTeleporter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DisableTeleporter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateTeleporter) \
	{ \
		P_GET_ENUM(ETraceMode,Z_Param_TraceMode); \
		P_GET_UBOOL(Z_Param_DrawDebugLine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ActivateTeleporter(ETraceMode(Z_Param_TraceMode),Z_Param_DrawDebugLine); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRQuickPlugin_Teleport(); \
	friend VRQUICKPLUGIN_API class UClass* Z_Construct_UClass_UVRQuickPlugin_Teleport(); \
public: \
	DECLARE_CLASS(UVRQuickPlugin_Teleport, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRQuickPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRQuickPlugin_Teleport) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUVRQuickPlugin_Teleport(); \
	friend VRQUICKPLUGIN_API class UClass* Z_Construct_UClass_UVRQuickPlugin_Teleport(); \
public: \
	DECLARE_CLASS(UVRQuickPlugin_Teleport, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRQuickPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRQuickPlugin_Teleport) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRQuickPlugin_Teleport(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRQuickPlugin_Teleport) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRQuickPlugin_Teleport); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRQuickPlugin_Teleport); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRQuickPlugin_Teleport(UVRQuickPlugin_Teleport&&); \
	NO_API UVRQuickPlugin_Teleport(const UVRQuickPlugin_Teleport&); \
public:


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRQuickPlugin_Teleport(UVRQuickPlugin_Teleport&&); \
	NO_API UVRQuickPlugin_Teleport(const UVRQuickPlugin_Teleport&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRQuickPlugin_Teleport); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRQuickPlugin_Teleport); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVRQuickPlugin_Teleport)


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h_20_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h_17_PROLOG
#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h_20_RPC_WRAPPERS \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h_20_INCLASS \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h_20_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRQuickPlugin_Source_VRQuickPlugin_Public_VRQuickPlugin_Teleport_h


#define FOREACH_ENUM_ETRACEMODE(op) \
	op(ETraceMode::TraceMode_RayTrace) \
	op(ETraceMode::TraceMode_Parabola) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
