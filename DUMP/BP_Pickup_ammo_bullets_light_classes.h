// BlueprintGeneratedClass BP_Pickup_ammo_bullets_light.BP_Pickup_ammo_bullets_light_C
// Size: 0x5e8 (Inherited: 0x5d8)
struct ABP_Pickup_ammo_bullets_light_C : AS_ItemPickup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d8(0x08)
	struct UParticleSystemComponent* SpawnFX; // 0x5e0(0x08)

	void ReceiveBeginPlay(); // Function BP_Pickup_ammo_bullets_light.BP_Pickup_ammo_bullets_light_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Pending Destruction(); // Function BP_Pickup_ammo_bullets_light.BP_Pickup_ammo_bullets_light_C.Pending Destruction // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_Pickup_ammo_bullets_light(int32_t EntryPoint); // Function BP_Pickup_ammo_bullets_light.BP_Pickup_ammo_bullets_light_C.ExecuteUbergraph_BP_Pickup_ammo_bullets_light // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

