// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInADay_Test/BasicCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicCharacter() {}
// Cross Module References
	GAMEINADAY_TEST_API UClass* Z_Construct_UClass_ABasicCharacter_NoRegister();
	GAMEINADAY_TEST_API UClass* Z_Construct_UClass_ABasicCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GameInADay_Test();
// End Cross Module References
	void ABasicCharacter::StaticRegisterNativesABasicCharacter()
	{
	}
	UClass* Z_Construct_UClass_ABasicCharacter_NoRegister()
	{
		return ABasicCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABasicCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Impulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraSenitvity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cameraSenitvity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInADay_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasicCharacter.h" },
		{ "ModuleRelativePath", "BasicCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Impulse_MetaData[] = {
		{ "Category", "BasicCharacter" },
		{ "ModuleRelativePath", "BasicCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicCharacter, Impulse), METADATA_PARAMS(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Impulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Impulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicCharacter_Statics::NewProp_cameraSenitvity_MetaData[] = {
		{ "Category", "BasicCharacter" },
		{ "ModuleRelativePath", "BasicCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicCharacter_Statics::NewProp_cameraSenitvity = { "cameraSenitvity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicCharacter, cameraSenitvity), METADATA_PARAMS(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_cameraSenitvity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_cameraSenitvity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Impulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicCharacter_Statics::NewProp_cameraSenitvity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicCharacter_Statics::ClassParams = {
		&ABasicCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABasicCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasicCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicCharacter, 3185774505);
	template<> GAMEINADAY_TEST_API UClass* StaticClass<ABasicCharacter>()
	{
		return ABasicCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicCharacter(Z_Construct_UClass_ABasicCharacter, &ABasicCharacter::StaticClass, TEXT("/Script/GameInADay_Test"), TEXT("ABasicCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
