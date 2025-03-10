// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UEPGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEP_UEPGameMode_generated_h
#error "UEPGameMode.generated.h already included, missing '#pragma once' in UEPGameMode.h"
#endif
#define UEP_UEPGameMode_generated_h

#define FID_UEP_Source_UEP_UEPGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUEPGameMode(); \
	friend struct Z_Construct_UClass_AUEPGameMode_Statics; \
public: \
	DECLARE_CLASS(AUEPGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEP"), UEP_API) \
	DECLARE_SERIALIZER(AUEPGameMode)


#define FID_UEP_Source_UEP_UEPGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUEPGameMode(AUEPGameMode&&); \
	AUEPGameMode(const AUEPGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UEP_API, AUEPGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUEPGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUEPGameMode) \
	UEP_API virtual ~AUEPGameMode();


#define FID_UEP_Source_UEP_UEPGameMode_h_9_PROLOG
#define FID_UEP_Source_UEP_UEPGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Source_UEP_UEPGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_UEP_Source_UEP_UEPGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEP_API UClass* StaticClass<class AUEPGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Source_UEP_UEPGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
