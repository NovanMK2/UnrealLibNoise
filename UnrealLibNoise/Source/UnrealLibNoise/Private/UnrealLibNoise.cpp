// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "UnrealLibNoise.h"
#include "UnrealLibNoisePrivatePCH.h"

#define LOCTEXT_NAMESPACE "FUnrealLibNoiseModule"

DEFINE_LOG_CATEGORY(LogUnrealLibNoise);

void FUnrealLibNoiseModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
#if WITH_EDITOR
	UE_LOG(LogUnrealLibNoise, Display, TEXT("Unreal LibNoise Module has started"))
#endif // WITH_EDITOR
	
}

void FUnrealLibNoiseModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
#if WITH_EDITOR
	UE_LOG(LogUnrealLibNoise, Display, TEXT("Unreal LibNoise Module has stopped"))
#endif // WITH_EDITOR
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUnrealLibNoiseModule, UnrealLibNoise)