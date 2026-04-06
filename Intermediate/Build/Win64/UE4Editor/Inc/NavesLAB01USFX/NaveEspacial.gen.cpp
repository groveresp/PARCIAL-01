// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesLAB01USFX/NaveEspacial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEspacial() {}
// Cross Module References
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_ANaveEspacial_NoRegister();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_ANaveEspacial();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NavesLAB01USFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveEspacial::StaticRegisterNativesANaveEspacial()
	{
	}
	UClass* Z_Construct_UClass_ANaveEspacial_NoRegister()
	{
		return ANaveEspacial::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEspacial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Salud_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Salud;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocidad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponenteMalla_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponenteMalla;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEspacial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesLAB01USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEspacial_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveEspacial.h" },
		{ "ModuleRelativePath", "NaveEspacial.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEspacial_Statics::NewProp_Salud_MetaData[] = {
		{ "Category", "Nave" },
		{ "ModuleRelativePath", "NaveEspacial.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveEspacial_Statics::NewProp_Salud = { "Salud", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEspacial, Salud), METADATA_PARAMS(Z_Construct_UClass_ANaveEspacial_Statics::NewProp_Salud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEspacial_Statics::NewProp_Salud_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEspacial_Statics::NewProp_Velocidad_MetaData[] = {
		{ "Category", "Nave" },
		{ "ModuleRelativePath", "NaveEspacial.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveEspacial_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEspacial, Velocidad), METADATA_PARAMS(Z_Construct_UClass_ANaveEspacial_Statics::NewProp_Velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEspacial_Statics::NewProp_Velocidad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEspacial_Statics::NewProp_ComponenteMalla_MetaData[] = {
		{ "Category", "Nave" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEspacial.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEspacial_Statics::NewProp_ComponenteMalla = { "ComponenteMalla", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEspacial, ComponenteMalla), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEspacial_Statics::NewProp_ComponenteMalla_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEspacial_Statics::NewProp_ComponenteMalla_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEspacial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEspacial_Statics::NewProp_Salud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEspacial_Statics::NewProp_Velocidad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEspacial_Statics::NewProp_ComponenteMalla,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEspacial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEspacial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEspacial_Statics::ClassParams = {
		&ANaveEspacial::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEspacial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEspacial_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEspacial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEspacial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEspacial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEspacial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEspacial, 3709558175);
	template<> NAVESLAB01USFX_API UClass* StaticClass<ANaveEspacial>()
	{
		return ANaveEspacial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEspacial(Z_Construct_UClass_ANaveEspacial, &ANaveEspacial::StaticClass, TEXT("/Script/NavesLAB01USFX"), TEXT("ANaveEspacial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEspacial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
