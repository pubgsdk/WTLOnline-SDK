// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_WebBrowserWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWebBrowser::OnUrlChanged__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature"));

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 URL                            (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Frame                          (CPF_Parm, CPF_ZeroConstructor)

void UWebBrowser::OnBeforePopup__DelegateSignature(const struct FString& URL, const struct FString& Frame)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature"));

	struct
	{
		struct FString                 URL;
		struct FString                 Frame;
	} params;

	params.URL = URL;
	params.Frame = Frame;

	UObject::ProcessEvent(fn, &params);
}


// Function WebBrowserWidget.WebBrowser.LoadURL
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 NewURL                         (CPF_Parm, CPF_ZeroConstructor)

void UWebBrowser::LoadURL(const struct FString& NewURL)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WebBrowserWidget.WebBrowser.LoadURL"));

	struct
	{
		struct FString                 NewURL;
	} params;

	params.NewURL = NewURL;

	UObject::ProcessEvent(fn, &params);
}


// Function WebBrowserWidget.WebBrowser.LoadString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Contents                       (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 DummyURL                       (CPF_Parm, CPF_ZeroConstructor)

void UWebBrowser::LoadString(const struct FString& Contents, const struct FString& DummyURL)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WebBrowserWidget.WebBrowser.LoadString"));

	struct
	{
		struct FString                 Contents;
		struct FString                 DummyURL;
	} params;

	params.Contents = Contents;
	params.DummyURL = DummyURL;

	UObject::ProcessEvent(fn, &params);
}


// Function WebBrowserWidget.WebBrowser.GetUrl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UWebBrowser::GetUrl()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WebBrowserWidget.WebBrowser.GetUrl"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WebBrowserWidget.WebBrowser.GetTitleText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWebBrowser::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WebBrowserWidget.WebBrowser.GetTitleText"));

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WebBrowserWidget.WebBrowser.ExecuteJavascript
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ScriptText                     (CPF_Parm, CPF_ZeroConstructor)

void UWebBrowser::ExecuteJavascript(const struct FString& ScriptText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WebBrowserWidget.WebBrowser.ExecuteJavascript"));

	struct
	{
		struct FString                 ScriptText;
	} params;

	params.ScriptText = ScriptText;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
