// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_R4D2_Copy/ZombieAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAIController() {}
// Cross Module References
	UNREAL_R4D2_COPY_API UClass* Z_Construct_UClass_AZombieAIController_NoRegister();
	UNREAL_R4D2_COPY_API UClass* Z_Construct_UClass_AZombieAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Unreal_R4D2_Copy();
// End Cross Module References
	void AZombieAIController::StaticRegisterNativesAZombieAIController()
	{
	}
	UClass* Z_Construct_UClass_AZombieAIController_NoRegister()
	{
		return AZombieAIController::StaticClass();
	}
	struct Z_Construct_UClass_AZombieAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_R4D2_Copy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ZombieAIController.h" },
		{ "ModuleRelativePath", "ZombieAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieAIController_Statics::ClassParams = {
		&AZombieAIController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieAIController, 738412864);
	template<> UNREAL_R4D2_COPY_API UClass* StaticClass<AZombieAIController>()
	{
		return AZombieAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieAIController(Z_Construct_UClass_AZombieAIController, &AZombieAIController::StaticClass, TEXT("/Script/Unreal_R4D2_Copy"), TEXT("AZombieAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
