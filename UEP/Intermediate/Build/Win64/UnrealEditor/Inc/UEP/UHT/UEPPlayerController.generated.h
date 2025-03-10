// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UEPPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEP_UEPPlayerController_generated_h
#error "UEPPlayerController.generated.h already included, missing '#pragma once' in UEPPlayerController.h"
#endif
#define UEP_UEPPlayerController_generated_h

#define FID_UEP_Source_UEP_UEPPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUEPPlayerController(); \
	friend struct Z_Construct_UClass_AUEPPlayerController_Statics; \
public: \
	DECLARE_CLASS(AUEPPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEP"), NO_API) \
	DECLARE_SERIALIZER(AUEPPlayerController)


#define FID_UEP_Source_UEP_UEPPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUEPPlayerController(AUEPPlayerController&&); \
	AUEPPlayerController(const AUEPPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUEPPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUEPPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUEPPlayerController) \
	NO_API virtual ~AUEPPlayerController();


#define FID_UEP_Source_UEP_UEPPlayerController_h_17_PROLOG
#define FID_UEP_Source_UEP_UEPPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Source_UEP_UEPPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_UEP_Source_UEP_UEPPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEP_API UClass* StaticClass<class AUEPPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Source_UEP_UEPPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
