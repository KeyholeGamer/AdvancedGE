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
#ifdef ADVANCEDGE_BouncerAmmo_generated_h
#error "BouncerAmmo.generated.h already included, missing '#pragma once' in BouncerAmmo.h"
#endif
#define ADVANCEDGE_BouncerAmmo_generated_h

#define AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_SPARSE_DATA
#define AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnVolumeEndOverlap); \
	DECLARE_FUNCTION(execOnVolumeBeginOverlap);


#define AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnVolumeEndOverlap); \
	DECLARE_FUNCTION(execOnVolumeBeginOverlap);


#define AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABouncerAmmo(); \
	friend struct Z_Construct_UClass_ABouncerAmmo_Statics; \
public: \
	DECLARE_CLASS(ABouncerAmmo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedGE"), NO_API) \
	DECLARE_SERIALIZER(ABouncerAmmo)


#define AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABouncerAmmo(); \
	friend struct Z_Construct_UClass_ABouncerAmmo_Statics; \
public: \
	DECLARE_CLASS(ABouncerAmmo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedGE"), NO_API) \
	DECLARE_SERIALIZER(ABouncerAmmo)


#define AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABouncerAmmo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABouncerAmmo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABouncerAmmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABouncerAmmo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABouncerAmmo(ABouncerAmmo&&); \
	NO_API ABouncerAmmo(const ABouncerAmmo&); \
public:


#define AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABouncerAmmo(ABouncerAmmo&&); \
	NO_API ABouncerAmmo(const ABouncerAmmo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABouncerAmmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABouncerAmmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABouncerAmmo)


#define AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_PRIVATE_PROPERTY_OFFSET
#define AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_10_PROLOG
#define AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_PRIVATE_PROPERTY_OFFSET \
	AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_SPARSE_DATA \
	AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_RPC_WRAPPERS \
	AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_INCLASS \
	AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_PRIVATE_PROPERTY_OFFSET \
	AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_SPARSE_DATA \
	AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_INCLASS_NO_PURE_DECLS \
	AdvancedGE_Source_AdvancedGE_BouncerAmmo_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDGE_API UClass* StaticClass<class ABouncerAmmo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdvancedGE_Source_AdvancedGE_BouncerAmmo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
