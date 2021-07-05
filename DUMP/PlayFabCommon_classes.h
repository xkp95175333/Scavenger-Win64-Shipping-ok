// Class PlayFabCommon.PlayFabAuthenticationContext
// Size: 0x68 (Inherited: 0x28)
struct UPlayFabAuthenticationContext : UObject {
	struct FString ClientSessionTicket; // 0x28(0x10)
	struct FString EntityToken; // 0x38(0x10)
	struct FString DeveloperSecretKey; // 0x48(0x10)
	struct FString PlayFabId; // 0x58(0x10)

	void SetPlayFabId(struct FString InKey); // Function PlayFabCommon.PlayFabAuthenticationContext.SetPlayFabId // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetEntityToken(struct FString InToken); // Function PlayFabCommon.PlayFabAuthenticationContext.SetEntityToken // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetDeveloperSecretKey(struct FString InKey); // Function PlayFabCommon.PlayFabAuthenticationContext.SetDeveloperSecretKey // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetClientSessionTicket(struct FString InTicket); // Function PlayFabCommon.PlayFabAuthenticationContext.SetClientSessionTicket // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FString GetPlayFabId(); // Function PlayFabCommon.PlayFabAuthenticationContext.GetPlayFabId // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FString GetEntityToken(); // Function PlayFabCommon.PlayFabAuthenticationContext.GetEntityToken // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FString GetDeveloperSecretKey(); // Function PlayFabCommon.PlayFabAuthenticationContext.GetDeveloperSecretKey // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FString GetClientSessionTicket(); // Function PlayFabCommon.PlayFabAuthenticationContext.GetClientSessionTicket // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	void ForgetAllCredentials(); // Function PlayFabCommon.PlayFabAuthenticationContext.ForgetAllCredentials // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClientAdminSecurityCheck(); // Function PlayFabCommon.PlayFabAuthenticationContext.ClientAdminSecurityCheck // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xffff8008e4a10000
};

// Class PlayFabCommon.PlayFabRuntimeSettings
// Size: 0x58 (Inherited: 0x28)
struct UPlayFabRuntimeSettings : UObject {
	struct FString ProductionEnvironmentURL; // 0x28(0x10)
	struct FString TitleId; // 0x38(0x10)
	struct FString DeveloperSecretKey; // 0x48(0x10)
};

