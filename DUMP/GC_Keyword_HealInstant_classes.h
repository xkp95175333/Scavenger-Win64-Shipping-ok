// BlueprintGeneratedClass GC_Keyword_HealInstant.GC_Keyword_HealInstant_C
// Size: 0x540 (Inherited: 0x538)
struct AGC_Keyword_HealInstant_C : AGC_Keyword_HealDuration_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)

	void ReceiveBeginPlay(); // Function GC_Keyword_HealInstant.GC_Keyword_HealInstant_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Keyword_HealInstant.GC_Keyword_HealInstant_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GC_Keyword_HealInstant(int32_t EntryPoint); // Function GC_Keyword_HealInstant.GC_Keyword_HealInstant_C.ExecuteUbergraph_GC_Keyword_HealInstant // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

