// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesLAB01USFX/MuroDesaparecible.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroDesaparecible() {}
// Cross Module References
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuroDesaparecible_NoRegister();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuroDesaparecible();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuroJuego();
	UPackage* Z_Construct_UPackage__Script_NavesLAB01USFX();
// End Cross Module References
	void AMuroDesaparecible::StaticRegisterNativesAMuroDesaparecible()
	{
	}
	UClass* Z_Construct_UClass_AMuroDesaparecible_NoRegister()
	{
		return AMuroDesaparecible::StaticClass();
	}
	struct Z_Construct_UClass_AMuroDesaparecible_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroDesaparecible_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuroJuego,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesLAB01USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroDesaparecible_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuroDesaparecible.h" },
		{ "ModuleRelativePath", "MuroDesaparecible.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroDesaparecible_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroDesaparecible>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroDesaparecible_Statics::ClassParams = {
		&AMuroDesaparecible::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroDesaparecible_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroDesaparecible_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroDesaparecible()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroDesaparecible_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroDesaparecible, 878788074);
	template<> NAVESLAB01USFX_API UClass* StaticClass<AMuroDesaparecible>()
	{
		return AMuroDesaparecible::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroDesaparecible(Z_Construct_UClass_AMuroDesaparecible, &AMuroDesaparecible::StaticClass, TEXT("/Script/NavesLAB01USFX"), TEXT("AMuroDesaparecible"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroDesaparecible);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
