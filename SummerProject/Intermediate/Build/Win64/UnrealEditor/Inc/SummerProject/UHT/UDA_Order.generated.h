// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UDA_Order.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUMMERPROJECT_UDA_Order_generated_h
#error "UDA_Order.generated.h already included, missing '#pragma once' in UDA_Order.h"
#endif
#define SUMMERPROJECT_UDA_Order_generated_h

#define FID_Users_jaymi_Desktop_personal_projects_programs_n_games_Unreal_Engine_SummerProject_Source_SummerProject_UDA_Order_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOrders_Statics; \
	SUMMERPROJECT_API static class UScriptStruct* StaticStruct();


template<> SUMMERPROJECT_API UScriptStruct* StaticStruct<struct FOrders>();

#define FID_Users_jaymi_Desktop_personal_projects_programs_n_games_Unreal_Engine_SummerProject_Source_SummerProject_UDA_Order_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDA_Order(); \
	friend struct Z_Construct_UClass_UDA_Order_Statics; \
public: \
	DECLARE_CLASS(UDA_Order, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SummerProject"), NO_API) \
	DECLARE_SERIALIZER(UDA_Order)


#define FID_Users_jaymi_Desktop_personal_projects_programs_n_games_Unreal_Engine_SummerProject_Source_SummerProject_UDA_Order_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDA_Order(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDA_Order(UDA_Order&&); \
	UDA_Order(const UDA_Order&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDA_Order); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDA_Order); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDA_Order) \
	NO_API virtual ~UDA_Order();


#define FID_Users_jaymi_Desktop_personal_projects_programs_n_games_Unreal_Engine_SummerProject_Source_SummerProject_UDA_Order_h_39_PROLOG
#define FID_Users_jaymi_Desktop_personal_projects_programs_n_games_Unreal_Engine_SummerProject_Source_SummerProject_UDA_Order_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jaymi_Desktop_personal_projects_programs_n_games_Unreal_Engine_SummerProject_Source_SummerProject_UDA_Order_h_42_INCLASS_NO_PURE_DECLS \
	FID_Users_jaymi_Desktop_personal_projects_programs_n_games_Unreal_Engine_SummerProject_Source_SummerProject_UDA_Order_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUMMERPROJECT_API UClass* StaticClass<class UDA_Order>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jaymi_Desktop_personal_projects_programs_n_games_Unreal_Engine_SummerProject_Source_SummerProject_UDA_Order_h


#define FOREACH_ENUM_EPLANTTYPE(op) \
	op(EPlantType::None) \
	op(EPlantType::Chamomile) \
	op(EPlantType::Ginger) \
	op(EPlantType::Ginko) 

enum class EPlantType : uint8;
template<> struct TIsUEnumClass<EPlantType> { enum { Value = true }; };
template<> SUMMERPROJECT_API UEnum* StaticEnum<EPlantType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
