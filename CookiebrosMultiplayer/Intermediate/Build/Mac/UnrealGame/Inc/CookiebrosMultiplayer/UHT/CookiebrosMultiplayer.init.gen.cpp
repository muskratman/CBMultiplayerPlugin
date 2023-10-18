// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookiebrosMultiplayer_init() {}
	COOKIEBROSMULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature();
	COOKIEBROSMULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature();
	COOKIEBROSMULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CookiebrosMultiplayer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CookiebrosMultiplayer()
	{
		if (!Z_Registration_Info_UPackage__Script_CookiebrosMultiplayer.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CookiebrosMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CookiebrosMultiplayer",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB2DF98DE,
				0x9B815079,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CookiebrosMultiplayer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CookiebrosMultiplayer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CookiebrosMultiplayer(Z_Construct_UPackage__Script_CookiebrosMultiplayer, TEXT("/Script/CookiebrosMultiplayer"), Z_Registration_Info_UPackage__Script_CookiebrosMultiplayer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB2DF98DE, 0x9B815079));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
