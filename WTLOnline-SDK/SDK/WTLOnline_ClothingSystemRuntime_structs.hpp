#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_Basic.hpp"
#include "WTLOnline_ClothingSystemRuntime_enums.hpp"
#include "WTLOnline_CoreUObject_classes.hpp"
#include "WTLOnline_ClothingSystemRuntimeInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ClothingSystemRuntime.ClothConstraintSetup
// 0x0010
struct FClothConstraintSetup
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StiffnessMultiplier;                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StretchLimit;                                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CompressionLimit;                                         // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntime.ClothConfig
// 0x00D4
struct FClothConfig
{
	EClothingWindMethod                                WindMethod;                                               // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FClothConstraintSetup                       VerticalConstraintConfig;                                 // 0x0004(0x0010) (CPF_Edit)
	struct FClothConstraintSetup                       HorizontalConstraintConfig;                               // 0x0014(0x0010) (CPF_Edit)
	struct FClothConstraintSetup                       BendConstraintConfig;                                     // 0x0024(0x0010) (CPF_Edit)
	struct FClothConstraintSetup                       ShearConstraintConfig;                                    // 0x0034(0x0010) (CPF_Edit)
	float                                              SelfCollisionRadius;                                      // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SelfCollisionStiffness;                                   // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SelfCollisionCullScale;                                   // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Damping;                                                  // 0x0050(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Friction;                                                 // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WindDragCoefficient;                                      // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WindLiftCoefficient;                                      // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LinearDrag;                                               // 0x0068(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     AngularDrag;                                              // 0x0074(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LinearInertiaScale;                                       // 0x0080(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     AngularInertiaScale;                                      // 0x008C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     CentrifugalInertiaScale;                                  // 0x0098(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SolverFrequency;                                          // 0x00A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StiffnessFrequency;                                       // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GravityScale;                                             // 0x00AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     GravityOverride;                                          // 0x00B0(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseGravityOverride;                                      // 0x00BC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	float                                              TetherStiffness;                                          // 0x00C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TetherLimit;                                              // 0x00C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x00C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimDriveSpringStiffness;                                 // 0x00CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimDriveDamperStiffness;                                 // 0x00D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntime.ClothVertBoneData
// 0x0034
struct FClothVertBoneData
{
	int                                                NumInfluences;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           BoneIndices[0x8];                                         // 0x0004(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BoneWeights[0x8];                                         // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntime.ClothPhysicalMeshData
// 0x00A8
struct FClothPhysicalMeshData
{
	TArray<struct FVector>                             Vertices;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<uint32_t>                                   Indices;                                                  // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<float>                                      MaxDistances;                                             // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<float>                                      BackstopDistances;                                        // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<float>                                      BackstopRadiuses;                                         // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<float>                                      AnimDriveMultipliers;                                     // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<float>                                      InverseMasses;                                            // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FClothVertBoneData>                  BoneData;                                                 // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                MaxBoneWeights;                                           // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumFixedVerts;                                            // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<uint32_t>                                   SelfCollisionIndices;                                     // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct ClothingSystemRuntime.ClothLODData
// 0x00F8
struct FClothLODData
{
	struct FClothPhysicalMeshData                      PhysicalMeshData;                                         // 0x0000(0x00A8) (CPF_Edit)
	struct FClothCollisionData                         CollisionData;                                            // 0x00A8(0x0030) (CPF_Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x00D8(0x0020) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntime.ClothParameterMask_PhysMesh
// 0x0030
struct FClothParameterMask_PhysMesh
{
	struct FName                                       MaskName;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EMaskTarget_PhysMesh                               CurrentTarget;                                            // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              MaxValue;                                                 // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinValue;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<float>                                      Values;                                                   // 0x0018(0x0010) (CPF_ZeroConstructor)
	bool                                               bEnabled;                                                 // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
