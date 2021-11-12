// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "animation/animationGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeanimationGameMode() {}
// Cross Module References
	ANIMATION_API UClass* Z_Construct_UClass_AanimationGameMode_NoRegister();
	ANIMATION_API UClass* Z_Construct_UClass_AanimationGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_animation();
// End Cross Module References
	void AanimationGameMode::StaticRegisterNativesAanimationGameMode()
	{
	}
	UClass* Z_Construct_UClass_AanimationGameMode_NoRegister()
	{
		return AanimationGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AanimationGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AanimationGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_animation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AanimationGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "animationGameMode.h" },
		{ "ModuleRelativePath", "animationGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AanimationGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AanimationGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AanimationGameMode_Statics::ClassParams = {
		&AanimationGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AanimationGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AanimationGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AanimationGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AanimationGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AanimationGameMode, 2023826029);
	template<> ANIMATION_API UClass* StaticClass<AanimationGameMode>()
	{
		return AanimationGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AanimationGameMode(Z_Construct_UClass_AanimationGameMode, &AanimationGameMode::StaticClass, TEXT("/Script/animation"), TEXT("AanimationGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AanimationGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
