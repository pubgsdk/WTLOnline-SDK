#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_PDA_Fraction_RanksTable_Item_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_PDA_Fraction_RanksTable_Item.UI_PDA_Fraction_RanksTable_Item_C
// 0x0000 (0x0228 - 0x0228)
class UUI_PDA_Fraction_RanksTable_Item_C : public UWTLPDAFractionRanksTableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_PDA_Fraction_RanksTable_Item.UI_PDA_Fraction_RanksTable_Item_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
