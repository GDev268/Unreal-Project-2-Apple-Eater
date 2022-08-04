// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BIGEATER_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define BIGEATER_MainCharacter_generated_h

#define BigEater_Source_BigEater_MainCharacter_h_20_SPARSE_DATA
#define BigEater_Source_BigEater_MainCharacter_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define BigEater_Source_BigEater_MainCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define BigEater_Source_BigEater_MainCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BigEater"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define BigEater_Source_BigEater_MainCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BigEater"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define BigEater_Source_BigEater_MainCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public:


#define BigEater_Source_BigEater_MainCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter)


#define BigEater_Source_BigEater_MainCharacter_h_20_PRIVATE_PROPERTY_OFFSET
#define BigEater_Source_BigEater_MainCharacter_h_17_PROLOG
#define BigEater_Source_BigEater_MainCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BigEater_Source_BigEater_MainCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	BigEater_Source_BigEater_MainCharacter_h_20_SPARSE_DATA \
	BigEater_Source_BigEater_MainCharacter_h_20_RPC_WRAPPERS \
	BigEater_Source_BigEater_MainCharacter_h_20_INCLASS \
	BigEater_Source_BigEater_MainCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BigEater_Source_BigEater_MainCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BigEater_Source_BigEater_MainCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	BigEater_Source_BigEater_MainCharacter_h_20_SPARSE_DATA \
	BigEater_Source_BigEater_MainCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	BigEater_Source_BigEater_MainCharacter_h_20_INCLASS_NO_PURE_DECLS \
	BigEater_Source_BigEater_MainCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIGEATER_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BigEater_Source_BigEater_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
