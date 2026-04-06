// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesLAB01USFX/MuroJuego.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroJuego() {}
// Cross Module References
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuroJuego_NoRegister();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuroJuego();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NavesLAB01USFX();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMuroJuego::StaticRegisterNativesAMuroJuego()
	{
	}
	UClass* Z_Construct_UClass_AMuroJuego_NoRegister()
	{
		return AMuroJuego::StaticClass();
	}
	struct Z_Construct_UClass_AMuroJuego_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CajaColision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CajaColision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaMuro_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaMuro;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroJuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesLAB01USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroJuego_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuroJuego.h" },
		{ "ModuleRelativePath", "MuroJuego.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroJuego_Statics::NewProp_Salud_MetaData[] = {
		{ "Category", "Muro" },
		{ "ModuleRelativePath", "MuroJuego.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMuroJuego_Statics::NewProp_Salud = { "Salud", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroJuego, Salud), METADATA_PARAMS(Z_Construct_UClass_AMuroJuego_Statics::NewProp_Salud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroJuego_Statics::NewProp_Salud_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroJuego_Statics::NewProp_CajaColision_MetaData[] = {
		{ "Category", "Muro" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MuroJuego.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMuroJuego_Statics::NewProp_CajaColision = { "CajaColision", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroJuego, CajaColision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMuroJuego_Statics::NewProp_CajaColision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroJuego_Statics::NewProp_CajaColision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroJuego_Statics::NewProp_MallaMuro_MetaData[] = {
		{ "Category", "Muro" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MuroJuego.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMuroJuego_Statics::NewProp_MallaMuro = { "MallaMuro", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroJuego, MallaMuro), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMuroJuego_Statics::NewProp_MallaMuro_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroJuego_Statics::NewProp_MallaMuro_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMuroJuego_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroJuego_Statics::NewProp_Salud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroJuego_Statics::NewProp_CajaColision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroJuego_Statics::NewProp_MallaMuro,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroJuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroJuego>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroJuego_Statics::ClassParams = {
		&AMuroJuego::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMuroJuego_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMuroJuego_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroJuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroJuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroJuego()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroJuego_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroJuego, 1241968761);
	template<> NAVESLAB01USFX_API UClass* StaticClass<AMuroJuego>()
	{
		return AMuroJuego::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroJuego(Z_Construct_UClass_AMuroJuego, &AMuroJuego::StaticClass, TEXT("/Script/NavesLAB01USFX"), TEXT("AMuroJuego"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroJuego);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
