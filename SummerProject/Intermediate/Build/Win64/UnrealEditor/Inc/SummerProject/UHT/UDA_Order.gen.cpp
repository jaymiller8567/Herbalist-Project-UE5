// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SummerProject/UDA_Order.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUDA_Order() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
SUMMERPROJECT_API UClass* Z_Construct_UClass_UDA_Order();
SUMMERPROJECT_API UClass* Z_Construct_UClass_UDA_Order_NoRegister();
SUMMERPROJECT_API UEnum* Z_Construct_UEnum_SummerProject_EPlantType();
SUMMERPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FOrders();
UPackage* Z_Construct_UPackage__Script_SummerProject();
// End Cross Module References

// Begin Enum EPlantType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlantType;
static UEnum* EPlantType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlantType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlantType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SummerProject_EPlantType, (UObject*)Z_Construct_UPackage__Script_SummerProject(), TEXT("EPlantType"));
	}
	return Z_Registration_Info_UEnum_EPlantType.OuterSingleton;
}
template<> SUMMERPROJECT_API UEnum* StaticEnum<EPlantType>()
{
	return EPlantType_StaticEnum();
}
struct Z_Construct_UEnum_SummerProject_EPlantType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Chamomile.Comment", "/**\n * \n */" },
		{ "Chamomile.DisplayName", "Chamomile" },
		{ "Chamomile.Name", "EPlantType::Chamomile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "Ginger.Comment", "/**\n * \n */" },
		{ "Ginger.DisplayName", "Ginger" },
		{ "Ginger.Name", "EPlantType::Ginger" },
		{ "Ginko.Comment", "/**\n * \n */" },
		{ "Ginko.DisplayName", "Ginko" },
		{ "Ginko.Name", "EPlantType::Ginko" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UDA_Order.h" },
		{ "None.Comment", "/**\n * \n */" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPlantType::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlantType::None", (int64)EPlantType::None },
		{ "EPlantType::Chamomile", (int64)EPlantType::Chamomile },
		{ "EPlantType::Ginger", (int64)EPlantType::Ginger },
		{ "EPlantType::Ginko", (int64)EPlantType::Ginko },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SummerProject_EPlantType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SummerProject,
	nullptr,
	"EPlantType",
	"EPlantType",
	Z_Construct_UEnum_SummerProject_EPlantType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SummerProject_EPlantType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SummerProject_EPlantType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SummerProject_EPlantType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SummerProject_EPlantType()
{
	if (!Z_Registration_Info_UEnum_EPlantType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlantType.InnerSingleton, Z_Construct_UEnum_SummerProject_EPlantType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlantType.InnerSingleton;
}
// End Enum EPlantType

// Begin ScriptStruct FOrders
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Orders;
class UScriptStruct* FOrders::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Orders.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Orders.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOrders, (UObject*)Z_Construct_UPackage__Script_SummerProject(), TEXT("Orders"));
	}
	return Z_Registration_Info_UScriptStruct_Orders.OuterSingleton;
}
template<> SUMMERPROJECT_API UScriptStruct* StaticStruct<FOrders>()
{
	return FOrders::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOrders_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UDA_Order.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "Category", "Orders" },
		{ "ModuleRelativePath", "UDA_Order.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPortrait_MetaData[] = {
		{ "Category", "Orders" },
		{ "ModuleRelativePath", "UDA_Order.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderName_MetaData[] = {
		{ "Category", "Orders" },
		{ "ModuleRelativePath", "UDA_Order.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ingredients_MetaData[] = {
		{ "Category", "Orders" },
		{ "ModuleRelativePath", "UDA_Order.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterPortrait;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrderName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ingredients_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Ingredients_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Ingredients_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Ingredients;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOrders>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOrders_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrders, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOrders_Statics::NewProp_CharacterPortrait = { "CharacterPortrait", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrders, CharacterPortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPortrait_MetaData), NewProp_CharacterPortrait_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOrders_Statics::NewProp_OrderName = { "OrderName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrders, OrderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderName_MetaData), NewProp_OrderName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOrders_Statics::NewProp_Ingredients_ValueProp = { "Ingredients", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOrders_Statics::NewProp_Ingredients_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOrders_Statics::NewProp_Ingredients_Key_KeyProp = { "Ingredients_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SummerProject_EPlantType, METADATA_PARAMS(0, nullptr) }; // 974260039
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOrders_Statics::NewProp_Ingredients = { "Ingredients", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrders, Ingredients), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ingredients_MetaData), NewProp_Ingredients_MetaData) }; // 974260039
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOrders_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrders_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrders_Statics::NewProp_CharacterPortrait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrders_Statics::NewProp_OrderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrders_Statics::NewProp_Ingredients_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrders_Statics::NewProp_Ingredients_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrders_Statics::NewProp_Ingredients_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrders_Statics::NewProp_Ingredients,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrders_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOrders_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SummerProject,
	nullptr,
	&NewStructOps,
	"Orders",
	Z_Construct_UScriptStruct_FOrders_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrders_Statics::PropPointers),
	sizeof(FOrders),
	alignof(FOrders),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrders_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOrders_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOrders()
{
	if (!Z_Registration_Info_UScriptStruct_Orders.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Orders.InnerSingleton, Z_Construct_UScriptStruct_FOrders_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Orders.InnerSingleton;
}
// End ScriptStruct FOrders

// Begin Class UDA_Order
void UDA_Order::StaticRegisterNativesUDA_Order()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDA_Order);
UClass* Z_Construct_UClass_UDA_Order_NoRegister()
{
	return UDA_Order::StaticClass();
}
struct Z_Construct_UClass_UDA_Order_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UDA_Order.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UDA_Order.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderArray_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "UDA_Order.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrderArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OrderArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDA_Order>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDA_Order_Statics::NewProp_OrderArray_Inner = { "OrderArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrders, METADATA_PARAMS(0, nullptr) }; // 3040083993
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDA_Order_Statics::NewProp_OrderArray = { "OrderArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_Order, OrderArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderArray_MetaData), NewProp_OrderArray_MetaData) }; // 3040083993
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDA_Order_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_Order_Statics::NewProp_OrderArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_Order_Statics::NewProp_OrderArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_Order_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDA_Order_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SummerProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_Order_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDA_Order_Statics::ClassParams = {
	&UDA_Order::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDA_Order_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDA_Order_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_Order_Statics::Class_MetaDataParams), Z_Construct_UClass_UDA_Order_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDA_Order()
{
	if (!Z_Registration_Info_UClass_UDA_Order.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDA_Order.OuterSingleton, Z_Construct_UClass_UDA_Order_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDA_Order.OuterSingleton;
}
template<> SUMMERPROJECT_API UClass* StaticClass<UDA_Order>()
{
	return UDA_Order::StaticClass();
}
UDA_Order::UDA_Order(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDA_Order);
UDA_Order::~UDA_Order() {}
// End Class UDA_Order

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jaymi_Desktop_personal_projects_programs_n_games_Unreal_Engine_SummerProject_Source_SummerProject_UDA_Order_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlantType_StaticEnum, TEXT("EPlantType"), &Z_Registration_Info_UEnum_EPlantType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 974260039U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOrders::StaticStruct, Z_Construct_UScriptStruct_FOrders_Statics::NewStructOps, TEXT("Orders"), &Z_Registration_Info_UScriptStruct_Orders, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOrders), 3040083993U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDA_Order, UDA_Order::StaticClass, TEXT("UDA_Order"), &Z_Registration_Info_UClass_UDA_Order, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDA_Order), 1754491710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jaymi_Desktop_personal_projects_programs_n_games_Unreal_Engine_SummerProject_Source_SummerProject_UDA_Order_h_4186478964(TEXT("/Script/SummerProject"),
	Z_CompiledInDeferFile_FID_Users_jaymi_Desktop_personal_projects_programs_n_games_Unreal_Engine_SummerProject_Source_SummerProject_UDA_Order_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jaymi_Desktop_personal_projects_programs_n_games_Unreal_Engine_SummerProject_Source_SummerProject_UDA_Order_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_jaymi_Desktop_personal_projects_programs_n_games_Unreal_Engine_SummerProject_Source_SummerProject_UDA_Order_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jaymi_Desktop_personal_projects_programs_n_games_Unreal_Engine_SummerProject_Source_SummerProject_UDA_Order_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_jaymi_Desktop_personal_projects_programs_n_games_Unreal_Engine_SummerProject_Source_SummerProject_UDA_Order_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jaymi_Desktop_personal_projects_programs_n_games_Unreal_Engine_SummerProject_Source_SummerProject_UDA_Order_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
