// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedGE/Bouncer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBouncer() {}
// Cross Module References
	ADVANCEDGE_API UClass* Z_Construct_UClass_ABouncer_NoRegister();
	ADVANCEDGE_API UClass* Z_Construct_UClass_ABouncer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdvancedGE();
// End Cross Module References
	void ABouncer::StaticRegisterNativesABouncer()
	{
	}
	UClass* Z_Construct_UClass_ABouncer_NoRegister()
	{
		return ABouncer::StaticClass();
	}
	struct Z_Construct_UClass_ABouncer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABouncer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedGE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABouncer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bouncer.h" },
		{ "ModuleRelativePath", "Bouncer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABouncer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABouncer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABouncer_Statics::ClassParams = {
		&ABouncer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABouncer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABouncer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABouncer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABouncer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABouncer, 1759713826);
	template<> ADVANCEDGE_API UClass* StaticClass<ABouncer>()
	{
		return ABouncer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABouncer(Z_Construct_UClass_ABouncer, &ABouncer::StaticClass, TEXT("/Script/AdvancedGE"), TEXT("ABouncer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABouncer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
