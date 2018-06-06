// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class VRQuickPlugin : ModuleRules
{
	public VRQuickPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
        // Override UnrealEngineBuildTool to speedup compilation times
        //MinFilesUsingPrecompiledHeaderOverride = 1;
        //bFasterWithoutUnity = true;

        //Include what you need convention activation
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        //bEnforceIWYU = true;

        //Engine Dependencies
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine" , "HeadMountedDisplay" });

        //The path for the header files
        PublicIncludePaths.AddRange(new string[] { "VRQuickPlugin/Public" });

        //The path for the source files
        PrivateIncludePaths.AddRange(new string[] { "VRQuickPlugin/Private" });

        DynamicallyLoadedModuleNames.AddRange(new string[] { "VRQuickPlugin" });



        /*PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				"VRQuickPlugin/Public"
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"VRQuickPlugin/Private",
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);*/
    }
}
