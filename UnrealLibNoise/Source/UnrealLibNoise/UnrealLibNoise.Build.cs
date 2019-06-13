// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;
using System.IO;
//using UnrealBuildTool;
namespace UnrealBuildTool.Rules
{
    public class UnrealLibNoise : ModuleRules
    {
        public UnrealLibNoise(ReadOnlyTargetRules Target) : base(Target)
        {
            PrivatePCHHeaderFile = "Private/UnrealLibNoisePrivatePCH.h";

            PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
            PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));



            PublicDependencyModuleNames.AddRange(new string[] { "Core" });

            PrivateDependencyModuleNames.AddRange(new string[] { "CoreUObject", "Engine", "Slate", "SlateCore" });


        }
    }
}