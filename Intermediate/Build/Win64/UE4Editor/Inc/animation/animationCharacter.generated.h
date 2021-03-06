// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATION_animationCharacter_generated_h
#error "animationCharacter.generated.h already included, missing '#pragma once' in animationCharacter.h"
#endif
#define ANIMATION_animationCharacter_generated_h

#define animation___副本_Source_animation_animationCharacter_h_12_SPARSE_DATA
#define animation___副本_Source_animation_animationCharacter_h_12_RPC_WRAPPERS
#define animation___副本_Source_animation_animationCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define animation___副本_Source_animation_animationCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAanimationCharacter(); \
	friend struct Z_Construct_UClass_AanimationCharacter_Statics; \
public: \
	DECLARE_CLASS(AanimationCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/animation"), NO_API) \
	DECLARE_SERIALIZER(AanimationCharacter)


#define animation___副本_Source_animation_animationCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAanimationCharacter(); \
	friend struct Z_Construct_UClass_AanimationCharacter_Statics; \
public: \
	DECLARE_CLASS(AanimationCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/animation"), NO_API) \
	DECLARE_SERIALIZER(AanimationCharacter)


#define animation___副本_Source_animation_animationCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AanimationCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AanimationCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AanimationCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AanimationCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AanimationCharacter(AanimationCharacter&&); \
	NO_API AanimationCharacter(const AanimationCharacter&); \
public:


#define animation___副本_Source_animation_animationCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AanimationCharacter(AanimationCharacter&&); \
	NO_API AanimationCharacter(const AanimationCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AanimationCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AanimationCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AanimationCharacter)


#define animation___副本_Source_animation_animationCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AanimationCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AanimationCharacter, FollowCamera); }


#define animation___副本_Source_animation_animationCharacter_h_9_PROLOG
#define animation___副本_Source_animation_animationCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	animation___副本_Source_animation_animationCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	animation___副本_Source_animation_animationCharacter_h_12_SPARSE_DATA \
	animation___副本_Source_animation_animationCharacter_h_12_RPC_WRAPPERS \
	animation___副本_Source_animation_animationCharacter_h_12_INCLASS \
	animation___副本_Source_animation_animationCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define animation___副本_Source_animation_animationCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	animation___副本_Source_animation_animationCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	animation___副本_Source_animation_animationCharacter_h_12_SPARSE_DATA \
	animation___副本_Source_animation_animationCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	animation___副本_Source_animation_animationCharacter_h_12_INCLASS_NO_PURE_DECLS \
	animation___副本_Source_animation_animationCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATION_API UClass* StaticClass<class AanimationCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID animation___副本_Source_animation_animationCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
