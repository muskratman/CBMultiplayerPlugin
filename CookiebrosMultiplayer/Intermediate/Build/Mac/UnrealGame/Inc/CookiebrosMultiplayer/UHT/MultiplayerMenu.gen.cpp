// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookiebrosMultiplayer/Public/MultiplayerMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerMenu() {}
// Cross Module References
	COOKIEBROSMULTIPLAYER_API UClass* Z_Construct_UClass_UMultiplayerMenu();
	COOKIEBROSMULTIPLAYER_API UClass* Z_Construct_UClass_UMultiplayerMenu_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CookiebrosMultiplayer();
// End Cross Module References
	DEFINE_FUNCTION(UMultiplayerMenu::execJoinButtClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinButtClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayerMenu::execHostButtClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HostButtClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayerMenu::execOnDestroySession)
	{
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDestroySession(Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayerMenu::execOnStartSession)
	{
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartSession(Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayerMenu::execOnCreateSession)
	{
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCreateSession(Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayerMenu::execMenuSetup)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPublicConnections);
		P_GET_PROPERTY(FStrProperty,Z_Param_TypeOfMatch);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UWorld>,Z_Param_Lobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MenuSetup(Z_Param_NumberOfPublicConnections,Z_Param_TypeOfMatch,Z_Param_Lobby);
		P_NATIVE_END;
	}
	void UMultiplayerMenu::StaticRegisterNativesUMultiplayerMenu()
	{
		UClass* Class = UMultiplayerMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HostButtClicked", &UMultiplayerMenu::execHostButtClicked },
			{ "JoinButtClicked", &UMultiplayerMenu::execJoinButtClicked },
			{ "MenuSetup", &UMultiplayerMenu::execMenuSetup },
			{ "OnCreateSession", &UMultiplayerMenu::execOnCreateSession },
			{ "OnDestroySession", &UMultiplayerMenu::execOnDestroySession },
			{ "OnStartSession", &UMultiplayerMenu::execOnStartSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMultiplayerMenu_HostButtClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayerMenu_HostButtClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerMenu_HostButtClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerMenu, nullptr, "HostButtClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerMenu_HostButtClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerMenu_HostButtClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMultiplayerMenu_HostButtClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerMenu_HostButtClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayerMenu_JoinButtClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayerMenu_JoinButtClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerMenu_JoinButtClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerMenu, nullptr, "JoinButtClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerMenu_JoinButtClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerMenu_JoinButtClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMultiplayerMenu_JoinButtClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerMenu_JoinButtClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayerMenu_MenuSetup_Statics
	{
		struct MultiplayerMenu_eventMenuSetup_Parms
		{
			int32 NumberOfPublicConnections;
			FString TypeOfMatch;
			TSoftObjectPtr<UWorld> Lobby;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPublicConnections;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TypeOfMatch;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Lobby;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMultiplayerMenu_MenuSetup_Statics::NewProp_NumberOfPublicConnections = { "NumberOfPublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerMenu_eventMenuSetup_Parms, NumberOfPublicConnections), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiplayerMenu_MenuSetup_Statics::NewProp_TypeOfMatch = { "TypeOfMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerMenu_eventMenuSetup_Parms, TypeOfMatch), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UMultiplayerMenu_MenuSetup_Statics::NewProp_Lobby = { "Lobby", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerMenu_eventMenuSetup_Parms, Lobby), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerMenu_MenuSetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerMenu_MenuSetup_Statics::NewProp_NumberOfPublicConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerMenu_MenuSetup_Statics::NewProp_TypeOfMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerMenu_MenuSetup_Statics::NewProp_Lobby,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayerMenu_MenuSetup_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_Lobby", "None" },
		{ "CPP_Default_NumberOfPublicConnections", "4" },
		{ "CPP_Default_TypeOfMatch", "FreeForAll" },
		{ "ModuleRelativePath", "Public/MultiplayerMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerMenu_MenuSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerMenu, nullptr, "MenuSetup", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerMenu_MenuSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerMenu_MenuSetup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerMenu_MenuSetup_Statics::MultiplayerMenu_eventMenuSetup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerMenu_MenuSetup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerMenu_MenuSetup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerMenu_MenuSetup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMultiplayerMenu_MenuSetup_Statics::MultiplayerMenu_eventMenuSetup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMultiplayerMenu_MenuSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerMenu_MenuSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayerMenu_OnCreateSession_Statics
	{
		struct MultiplayerMenu_eventOnCreateSession_Parms
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
	void Z_Construct_UFunction_UMultiplayerMenu_OnCreateSession_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((MultiplayerMenu_eventOnCreateSession_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiplayerMenu_OnCreateSession_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerMenu_eventOnCreateSession_Parms), &Z_Construct_UFunction_UMultiplayerMenu_OnCreateSession_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerMenu_OnCreateSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerMenu_OnCreateSession_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayerMenu_OnCreateSession_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//\n//Callbacks for the custom Delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/MultiplayerMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callbacks for the custom Delegates" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerMenu_OnCreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerMenu, nullptr, "OnCreateSession", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerMenu_OnCreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerMenu_OnCreateSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerMenu_OnCreateSession_Statics::MultiplayerMenu_eventOnCreateSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerMenu_OnCreateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerMenu_OnCreateSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerMenu_OnCreateSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMultiplayerMenu_OnCreateSession_Statics::MultiplayerMenu_eventOnCreateSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMultiplayerMenu_OnCreateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerMenu_OnCreateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayerMenu_OnDestroySession_Statics
	{
		struct MultiplayerMenu_eventOnDestroySession_Parms
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
	void Z_Construct_UFunction_UMultiplayerMenu_OnDestroySession_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((MultiplayerMenu_eventOnDestroySession_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiplayerMenu_OnDestroySession_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerMenu_eventOnDestroySession_Parms), &Z_Construct_UFunction_UMultiplayerMenu_OnDestroySession_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerMenu_OnDestroySession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerMenu_OnDestroySession_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayerMenu_OnDestroySession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerMenu_OnDestroySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerMenu, nullptr, "OnDestroySession", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerMenu_OnDestroySession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerMenu_OnDestroySession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerMenu_OnDestroySession_Statics::MultiplayerMenu_eventOnDestroySession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerMenu_OnDestroySession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerMenu_OnDestroySession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerMenu_OnDestroySession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMultiplayerMenu_OnDestroySession_Statics::MultiplayerMenu_eventOnDestroySession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMultiplayerMenu_OnDestroySession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerMenu_OnDestroySession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayerMenu_OnStartSession_Statics
	{
		struct MultiplayerMenu_eventOnStartSession_Parms
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
	void Z_Construct_UFunction_UMultiplayerMenu_OnStartSession_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((MultiplayerMenu_eventOnStartSession_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiplayerMenu_OnStartSession_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerMenu_eventOnStartSession_Parms), &Z_Construct_UFunction_UMultiplayerMenu_OnStartSession_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerMenu_OnStartSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerMenu_OnStartSession_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayerMenu_OnStartSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerMenu_OnStartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerMenu, nullptr, "OnStartSession", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerMenu_OnStartSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerMenu_OnStartSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerMenu_OnStartSession_Statics::MultiplayerMenu_eventOnStartSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerMenu_OnStartSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerMenu_OnStartSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerMenu_OnStartSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMultiplayerMenu_OnStartSession_Statics::MultiplayerMenu_eventOnStartSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMultiplayerMenu_OnStartSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerMenu_OnStartSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiplayerMenu);
	UClass* Z_Construct_UClass_UMultiplayerMenu_NoRegister()
	{
		return UMultiplayerMenu::StaticClass();
	}
	struct Z_Construct_UClass_UMultiplayerMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostButt_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HostButt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoinButt_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JoinButt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiplayerMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CookiebrosMultiplayer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerMenu_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMultiplayerMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiplayerMenu_HostButtClicked, "HostButtClicked" }, // 3993341538
		{ &Z_Construct_UFunction_UMultiplayerMenu_JoinButtClicked, "JoinButtClicked" }, // 1518808889
		{ &Z_Construct_UFunction_UMultiplayerMenu_MenuSetup, "MenuSetup" }, // 2390046660
		{ &Z_Construct_UFunction_UMultiplayerMenu_OnCreateSession, "OnCreateSession" }, // 37173523
		{ &Z_Construct_UFunction_UMultiplayerMenu_OnDestroySession, "OnDestroySession" }, // 4234839465
		{ &Z_Construct_UFunction_UMultiplayerMenu_OnStartSession, "OnStartSession" }, // 1969148590
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerMenu_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayerMenu_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MultiplayerMenu.h" },
		{ "ModuleRelativePath", "Public/MultiplayerMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayerMenu_Statics::NewProp_HostButt_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMultiplayerMenu_Statics::NewProp_HostButt = { "HostButt", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiplayerMenu, HostButt), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerMenu_Statics::NewProp_HostButt_MetaData), Z_Construct_UClass_UMultiplayerMenu_Statics::NewProp_HostButt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayerMenu_Statics::NewProp_JoinButt_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMultiplayerMenu_Statics::NewProp_JoinButt = { "JoinButt", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiplayerMenu, JoinButt), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerMenu_Statics::NewProp_JoinButt_MetaData), Z_Construct_UClass_UMultiplayerMenu_Statics::NewProp_JoinButt_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiplayerMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayerMenu_Statics::NewProp_HostButt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayerMenu_Statics::NewProp_JoinButt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiplayerMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiplayerMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiplayerMenu_Statics::ClassParams = {
		&UMultiplayerMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMultiplayerMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultiplayerMenu_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerMenu_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMultiplayerMenu()
	{
		if (!Z_Registration_Info_UClass_UMultiplayerMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiplayerMenu.OuterSingleton, Z_Construct_UClass_UMultiplayerMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiplayerMenu.OuterSingleton;
	}
	template<> COOKIEBROSMULTIPLAYER_API UClass* StaticClass<UMultiplayerMenu>()
	{
		return UMultiplayerMenu::StaticClass();
	}
	UMultiplayerMenu::UMultiplayerMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiplayerMenu);
	UMultiplayerMenu::~UMultiplayerMenu() {}
	struct Z_CompiledInDeferFile_FID_valerijpecenin_Documents_Unreal_Projects_MenuSystem_Plugins_CookiebrosMultiplayer_Source_CookiebrosMultiplayer_Public_MultiplayerMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_valerijpecenin_Documents_Unreal_Projects_MenuSystem_Plugins_CookiebrosMultiplayer_Source_CookiebrosMultiplayer_Public_MultiplayerMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMultiplayerMenu, UMultiplayerMenu::StaticClass, TEXT("UMultiplayerMenu"), &Z_Registration_Info_UClass_UMultiplayerMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiplayerMenu), 837887645U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_valerijpecenin_Documents_Unreal_Projects_MenuSystem_Plugins_CookiebrosMultiplayer_Source_CookiebrosMultiplayer_Public_MultiplayerMenu_h_2356265628(TEXT("/Script/CookiebrosMultiplayer"),
		Z_CompiledInDeferFile_FID_valerijpecenin_Documents_Unreal_Projects_MenuSystem_Plugins_CookiebrosMultiplayer_Source_CookiebrosMultiplayer_Public_MultiplayerMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_valerijpecenin_Documents_Unreal_Projects_MenuSystem_Plugins_CookiebrosMultiplayer_Source_CookiebrosMultiplayer_Public_MultiplayerMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
