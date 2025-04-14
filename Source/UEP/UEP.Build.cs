// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UEP : ModuleRules
{
	public UEP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(new string[] { "UEP" });

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "UMG", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
