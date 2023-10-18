// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookiebrosMultiplayer/Public/CookieBrosSessionSubSys.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookieBrosSessionSubSys() {}
// Cross Module References
	COOKIEBROSMULTIPLAYER_API UClass* Z_Construct_UClass_UCookieBrosSessionSubSys();
	COOKIEBROSMULTIPLAYER_API UClass* Z_Construct_UClass_UCookieBrosSessionSubSys_NoRegister();
	COOKIEBROSMULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature();
	COOKIEBROSMULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature();
	COOKIEBROSMULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_CookiebrosMultiplayer();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics
	{
		struct _Script_CookiebrosMultiplayer_eventMultiplayerOnCreateSessionComplete_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_CookiebrosMultiplayer_eventMultiplayerOnCreateSessionComplete_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_CookiebrosMultiplayer_eventMultiplayerOnCreateSessionComplete_Parms), &Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n *///\n//Custom Delegates to bind callback to MultiplayerMenu\n" },
#endif
		{ "ModuleRelativePath", "Public/CookieBrosSessionSubSys.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "//\n//Custom Delegates to bind callback to MultiplayerMenu" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CookiebrosMultiplayer, nullptr, "MultiplayerOnCreateSessionComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::_Script_CookiebrosMultiplayer_eventMultiplayerOnCreateSessionComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::_Script_CookiebrosMultiplayer_eventMultiplayerOnCreateSessionComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMultiplayerOnCreateSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnCreateSessionComplete, bool bWasSuccessful)
{
	struct _Script_CookiebrosMultiplayer_eventMultiplayerOnCreateSessionComplete_Parms
	{
		bool bWasSuccessful;
	};
	_Script_CookiebrosMultiplayer_eventMultiplayerOnCreateSessionComplete_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	MultiplayerOnCreateSessionComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics
	{
		struct _Script_CookiebrosMultiplayer_eventMultiplayerOnStartSessionComplete_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_CookiebrosMultiplayer_eventMultiplayerOnStartSessionComplete_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_CookiebrosMultiplayer_eventMultiplayerOnStartSessionComplete_Parms), &Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CookieBrosSessionSubSys.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CookiebrosMultiplayer, nullptr, "MultiplayerOnStartSessionComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::_Script_CookiebrosMultiplayer_eventMultiplayerOnStartSessionComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::_Script_CookiebrosMultiplayer_eventMultiplayerOnStartSessionComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMultiplayerOnStartSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnStartSessionComplete, bool bWasSuccessful)
{
	struct _Script_CookiebrosMultiplayer_eventMultiplayerOnStartSessionComplete_Parms
	{
		bool bWasSuccessful;
	};
	_Script_CookiebrosMultiplayer_eventMultiplayerOnStartSessionComplete_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	MultiplayerOnStartSessionComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics
	{
		struct _Script_CookiebrosMultiplayer_eventMultiplayerOnDestroySessionComplete_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_CookiebrosMultiplayer_eventMultiplayerOnDestroySessionComplete_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_CookiebrosMultiplayer_eventMultiplayerOnDestroySessionComplete_Parms), &Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CookieBrosSessionSubSys.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CookiebrosMultiplayer, nullptr, "MultiplayerOnDestroySessionComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::_Script_CookiebrosMultiplayer_eventMultiplayerOnDestroySessionComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::_Script_CookiebrosMultiplayer_eventMultiplayerOnDestroySessionComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMultiplayerOnDestroySessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnDestroySessionComplete, bool bWasSuccessful)
{
	struct _Script_CookiebrosMultiplayer_eventMultiplayerOnDestroySessionComplete_Parms
	{
		bool bWasSuccessful;
	};
	_Script_CookiebrosMultiplayer_eventMultiplayerOnDestroySessionComplete_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	MultiplayerOnDestroySessionComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UCookieBrosSessionSubSys::StaticRegisterNativesUCookieBrosSessionSubSys()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCookieBrosSessionSubSys);
	UClass* Z_Construct_UClass_UCookieBrosSessionSubSys_NoRegister()
	{
		return UCookieBrosSessionSubSys::StaticClass();
	}
	struct Z_Construct_UClass_UCookieBrosSessionSubSys_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCookieBrosSessionSubSys_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CookiebrosMultiplayer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookieBrosSessionSubSys_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookieBrosSessionSubSys_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CookieBrosSessionSubSys.h" },
		{ "ModuleRelativePath", "Public/CookieBrosSessionSubSys.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCookieBrosSessionSubSys_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookieBrosSessionSubSys>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCookieBrosSessionSubSys_Statics::ClassParams = {
		&UCookieBrosSessionSubSys::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCookieBrosSessionSubSys_Statics::Class_MetaDataParams), Z_Construct_UClass_UCookieBrosSessionSubSys_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCookieBrosSessionSubSys()
	{
		if (!Z_Registration_Info_UClass_UCookieBrosSessionSubSys.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCookieBrosSessionSubSys.OuterSingleton, Z_Construct_UClass_UCookieBrosSessionSubSys_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCookieBrosSessionSubSys.OuterSingleton;
	}
	template<> COOKIEBROSMULTIPLAYER_API UClass* StaticClass<UCookieBrosSessionSubSys>()
	{
		return UCookieBrosSessionSubSys::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCookieBrosSessionSubSys);
	UCookieBrosSessionSubSys::~UCookieBrosSessionSubSys() {}
	struct Z_CompiledInDeferFile_FID_valerijpecenin_Documents_Unreal_Projects_MenuSystem_Plugins_CookiebrosMultiplayer_Source_CookiebrosMultiplayer_Public_CookieBrosSessionSubSys_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_valerijpecenin_Documents_Unreal_Projects_MenuSystem_Plugins_CookiebrosMultiplayer_Source_CookiebrosMultiplayer_Public_CookieBrosSessionSubSys_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCookieBrosSessionSubSys, UCookieBrosSessionSubSys::StaticClass, TEXT("UCookieBrosSessionSubSys"), &Z_Registration_Info_UClass_UCookieBrosSessionSubSys, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCookieBrosSessionSubSys), 502958513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_valerijpecenin_Documents_Unreal_Projects_MenuSystem_Plugins_CookiebrosMultiplayer_Source_CookiebrosMultiplayer_Public_CookieBrosSessionSubSys_h_2160994167(TEXT("/Script/CookiebrosMultiplayer"),
		Z_CompiledInDeferFile_FID_valerijpecenin_Documents_Unreal_Projects_MenuSystem_Plugins_CookiebrosMultiplayer_Source_CookiebrosMultiplayer_Public_CookieBrosSessionSubSys_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_valerijpecenin_Documents_Unreal_Projects_MenuSystem_Plugins_CookiebrosMultiplayer_Source_CookiebrosMultiplayer_Public_CookieBrosSessionSubSys_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
