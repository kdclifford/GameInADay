// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInADay_Test/GameInADay_TestGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInADay_TestGameModeBase() {}
// Cross Module References
	GAMEINADAY_TEST_API UClass* Z_Construct_UClass_AGameInADay_TestGameModeBase_NoRegister();
	GAMEINADAY_TEST_API UClass* Z_Construct_UClass_AGameInADay_TestGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GameInADay_Test();
// End Cross Module References
	void AGameInADay_TestGameModeBase::StaticRegisterNativesAGameInADay_TestGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGameInADay_TestGameModeBase_NoRegister()
	{
		return AGameInADay_TestGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGameInADay_TestGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameInADay_TestGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInADay_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameInADay_TestGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameInADay_TestGameModeBase.h" },
		{ "ModuleRelativePath", "GameInADay_TestGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameInADay_TestGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameInADay_TestGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameInADay_TestGameModeBase_Statics::ClassParams = {
		&AGameInADay_TestGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameInADay_TestGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameInADay_TestGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameInADay_TestGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameInADay_TestGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameInADay_TestGameModeBase, 2570393587);
	template<> GAMEINADAY_TEST_API UClass* StaticClass<AGameInADay_TestGameModeBase>()
	{
		return AGameInADay_TestGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameInADay_TestGameModeBase(Z_Construct_UClass_AGameInADay_TestGameModeBase, &AGameInADay_TestGameModeBase::StaticClass, TEXT("/Script/GameInADay_Test"), TEXT("AGameInADay_TestGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameInADay_TestGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
