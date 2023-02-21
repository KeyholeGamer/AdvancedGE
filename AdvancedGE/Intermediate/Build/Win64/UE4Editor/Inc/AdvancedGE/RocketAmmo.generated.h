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
struct FHitResult;
#ifdef ADVANCEDGE_RocketAmmo_generated_h
#error "RocketAmmo.generated.h already included, missing '#pragma once' in RocketAmmo.h"
#endif
#define ADVANCEDGE_RocketAmmo_generated_h

#define AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_SPARSE_DATA
#define AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnVolumeEndOverlap); \
	DECLARE_FUNCTION(execOnVolumeBeginOverlap);


#define AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnVolumeEndOverlap); \
	DECLARE_FUNCTION(execOnVolumeBeginOverlap);


#define AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARocketAmmo(); \
	friend struct Z_Construct_UClass_ARocketAmmo_Statics; \
public: \
	DECLARE_CLASS(ARocketAmmo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedGE"), NO_API) \
	DECLARE_SERIALIZER(ARocketAmmo)


#define AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_INCLASS \
private: \
	static void StaticRegisterNativesARocketAmmo(); \
	friend struct Z_Construct_UClass_ARocketAmmo_Statics; \
public: \
	DECLARE_CLASS(ARocketAmmo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedGE"), NO_API) \
	DECLARE_SERIALIZER(ARocketAmmo)


#define AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARocketAmmo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARocketAmmo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARocketAmmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARocketAmmo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARocketAmmo(ARocketAmmo&&); \
	NO_API ARocketAmmo(const ARocketAmmo&); \
public:


#define AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARocketAmmo(ARocketAmmo&&); \
	NO_API ARocketAmmo(const ARocketAmmo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARocketAmmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARocketAmmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARocketAmmo)


#define AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_PRIVATE_PROPERTY_OFFSET
#define AdvancedGE_Source_AdvancedGE_RocketAmmo_h_10_PROLOG
#define AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_PRIVATE_PROPERTY_OFFSET \
	AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_SPARSE_DATA \
	AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_RPC_WRAPPERS \
	AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_INCLASS \
	AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_PRIVATE_PROPERTY_OFFSET \
	AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_SPARSE_DATA \
	AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_INCLASS_NO_PURE_DECLS \
	AdvancedGE_Source_AdvancedGE_RocketAmmo_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDGE_API UClass* StaticClass<class ARocketAmmo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdvancedGE_Source_AdvancedGE_RocketAmmo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
