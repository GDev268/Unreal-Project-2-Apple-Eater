// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BIGEATER_BigEaterGame_generated_h
#error "BigEaterGame.generated.h already included, missing '#pragma once' in BigEaterGame.h"
#endif
#define BIGEATER_BigEaterGame_generated_h

#define BigEater_Source_BigEater_BigEaterGame_h_15_SPARSE_DATA
#define BigEater_Source_BigEater_BigEaterGame_h_15_RPC_WRAPPERS
#define BigEater_Source_BigEater_BigEaterGame_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BigEater_Source_BigEater_BigEaterGame_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABigEaterGame(); \
	friend struct Z_Construct_UClass_ABigEaterGame_Statics; \
public: \
	DECLARE_CLASS(ABigEaterGame, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BigEater"), NO_API) \
	DECLARE_SERIALIZER(ABigEaterGame)


#define BigEater_Source_BigEater_BigEaterGame_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABigEaterGame(); \
	friend struct Z_Construct_UClass_ABigEaterGame_Statics; \
public: \
	DECLARE_CLASS(ABigEaterGame, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BigEater"), NO_API) \
	DECLARE_SERIALIZER(ABigEaterGame)


#define BigEater_Source_BigEater_BigEaterGame_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABigEaterGame(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABigEaterGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABigEaterGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABigEaterGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABigEaterGame(ABigEaterGame&&); \
	NO_API ABigEaterGame(const ABigEaterGame&); \
public:


#define BigEater_Source_BigEater_BigEaterGame_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABigEaterGame(ABigEaterGame&&); \
	NO_API ABigEaterGame(const ABigEaterGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABigEaterGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABigEaterGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABigEaterGame)


#define BigEater_Source_BigEater_BigEaterGame_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LaFood() { return STRUCT_OFFSET(ABigEaterGame, LaFood); } \
	FORCEINLINE static uint32 __PPO__Spawn_X_Min() { return STRUCT_OFFSET(ABigEaterGame, Spawn_X_Min); } \
	FORCEINLINE static uint32 __PPO__Spawn_X_Max() { return STRUCT_OFFSET(ABigEaterGame, Spawn_X_Max); } \
	FORCEINLINE static uint32 __PPO__Spawn_Y_Min() { return STRUCT_OFFSET(ABigEaterGame, Spawn_Y_Min); } \
	FORCEINLINE static uint32 __PPO__Spawn_Y_Max() { return STRUCT_OFFSET(ABigEaterGame, Spawn_Y_Max); }


#define BigEater_Source_BigEater_BigEaterGame_h_12_PROLOG
#define BigEater_Source_BigEater_BigEaterGame_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BigEater_Source_BigEater_BigEaterGame_h_15_PRIVATE_PROPERTY_OFFSET \
	BigEater_Source_BigEater_BigEaterGame_h_15_SPARSE_DATA \
	BigEater_Source_BigEater_BigEaterGame_h_15_RPC_WRAPPERS \
	BigEater_Source_BigEater_BigEaterGame_h_15_INCLASS \
	BigEater_Source_BigEater_BigEaterGame_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BigEater_Source_BigEater_BigEaterGame_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BigEater_Source_BigEater_BigEaterGame_h_15_PRIVATE_PROPERTY_OFFSET \
	BigEater_Source_BigEater_BigEaterGame_h_15_SPARSE_DATA \
	BigEater_Source_BigEater_BigEaterGame_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BigEater_Source_BigEater_BigEaterGame_h_15_INCLASS_NO_PURE_DECLS \
	BigEater_Source_BigEater_BigEaterGame_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIGEATER_API UClass* StaticClass<class ABigEaterGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BigEater_Source_BigEater_BigEaterGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
