// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BIGEATER_BigEaterCharacter_generated_h
#error "BigEaterCharacter.generated.h already included, missing '#pragma once' in BigEaterCharacter.h"
#endif
#define BIGEATER_BigEaterCharacter_generated_h

#define BigEater_Source_BigEater_BigEaterCharacter_h_19_SPARSE_DATA
#define BigEater_Source_BigEater_BigEaterCharacter_h_19_RPC_WRAPPERS
#define BigEater_Source_BigEater_BigEaterCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define BigEater_Source_BigEater_BigEaterCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABigEaterCharacter(); \
	friend struct Z_Construct_UClass_ABigEaterCharacter_Statics; \
public: \
	DECLARE_CLASS(ABigEaterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BigEater"), NO_API) \
	DECLARE_SERIALIZER(ABigEaterCharacter)


#define BigEater_Source_BigEater_BigEaterCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABigEaterCharacter(); \
	friend struct Z_Construct_UClass_ABigEaterCharacter_Statics; \
public: \
	DECLARE_CLASS(ABigEaterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BigEater"), NO_API) \
	DECLARE_SERIALIZER(ABigEaterCharacter)


#define BigEater_Source_BigEater_BigEaterCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABigEaterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABigEaterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABigEaterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABigEaterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABigEaterCharacter(ABigEaterCharacter&&); \
	NO_API ABigEaterCharacter(const ABigEaterCharacter&); \
public:


#define BigEater_Source_BigEater_BigEaterCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABigEaterCharacter(ABigEaterCharacter&&); \
	NO_API ABigEaterCharacter(const ABigEaterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABigEaterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABigEaterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABigEaterCharacter)


#define BigEater_Source_BigEater_BigEaterCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABigEaterCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABigEaterCharacter, FollowCamera); }


#define BigEater_Source_BigEater_BigEaterCharacter_h_16_PROLOG
#define BigEater_Source_BigEater_BigEaterCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BigEater_Source_BigEater_BigEaterCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	BigEater_Source_BigEater_BigEaterCharacter_h_19_SPARSE_DATA \
	BigEater_Source_BigEater_BigEaterCharacter_h_19_RPC_WRAPPERS \
	BigEater_Source_BigEater_BigEaterCharacter_h_19_INCLASS \
	BigEater_Source_BigEater_BigEaterCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BigEater_Source_BigEater_BigEaterCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BigEater_Source_BigEater_BigEaterCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	BigEater_Source_BigEater_BigEaterCharacter_h_19_SPARSE_DATA \
	BigEater_Source_BigEater_BigEaterCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	BigEater_Source_BigEater_BigEaterCharacter_h_19_INCLASS_NO_PURE_DECLS \
	BigEater_Source_BigEater_BigEaterCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIGEATER_API UClass* StaticClass<class ABigEaterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BigEater_Source_BigEater_BigEaterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
