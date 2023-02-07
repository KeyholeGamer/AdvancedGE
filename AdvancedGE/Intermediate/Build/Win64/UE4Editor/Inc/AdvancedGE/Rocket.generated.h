// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ADVANCEDGE_Rocket_generated_h
#error "Rocket.generated.h already included, missing '#pragma once' in Rocket.h"
#endif
#define ADVANCEDGE_Rocket_generated_h

#define AdvancedGE_Source_AdvancedGE_Rocket_h_14_SPARSE_DATA
#define AdvancedGE_Source_AdvancedGE_Rocket_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define AdvancedGE_Source_AdvancedGE_Rocket_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define AdvancedGE_Source_AdvancedGE_Rocket_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARocket(); \
	friend struct Z_Construct_UClass_ARocket_Statics; \
public: \
	DECLARE_CLASS(ARocket, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedGE"), NO_API) \
	DECLARE_SERIALIZER(ARocket)


#define AdvancedGE_Source_AdvancedGE_Rocket_h_14_INCLASS \
private: \
	static void StaticRegisterNativesARocket(); \
	friend struct Z_Construct_UClass_ARocket_Statics; \
public: \
	DECLARE_CLASS(ARocket, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedGE"), NO_API) \
	DECLARE_SERIALIZER(ARocket)


#define AdvancedGE_Source_AdvancedGE_Rocket_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARocket(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARocket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARocket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARocket); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARocket(ARocket&&); \
	NO_API ARocket(const ARocket&); \
public:


#define AdvancedGE_Source_AdvancedGE_Rocket_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARocket(ARocket&&); \
	NO_API ARocket(const ARocket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARocket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARocket); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARocket)


#define AdvancedGE_Source_AdvancedGE_Rocket_h_14_PRIVATE_PROPERTY_OFFSET
#define AdvancedGE_Source_AdvancedGE_Rocket_h_11_PROLOG
#define AdvancedGE_Source_AdvancedGE_Rocket_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvancedGE_Source_AdvancedGE_Rocket_h_14_PRIVATE_PROPERTY_OFFSET \
	AdvancedGE_Source_AdvancedGE_Rocket_h_14_SPARSE_DATA \
	AdvancedGE_Source_AdvancedGE_Rocket_h_14_RPC_WRAPPERS \
	AdvancedGE_Source_AdvancedGE_Rocket_h_14_INCLASS \
	AdvancedGE_Source_AdvancedGE_Rocket_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdvancedGE_Source_AdvancedGE_Rocket_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvancedGE_Source_AdvancedGE_Rocket_h_14_PRIVATE_PROPERTY_OFFSET \
	AdvancedGE_Source_AdvancedGE_Rocket_h_14_SPARSE_DATA \
	AdvancedGE_Source_AdvancedGE_Rocket_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AdvancedGE_Source_AdvancedGE_Rocket_h_14_INCLASS_NO_PURE_DECLS \
	AdvancedGE_Source_AdvancedGE_Rocket_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDGE_API UClass* StaticClass<class ARocket>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdvancedGE_Source_AdvancedGE_Rocket_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
