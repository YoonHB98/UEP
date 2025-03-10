// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UEPCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEP_UEPCharacter_generated_h
#error "UEPCharacter.generated.h already included, missing '#pragma once' in UEPCharacter.h"
#endif
#define UEP_UEPCharacter_generated_h

#define FID_UEP_Source_UEP_UEPCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUEPCharacter(); \
	friend struct Z_Construct_UClass_AUEPCharacter_Statics; \
public: \
	DECLARE_CLASS(AUEPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEP"), NO_API) \
	DECLARE_SERIALIZER(AUEPCharacter)


#define FID_UEP_Source_UEP_UEPCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUEPCharacter(AUEPCharacter&&); \
	AUEPCharacter(const AUEPCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUEPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUEPCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUEPCharacter) \
	NO_API virtual ~AUEPCharacter();


#define FID_UEP_Source_UEP_UEPCharacter_h_9_PROLOG
#define FID_UEP_Source_UEP_UEPCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Source_UEP_UEPCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_UEP_Source_UEP_UEPCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEP_API UClass* StaticClass<class AUEPCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Source_UEP_UEPCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
