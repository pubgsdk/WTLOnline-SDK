#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_Adjustable_wrench_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Adjustable_wrench.BP_Adjustable_wrench_C
// 0x0000 (0x03E0 - 0x03E0)
class ABP_Adjustable_wrench_C : public AWTLQuestObjectSpawner
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Adjustable_wrench.BP_Adjustable_wrench_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
