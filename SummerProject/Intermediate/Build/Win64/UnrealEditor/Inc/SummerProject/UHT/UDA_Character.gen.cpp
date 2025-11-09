// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SummerProject/UDA_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUDA_Character() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
SUMMERPROJECT_API UClass* Z_Construct_UClass_UDA_Character();
SUMMERPROJECT_API UClass* Z_Construct_UClass_UDA_Character_NoRegister();
SUMMERPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterStruct();
UPackage* Z_Construct_UPackage__Script_SummerProject();
// End Cross Module References

// Begin ScriptStruct FCharacterStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterStruct;
class UScriptStruct* FCharacterStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterStruct, (UObject*)Z_Construct_UPackage__Script_SummerProject(), TEXT("CharacterStruct"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterStruct.OuterSingleton;
}
template<> SUMMERPROJECT_API UScriptStruct* StaticStruct<FCharacterStruct>()
{
	return FCharacterStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UDA_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "Category", "CharacterStruct" },
		{ "ModuleRelativePath", "UDA_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPortrait_MetaData[] = {
		{ "Category", "CharacterStruct" },
		{ "ModuleRelativePath", "UDA_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendshipLevel_MetaData[] = {
		{ "Category", "CharacterStruct" },
		{ "ModuleRelativePath", "UDA_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterPortrait;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FriendshipLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStruct, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_CharacterPortrait = { "CharacterPortrait", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStruct, CharacterPortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPortrait_MetaData), NewProp_CharacterPortrait_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_FriendshipLevel = { "FriendshipLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStruct, FriendshipLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendshipLevel_MetaData), NewProp_FriendshipLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_CharacterPortrait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewProp_FriendshipLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SummerProject,
	nullptr,
	&NewStructOps,
	"CharacterStruct",
	Z_Construct_UScriptStruct_FCharacterStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStruct_Statics::PropPointers),
	sizeof(FCharacterStruct),
	alignof(FCharacterStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterStruct.InnerSingleton, Z_Construct_UScriptStruct_FCharacterStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterStruct.InnerSingleton;
}
// End ScriptStruct FCharacterStruct

// Begin Class UDA_Character
void UDA_Character::StaticRegisterNativesUDA_Character()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDA_Character);
UClass* Z_Construct_UClass_UDA_Character_NoRegister()
{
	return UDA_Character::StaticClass();
}
struct Z_Construct_UClass_UDA_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UDA_Character.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UDA_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "UDA_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDA_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDA_Character_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_Character, Character), Z_Construct_UScriptStruct_FCharacterStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) }; // 1743182586
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDA_Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_Character_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDA_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SummerProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDA_Character_Statics::ClassParams = {
	&UDA_Character::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDA_Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDA_Character_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_UDA_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDA_Character()
{
	if (!Z_Registration_Info_UClass_UDA_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDA_Character.OuterSingleton, Z_Construct_UClass_UDA_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDA_Character.OuterSingleton;
}
template<> SUMMERPROJECT_API UClass* StaticClass<UDA_Character>()
{
	return UDA_Character::StaticClass();
}
UDA_Character::UDA_Character(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDA_Character);
UDA_Character::~UDA_Character() {}
// End Class UDA_Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jaymi_UnrealEngine_Unreal_Engine_Herbalist_Project_UE5_SummerProject_Source_SummerProject_UDA_Character_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharacterStruct::StaticStruct, Z_Construct_UScriptStruct_FCharacterStruct_Statics::NewStructOps, TEXT("CharacterStruct"), &Z_Registration_Info_UScriptStruct_CharacterStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterStruct), 1743182586U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDA_Character, UDA_Character::StaticClass, TEXT("UDA_Character"), &Z_Registration_Info_UClass_UDA_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDA_Character), 963981786U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jaymi_UnrealEngine_Unreal_Engine_Herbalist_Project_UE5_SummerProject_Source_SummerProject_UDA_Character_h_2757075779(TEXT("/Script/SummerProject"),
	Z_CompiledInDeferFile_FID_Users_jaymi_UnrealEngine_Unreal_Engine_Herbalist_Project_UE5_SummerProject_Source_SummerProject_UDA_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jaymi_UnrealEngine_Unreal_Engine_Herbalist_Project_UE5_SummerProject_Source_SummerProject_UDA_Character_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_jaymi_UnrealEngine_Unreal_Engine_Herbalist_Project_UE5_SummerProject_Source_SummerProject_UDA_Character_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jaymi_UnrealEngine_Unreal_Engine_Herbalist_Project_UE5_SummerProject_Source_SummerProject_UDA_Character_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
