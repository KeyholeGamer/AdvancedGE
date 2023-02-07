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
#ifdef ADVANCEDGE_BasicWall_generated_h
#error "BasicWall.generated.h already included, missing '#pragma once' in BasicWall.h"
#endif
#define ADVANCEDGE_BasicWall_generated_h

#define AdvancedGE_Source_AdvancedGE_BasicWall_h_13_SPARSE_DATA
#define AdvancedGE_Source_AdvancedGE_BasicWall_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define AdvancedGE_Source_AdvancedGE_BasicWall_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define AdvancedGE_Source_AdvancedGE_BasicWall_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicWall(); \
	friend struct Z_Construct_UClass_ABasicWall_Statics; \
public: \
	DECLARE_CLASS(ABasicWall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedGE"), NO_API) \
	DECLARE_SERIALIZER(ABasicWall)


#define AdvancedGE_Source_AdvancedGE_BasicWall_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABasicWall(); \
	friend struct Z_Construct_UClass_ABasicWall_Statics; \
public: \
	DECLARE_CLASS(ABasicWall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedGE"), NO_API) \
	DECLARE_SERIALIZER(ABasicWall)


#define AdvancedGE_Source_AdvancedGE_BasicWall_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicWall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicWall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicWall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicWall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicWall(ABasicWall&&); \
	NO_API ABasicWall(const ABasicWall&); \
public:


#define AdvancedGE_Source_AdvancedGE_BasicWall_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicWall(ABasicWall&&); \
	NO_API ABasicWall(const ABasicWall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicWall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicWall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicWall)


#define AdvancedGE_Source_AdvancedGE_BasicWall_h_13_PRIVATE_PROPERTY_OFFSET
#define AdvancedGE_Source_AdvancedGE_BasicWall_h_10_PROLOG
#define AdvancedGE_Source_AdvancedGE_BasicWall_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvancedGE_Source_AdvancedGE_BasicWall_h_13_PRIVATE_PROPERTY_OFFSET \
	AdvancedGE_Source_AdvancedGE_BasicWall_h_13_SPARSE_DATA \
	AdvancedGE_Source_AdvancedGE_BasicWall_h_13_RPC_WRAPPERS \
	AdvancedGE_Source_AdvancedGE_BasicWall_h_13_INCLASS \
	AdvancedGE_Source_AdvancedGE_BasicWall_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdvancedGE_Source_AdvancedGE_BasicWall_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvancedGE_Source_AdvancedGE_BasicWall_h_13_PRIVATE_PROPERTY_OFFSET \
	AdvancedGE_Source_AdvancedGE_BasicWall_h_13_SPARSE_DATA \
	AdvancedGE_Source_AdvancedGE_BasicWall_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AdvancedGE_Source_AdvancedGE_BasicWall_h_13_INCLASS_NO_PURE_DECLS \
	AdvancedGE_Source_AdvancedGE_BasicWall_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDGE_API UClass* StaticClass<class ABasicWall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdvancedGE_Source_AdvancedGE_BasicWall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
