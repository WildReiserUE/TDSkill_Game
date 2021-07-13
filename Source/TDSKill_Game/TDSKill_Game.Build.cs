// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TDSKill_Game : ModuleRules
{
	public TDSKill_Game(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
