// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedGE/AdvancedGEGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedGEGameModeBase() {}
// Cross Module References
	ADVANCEDGE_API UClass* Z_Construct_UClass_AAdvancedGEGameModeBase_NoRegister();
	ADVANCEDGE_API UClass* Z_Construct_UClass_AAdvancedGEGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedGE();
// End Cross Module References
	void AAdvancedGEGameModeBase::StaticRegisterNativesAAdvancedGEGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AAdvancedGEGameModeBase_NoRegister()
	{
		return AAdvancedGEGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAdvancedGEGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvancedGEGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedGE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedGEGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AdvancedGEGameModeBase.h" },
		{ "ModuleRelativePath", "AdvancedGEGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvancedGEGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvancedGEGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvancedGEGameModeBase_Statics::ClassParams = {
		&AAdvancedGEGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAdvancedGEGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGEGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvancedGEGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvancedGEGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvancedGEGameModeBase, 1847318855);
	template<> ADVANCEDGE_API UClass* StaticClass<AAdvancedGEGameModeBase>()
	{
		return AAdvancedGEGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvancedGEGameModeBase(Z_Construct_UClass_AAdvancedGEGameModeBase, &AAdvancedGEGameModeBase::StaticClass, TEXT("/Script/AdvancedGE"), TEXT("AAdvancedGEGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvancedGEGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
