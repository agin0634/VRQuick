// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

/* Use this is Developing a plugin*/
#pragma once

#include "CoreMinimal.h"
#include "ModuleManager.h"

class FVRQuickPluginModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

/* Use this if Developing a game module*/

//#pragma once
//
//#include "ModuleManager.h"