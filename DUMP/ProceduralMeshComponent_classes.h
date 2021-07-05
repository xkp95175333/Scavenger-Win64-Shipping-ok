// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetProceduralMeshLibrary : UBlueprintFunctionLibrary {

	void SliceProceduralMesh(struct UProceduralMeshComponent* InProcMesh, struct FVector PlanePosition, struct FVector PlaneNormal, bool bCreateOtherHalf, struct UProceduralMeshComponent* OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption CapOption, struct UMaterialInterface* CapMaterial); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void GetSectionFromStaticMesh(struct UStaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UVs, struct TArray<struct FProcMeshTangent> Tangents); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void GetSectionFromProceduralMesh(struct UProceduralMeshComponent* InProcMesh, int32_t SectionIndex, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UVs, struct TArray<struct FProcMeshTangent> Tangents); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void GenerateBoxMesh(struct FVector BoxRadius, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UVs, struct TArray<struct FProcMeshTangent> Tangents); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void CreateGridMeshWelded(int32_t NumX, int32_t NumY, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Vertices, struct TArray<struct FVector2D> UVs, float GridSpacing); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, struct TArray<int32_t> Triangles); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void CreateGridMeshSplit(int32_t NumX, int32_t NumY, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Vertices, struct TArray<struct FVector2D> UVs, struct TArray<struct FVector2D> UV1s, float GridSpacing); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void CopyProceduralMeshFromStaticMeshComponent(struct UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, struct UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ConvertQuadToTriangles(struct TArray<int32_t> Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void CalculateTangentsForMesh(struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector2D> UVs, struct TArray<struct FVector> Normals, struct TArray<struct FProcMeshTangent> Tangents); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class ProceduralMeshComponent.ProceduralMeshComponent
// Size: 0x4e0 (Inherited: 0x470)
struct UProceduralMeshComponent : UMeshComponent {
	char pad_470[0x8]; // 0x470(0x08)
	bool bUseComplexAsSimpleCollision; // 0x478(0x01)
	bool bUseAsyncCooking; // 0x479(0x01)
	char pad_47A[0x6]; // 0x47a(0x06)
	struct UBodySetup* ProcMeshBodySetup; // 0x480(0x08)
	struct TArray<struct FProcMeshSection> ProcMeshSections; // 0x488(0x10)
	struct TArray<struct FKConvexElem> CollisionConvexElems; // 0x498(0x10)
	struct FBoxSphereBounds LocalBounds; // 0x4a8(0x1c)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct TArray<struct UBodySetup*> AsyncBodySetupQueue; // 0x4c8(0x10)
	char pad_4D8[0x8]; // 0x4d8(0x08)

	void UpdateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector> Vertices, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UV0, struct TArray<struct FVector2D> UV1, struct TArray<struct FVector2D> UV2, struct TArray<struct FVector2D> UV3, struct TArray<struct FLinearColor> VertexColors, struct TArray<struct FProcMeshTangent> Tangents); // Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void UpdateMeshSection(int32_t SectionIndex, struct TArray<struct FVector> Vertices, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UV0, struct TArray<struct FColor> VertexColors, struct TArray<struct FProcMeshTangent> Tangents); // Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility); // Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool IsMeshSectionVisible(int32_t SectionIndex); // Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	int32_t GetNumSections(); // Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void CreateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UV0, struct TArray<struct FVector2D> UV1, struct TArray<struct FVector2D> UV2, struct TArray<struct FVector2D> UV3, struct TArray<struct FLinearColor> VertexColors, struct TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision); // Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void CreateMeshSection(int32_t SectionIndex, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UV0, struct TArray<struct FColor> VertexColors, struct TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision); // Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClearMeshSection(int32_t SectionIndex); // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClearCollisionConvexMeshes(); // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClearAllMeshSections(); // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void AddCollisionConvexMesh(struct TArray<struct FVector> ConvexVerts); // Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

