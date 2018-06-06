// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

/* Use this is Developing a plugin*/
#include "VRQuickPlugin.h"
#include "VRQuickPluginPrivatePCH.h"

#define LOCTEXT_NAMESPACE "FVRQuickPluginModule"

void FVRQuickPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FVRQuickPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FVRQuickPluginModule, VRQuickPlugin)

/* Use this if Developing a game module*/

//#include "VRQuickPlugin.h"
//
//IMPLEMENT_PRIMARY_GAME_MODULE(FDefaultGameModuleImpl, VRQuickPlugin, "VRQuickPlugin");