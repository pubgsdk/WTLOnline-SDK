// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_ClothingSystemRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InStiffness                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UClothingSimulationInteractorNv::SetAnimDriveSpringStiffness(float InStiffness)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness"));

	struct
	{
		float                          InStiffness;
	} params;

	params.InStiffness = InStiffness;

	UObject::ProcessEvent(fn, &params);
}


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InStiffness                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness"));

	struct
	{
		float                          InStiffness;
	} params;

	params.InStiffness = InStiffness;

	UObject::ProcessEvent(fn, &params);
}


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableGravityOverride
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 InVector                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UClothingSimulationInteractorNv::EnableGravityOverride(const struct FVector& InVector)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableGravityOverride"));

	struct
	{
		struct FVector                 InVector;
	} params;

	params.InVector = InVector;

	UObject::ProcessEvent(fn, &params);
}


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.DisableGravityOverride
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UClothingSimulationInteractorNv::DisableGravityOverride()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.DisableGravityOverride"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
