// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesLAB01USFX/ModoJuegoEspacio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModoJuegoEspacio() {}
// Cross Module References
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AModoJuegoEspacio_NoRegister();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AModoJuegoEspacio();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NavesLAB01USFX();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AModoJuegoEspacio::StaticRegisterNativesAModoJuegoEspacio()
	{
	}
	UClass* Z_Construct_UClass_AModoJuegoEspacio_NoRegister()
	{
		return AModoJuegoEspacio::StaticClass();
	}
	struct Z_Construct_UClass_AModoJuegoEspacio_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TodasLasNaves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TodasLasNaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TodasLasNaves;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TodosLosMuros_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TodosLosMuros_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TodosLosMuros;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModoJuegoEspacio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesLAB01USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModoJuegoEspacio_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ModoJuegoEspacio.h" },
		{ "ModuleRelativePath", "ModoJuegoEspacio.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModoJuegoEspacio_Statics::NewProp_TodasLasNaves_Inner = { "TodasLasNaves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModoJuegoEspacio_Statics::NewProp_TodasLasNaves_MetaData[] = {
		{ "ModuleRelativePath", "ModoJuegoEspacio.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AModoJuegoEspacio_Statics::NewProp_TodasLasNaves = { "TodasLasNaves", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModoJuegoEspacio, TodasLasNaves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AModoJuegoEspacio_Statics::NewProp_TodasLasNaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModoJuegoEspacio_Statics::NewProp_TodasLasNaves_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModoJuegoEspacio_Statics::NewProp_TodosLosMuros_Inner = { "TodosLosMuros", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModoJuegoEspacio_Statics::NewProp_TodosLosMuros_MetaData[] = {
		{ "ModuleRelativePath", "ModoJuegoEspacio.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AModoJuegoEspacio_Statics::NewProp_TodosLosMuros = { "TodosLosMuros", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModoJuegoEspacio, TodosLosMuros), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AModoJuegoEspacio_Statics::NewProp_TodosLosMuros_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModoJuegoEspacio_Statics::NewProp_TodosLosMuros_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModoJuegoEspacio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModoJuegoEspacio_Statics::NewProp_TodasLasNaves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModoJuegoEspacio_Statics::NewProp_TodasLasNaves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModoJuegoEspacio_Statics::NewProp_TodosLosMuros_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModoJuegoEspacio_Statics::NewProp_TodosLosMuros,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModoJuegoEspacio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModoJuegoEspacio>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModoJuegoEspacio_Statics::ClassParams = {
		&AModoJuegoEspacio::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AModoJuegoEspacio_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AModoJuegoEspacio_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AModoJuegoEspacio_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModoJuegoEspacio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModoJuegoEspacio()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModoJuegoEspacio_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModoJuegoEspacio, 692478680);
	template<> NAVESLAB01USFX_API UClass* StaticClass<AModoJuegoEspacio>()
	{
		return AModoJuegoEspacio::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModoJuegoEspacio(Z_Construct_UClass_AModoJuegoEspacio, &AModoJuegoEspacio::StaticClass, TEXT("/Script/NavesLAB01USFX"), TEXT("AModoJuegoEspacio"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModoJuegoEspacio);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
