// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEP/UEPGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEPGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UEP_API UClass* Z_Construct_UClass_AUEPGameMode();
UEP_API UClass* Z_Construct_UClass_AUEPGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEP();
// End Cross Module References

// Begin Class AUEPGameMode
void AUEPGameMode::StaticRegisterNativesAUEPGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUEPGameMode);
UClass* Z_Construct_UClass_AUEPGameMode_NoRegister()
{
	return AUEPGameMode::StaticClass();
}
struct Z_Construct_UClass_AUEPGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UEPGameMode.h" },
		{ "ModuleRelativePath", "UEPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUEPGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUEPGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUEPGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUEPGameMode_Statics::ClassParams = {
	&AUEPGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUEPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUEPGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUEPGameMode()
{
	if (!Z_Registration_Info_UClass_AUEPGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUEPGameMode.OuterSingleton, Z_Construct_UClass_AUEPGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUEPGameMode.OuterSingleton;
}
template<> UEP_API UClass* StaticClass<AUEPGameMode>()
{
	return AUEPGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUEPGameMode);
AUEPGameMode::~AUEPGameMode() {}
// End Class AUEPGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEP_Source_UEP_UEPGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUEPGameMode, AUEPGameMode::StaticClass, TEXT("AUEPGameMode"), &Z_Registration_Info_UClass_AUEPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUEPGameMode), 568389058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEP_Source_UEP_UEPGameMode_h_718293905(TEXT("/Script/UEP"),
	Z_CompiledInDeferFile_FID_UEP_Source_UEP_UEPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEP_Source_UEP_UEPGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
