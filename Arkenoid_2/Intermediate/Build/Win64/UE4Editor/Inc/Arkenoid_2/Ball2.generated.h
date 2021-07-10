// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef ARKENOID_2_Ball2_generated_h
#error "Ball2.generated.h already included, missing '#pragma once' in Ball2.h"
#endif
#define ARKENOID_2_Ball2_generated_h

#define Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_SPARSE_DATA
#define Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBall);


#define Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBall);


#define Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABall2(); \
	friend struct Z_Construct_UClass_ABall2_Statics; \
public: \
	DECLARE_CLASS(ABall2, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkenoid_2"), NO_API) \
	DECLARE_SERIALIZER(ABall2)


#define Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABall2(); \
	friend struct Z_Construct_UClass_ABall2_Statics; \
public: \
	DECLARE_CLASS(ABall2, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkenoid_2"), NO_API) \
	DECLARE_SERIALIZER(ABall2)


#define Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall2(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall2(ABall2&&); \
	NO_API ABall2(const ABall2&); \
public:


#define Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall2(ABall2&&); \
	NO_API ABall2(const ABall2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall2); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall2)


#define Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Ball() { return STRUCT_OFFSET(ABall2, SM_Ball); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABall2, ProjectileMovement); }


#define Arkenoid_2_Source_Arkenoid_2_Ball2_h_10_PROLOG
#define Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_PRIVATE_PROPERTY_OFFSET \
	Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_SPARSE_DATA \
	Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_RPC_WRAPPERS \
	Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_INCLASS \
	Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_PRIVATE_PROPERTY_OFFSET \
	Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_SPARSE_DATA \
	Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_INCLASS_NO_PURE_DECLS \
	Arkenoid_2_Source_Arkenoid_2_Ball2_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKENOID_2_API UClass* StaticClass<class ABall2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arkenoid_2_Source_Arkenoid_2_Ball2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
