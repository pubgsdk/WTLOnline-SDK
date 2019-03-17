#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_EyeTracker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EyeTracker.EyeTrackerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EyeTracker.EyeTrackerFunctionLibrary"));
		return ptr;
	}


	static void SetEyeTrackedPlayer(class APlayerController* PlayerController);
	static bool IsStereoGazeDataAvailable();
	static bool IsEyeTrackerConnected();
	static bool GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData);
	static bool GetGazeData(struct FEyeTrackerGazeData* OutGazeData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
