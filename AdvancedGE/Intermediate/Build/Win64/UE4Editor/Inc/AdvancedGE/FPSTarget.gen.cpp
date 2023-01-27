// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedGE/FPSTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSTarget() {}
// Cross Module References
	ADVANCEDGE_API UClass* Z_Construct_UClass_AFPSTarget_NoRegister();
	ADVANCEDGE_API UClass* Z_Construct_UClass_AFPSTarget();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_AdvancedGE();
// End Cross Module References
	void AFPSTarget::StaticRegisterNativesAFPSTarget()
	{
	}
	UClass* Z_Construct_UClass_AFPSTarget_NoRegister()
	{
		return AFPSTarget::StaticClass();
	}
	struct Z_Construct_UClass_AFPSTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedGE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSTarget_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPSTarget.h" },
		{ "ModuleRelativePath", "FPSTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSTarget_Statics::ClassParams = {
		&AFPSTarget::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSTarget, 3849105418);
	template<> ADVANCEDGE_API UClass* StaticClass<AFPSTarget>()
	{
		return AFPSTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSTarget(Z_Construct_UClass_AFPSTarget, &AFPSTarget::StaticClass, TEXT("/Script/AdvancedGE"), TEXT("AFPSTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
