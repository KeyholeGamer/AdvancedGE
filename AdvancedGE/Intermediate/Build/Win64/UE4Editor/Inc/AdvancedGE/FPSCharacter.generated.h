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
#ifdef ADVANCEDGE_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define ADVANCEDGE_FPSCharacter_generated_h

#define AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_SPARSE_DATA
#define AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDoubleJump); \
	DECLARE_FUNCTION(execOnHit);


#define AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoubleJump); \
	DECLARE_FUNCTION(execOnHit);


#define AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedGE"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedGE"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public:


#define AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter)


#define AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_PRIVATE_PROPERTY_OFFSET
#define AdvancedGE_Source_AdvancedGE_FPSCharacter_h_15_PROLOG
#define AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_SPARSE_DATA \
	AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_RPC_WRAPPERS \
	AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_INCLASS \
	AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_SPARSE_DATA \
	AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_INCLASS_NO_PURE_DECLS \
	AdvancedGE_Source_AdvancedGE_FPSCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDGE_API UClass* StaticClass<class AFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdvancedGE_Source_AdvancedGE_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
