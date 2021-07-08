// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef ARKENOID_2_Ball_generated_h
#error "Ball.generated.h already included, missing '#pragma once' in Ball.h"
#endif
#define ARKENOID_2_Ball_generated_h

#define Arkenoid_2_Source_Arkenoid_2_Ball_h_13_SPARSE_DATA
#define Arkenoid_2_Source_Arkenoid_2_Ball_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBall);


#define Arkenoid_2_Source_Arkenoid_2_Ball_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBall);


#define Arkenoid_2_Source_Arkenoid_2_Ball_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkenoid_2"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define Arkenoid_2_Source_Arkenoid_2_Ball_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkenoid_2"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define Arkenoid_2_Source_Arkenoid_2_Ball_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public:


#define Arkenoid_2_Source_Arkenoid_2_Ball_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall)


#define Arkenoid_2_Source_Arkenoid_2_Ball_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Ball() { return STRUCT_OFFSET(ABall, SM_Ball); } \
	FORCEINLINE static uint32 __PPO__ProjecttileMovement() { return STRUCT_OFFSET(ABall, ProjecttileMovement); }


#define Arkenoid_2_Source_Arkenoid_2_Ball_h_10_PROLOG
#define Arkenoid_2_Source_Arkenoid_2_Ball_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arkenoid_2_Source_Arkenoid_2_Ball_h_13_PRIVATE_PROPERTY_OFFSET \
	Arkenoid_2_Source_Arkenoid_2_Ball_h_13_SPARSE_DATA \
	Arkenoid_2_Source_Arkenoid_2_Ball_h_13_RPC_WRAPPERS \
	Arkenoid_2_Source_Arkenoid_2_Ball_h_13_INCLASS \
	Arkenoid_2_Source_Arkenoid_2_Ball_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arkenoid_2_Source_Arkenoid_2_Ball_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arkenoid_2_Source_Arkenoid_2_Ball_h_13_PRIVATE_PROPERTY_OFFSET \
	Arkenoid_2_Source_Arkenoid_2_Ball_h_13_SPARSE_DATA \
	Arkenoid_2_Source_Arkenoid_2_Ball_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Arkenoid_2_Source_Arkenoid_2_Ball_h_13_INCLASS_NO_PURE_DECLS \
	Arkenoid_2_Source_Arkenoid_2_Ball_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKENOID_2_API UClass* StaticClass<class ABall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arkenoid_2_Source_Arkenoid_2_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
