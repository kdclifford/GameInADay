// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInADay_Test/MoveFloor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveFloor() {}
// Cross Module References
	GAMEINADAY_TEST_API UEnum* Z_Construct_UEnum_GameInADay_Test_EBlockType();
	UPackage* Z_Construct_UPackage__Script_GameInADay_Test();
	GAMEINADAY_TEST_API UClass* Z_Construct_UClass_AMoveFloor_NoRegister();
	GAMEINADAY_TEST_API UClass* Z_Construct_UClass_AMoveFloor();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	GAMEINADAY_TEST_API UClass* Z_Construct_UClass_AMoveable_Wall_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEINADAY_TEST_API UClass* Z_Construct_UClass_ABasicBlock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* EBlockType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameInADay_Test_EBlockType, Z_Construct_UPackage__Script_GameInADay_Test(), TEXT("EBlockType"));
		}
		return Singleton;
	}
	template<> GAMEINADAY_TEST_API UEnum* StaticEnum<EBlockType>()
	{
		return EBlockType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlockType(EBlockType_StaticEnum, TEXT("/Script/GameInADay_Test"), TEXT("EBlockType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameInADay_Test_EBlockType_Hash() { return 1494595568U; }
	UEnum* Z_Construct_UEnum_GameInADay_Test_EBlockType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameInADay_Test();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlockType"), 0, Get_Z_Construct_UEnum_GameInADay_Test_EBlockType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "O", (int64)O },
				{ "T", (int64)T },
				{ "L", (int64)L },
				{ "ReverseL", (int64)ReverseL },
				{ "I", (int64)I },
				{ "S", (int64)S },
				{ "Z", (int64)Z },
				{ "AmountOfBlocks", (int64)AmountOfBlocks },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AmountOfBlocks.Name", "AmountOfBlocks" },
				{ "I.Name", "I" },
				{ "L.Name", "L" },
				{ "ModuleRelativePath", "MoveFloor.h" },
				{ "O.Name", "O" },
				{ "ReverseL.Name", "ReverseL" },
				{ "S.Name", "S" },
				{ "T.Name", "T" },
				{ "Z.Name", "Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameInADay_Test,
				nullptr,
				"EBlockType",
				"EBlockType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AMoveFloor::StaticRegisterNativesAMoveFloor()
	{
	}
	UClass* Z_Construct_UClass_AMoveFloor_NoRegister()
	{
		return AMoveFloor::StaticClass();
	}
	struct Z_Construct_UClass_AMoveFloor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tempWall_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tempWall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Round_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Round;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloorPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_IBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LReverseBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LReverseBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ZBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wall_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_wall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloorMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoveFloor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInADay_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveFloor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MoveFloor.h" },
		{ "ModuleRelativePath", "MoveFloor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveFloor_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "MoveFloor" },
		{ "ModuleRelativePath", "MoveFloor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveFloor_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveFloor, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AMoveFloor_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveFloor_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveFloor_Statics::NewProp_tempWall_MetaData[] = {
		{ "Comment", "/*\x09UPROPERTY()\n\x09\x09\x09""float FloorSpeed = 1;*/" },
		{ "ModuleRelativePath", "MoveFloor.h" },
		{ "ToolTip", "UPROPERTY()\n               float FloorSpeed = 1;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveFloor_Statics::NewProp_tempWall = { "tempWall", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveFloor, tempWall), Z_Construct_UClass_AMoveable_Wall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveFloor_Statics::NewProp_tempWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveFloor_Statics::NewProp_tempWall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveFloor_Statics::NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "MoveFloor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveFloor_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveFloor, StartTime), METADATA_PARAMS(Z_Construct_UClass_AMoveFloor_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveFloor_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveFloor_Statics::NewProp_Timer_MetaData[] = {
		{ "ModuleRelativePath", "MoveFloor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveFloor_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveFloor, Timer), METADATA_PARAMS(Z_Construct_UClass_AMoveFloor_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveFloor_Statics::NewProp_Timer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveFloor_Statics::NewProp_Round_MetaData[] = {
		{ "Category", "MoveFloor" },
		{ "ModuleRelativePath", "MoveFloor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveFloor_Statics::NewProp_Round = { "Round", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveFloor, Round), METADATA_PARAMS(Z_Construct_UClass_AMoveFloor_Statics::NewProp_Round_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveFloor_Statics::NewProp_Round_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveFloor_Statics::NewProp_FloorPos_MetaData[] = {
		{ "Category", "MoveFloor" },
		{ "ModuleRelativePath", "MoveFloor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoveFloor_Statics::NewProp_FloorPos = { "FloorPos", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveFloor, FloorPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMoveFloor_Statics::NewProp_FloorPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveFloor_Statics::NewProp_FloorPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveFloor_Statics::NewProp_IBlock_MetaData[] = {
		{ "Category", "MoveFloor" },
		{ "ModuleRelativePath", "MoveFloor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoveFloor_Statics::NewProp_IBlock = { "IBlock", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveFloor, IBlock), Z_Construct_UClass_ABasicBlock_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMoveFloor_Statics::NewProp_IBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveFloor_Statics::NewProp_IBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveFloor_Statics::NewProp_LReverseBlock_MetaData[] = {
		{ "Category", "MoveFloor" },
		{ "ModuleRelativePath", "MoveFloor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoveFloor_Statics::NewProp_LReverseBlock = { "LReverseBlock", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveFloor, LReverseBlock), Z_Construct_UClass_ABasicBlock_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMoveFloor_Statics::NewProp_LReverseBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveFloor_Statics::NewProp_LReverseBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveFloor_Statics::NewProp_ZBlock_MetaData[] = {
		{ "Category", "MoveFloor" },
		{ "ModuleRelativePath", "MoveFloor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoveFloor_Statics::NewProp_ZBlock = { "ZBlock", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveFloor, ZBlock), Z_Construct_UClass_ABasicBlock_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMoveFloor_Statics::NewProp_ZBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveFloor_Statics::NewProp_ZBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveFloor_Statics::NewProp_SBlock_MetaData[] = {
		{ "Category", "MoveFloor" },
		{ "ModuleRelativePath", "MoveFloor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoveFloor_Statics::NewProp_SBlock = { "SBlock", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveFloor, SBlock), Z_Construct_UClass_ABasicBlock_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMoveFloor_Statics::NewProp_SBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveFloor_Statics::NewProp_SBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveFloor_Statics::NewProp_LBlock_MetaData[] = {
		{ "Category", "MoveFloor" },
		{ "ModuleRelativePath", "MoveFloor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoveFloor_Statics::NewProp_LBlock = { "LBlock", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveFloor, LBlock), Z_Construct_UClass_ABasicBlock_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMoveFloor_Statics::NewProp_LBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveFloor_Statics::NewProp_LBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveFloor_Statics::NewProp_TBlock_MetaData[] = {
		{ "Category", "MoveFloor" },
		{ "ModuleRelativePath", "MoveFloor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoveFloor_Statics::NewProp_TBlock = { "TBlock", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveFloor, TBlock), Z_Construct_UClass_ABasicBlock_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMoveFloor_Statics::NewProp_TBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveFloor_Statics::NewProp_TBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveFloor_Statics::NewProp_OBlock_MetaData[] = {
		{ "Category", "MoveFloor" },
		{ "ModuleRelativePath", "MoveFloor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoveFloor_Statics::NewProp_OBlock = { "OBlock", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveFloor, OBlock), Z_Construct_UClass_ABasicBlock_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMoveFloor_Statics::NewProp_OBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveFloor_Statics::NewProp_OBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveFloor_Statics::NewProp_wall_MetaData[] = {
		{ "Category", "MoveFloor" },
		{ "ModuleRelativePath", "MoveFloor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoveFloor_Statics::NewProp_wall = { "wall", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveFloor, wall), Z_Construct_UClass_AMoveable_Wall_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMoveFloor_Statics::NewProp_wall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveFloor_Statics::NewProp_wall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveFloor_Statics::NewProp_FloorMesh_MetaData[] = {
		{ "Category", "MoveFloor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MoveFloor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveFloor_Statics::NewProp_FloorMesh = { "FloorMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveFloor, FloorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveFloor_Statics::NewProp_FloorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveFloor_Statics::NewProp_FloorMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoveFloor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveFloor_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveFloor_Statics::NewProp_tempWall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveFloor_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveFloor_Statics::NewProp_Timer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveFloor_Statics::NewProp_Round,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveFloor_Statics::NewProp_FloorPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveFloor_Statics::NewProp_IBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveFloor_Statics::NewProp_LReverseBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveFloor_Statics::NewProp_ZBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveFloor_Statics::NewProp_SBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveFloor_Statics::NewProp_LBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveFloor_Statics::NewProp_TBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveFloor_Statics::NewProp_OBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveFloor_Statics::NewProp_wall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveFloor_Statics::NewProp_FloorMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoveFloor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveFloor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMoveFloor_Statics::ClassParams = {
		&AMoveFloor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMoveFloor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMoveFloor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMoveFloor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveFloor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoveFloor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMoveFloor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMoveFloor, 3770292729);
	template<> GAMEINADAY_TEST_API UClass* StaticClass<AMoveFloor>()
	{
		return AMoveFloor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMoveFloor(Z_Construct_UClass_AMoveFloor, &AMoveFloor::StaticClass, TEXT("/Script/GameInADay_Test"), TEXT("AMoveFloor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveFloor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
