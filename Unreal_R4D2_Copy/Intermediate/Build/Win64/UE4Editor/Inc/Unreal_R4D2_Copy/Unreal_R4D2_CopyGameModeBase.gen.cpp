// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_R4D2_Copy/Unreal_R4D2_CopyGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnreal_R4D2_CopyGameModeBase() {}
// Cross Module References
	UNREAL_R4D2_COPY_API UClass* Z_Construct_UClass_AUnreal_R4D2_CopyGameModeBase_NoRegister();
	UNREAL_R4D2_COPY_API UClass* Z_Construct_UClass_AUnreal_R4D2_CopyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Unreal_R4D2_Copy();
// End Cross Module References
	void AUnreal_R4D2_CopyGameModeBase::StaticRegisterNativesAUnreal_R4D2_CopyGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUnreal_R4D2_CopyGameModeBase_NoRegister()
	{
		return AUnreal_R4D2_CopyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnreal_R4D2_CopyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnreal_R4D2_CopyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_R4D2_Copy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal_R4D2_CopyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Unreal_R4D2_CopyGameModeBase.h" },
		{ "ModuleRelativePath", "Unreal_R4D2_CopyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnreal_R4D2_CopyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnreal_R4D2_CopyGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnreal_R4D2_CopyGameModeBase_Statics::ClassParams = {
		&AUnreal_R4D2_CopyGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnreal_R4D2_CopyGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal_R4D2_CopyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnreal_R4D2_CopyGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnreal_R4D2_CopyGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnreal_R4D2_CopyGameModeBase, 3414062449);
	template<> UNREAL_R4D2_COPY_API UClass* StaticClass<AUnreal_R4D2_CopyGameModeBase>()
	{
		return AUnreal_R4D2_CopyGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnreal_R4D2_CopyGameModeBase(Z_Construct_UClass_AUnreal_R4D2_CopyGameModeBase, &AUnreal_R4D2_CopyGameModeBase::StaticClass, TEXT("/Script/Unreal_R4D2_Copy"), TEXT("AUnreal_R4D2_CopyGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnreal_R4D2_CopyGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
