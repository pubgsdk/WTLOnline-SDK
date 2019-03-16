#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_Basic.hpp"
#include "WTLOnline_NavigationSystem_enums.hpp"
#include "WTLOnline_Engine_classes.hpp"
#include "WTLOnline_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NavigationSystem.SupportedAreaData
// 0x0020
struct FSupportedAreaData
{
	struct FString                                     AreaClassName;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                AreaID;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct NavigationSystem.NavCollisionCylinder
// 0x0014
struct FNavCollisionCylinder
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Height;                                                   // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct NavigationSystem.NavCollisionBox
// 0x0018
struct FNavCollisionBox
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x000C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct NavigationSystem.NavGraphNode
// 0x0018
struct FNavGraphNode
{
	class UObject*                                     Owner;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct NavigationSystem.NavigationFilterArea
// 0x0018
struct FNavigationFilterArea
{
	class UClass*                                      AreaClass;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TravelCostOverride;                                       // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnteringCostOverride;                                     // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsExcluded : 1;                                          // 0x0010(0x0001) (CPF_Edit)
	unsigned char                                      bOverrideTravelCost : 1;                                  // 0x0010(0x0001) (CPF_Edit)
	unsigned char                                      bOverrideEnteringCost : 1;                                // 0x0010(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct NavigationSystem.NavigationFilterFlags
// 0x0004
struct FNavigationFilterFlags
{
	unsigned char                                      bNavFlag0 : 1;                                            // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag1 : 1;                                            // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag2 : 1;                                            // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag3 : 1;                                            // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag4 : 1;                                            // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag5 : 1;                                            // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag6 : 1;                                            // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag7 : 1;                                            // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag8 : 1;                                            // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag9 : 1;                                            // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag10 : 1;                                           // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag11 : 1;                                           // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag12 : 1;                                           // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag13 : 1;                                           // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag14 : 1;                                           // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag15 : 1;                                           // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct NavigationSystem.NavGraphEdge
// 0x0018
struct FNavGraphEdge
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
