// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesLAB01USFX/ProjectileEnemigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileEnemigo() {}
// Cross Module References
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AProjectileEnemigo_NoRegister();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AProjectileEnemigo();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_ANavesLAB01USFXProjectile();
	UPackage* Z_Construct_UPackage__Script_NavesLAB01USFX();
// End Cross Module References
	void AProjectileEnemigo::StaticRegisterNativesAProjectileEnemigo()
	{
	}
	UClass* Z_Construct_UClass_AProjectileEnemigo_NoRegister()
	{
		return AProjectileEnemigo::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileEnemigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileEnemigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANavesLAB01USFXProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesLAB01USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileEnemigo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectileEnemigo.h" },
		{ "ModuleRelativePath", "ProjectileEnemigo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileEnemigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileEnemigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectileEnemigo_Statics::ClassParams = {
		&AProjectileEnemigo::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectileEnemigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileEnemigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileEnemigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectileEnemigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectileEnemigo, 2883094860);
	template<> NAVESLAB01USFX_API UClass* StaticClass<AProjectileEnemigo>()
	{
		return AProjectileEnemigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectileEnemigo(Z_Construct_UClass_AProjectileEnemigo, &AProjectileEnemigo::StaticClass, TEXT("/Script/NavesLAB01USFX"), TEXT("AProjectileEnemigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileEnemigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
