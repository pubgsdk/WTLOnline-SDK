#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_DefaultWeaponPickup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DefaultWeaponPickup.BP_DefaultWeaponPickup_C
// 0x0000 (0x0450 - 0x0450)
class ABP_DefaultWeaponPickup_C : public AWTLWeaponPickup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DefaultWeaponPickup.BP_DefaultWeaponPickup_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
