// BlueprintGeneratedClass GC_DamageType_Electricity.GC_DamageType_Electricity_C
// Size: 0x538 (Inherited: 0x530)
struct AGC_DamageType_Electricity_C : AGC_StatusEffect_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)

	void Get Camera Data(struct AActor* Target, struct FVector Camera Position, struct FRotator Camera Rotation, float Camera FOV, float Camera Aspect Ratio, struct APlayerCameraManager* Camera); // Function GC_DamageType_Electricity.GC_DamageType_Electricity_C.Get Camera Data // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_DamageType_Electricity.GC_DamageType_Electricity_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function GC_DamageType_Electricity.GC_DamageType_Electricity_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GC_DamageType_Electricity(int32_t EntryPoint); // Function GC_DamageType_Electricity.GC_DamageType_Electricity_C.ExecuteUbergraph_GC_DamageType_Electricity // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

