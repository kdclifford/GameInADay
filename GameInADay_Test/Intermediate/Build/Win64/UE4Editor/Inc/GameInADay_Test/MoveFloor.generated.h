// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEINADAY_TEST_MoveFloor_generated_h
#error "MoveFloor.generated.h already included, missing '#pragma once' in MoveFloor.h"
#endif
#define GAMEINADAY_TEST_MoveFloor_generated_h

#define GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_SPARSE_DATA
#define GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_RPC_WRAPPERS
#define GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoveFloor(); \
	friend struct Z_Construct_UClass_AMoveFloor_Statics; \
public: \
	DECLARE_CLASS(AMoveFloor, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameInADay_Test"), NO_API) \
	DECLARE_SERIALIZER(AMoveFloor)


#define GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMoveFloor(); \
	friend struct Z_Construct_UClass_AMoveFloor_Statics; \
public: \
	DECLARE_CLASS(AMoveFloor, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameInADay_Test"), NO_API) \
	DECLARE_SERIALIZER(AMoveFloor)


#define GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMoveFloor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMoveFloor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoveFloor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoveFloor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMoveFloor(AMoveFloor&&); \
	NO_API AMoveFloor(const AMoveFloor&); \
public:


#define GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMoveFloor(AMoveFloor&&); \
	NO_API AMoveFloor(const AMoveFloor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoveFloor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoveFloor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMoveFloor)


#define GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FloorPos() { return STRUCT_OFFSET(AMoveFloor, FloorPos); } \
	FORCEINLINE static uint32 __PPO__Round() { return STRUCT_OFFSET(AMoveFloor, Round); } \
	FORCEINLINE static uint32 __PPO__Timer() { return STRUCT_OFFSET(AMoveFloor, Timer); } \
	FORCEINLINE static uint32 __PPO__StartTime() { return STRUCT_OFFSET(AMoveFloor, StartTime); } \
	FORCEINLINE static uint32 __PPO__tempWall() { return STRUCT_OFFSET(AMoveFloor, tempWall); }


#define GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_9_PROLOG
#define GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_PRIVATE_PROPERTY_OFFSET \
	GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_SPARSE_DATA \
	GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_RPC_WRAPPERS \
	GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_INCLASS \
	GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_PRIVATE_PROPERTY_OFFSET \
	GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_SPARSE_DATA \
	GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_INCLASS_NO_PURE_DECLS \
	GameInADay_Test_Source_GameInADay_Test_MoveFloor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEINADAY_TEST_API UClass* StaticClass<class AMoveFloor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameInADay_Test_Source_GameInADay_Test_MoveFloor_h


#define FOREACH_ENUM_EBLOCKTYPE(op) \
	op(O) \
	op(T) \
	op(L) \
	op(ReverseL) \
	op(I) \
	op(S) \
	op(Z) \
	op(AmountOfBlocks) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
