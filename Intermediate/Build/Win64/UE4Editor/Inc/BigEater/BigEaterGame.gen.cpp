// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigEater/BigEaterGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBigEaterGame() {}
// Cross Module References
	BIGEATER_API UClass* Z_Construct_UClass_ABigEaterGame_NoRegister();
	BIGEATER_API UClass* Z_Construct_UClass_ABigEaterGame();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_BigEater();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void ABigEaterGame::StaticRegisterNativesABigEaterGame()
	{
	}
	UClass* Z_Construct_UClass_ABigEaterGame_NoRegister()
	{
		return ABigEaterGame::StaticClass();
	}
	struct Z_Construct_UClass_ABigEaterGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaFood_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LaFood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_X_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_X_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_X_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_X_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_Y_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_Y_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_Y_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_Y_Max;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABigEaterGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_BigEater,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABigEaterGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BigEaterGame.h" },
		{ "ModuleRelativePath", "BigEaterGame.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABigEaterGame_Statics::NewProp_LaFood_MetaData[] = {
		{ "Category", "BigEaterGame" },
		{ "ModuleRelativePath", "BigEaterGame.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABigEaterGame_Statics::NewProp_LaFood = { "LaFood", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABigEaterGame, LaFood), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABigEaterGame_Statics::NewProp_LaFood_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABigEaterGame_Statics::NewProp_LaFood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_X_Min_MetaData[] = {
		{ "Category", "BigEaterGame" },
		{ "ModuleRelativePath", "BigEaterGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_X_Min = { "Spawn_X_Min", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABigEaterGame, Spawn_X_Min), METADATA_PARAMS(Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_X_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_X_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_X_Max_MetaData[] = {
		{ "Category", "BigEaterGame" },
		{ "ModuleRelativePath", "BigEaterGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_X_Max = { "Spawn_X_Max", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABigEaterGame, Spawn_X_Max), METADATA_PARAMS(Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_X_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_X_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_Y_Min_MetaData[] = {
		{ "Category", "BigEaterGame" },
		{ "ModuleRelativePath", "BigEaterGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_Y_Min = { "Spawn_Y_Min", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABigEaterGame, Spawn_Y_Min), METADATA_PARAMS(Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_Y_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_Y_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_Y_Max_MetaData[] = {
		{ "Category", "BigEaterGame" },
		{ "ModuleRelativePath", "BigEaterGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_Y_Max = { "Spawn_Y_Max", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABigEaterGame, Spawn_Y_Max), METADATA_PARAMS(Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_Y_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_Y_Max_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABigEaterGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABigEaterGame_Statics::NewProp_LaFood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_X_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_X_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_Y_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABigEaterGame_Statics::NewProp_Spawn_Y_Max,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABigEaterGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABigEaterGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABigEaterGame_Statics::ClassParams = {
		&ABigEaterGame::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABigEaterGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABigEaterGame_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABigEaterGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABigEaterGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABigEaterGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABigEaterGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABigEaterGame, 976434572);
	template<> BIGEATER_API UClass* StaticClass<ABigEaterGame>()
	{
		return ABigEaterGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABigEaterGame(Z_Construct_UClass_ABigEaterGame, &ABigEaterGame::StaticClass, TEXT("/Script/BigEater"), TEXT("ABigEaterGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABigEaterGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
