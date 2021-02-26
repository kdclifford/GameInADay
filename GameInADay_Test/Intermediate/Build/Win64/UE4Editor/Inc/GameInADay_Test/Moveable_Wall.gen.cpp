// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInADay_Test/Moveable_Wall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveable_Wall() {}
// Cross Module References
	GAMEINADAY_TEST_API UClass* Z_Construct_UClass_AMoveable_Wall_NoRegister();
	GAMEINADAY_TEST_API UClass* Z_Construct_UClass_AMoveable_Wall();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GameInADay_Test();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMoveable_Wall::StaticRegisterNativesAMoveable_Wall()
	{
	}
	UClass* Z_Construct_UClass_AMoveable_Wall_NoRegister()
	{
		return AMoveable_Wall::StaticClass();
	}
	struct Z_Construct_UClass_AMoveable_Wall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeTwoMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CubeTwoMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeOneMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CubeOneMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoveable_Wall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInADay_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveable_Wall_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Moveable_Wall.h" },
		{ "ModuleRelativePath", "Moveable_Wall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveable_Wall_Statics::NewProp_CubeTwoMesh_MetaData[] = {
		{ "Category", "Moveable_Wall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Moveable_Wall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveable_Wall_Statics::NewProp_CubeTwoMesh = { "CubeTwoMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveable_Wall, CubeTwoMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveable_Wall_Statics::NewProp_CubeTwoMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveable_Wall_Statics::NewProp_CubeTwoMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveable_Wall_Statics::NewProp_CubeOneMesh_MetaData[] = {
		{ "Category", "Moveable_Wall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Moveable_Wall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveable_Wall_Statics::NewProp_CubeOneMesh = { "CubeOneMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveable_Wall, CubeOneMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveable_Wall_Statics::NewProp_CubeOneMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveable_Wall_Statics::NewProp_CubeOneMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoveable_Wall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveable_Wall_Statics::NewProp_CubeTwoMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveable_Wall_Statics::NewProp_CubeOneMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoveable_Wall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveable_Wall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMoveable_Wall_Statics::ClassParams = {
		&AMoveable_Wall::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMoveable_Wall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMoveable_Wall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMoveable_Wall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveable_Wall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoveable_Wall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMoveable_Wall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMoveable_Wall, 4193464062);
	template<> GAMEINADAY_TEST_API UClass* StaticClass<AMoveable_Wall>()
	{
		return AMoveable_Wall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMoveable_Wall(Z_Construct_UClass_AMoveable_Wall, &AMoveable_Wall::StaticClass, TEXT("/Script/GameInADay_Test"), TEXT("AMoveable_Wall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveable_Wall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
