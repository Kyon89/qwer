// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QWER_qwerCharacter_generated_h
#error "qwerCharacter.generated.h already included, missing '#pragma once' in qwerCharacter.h"
#endif
#define QWER_qwerCharacter_generated_h

#define qwer_Source_qwer_qwerCharacter_h_14_RPC_WRAPPERS
#define qwer_Source_qwer_qwerCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define qwer_Source_qwer_qwerCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAqwerCharacter(); \
	friend QWER_API class UClass* Z_Construct_UClass_AqwerCharacter(); \
public: \
	DECLARE_CLASS(AqwerCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/qwer"), NO_API) \
	DECLARE_SERIALIZER(AqwerCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define qwer_Source_qwer_qwerCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAqwerCharacter(); \
	friend QWER_API class UClass* Z_Construct_UClass_AqwerCharacter(); \
public: \
	DECLARE_CLASS(AqwerCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/qwer"), NO_API) \
	DECLARE_SERIALIZER(AqwerCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define qwer_Source_qwer_qwerCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AqwerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AqwerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AqwerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AqwerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AqwerCharacter(AqwerCharacter&&); \
	NO_API AqwerCharacter(const AqwerCharacter&); \
public:


#define qwer_Source_qwer_qwerCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AqwerCharacter(AqwerCharacter&&); \
	NO_API AqwerCharacter(const AqwerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AqwerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AqwerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AqwerCharacter)


#define qwer_Source_qwer_qwerCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AqwerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AqwerCharacter, FollowCamera); }


#define qwer_Source_qwer_qwerCharacter_h_11_PROLOG
#define qwer_Source_qwer_qwerCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	qwer_Source_qwer_qwerCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	qwer_Source_qwer_qwerCharacter_h_14_RPC_WRAPPERS \
	qwer_Source_qwer_qwerCharacter_h_14_INCLASS \
	qwer_Source_qwer_qwerCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define qwer_Source_qwer_qwerCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	qwer_Source_qwer_qwerCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	qwer_Source_qwer_qwerCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	qwer_Source_qwer_qwerCharacter_h_14_INCLASS_NO_PURE_DECLS \
	qwer_Source_qwer_qwerCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID qwer_Source_qwer_qwerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
