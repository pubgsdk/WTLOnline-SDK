#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_ControllerStrayDogChild_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ControllerStrayDogChild.BP_ControllerStrayDogChild_C
// 0x0017 (0x04F8 - 0x04E1)
class ABP_ControllerStrayDogChild_C : public ABP_MonsterPawnAiControllerBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAIPerceptionComponent*                      AIPerception;                                             // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ControllerStrayDogChild.BP_ControllerStrayDogChild_C"));
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__AIPerception_0_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void ExecuteUbergraph_BP_ControllerStrayDogChild(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
