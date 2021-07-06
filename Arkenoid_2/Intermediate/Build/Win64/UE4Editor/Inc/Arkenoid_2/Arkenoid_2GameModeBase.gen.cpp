// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkenoid_2/Arkenoid_2GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArkenoid_2GameModeBase() {}
// Cross Module References
	ARKENOID_2_API UClass* Z_Construct_UClass_AArkenoid_2GameModeBase_NoRegister();
	ARKENOID_2_API UClass* Z_Construct_UClass_AArkenoid_2GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Arkenoid_2();
// End Cross Module References
	void AArkenoid_2GameModeBase::StaticRegisterNativesAArkenoid_2GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AArkenoid_2GameModeBase_NoRegister()
	{
		return AArkenoid_2GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AArkenoid_2GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArkenoid_2GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkenoid_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArkenoid_2GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Arkenoid_2GameModeBase.h" },
		{ "ModuleRelativePath", "Arkenoid_2GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArkenoid_2GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArkenoid_2GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArkenoid_2GameModeBase_Statics::ClassParams = {
		&AArkenoid_2GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AArkenoid_2GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArkenoid_2GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArkenoid_2GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArkenoid_2GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArkenoid_2GameModeBase, 2072088712);
	template<> ARKENOID_2_API UClass* StaticClass<AArkenoid_2GameModeBase>()
	{
		return AArkenoid_2GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArkenoid_2GameModeBase(Z_Construct_UClass_AArkenoid_2GameModeBase, &AArkenoid_2GameModeBase::StaticClass, TEXT("/Script/Arkenoid_2"), TEXT("AArkenoid_2GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArkenoid_2GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
