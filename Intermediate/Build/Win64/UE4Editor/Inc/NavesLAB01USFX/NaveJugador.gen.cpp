// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesLAB01USFX/NaveJugador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveJugador() {}
// Cross Module References
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_ANaveJugador_NoRegister();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_ANaveJugador();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_ANaveEspacial();
	UPackage* Z_Construct_UPackage__Script_NavesLAB01USFX();
// End Cross Module References
	void ANaveJugador::StaticRegisterNativesANaveJugador()
	{
	}
	UClass* Z_Construct_UClass_ANaveJugador_NoRegister()
	{
		return ANaveJugador::StaticClass();
	}
	struct Z_Construct_UClass_ANaveJugador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveJugador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEspacial,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesLAB01USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveJugador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveJugador.h" },
		{ "ModuleRelativePath", "NaveJugador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveJugador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveJugador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveJugador_Statics::ClassParams = {
		&ANaveJugador::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveJugador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveJugador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveJugador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveJugador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveJugador, 2873704565);
	template<> NAVESLAB01USFX_API UClass* StaticClass<ANaveJugador>()
	{
		return ANaveJugador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveJugador(Z_Construct_UClass_ANaveJugador, &ANaveJugador::StaticClass, TEXT("/Script/NavesLAB01USFX"), TEXT("ANaveJugador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveJugador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
