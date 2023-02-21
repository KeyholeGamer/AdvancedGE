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
#ifdef ADVANCEDGE_JumpPowerup_generated_h
#error "JumpPowerup.generated.h already included, missing '#pragma once' in JumpPowerup.h"
#endif
#define ADVANCEDGE_JumpPowerup_generated_h

#define AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_SPARSE_DATA
#define AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnVolumeEndOverlap); \
	DECLARE_FUNCTION(execOnVolumeBeginOverlap);


#define AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnVolumeEndOverlap); \
	DECLARE_FUNCTION(execOnVolumeBeginOverlap);


#define AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJumpPowerup(); \
	friend struct Z_Construct_UClass_AJumpPowerup_Statics; \
public: \
	DECLARE_CLASS(AJumpPowerup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedGE"), NO_API) \
	DECLARE_SERIALIZER(AJumpPowerup)


#define AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAJumpPowerup(); \
	friend struct Z_Construct_UClass_AJumpPowerup_Statics; \
public: \
	DECLARE_CLASS(AJumpPowerup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedGE"), NO_API) \
	DECLARE_SERIALIZER(AJumpPowerup)


#define AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJumpPowerup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AJumpPowerup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJumpPowerup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJumpPowerup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJumpPowerup(AJumpPowerup&&); \
	NO_API AJumpPowerup(const AJumpPowerup&); \
public:


#define AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJumpPowerup(AJumpPowerup&&); \
	NO_API AJumpPowerup(const AJumpPowerup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJumpPowerup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJumpPowerup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJumpPowerup)


#define AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_PRIVATE_PROPERTY_OFFSET
#define AdvancedGE_Source_AdvancedGE_JumpPowerup_h_10_PROLOG
#define AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_PRIVATE_PROPERTY_OFFSET \
	AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_SPARSE_DATA \
	AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_RPC_WRAPPERS \
	AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_INCLASS \
	AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_PRIVATE_PROPERTY_OFFSET \
	AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_SPARSE_DATA \
	AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_INCLASS_NO_PURE_DECLS \
	AdvancedGE_Source_AdvancedGE_JumpPowerup_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDGE_API UClass* StaticClass<class AJumpPowerup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdvancedGE_Source_AdvancedGE_JumpPowerup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
