// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class First_Gun : ModuleRules
{
	public First_Gun(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
