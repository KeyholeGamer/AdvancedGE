// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedGE/Rocket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRocket() {}
// Cross Module References
	ADVANCEDGE_API UClass* Z_Construct_UClass_ARocket_NoRegister();
	ADVANCEDGE_API UClass* Z_Construct_UClass_ARocket();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdvancedGE();
// End Cross Module References
	void ARocket::StaticRegisterNativesARocket()
	{
	}
	UClass* Z_Construct_UClass_ARocket_NoRegister()
	{
		return ARocket::StaticClass();
	}
	struct Z_Construct_UClass_ARocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedGE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARocket_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Rocket.h" },
		{ "ModuleRelativePath", "Rocket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARocket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARocket_Statics::ClassParams = {
		&ARocket::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARocket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARocket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARocket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARocket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARocket, 1190361263);
	template<> ADVANCEDGE_API UClass* StaticClass<ARocket>()
	{
		return ARocket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARocket(Z_Construct_UClass_ARocket, &ARocket::StaticClass, TEXT("/Script/AdvancedGE"), TEXT("ARocket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARocket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
