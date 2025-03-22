#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action`1<easyar.VideoStatus>
struct Action_1_tE892E6408F65AAFEC425235D8E104C49E1EC9A3B;
// System.Func`2<easyar.Optional`1<System.Action`1<easyar.VideoStatus>>,easyar.Detail/OptionalOfFunctorOfVoidFromVideoStatus>
struct Func_2_tF2334765243FA38E615B695E1D3B1FE5F9867BB7;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// easyar.VideoPlayer/<>c
struct U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701;
// easyar.Detail/FunctorOfOutputFrameFromListOfOutputFrame/DestroyDelegate
struct DestroyDelegate_t22BAF3BEC6630623C497FBE52E676B8F6ED2090B;
// easyar.Detail/FunctorOfOutputFrameFromListOfOutputFrame/FunctionDelegate
struct FunctionDelegate_tD635B42A7C23A49B0D4177EE0B365FD006432997;
// easyar.Detail/FunctorOfVoid/DestroyDelegate
struct DestroyDelegate_t3928945A46CF6F986CD17E73BF02C240AE697A35;
// easyar.Detail/FunctorOfVoid/FunctionDelegate
struct FunctionDelegate_tCE515AF551A9616B94DD601CB35AB37A8D6A45E7;
// easyar.Detail/FunctorOfVoidFromBool/DestroyDelegate
struct DestroyDelegate_tAC6D8341F00ABAA8433DAF4F0A6FC48889E90464;
// easyar.Detail/FunctorOfVoidFromBool/FunctionDelegate
struct FunctionDelegate_tE8E19820151F305947ABC0D04F6D8921AD8216A0;
// easyar.Detail/FunctorOfVoidFromBoolAndString/DestroyDelegate
struct DestroyDelegate_t5233BF5878A2B5316F768CC495805E341F21D0DF;
// easyar.Detail/FunctorOfVoidFromBoolAndString/FunctionDelegate
struct FunctionDelegate_t2BCFEFAECC03E5B94F5820D6D25BEBF9B51BB0CC;
// easyar.Detail/FunctorOfVoidFromBoolAndStringAndString/DestroyDelegate
struct DestroyDelegate_tA754130F7C5EAF1B3666CAA90725D8B299169AA3;
// easyar.Detail/FunctorOfVoidFromBoolAndStringAndString/FunctionDelegate
struct FunctionDelegate_t425F42CC6EC3725128BA73888D2D06FA1BF29F9C;
// easyar.Detail/FunctorOfVoidFromCameraState/DestroyDelegate
struct DestroyDelegate_t09B55A55E7CB23344A288D89A3A4617777926F98;
// easyar.Detail/FunctorOfVoidFromCameraState/FunctionDelegate
struct FunctionDelegate_t7A8387A666CCA463F3DD8E0BAEFB6A23855ABFE7;
// easyar.Detail/FunctorOfVoidFromCloudRecognizationResult/DestroyDelegate
struct DestroyDelegate_tBECC977F9CD3912F61F1B815BB2A2FB7B0B11915;
// easyar.Detail/FunctorOfVoidFromCloudRecognizationResult/FunctionDelegate
struct FunctionDelegate_t8C96DB344551D9F404C0CE26BD88A55EFC04B676;
// easyar.Detail/FunctorOfVoidFromFeedbackFrame/DestroyDelegate
struct DestroyDelegate_t7BDED6920CE3E40F91C7C1DEAB1B46D3892B88AF;
// easyar.Detail/FunctorOfVoidFromFeedbackFrame/FunctionDelegate
struct FunctionDelegate_t63D8F6644CF25CC0CD10C915CF627A61A37DB782;
// easyar.Detail/FunctorOfVoidFromInputFrame/DestroyDelegate
struct DestroyDelegate_tA1EB29EB660D3E37AD58D26A458DCA2E78715060;
// easyar.Detail/FunctorOfVoidFromInputFrame/FunctionDelegate
struct FunctionDelegate_tE29A986BBA6E60D8B7B5C1BB805A74AF4C1BC539;
// easyar.Detail/FunctorOfVoidFromLogLevelAndString/DestroyDelegate
struct DestroyDelegate_tB204BFC0472D0EC0E2AFA80A8466678520CB5544;
// easyar.Detail/FunctorOfVoidFromLogLevelAndString/FunctionDelegate
struct FunctionDelegate_t60B35940607A97C4A22FB9C9E35F87F21FDB4151;
// easyar.Detail/FunctorOfVoidFromOutputFrame/DestroyDelegate
struct DestroyDelegate_tE41281B5CEE44B297A62F28878698BC3ADD0EB6B;
// easyar.Detail/FunctorOfVoidFromOutputFrame/FunctionDelegate
struct FunctionDelegate_t6555C17DE7B970D98986CA8073AC56AA791B85E5;
// easyar.Detail/FunctorOfVoidFromPermissionStatusAndString/DestroyDelegate
struct DestroyDelegate_t15813369CAD8B5046CF2CF2EE4C50CBC27E59A02;
// easyar.Detail/FunctorOfVoidFromPermissionStatusAndString/FunctionDelegate
struct FunctionDelegate_tA2E98FA95A56A55FB0FCABA3A35C65EDF8E72901;
// easyar.Detail/FunctorOfVoidFromRecordStatusAndString/DestroyDelegate
struct DestroyDelegate_t9EC5470AC3EB7BB81496A4ED9095BDE3E4FEC987;
// easyar.Detail/FunctorOfVoidFromRecordStatusAndString/FunctionDelegate
struct FunctionDelegate_tE075AB16ED0ED8EA803B69FFD8E05476B9F86BE8;
// easyar.Detail/FunctorOfVoidFromTargetAndBool/DestroyDelegate
struct DestroyDelegate_tD2C9B86C14009CE2E52364919D710875B80C72CB;
// easyar.Detail/FunctorOfVoidFromTargetAndBool/FunctionDelegate
struct FunctionDelegate_t1662EA1F102A256065D62097EC04494299C61073;
// easyar.Detail/FunctorOfVoidFromVideoStatus/DestroyDelegate
struct DestroyDelegate_t5F1C180806668FDEEB7A743C1BB2F66D8E899F9A;
// easyar.Detail/FunctorOfVoidFromVideoStatus/FunctionDelegate
struct FunctionDelegate_t36CB2EDB27F73CAF5278B8832DEE4A261A04DA23;
// easyar.EasyARSettings/TargetGizmoConfig/ImageTargetConfig
struct ImageTargetConfig_t13E4A6FDB6BF388C78C1A3E886AF482338D94D08;
// easyar.EasyARSettings/TargetGizmoConfig/ObjectTargetConfig
struct ObjectTargetConfig_t62AD58634ED6E0AFF01A857C4486C330332D5EBE;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraState_t58249EAA18205C20E59503AE97A2CE60ED9796AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Detail_tFF926FD8D93365E61FABF58F694024B4FDC9AB7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogLevel_t3F10225190F577CB4304ED02792E8251E01CD955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PermissionStatus_t5944D431511F991F8A4BBD2A4292CEA1B9A501AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordStatus_t157BC0C04121E2F627428C0347C1DBDCE6222948_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoStatus_tAE351744A8AFDD8B0FAE24C926369DDFFFBA9161_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_get_OnSome_m3D679D7F2144ECCE3AA11CBEE69E9B9D955502C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_get_Value_mD1015B9362C3D309449215AF3E2B6F1C24E76F18_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// easyar.VideoPlayer/<>c
struct U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701_StaticFields
{
public:
	// easyar.VideoPlayer/<>c easyar.VideoPlayer/<>c::<>9
	U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701 * ___U3CU3E9_0;
	// System.Func`2<easyar.Optional`1<System.Action`1<easyar.VideoStatus>>,easyar.Detail/OptionalOfFunctorOfVoidFromVideoStatus> easyar.VideoPlayer/<>c::<>9__7_0
	Func_2_tF2334765243FA38E615B695E1D3B1FE5F9867BB7 * ___U3CU3E9__7_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Func_2_tF2334765243FA38E615B695E1D3B1FE5F9867BB7 * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Func_2_tF2334765243FA38E615B695E1D3B1FE5F9867BB7 ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Func_2_tF2334765243FA38E615B695E1D3B1FE5F9867BB7 * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_1), (void*)value);
	}
};


// easyar.EasyARSettings/TargetGizmoConfig/ImageTargetConfig
struct ImageTargetConfig_t13E4A6FDB6BF388C78C1A3E886AF482338D94D08  : public RuntimeObject
{
public:
	// System.Boolean easyar.EasyARSettings/TargetGizmoConfig/ImageTargetConfig::EnableImageFile
	bool ___EnableImageFile_0;
	// System.Boolean easyar.EasyARSettings/TargetGizmoConfig/ImageTargetConfig::EnableTargetDataFile
	bool ___EnableTargetDataFile_1;
	// System.Boolean easyar.EasyARSettings/TargetGizmoConfig/ImageTargetConfig::EnableTarget
	bool ___EnableTarget_2;

public:
	inline static int32_t get_offset_of_EnableImageFile_0() { return static_cast<int32_t>(offsetof(ImageTargetConfig_t13E4A6FDB6BF388C78C1A3E886AF482338D94D08, ___EnableImageFile_0)); }
	inline bool get_EnableImageFile_0() const { return ___EnableImageFile_0; }
	inline bool* get_address_of_EnableImageFile_0() { return &___EnableImageFile_0; }
	inline void set_EnableImageFile_0(bool value)
	{
		___EnableImageFile_0 = value;
	}

	inline static int32_t get_offset_of_EnableTargetDataFile_1() { return static_cast<int32_t>(offsetof(ImageTargetConfig_t13E4A6FDB6BF388C78C1A3E886AF482338D94D08, ___EnableTargetDataFile_1)); }
	inline bool get_EnableTargetDataFile_1() const { return ___EnableTargetDataFile_1; }
	inline bool* get_address_of_EnableTargetDataFile_1() { return &___EnableTargetDataFile_1; }
	inline void set_EnableTargetDataFile_1(bool value)
	{
		___EnableTargetDataFile_1 = value;
	}

	inline static int32_t get_offset_of_EnableTarget_2() { return static_cast<int32_t>(offsetof(ImageTargetConfig_t13E4A6FDB6BF388C78C1A3E886AF482338D94D08, ___EnableTarget_2)); }
	inline bool get_EnableTarget_2() const { return ___EnableTarget_2; }
	inline bool* get_address_of_EnableTarget_2() { return &___EnableTarget_2; }
	inline void set_EnableTarget_2(bool value)
	{
		___EnableTarget_2 = value;
	}
};


// easyar.EasyARSettings/TargetGizmoConfig/ObjectTargetConfig
struct ObjectTargetConfig_t62AD58634ED6E0AFF01A857C4486C330332D5EBE  : public RuntimeObject
{
public:
	// System.Boolean easyar.EasyARSettings/TargetGizmoConfig/ObjectTargetConfig::Enable
	bool ___Enable_0;

public:
	inline static int32_t get_offset_of_Enable_0() { return static_cast<int32_t>(offsetof(ObjectTargetConfig_t62AD58634ED6E0AFF01A857C4486C330332D5EBE, ___Enable_0)); }
	inline bool get_Enable_0() const { return ___Enable_0; }
	inline bool* get_address_of_Enable_0() { return &___Enable_0; }
	inline void set_Enable_0(bool value)
	{
		___Enable_0 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// easyar.Unit
struct Unit_t31587124749C143D15A0B8FE2F14EB9107264281 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Unit_t31587124749C143D15A0B8FE2F14EB9107264281__padding[1];
	};

public:
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// easyar.CameraState
struct CameraState_t58249EAA18205C20E59503AE97A2CE60ED9796AA 
{
public:
	// System.Int32 easyar.CameraState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraState_t58249EAA18205C20E59503AE97A2CE60ED9796AA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// easyar.LogLevel
struct LogLevel_t3F10225190F577CB4304ED02792E8251E01CD955 
{
public:
	// System.Int32 easyar.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_t3F10225190F577CB4304ED02792E8251E01CD955, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.OptionalTag
struct OptionalTag_tA666C44D4577E8344074E257D19E19EC884A8E80 
{
public:
	// System.Int32 easyar.OptionalTag::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OptionalTag_tA666C44D4577E8344074E257D19E19EC884A8E80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.PermissionStatus
struct PermissionStatus_t5944D431511F991F8A4BBD2A4292CEA1B9A501AB 
{
public:
	// System.Int32 easyar.PermissionStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PermissionStatus_t5944D431511F991F8A4BBD2A4292CEA1B9A501AB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.RecordStatus
struct RecordStatus_t157BC0C04121E2F627428C0347C1DBDCE6222948 
{
public:
	// System.Int32 easyar.RecordStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecordStatus_t157BC0C04121E2F627428C0347C1DBDCE6222948, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.VideoStatus
struct VideoStatus_tAE351744A8AFDD8B0FAE24C926369DDFFFBA9161 
{
public:
	// System.Int32 easyar.VideoStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoStatus_tAE351744A8AFDD8B0FAE24C926369DDFFFBA9161, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.Detail/FunctorOfVoidFromVideoStatus
struct FunctorOfVoidFromVideoStatus_t2962AAB634D4C36655895CF7DC88CBD9630FC138 
{
public:
	// System.IntPtr easyar.Detail/FunctorOfVoidFromVideoStatus::_state
	intptr_t ____state_0;
	// easyar.Detail/FunctorOfVoidFromVideoStatus/FunctionDelegate easyar.Detail/FunctorOfVoidFromVideoStatus::_func
	FunctionDelegate_t36CB2EDB27F73CAF5278B8832DEE4A261A04DA23 * ____func_1;
	// easyar.Detail/FunctorOfVoidFromVideoStatus/DestroyDelegate easyar.Detail/FunctorOfVoidFromVideoStatus::_destroy
	DestroyDelegate_t5F1C180806668FDEEB7A743C1BB2F66D8E899F9A * ____destroy_2;

public:
	inline static int32_t get_offset_of__state_0() { return static_cast<int32_t>(offsetof(FunctorOfVoidFromVideoStatus_t2962AAB634D4C36655895CF7DC88CBD9630FC138, ____state_0)); }
	inline intptr_t get__state_0() const { return ____state_0; }
	inline intptr_t* get_address_of__state_0() { return &____state_0; }
	inline void set__state_0(intptr_t value)
	{
		____state_0 = value;
	}

	inline static int32_t get_offset_of__func_1() { return static_cast<int32_t>(offsetof(FunctorOfVoidFromVideoStatus_t2962AAB634D4C36655895CF7DC88CBD9630FC138, ____func_1)); }
	inline FunctionDelegate_t36CB2EDB27F73CAF5278B8832DEE4A261A04DA23 * get__func_1() const { return ____func_1; }
	inline FunctionDelegate_t36CB2EDB27F73CAF5278B8832DEE4A261A04DA23 ** get_address_of__func_1() { return &____func_1; }
	inline void set__func_1(FunctionDelegate_t36CB2EDB27F73CAF5278B8832DEE4A261A04DA23 * value)
	{
		____func_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____func_1), (void*)value);
	}

	inline static int32_t get_offset_of__destroy_2() { return static_cast<int32_t>(offsetof(FunctorOfVoidFromVideoStatus_t2962AAB634D4C36655895CF7DC88CBD9630FC138, ____destroy_2)); }
	inline DestroyDelegate_t5F1C180806668FDEEB7A743C1BB2F66D8E899F9A * get__destroy_2() const { return ____destroy_2; }
	inline DestroyDelegate_t5F1C180806668FDEEB7A743C1BB2F66D8E899F9A ** get_address_of__destroy_2() { return &____destroy_2; }
	inline void set__destroy_2(DestroyDelegate_t5F1C180806668FDEEB7A743C1BB2F66D8E899F9A * value)
	{
		____destroy_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____destroy_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of easyar.Detail/FunctorOfVoidFromVideoStatus
struct FunctorOfVoidFromVideoStatus_t2962AAB634D4C36655895CF7DC88CBD9630FC138_marshaled_pinvoke
{
	intptr_t ____state_0;
	Il2CppMethodPointer ____func_1;
	Il2CppMethodPointer ____destroy_2;
};
// Native definition for COM marshalling of easyar.Detail/FunctorOfVoidFromVideoStatus
struct FunctorOfVoidFromVideoStatus_t2962AAB634D4C36655895CF7DC88CBD9630FC138_marshaled_com
{
	intptr_t ____state_0;
	Il2CppMethodPointer ____func_1;
	Il2CppMethodPointer ____destroy_2;
};

// easyar.VideoCameraDevice/CameraDeviceOpenMethod
struct CameraDeviceOpenMethod_tA0B0B44EF8435F07E560D296C66935A71452ADCA 
{
public:
	// System.Int32 easyar.VideoCameraDevice/CameraDeviceOpenMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraDeviceOpenMethod_tA0B0B44EF8435F07E560D296C66935A71452ADCA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.VideoRecorder/OutputPathType
struct OutputPathType_t4B82B04C850D9B2CA32A1C737583CF16B9F3C3AA 
{
public:
	// System.Int32 easyar.VideoRecorder/OutputPathType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OutputPathType_t4B82B04C850D9B2CA32A1C737583CF16B9F3C3AA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.VideoRecorder/VideoOrientation
struct VideoOrientation_t5E9A63DEE544A50571684D3546AC6413C570817E 
{
public:
	// System.Int32 easyar.VideoRecorder/VideoOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoOrientation_t5E9A63DEE544A50571684D3546AC6413C570817E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.WorldRootController/ActiveControlStrategy
struct ActiveControlStrategy_t5BF0237504B456D0E86DC664E6851B71243D3118 
{
public:
	// System.Int32 easyar.WorldRootController/ActiveControlStrategy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActiveControlStrategy_t5BF0237504B456D0E86DC664E6851B71243D3118, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.VIOCameraDeviceUnion/DeviceUnion/VIODeviceType
struct VIODeviceType_t5BCFB2DE832A3805E359C95521C88B69FFD2975A 
{
public:
	// System.Int32 easyar.VIOCameraDeviceUnion/DeviceUnion/VIODeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VIODeviceType_t5BCFB2DE832A3805E359C95521C88B69FFD2975A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.Optional`1<System.Action`1<easyar.VideoStatus>>
struct Optional_1_tAE9620802862D8DFDAFFFEAF259F10410DA2CD0C 
{
public:
	// easyar.OptionalTag easyar.Optional`1::_Tag
	int32_t ____Tag_0;
	// easyar.Unit easyar.Optional`1::None
	Unit_t31587124749C143D15A0B8FE2F14EB9107264281  ___None_1;
	// T easyar.Optional`1::Some
	Action_1_tE892E6408F65AAFEC425235D8E104C49E1EC9A3B * ___Some_2;

public:
	inline static int32_t get_offset_of__Tag_0() { return static_cast<int32_t>(offsetof(Optional_1_tAE9620802862D8DFDAFFFEAF259F10410DA2CD0C, ____Tag_0)); }
	inline int32_t get__Tag_0() const { return ____Tag_0; }
	inline int32_t* get_address_of__Tag_0() { return &____Tag_0; }
	inline void set__Tag_0(int32_t value)
	{
		____Tag_0 = value;
	}

	inline static int32_t get_offset_of_None_1() { return static_cast<int32_t>(offsetof(Optional_1_tAE9620802862D8DFDAFFFEAF259F10410DA2CD0C, ___None_1)); }
	inline Unit_t31587124749C143D15A0B8FE2F14EB9107264281  get_None_1() const { return ___None_1; }
	inline Unit_t31587124749C143D15A0B8FE2F14EB9107264281 * get_address_of_None_1() { return &___None_1; }
	inline void set_None_1(Unit_t31587124749C143D15A0B8FE2F14EB9107264281  value)
	{
		___None_1 = value;
	}

	inline static int32_t get_offset_of_Some_2() { return static_cast<int32_t>(offsetof(Optional_1_tAE9620802862D8DFDAFFFEAF259F10410DA2CD0C, ___Some_2)); }
	inline Action_1_tE892E6408F65AAFEC425235D8E104C49E1EC9A3B * get_Some_2() const { return ___Some_2; }
	inline Action_1_tE892E6408F65AAFEC425235D8E104C49E1EC9A3B ** get_address_of_Some_2() { return &___Some_2; }
	inline void set_Some_2(Action_1_tE892E6408F65AAFEC425235D8E104C49E1EC9A3B * value)
	{
		___Some_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Some_2), (void*)value);
	}
};


// easyar.Optional`1<System.Object>
struct Optional_1_t2DD0B3AD80FBE87F0B5F8135B89C18B5DC8D227A 
{
public:
	// easyar.OptionalTag easyar.Optional`1::_Tag
	int32_t ____Tag_0;
	// easyar.Unit easyar.Optional`1::None
	Unit_t31587124749C143D15A0B8FE2F14EB9107264281  ___None_1;
	// T easyar.Optional`1::Some
	RuntimeObject * ___Some_2;

public:
	inline static int32_t get_offset_of__Tag_0() { return static_cast<int32_t>(offsetof(Optional_1_t2DD0B3AD80FBE87F0B5F8135B89C18B5DC8D227A, ____Tag_0)); }
	inline int32_t get__Tag_0() const { return ____Tag_0; }
	inline int32_t* get_address_of__Tag_0() { return &____Tag_0; }
	inline void set__Tag_0(int32_t value)
	{
		____Tag_0 = value;
	}

	inline static int32_t get_offset_of_None_1() { return static_cast<int32_t>(offsetof(Optional_1_t2DD0B3AD80FBE87F0B5F8135B89C18B5DC8D227A, ___None_1)); }
	inline Unit_t31587124749C143D15A0B8FE2F14EB9107264281  get_None_1() const { return ___None_1; }
	inline Unit_t31587124749C143D15A0B8FE2F14EB9107264281 * get_address_of_None_1() { return &___None_1; }
	inline void set_None_1(Unit_t31587124749C143D15A0B8FE2F14EB9107264281  value)
	{
		___None_1 = value;
	}

	inline static int32_t get_offset_of_Some_2() { return static_cast<int32_t>(offsetof(Optional_1_t2DD0B3AD80FBE87F0B5F8135B89C18B5DC8D227A, ___Some_2)); }
	inline RuntimeObject * get_Some_2() const { return ___Some_2; }
	inline RuntimeObject ** get_address_of_Some_2() { return &___Some_2; }
	inline void set_Some_2(RuntimeObject * value)
	{
		___Some_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Some_2), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// easyar.Detail/OptionalOfFunctorOfVoidFromVideoStatus
struct OptionalOfFunctorOfVoidFromVideoStatus_t369484E4A540C56612C00D056A30A03321BCED70 
{
public:
	// System.Byte easyar.Detail/OptionalOfFunctorOfVoidFromVideoStatus::has_value_
	uint8_t ___has_value__0;
	// easyar.Detail/FunctorOfVoidFromVideoStatus easyar.Detail/OptionalOfFunctorOfVoidFromVideoStatus::value
	FunctorOfVoidFromVideoStatus_t2962AAB634D4C36655895CF7DC88CBD9630FC138  ___value_1;

public:
	inline static int32_t get_offset_of_has_value__0() { return static_cast<int32_t>(offsetof(OptionalOfFunctorOfVoidFromVideoStatus_t369484E4A540C56612C00D056A30A03321BCED70, ___has_value__0)); }
	inline uint8_t get_has_value__0() const { return ___has_value__0; }
	inline uint8_t* get_address_of_has_value__0() { return &___has_value__0; }
	inline void set_has_value__0(uint8_t value)
	{
		___has_value__0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(OptionalOfFunctorOfVoidFromVideoStatus_t369484E4A540C56612C00D056A30A03321BCED70, ___value_1)); }
	inline FunctorOfVoidFromVideoStatus_t2962AAB634D4C36655895CF7DC88CBD9630FC138  get_value_1() const { return ___value_1; }
	inline FunctorOfVoidFromVideoStatus_t2962AAB634D4C36655895CF7DC88CBD9630FC138 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(FunctorOfVoidFromVideoStatus_t2962AAB634D4C36655895CF7DC88CBD9630FC138  value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->____func_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->____destroy_2), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of easyar.Detail/OptionalOfFunctorOfVoidFromVideoStatus
struct OptionalOfFunctorOfVoidFromVideoStatus_t369484E4A540C56612C00D056A30A03321BCED70_marshaled_pinvoke
{
	uint8_t ___has_value__0;
	FunctorOfVoidFromVideoStatus_t2962AAB634D4C36655895CF7DC88CBD9630FC138_marshaled_pinvoke ___value_1;
};
// Native definition for COM marshalling of easyar.Detail/OptionalOfFunctorOfVoidFromVideoStatus
struct OptionalOfFunctorOfVoidFromVideoStatus_t369484E4A540C56612C00D056A30A03321BCED70_marshaled_com
{
	uint8_t ___has_value__0;
	FunctorOfVoidFromVideoStatus_t2962AAB634D4C36655895CF7DC88CBD9630FC138_marshaled_com ___value_1;
};

// System.Action`1<easyar.VideoStatus>
struct Action_1_tE892E6408F65AAFEC425235D8E104C49E1EC9A3B  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfOutputFrameFromListOfOutputFrame/DestroyDelegate
struct DestroyDelegate_t22BAF3BEC6630623C497FBE52E676B8F6ED2090B  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfOutputFrameFromListOfOutputFrame/FunctionDelegate
struct FunctionDelegate_tD635B42A7C23A49B0D4177EE0B365FD006432997  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoid/DestroyDelegate
struct DestroyDelegate_t3928945A46CF6F986CD17E73BF02C240AE697A35  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoid/FunctionDelegate
struct FunctionDelegate_tCE515AF551A9616B94DD601CB35AB37A8D6A45E7  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromBool/DestroyDelegate
struct DestroyDelegate_tAC6D8341F00ABAA8433DAF4F0A6FC48889E90464  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromBool/FunctionDelegate
struct FunctionDelegate_tE8E19820151F305947ABC0D04F6D8921AD8216A0  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromBoolAndString/DestroyDelegate
struct DestroyDelegate_t5233BF5878A2B5316F768CC495805E341F21D0DF  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromBoolAndString/FunctionDelegate
struct FunctionDelegate_t2BCFEFAECC03E5B94F5820D6D25BEBF9B51BB0CC  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromBoolAndStringAndString/DestroyDelegate
struct DestroyDelegate_tA754130F7C5EAF1B3666CAA90725D8B299169AA3  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromBoolAndStringAndString/FunctionDelegate
struct FunctionDelegate_t425F42CC6EC3725128BA73888D2D06FA1BF29F9C  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromCameraState/DestroyDelegate
struct DestroyDelegate_t09B55A55E7CB23344A288D89A3A4617777926F98  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromCameraState/FunctionDelegate
struct FunctionDelegate_t7A8387A666CCA463F3DD8E0BAEFB6A23855ABFE7  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromCloudRecognizationResult/DestroyDelegate
struct DestroyDelegate_tBECC977F9CD3912F61F1B815BB2A2FB7B0B11915  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromCloudRecognizationResult/FunctionDelegate
struct FunctionDelegate_t8C96DB344551D9F404C0CE26BD88A55EFC04B676  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromFeedbackFrame/DestroyDelegate
struct DestroyDelegate_t7BDED6920CE3E40F91C7C1DEAB1B46D3892B88AF  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromFeedbackFrame/FunctionDelegate
struct FunctionDelegate_t63D8F6644CF25CC0CD10C915CF627A61A37DB782  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromInputFrame/DestroyDelegate
struct DestroyDelegate_tA1EB29EB660D3E37AD58D26A458DCA2E78715060  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromInputFrame/FunctionDelegate
struct FunctionDelegate_tE29A986BBA6E60D8B7B5C1BB805A74AF4C1BC539  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromLogLevelAndString/DestroyDelegate
struct DestroyDelegate_tB204BFC0472D0EC0E2AFA80A8466678520CB5544  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromLogLevelAndString/FunctionDelegate
struct FunctionDelegate_t60B35940607A97C4A22FB9C9E35F87F21FDB4151  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromOutputFrame/DestroyDelegate
struct DestroyDelegate_tE41281B5CEE44B297A62F28878698BC3ADD0EB6B  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromOutputFrame/FunctionDelegate
struct FunctionDelegate_t6555C17DE7B970D98986CA8073AC56AA791B85E5  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromPermissionStatusAndString/DestroyDelegate
struct DestroyDelegate_t15813369CAD8B5046CF2CF2EE4C50CBC27E59A02  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromPermissionStatusAndString/FunctionDelegate
struct FunctionDelegate_tA2E98FA95A56A55FB0FCABA3A35C65EDF8E72901  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromRecordStatusAndString/DestroyDelegate
struct DestroyDelegate_t9EC5470AC3EB7BB81496A4ED9095BDE3E4FEC987  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromRecordStatusAndString/FunctionDelegate
struct FunctionDelegate_tE075AB16ED0ED8EA803B69FFD8E05476B9F86BE8  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromTargetAndBool/DestroyDelegate
struct DestroyDelegate_tD2C9B86C14009CE2E52364919D710875B80C72CB  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromTargetAndBool/FunctionDelegate
struct FunctionDelegate_t1662EA1F102A256065D62097EC04494299C61073  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromVideoStatus/DestroyDelegate
struct DestroyDelegate_t5F1C180806668FDEEB7A743C1BB2F66D8E899F9A  : public MulticastDelegate_t
{
public:

public:
};


// easyar.Detail/FunctorOfVoidFromVideoStatus/FunctionDelegate
struct FunctionDelegate_t36CB2EDB27F73CAF5278B8832DEE4A261A04DA23  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean easyar.Optional`1<System.Object>::get_OnSome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Optional_1_get_OnSome_mFC34866DB6995C2F7F8BA0D490BEC7D4E732F008_gshared (Optional_1_t2DD0B3AD80FBE87F0B5F8135B89C18B5DC8D227A * __this, const RuntimeMethod* method);
// T easyar.Optional`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Optional_1_get_Value_m12B543F5410157022FC7655314EDCDE258797868_gshared (Optional_1_t2DD0B3AD80FBE87F0B5F8135B89C18B5DC8D227A * __this, const RuntimeMethod* method);

// System.Void easyar.VideoPlayer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA884A8368805953F55B056D66E4E3033FBEE1F14 (U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean easyar.Optional`1<System.Action`1<easyar.VideoStatus>>::get_OnSome()
inline bool Optional_1_get_OnSome_m3D679D7F2144ECCE3AA11CBEE69E9B9D955502C9 (Optional_1_tAE9620802862D8DFDAFFFEAF259F10410DA2CD0C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Optional_1_tAE9620802862D8DFDAFFFEAF259F10410DA2CD0C *, const RuntimeMethod*))Optional_1_get_OnSome_mFC34866DB6995C2F7F8BA0D490BEC7D4E732F008_gshared)(__this, method);
}
// System.Void easyar.Detail/OptionalOfFunctorOfVoidFromVideoStatus::set_has_value(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionalOfFunctorOfVoidFromVideoStatus_set_has_value_mB0357A944CF093D100BD1C5CDE6AF63CCA5191CB (OptionalOfFunctorOfVoidFromVideoStatus_t369484E4A540C56612C00D056A30A03321BCED70 * __this, bool ___value0, const RuntimeMethod* method);
// T easyar.Optional`1<System.Action`1<easyar.VideoStatus>>::get_Value()
inline Action_1_tE892E6408F65AAFEC425235D8E104C49E1EC9A3B * Optional_1_get_Value_mD1015B9362C3D309449215AF3E2B6F1C24E76F18 (Optional_1_tAE9620802862D8DFDAFFFEAF259F10410DA2CD0C * __this, const RuntimeMethod* method)
{
	return ((  Action_1_tE892E6408F65AAFEC425235D8E104C49E1EC9A3B * (*) (Optional_1_tAE9620802862D8DFDAFFFEAF259F10410DA2CD0C *, const RuntimeMethod*))Optional_1_get_Value_m12B543F5410157022FC7655314EDCDE258797868_gshared)(__this, method);
}
// easyar.Detail/FunctorOfVoidFromVideoStatus easyar.Detail::FunctorOfVoidFromVideoStatus_to_c(System.Action`1<easyar.VideoStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FunctorOfVoidFromVideoStatus_t2962AAB634D4C36655895CF7DC88CBD9630FC138  Detail_FunctorOfVoidFromVideoStatus_to_c_mD39BDCE61B097D44BFE5E67A66A4AB0FF4300EE9 (Action_1_tE892E6408F65AAFEC425235D8E104C49E1EC9A3B * ___f0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void easyar.VideoPlayer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m09A3C9B523980DEFDB565677D990DB77740D45EB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701 * L_0 = (U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701 *)il2cpp_codegen_object_new(U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA884A8368805953F55B056D66E4E3033FBEE1F14(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void easyar.VideoPlayer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA884A8368805953F55B056D66E4E3033FBEE1F14 (U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// easyar.Detail/OptionalOfFunctorOfVoidFromVideoStatus easyar.VideoPlayer/<>c::<open>b__7_0(easyar.Optional`1<System.Action`1<easyar.VideoStatus>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionalOfFunctorOfVoidFromVideoStatus_t369484E4A540C56612C00D056A30A03321BCED70  U3CU3Ec_U3CopenU3Eb__7_0_m82DCE3169E926192F40A7DE3FE622C435B570C07 (U3CU3Ec_t45CDBC9180E418FB86728230DE78DC2372CD6701 * __this, Optional_1_tAE9620802862D8DFDAFFFEAF259F10410DA2CD0C  ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_tFF926FD8D93365E61FABF58F694024B4FDC9AB7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_get_OnSome_m3D679D7F2144ECCE3AA11CBEE69E9B9D955502C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_get_Value_mD1015B9362C3D309449215AF3E2B6F1C24E76F18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	OptionalOfFunctorOfVoidFromVideoStatus_t369484E4A540C56612C00D056A30A03321BCED70  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Detail.easyar_VideoPlayer_open(cdata, Detail.String_to_c(ar, path), storageType, callbackScheduler.cdata, callback.map(p => p.OnSome ? new Detail.OptionalOfFunctorOfVoidFromVideoStatus { has_value = true, value = Detail.FunctorOfVoidFromVideoStatus_to_c(p.Value) } : new Detail.OptionalOfFunctorOfVoidFromVideoStatus { has_value = false, value = default(Detail.FunctorOfVoidFromVideoStatus) }));
		bool L_0;
		L_0 = Optional_1_get_OnSome_m3D679D7F2144ECCE3AA11CBEE69E9B9D955502C9((Optional_1_tAE9620802862D8DFDAFFFEAF259F10410DA2CD0C *)(&___p0), /*hidden argument*/Optional_1_get_OnSome_m3D679D7F2144ECCE3AA11CBEE69E9B9D955502C9_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OptionalOfFunctorOfVoidFromVideoStatus_t369484E4A540C56612C00D056A30A03321BCED70 ));
		OptionalOfFunctorOfVoidFromVideoStatus_set_has_value_mB0357A944CF093D100BD1C5CDE6AF63CCA5191CB((OptionalOfFunctorOfVoidFromVideoStatus_t369484E4A540C56612C00D056A30A03321BCED70 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		FunctorOfVoidFromVideoStatus_t2962AAB634D4C36655895CF7DC88CBD9630FC138 * L_1 = (&V_0)->get_address_of_value_1();
		il2cpp_codegen_initobj(L_1, sizeof(FunctorOfVoidFromVideoStatus_t2962AAB634D4C36655895CF7DC88CBD9630FC138 ));
		OptionalOfFunctorOfVoidFromVideoStatus_t369484E4A540C56612C00D056A30A03321BCED70  L_2 = V_0;
		return L_2;
	}

IL_0028:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OptionalOfFunctorOfVoidFromVideoStatus_t369484E4A540C56612C00D056A30A03321BCED70 ));
		OptionalOfFunctorOfVoidFromVideoStatus_set_has_value_mB0357A944CF093D100BD1C5CDE6AF63CCA5191CB((OptionalOfFunctorOfVoidFromVideoStatus_t369484E4A540C56612C00D056A30A03321BCED70 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Action_1_tE892E6408F65AAFEC425235D8E104C49E1EC9A3B * L_3;
		L_3 = Optional_1_get_Value_mD1015B9362C3D309449215AF3E2B6F1C24E76F18((Optional_1_tAE9620802862D8DFDAFFFEAF259F10410DA2CD0C *)(&___p0), /*hidden argument*/Optional_1_get_Value_mD1015B9362C3D309449215AF3E2B6F1C24E76F18_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Detail_tFF926FD8D93365E61FABF58F694024B4FDC9AB7D_il2cpp_TypeInfo_var);
		FunctorOfVoidFromVideoStatus_t2962AAB634D4C36655895CF7DC88CBD9630FC138  L_4;
		L_4 = Detail_FunctorOfVoidFromVideoStatus_to_c_mD39BDCE61B097D44BFE5E67A66A4AB0FF4300EE9(L_3, /*hidden argument*/NULL);
		(&V_0)->set_value_1(L_4);
		OptionalOfFunctorOfVoidFromVideoStatus_t369484E4A540C56612C00D056A30A03321BCED70  L_5 = V_0;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DestroyDelegate_t22BAF3BEC6630623C497FBE52E676B8F6ED2090B (DestroyDelegate_t22BAF3BEC6630623C497FBE52E676B8F6ED2090B * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(____state0);

}
// System.Void easyar.Detail/FunctorOfOutputFrameFromListOfOutputFrame/DestroyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate__ctor_mFE0637BCEB75C3E86A344DA137145C0B9454D650 (DestroyDelegate_t22BAF3BEC6630623C497FBE52E676B8F6ED2090B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfOutputFrameFromListOfOutputFrame/DestroyDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_Invoke_m93A8E96C9631574177B17A2620E512CF356B127E (DestroyDelegate_t22BAF3BEC6630623C497FBE52E676B8F6ED2090B * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____state0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____state0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfOutputFrameFromListOfOutputFrame/DestroyDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyDelegate_BeginInvoke_mED1B26493D3ECAA2BD169D4A579142ED92E386F5 (DestroyDelegate_t22BAF3BEC6630623C497FBE52E676B8F6ED2090B * __this, intptr_t ____state0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &____state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void easyar.Detail/FunctorOfOutputFrameFromListOfOutputFrame/DestroyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_EndInvoke_mA07A9A3CF01620EF813F008540B72F1750BE3037 (DestroyDelegate_t22BAF3BEC6630623C497FBE52E676B8F6ED2090B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FunctionDelegate_tD635B42A7C23A49B0D4177EE0B365FD006432997 (FunctionDelegate_tD635B42A7C23A49B0D4177EE0B365FD006432997 * __this, intptr_t ___state0, intptr_t ___arg01, intptr_t* ___Return2, intptr_t* ___exception3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, intptr_t*, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___state0, ___arg01, ___Return2, ___exception3);

}
// System.Void easyar.Detail/FunctorOfOutputFrameFromListOfOutputFrame/FunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate__ctor_m70335B59ED458AA3D27721C34E99660563CFA46D (FunctionDelegate_tD635B42A7C23A49B0D4177EE0B365FD006432997 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfOutputFrameFromListOfOutputFrame/FunctionDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_Invoke_m9619449D2E27E2F6AEF4DDE57C9389DD25221748 (FunctionDelegate_tD635B42A7C23A49B0D4177EE0B365FD006432997 * __this, intptr_t ___state0, intptr_t ___arg01, intptr_t* ___Return2, intptr_t* ___exception3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t*, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, ___arg01, ___Return2, ___exception3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___Return2, ___exception3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< intptr_t, intptr_t, intptr_t*, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___Return2, ___exception3);
					else
						GenericVirtActionInvoker4< intptr_t, intptr_t, intptr_t*, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___Return2, ___exception3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< intptr_t, intptr_t, intptr_t*, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0, ___arg01, ___Return2, ___exception3);
					else
						VirtActionInvoker4< intptr_t, intptr_t, intptr_t*, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0, ___arg01, ___Return2, ___exception3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___Return2, ___exception3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfOutputFrameFromListOfOutputFrame/FunctionDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr&,System.IntPtr&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionDelegate_BeginInvoke_mB2102CAC7D7BB7A5CEF7ACE9F25BC2C6CEEB4E95 (FunctionDelegate_tD635B42A7C23A49B0D4177EE0B365FD006432997 * __this, intptr_t ___state0, intptr_t ___arg01, intptr_t* ___Return2, intptr_t* ___exception3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg01);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___Return2);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___exception3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void easyar.Detail/FunctorOfOutputFrameFromListOfOutputFrame/FunctionDelegate::EndInvoke(System.IntPtr&,System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_EndInvoke_m4D03BB72E98C0D1D0975F9FEBCDDDD7A265E85AB (FunctionDelegate_tD635B42A7C23A49B0D4177EE0B365FD006432997 * __this, intptr_t* ___Return0, intptr_t* ___exception1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___Return0,
	___exception1,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DestroyDelegate_t3928945A46CF6F986CD17E73BF02C240AE697A35 (DestroyDelegate_t3928945A46CF6F986CD17E73BF02C240AE697A35 * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(____state0);

}
// System.Void easyar.Detail/FunctorOfVoid/DestroyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate__ctor_m64220E3C7738539D33D475926C486E97FAC88A5B (DestroyDelegate_t3928945A46CF6F986CD17E73BF02C240AE697A35 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoid/DestroyDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_Invoke_m02FFEBF33D8D025341C5FFB185847FD9076319C2 (DestroyDelegate_t3928945A46CF6F986CD17E73BF02C240AE697A35 * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____state0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____state0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoid/DestroyDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyDelegate_BeginInvoke_m28FE2BB2698576E5F779B32D89AC146A23C8B763 (DestroyDelegate_t3928945A46CF6F986CD17E73BF02C240AE697A35 * __this, intptr_t ____state0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &____state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void easyar.Detail/FunctorOfVoid/DestroyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_EndInvoke_mFE0807E767F17AAD1742E759515ACE25BB0D2601 (DestroyDelegate_t3928945A46CF6F986CD17E73BF02C240AE697A35 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FunctionDelegate_tCE515AF551A9616B94DD601CB35AB37A8D6A45E7 (FunctionDelegate_tCE515AF551A9616B94DD601CB35AB37A8D6A45E7 * __this, intptr_t ___state0, intptr_t* ___exception1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___state0, ___exception1);

}
// System.Void easyar.Detail/FunctorOfVoid/FunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate__ctor_m7B7A3FC71324BF28FCA575C128FAFEC22EF0738F (FunctionDelegate_tCE515AF551A9616B94DD601CB35AB37A8D6A45E7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoid/FunctionDelegate::Invoke(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_Invoke_m33609080EBB8EC53CFD0ACBAFAB80DA1CF8A3CCD (FunctionDelegate_tCE515AF551A9616B94DD601CB35AB37A8D6A45E7 * __this, intptr_t ___state0, intptr_t* ___exception1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, ___exception1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___exception1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___exception1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___exception1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0, ___exception1);
					else
						VirtActionInvoker2< intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0, ___exception1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___exception1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoid/FunctionDelegate::BeginInvoke(System.IntPtr,System.IntPtr&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionDelegate_BeginInvoke_m811A21A7CFD94C998A1A81FAC259D2D1A9C47842 (FunctionDelegate_tCE515AF551A9616B94DD601CB35AB37A8D6A45E7 * __this, intptr_t ___state0, intptr_t* ___exception1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___exception1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void easyar.Detail/FunctorOfVoid/FunctionDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_EndInvoke_m2C8A4668F3BA9D71EF690DE7B6932AB8D11B7E35 (FunctionDelegate_tCE515AF551A9616B94DD601CB35AB37A8D6A45E7 * __this, intptr_t* ___exception0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___exception0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DestroyDelegate_tAC6D8341F00ABAA8433DAF4F0A6FC48889E90464 (DestroyDelegate_tAC6D8341F00ABAA8433DAF4F0A6FC48889E90464 * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(____state0);

}
// System.Void easyar.Detail/FunctorOfVoidFromBool/DestroyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate__ctor_m0C10CDAEF03FDC84D68817C2CFBE0CD773EB461C (DestroyDelegate_tAC6D8341F00ABAA8433DAF4F0A6FC48889E90464 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromBool/DestroyDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_Invoke_m97C20CAAF03BF8CBA3C16E40E2D70E5DC0EFC044 (DestroyDelegate_tAC6D8341F00ABAA8433DAF4F0A6FC48889E90464 * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____state0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____state0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromBool/DestroyDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyDelegate_BeginInvoke_mBA05DD696BAE3FFDE66B3B3AE004A95D62A93619 (DestroyDelegate_tAC6D8341F00ABAA8433DAF4F0A6FC48889E90464 * __this, intptr_t ____state0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &____state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void easyar.Detail/FunctorOfVoidFromBool/DestroyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_EndInvoke_m40B6E02BD49FB1D5B82A009AAF2070B1902DF9B6 (DestroyDelegate_tAC6D8341F00ABAA8433DAF4F0A6FC48889E90464 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FunctionDelegate_tE8E19820151F305947ABC0D04F6D8921AD8216A0 (FunctionDelegate_tE8E19820151F305947ABC0D04F6D8921AD8216A0 * __this, intptr_t ___state0, bool ___arg01, intptr_t* ___exception2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int8_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___state0, static_cast<int8_t>(___arg01), ___exception2);

}
// System.Void easyar.Detail/FunctorOfVoidFromBool/FunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate__ctor_mE9DE57D84961420B2C9822DB5C7B49A88D4CD5C6 (FunctionDelegate_tE8E19820151F305947ABC0D04F6D8921AD8216A0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromBool/FunctionDelegate::Invoke(System.IntPtr,System.Boolean,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_Invoke_m7EDFD24365E0FC7983A0A2C7F6C91E703E3E1B4D (FunctionDelegate_tE8E19820151F305947ABC0D04F6D8921AD8216A0 * __this, intptr_t ___state0, bool ___arg01, intptr_t* ___exception2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, bool, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, ___arg01, ___exception2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, bool, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___exception2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, bool, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___exception2);
					else
						GenericVirtActionInvoker3< intptr_t, bool, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___exception2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, bool, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0, ___arg01, ___exception2);
					else
						VirtActionInvoker3< intptr_t, bool, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0, ___arg01, ___exception2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, bool, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___exception2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromBool/FunctionDelegate::BeginInvoke(System.IntPtr,System.Boolean,System.IntPtr&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionDelegate_BeginInvoke_m2C461336A67F229564E5862A020E5EED69642FC5 (FunctionDelegate_tE8E19820151F305947ABC0D04F6D8921AD8216A0 * __this, intptr_t ___state0, bool ___arg01, intptr_t* ___exception2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___arg01);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___exception2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void easyar.Detail/FunctorOfVoidFromBool/FunctionDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_EndInvoke_m24535A33EA9E32D533759BEF58BC3451FA5A9E24 (FunctionDelegate_tE8E19820151F305947ABC0D04F6D8921AD8216A0 * __this, intptr_t* ___exception0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___exception0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DestroyDelegate_t5233BF5878A2B5316F768CC495805E341F21D0DF (DestroyDelegate_t5233BF5878A2B5316F768CC495805E341F21D0DF * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(____state0);

}
// System.Void easyar.Detail/FunctorOfVoidFromBoolAndString/DestroyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate__ctor_mA4063902633F8F5A8467D452A92C3C58122EB597 (DestroyDelegate_t5233BF5878A2B5316F768CC495805E341F21D0DF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromBoolAndString/DestroyDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_Invoke_m9E38FDF16F1E34F6CE6841E3519F085FFB783A4F (DestroyDelegate_t5233BF5878A2B5316F768CC495805E341F21D0DF * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____state0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____state0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromBoolAndString/DestroyDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyDelegate_BeginInvoke_m51128F6D4CB5E9AFF9D6E0CEEEAD3A89EC57BA74 (DestroyDelegate_t5233BF5878A2B5316F768CC495805E341F21D0DF * __this, intptr_t ____state0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &____state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void easyar.Detail/FunctorOfVoidFromBoolAndString/DestroyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_EndInvoke_m3926B5B76571E0E3B8B4019D7D6DA81999D21AB2 (DestroyDelegate_t5233BF5878A2B5316F768CC495805E341F21D0DF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FunctionDelegate_t2BCFEFAECC03E5B94F5820D6D25BEBF9B51BB0CC (FunctionDelegate_t2BCFEFAECC03E5B94F5820D6D25BEBF9B51BB0CC * __this, intptr_t ___state0, bool ___arg01, intptr_t ___arg12, intptr_t* ___exception3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int8_t, intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___state0, static_cast<int8_t>(___arg01), ___arg12, ___exception3);

}
// System.Void easyar.Detail/FunctorOfVoidFromBoolAndString/FunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate__ctor_mE5600CF1B718BAFFF0EE36C74521DECB87F9900B (FunctionDelegate_t2BCFEFAECC03E5B94F5820D6D25BEBF9B51BB0CC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromBoolAndString/FunctionDelegate::Invoke(System.IntPtr,System.Boolean,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_Invoke_m0753D8F938E7CA2C7FE797572B46A8B922D60CB9 (FunctionDelegate_t2BCFEFAECC03E5B94F5820D6D25BEBF9B51BB0CC * __this, intptr_t ___state0, bool ___arg01, intptr_t ___arg12, intptr_t* ___exception3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, bool, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, ___arg01, ___arg12, ___exception3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, bool, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___arg12, ___exception3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< intptr_t, bool, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___arg12, ___exception3);
					else
						GenericVirtActionInvoker4< intptr_t, bool, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___arg12, ___exception3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< intptr_t, bool, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0, ___arg01, ___arg12, ___exception3);
					else
						VirtActionInvoker4< intptr_t, bool, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0, ___arg01, ___arg12, ___exception3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, bool, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___arg12, ___exception3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromBoolAndString/FunctionDelegate::BeginInvoke(System.IntPtr,System.Boolean,System.IntPtr,System.IntPtr&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionDelegate_BeginInvoke_mA93B5B41A1BB3E3095D04C2D8F89F0AC180F97AA (FunctionDelegate_t2BCFEFAECC03E5B94F5820D6D25BEBF9B51BB0CC * __this, intptr_t ___state0, bool ___arg01, intptr_t ___arg12, intptr_t* ___exception3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___arg01);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg12);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___exception3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void easyar.Detail/FunctorOfVoidFromBoolAndString/FunctionDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_EndInvoke_m01FE9A80C6914BF3C38022D9AE9A9D75F17B5C7C (FunctionDelegate_t2BCFEFAECC03E5B94F5820D6D25BEBF9B51BB0CC * __this, intptr_t* ___exception0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___exception0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DestroyDelegate_tA754130F7C5EAF1B3666CAA90725D8B299169AA3 (DestroyDelegate_tA754130F7C5EAF1B3666CAA90725D8B299169AA3 * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(____state0);

}
// System.Void easyar.Detail/FunctorOfVoidFromBoolAndStringAndString/DestroyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate__ctor_m6BEE10772A8D0BDDB5E1605D084132B43B50A5DD (DestroyDelegate_tA754130F7C5EAF1B3666CAA90725D8B299169AA3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromBoolAndStringAndString/DestroyDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_Invoke_m5C16A308280121B60C5C6B09A72C4AEC42A351DE (DestroyDelegate_tA754130F7C5EAF1B3666CAA90725D8B299169AA3 * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____state0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____state0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromBoolAndStringAndString/DestroyDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyDelegate_BeginInvoke_m5CE359CCC2EBE01BA745ECC696D4FF8412650A82 (DestroyDelegate_tA754130F7C5EAF1B3666CAA90725D8B299169AA3 * __this, intptr_t ____state0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &____state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void easyar.Detail/FunctorOfVoidFromBoolAndStringAndString/DestroyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_EndInvoke_m195F0E384A1CEA831A68D272E5F6B9091DE6B8E1 (DestroyDelegate_tA754130F7C5EAF1B3666CAA90725D8B299169AA3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FunctionDelegate_t425F42CC6EC3725128BA73888D2D06FA1BF29F9C (FunctionDelegate_t425F42CC6EC3725128BA73888D2D06FA1BF29F9C * __this, intptr_t ___state0, bool ___arg01, intptr_t ___arg12, intptr_t ___arg23, intptr_t* ___exception4, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int8_t, intptr_t, intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___state0, static_cast<int8_t>(___arg01), ___arg12, ___arg23, ___exception4);

}
// System.Void easyar.Detail/FunctorOfVoidFromBoolAndStringAndString/FunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate__ctor_m78E2546423DB6CA68938A20765FDE64549BB2FF2 (FunctionDelegate_t425F42CC6EC3725128BA73888D2D06FA1BF29F9C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromBoolAndStringAndString/FunctionDelegate::Invoke(System.IntPtr,System.Boolean,System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_Invoke_m27DBDFEAC099DD36970543620BB622387E75E78D (FunctionDelegate_t425F42CC6EC3725128BA73888D2D06FA1BF29F9C * __this, intptr_t ___state0, bool ___arg01, intptr_t ___arg12, intptr_t ___arg23, intptr_t* ___exception4, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, bool, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, ___arg01, ___arg12, ___arg23, ___exception4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, bool, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___arg12, ___arg23, ___exception4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< intptr_t, bool, intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___arg12, ___arg23, ___exception4);
					else
						GenericVirtActionInvoker5< intptr_t, bool, intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___arg12, ___arg23, ___exception4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< intptr_t, bool, intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0, ___arg01, ___arg12, ___arg23, ___exception4);
					else
						VirtActionInvoker5< intptr_t, bool, intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0, ___arg01, ___arg12, ___arg23, ___exception4);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, bool, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___arg12, ___arg23, ___exception4, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromBoolAndStringAndString/FunctionDelegate::BeginInvoke(System.IntPtr,System.Boolean,System.IntPtr,System.IntPtr,System.IntPtr&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionDelegate_BeginInvoke_m12C2DEBA330C60FD3BAE9DB2B1F0A2356AD9D87A (FunctionDelegate_t425F42CC6EC3725128BA73888D2D06FA1BF29F9C * __this, intptr_t ___state0, bool ___arg01, intptr_t ___arg12, intptr_t ___arg23, intptr_t* ___exception4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___arg01);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg12);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg23);
	__d_args[4] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___exception4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Void easyar.Detail/FunctorOfVoidFromBoolAndStringAndString/FunctionDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_EndInvoke_m3CAB44DDEB62B2111B5E55B69CCD30F776703B9D (FunctionDelegate_t425F42CC6EC3725128BA73888D2D06FA1BF29F9C * __this, intptr_t* ___exception0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___exception0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DestroyDelegate_t09B55A55E7CB23344A288D89A3A4617777926F98 (DestroyDelegate_t09B55A55E7CB23344A288D89A3A4617777926F98 * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(____state0);

}
// System.Void easyar.Detail/FunctorOfVoidFromCameraState/DestroyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate__ctor_mF9C9B43433D5C0195FB8B00C968CA02FD7CFDFDF (DestroyDelegate_t09B55A55E7CB23344A288D89A3A4617777926F98 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromCameraState/DestroyDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_Invoke_m8B31A924195C66D5C396326B7324F0E0FD6BFC85 (DestroyDelegate_t09B55A55E7CB23344A288D89A3A4617777926F98 * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____state0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____state0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromCameraState/DestroyDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyDelegate_BeginInvoke_m98FB2D14335DC064E2538B28156BAB4EEA5A052D (DestroyDelegate_t09B55A55E7CB23344A288D89A3A4617777926F98 * __this, intptr_t ____state0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &____state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void easyar.Detail/FunctorOfVoidFromCameraState/DestroyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_EndInvoke_m3EACC9A22ED8B84B4B3224A0F68EBB3906EC0F30 (DestroyDelegate_t09B55A55E7CB23344A288D89A3A4617777926F98 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FunctionDelegate_t7A8387A666CCA463F3DD8E0BAEFB6A23855ABFE7 (FunctionDelegate_t7A8387A666CCA463F3DD8E0BAEFB6A23855ABFE7 * __this, intptr_t ___state0, int32_t ___arg01, intptr_t* ___exception2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___state0, ___arg01, ___exception2);

}
// System.Void easyar.Detail/FunctorOfVoidFromCameraState/FunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate__ctor_mD1E8C8B6508AED04D0916F21A75F716C80384BC0 (FunctionDelegate_t7A8387A666CCA463F3DD8E0BAEFB6A23855ABFE7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromCameraState/FunctionDelegate::Invoke(System.IntPtr,easyar.CameraState,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_Invoke_m3E4E6C2FFD74B31A8BDE4147E3F1059184B113D6 (FunctionDelegate_t7A8387A666CCA463F3DD8E0BAEFB6A23855ABFE7 * __this, intptr_t ___state0, int32_t ___arg01, intptr_t* ___exception2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, ___arg01, ___exception2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___exception2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, int32_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___exception2);
					else
						GenericVirtActionInvoker3< intptr_t, int32_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___exception2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, int32_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0, ___arg01, ___exception2);
					else
						VirtActionInvoker3< intptr_t, int32_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0, ___arg01, ___exception2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___exception2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromCameraState/FunctionDelegate::BeginInvoke(System.IntPtr,easyar.CameraState,System.IntPtr&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionDelegate_BeginInvoke_mA48286D95AB4472C3B9F3263313E06D1287D838A (FunctionDelegate_t7A8387A666CCA463F3DD8E0BAEFB6A23855ABFE7 * __this, intptr_t ___state0, int32_t ___arg01, intptr_t* ___exception2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraState_t58249EAA18205C20E59503AE97A2CE60ED9796AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(CameraState_t58249EAA18205C20E59503AE97A2CE60ED9796AA_il2cpp_TypeInfo_var, &___arg01);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___exception2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void easyar.Detail/FunctorOfVoidFromCameraState/FunctionDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_EndInvoke_m157C531ACDF3621DDEC0484FE1E52D2544A4B61E (FunctionDelegate_t7A8387A666CCA463F3DD8E0BAEFB6A23855ABFE7 * __this, intptr_t* ___exception0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___exception0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DestroyDelegate_tBECC977F9CD3912F61F1B815BB2A2FB7B0B11915 (DestroyDelegate_tBECC977F9CD3912F61F1B815BB2A2FB7B0B11915 * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(____state0);

}
// System.Void easyar.Detail/FunctorOfVoidFromCloudRecognizationResult/DestroyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate__ctor_mA34F849563E67E967F020E685DF7635EB913A842 (DestroyDelegate_tBECC977F9CD3912F61F1B815BB2A2FB7B0B11915 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromCloudRecognizationResult/DestroyDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_Invoke_m6F29CC129A6130D93B5EE7F872D49B3CA210C635 (DestroyDelegate_tBECC977F9CD3912F61F1B815BB2A2FB7B0B11915 * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____state0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____state0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromCloudRecognizationResult/DestroyDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyDelegate_BeginInvoke_m133B0561EF4E28E1205B946C19D75614DCA4EB00 (DestroyDelegate_tBECC977F9CD3912F61F1B815BB2A2FB7B0B11915 * __this, intptr_t ____state0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &____state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void easyar.Detail/FunctorOfVoidFromCloudRecognizationResult/DestroyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_EndInvoke_m6ECD36D7067E1E6D69AC414453F9E8CE7312EAF1 (DestroyDelegate_tBECC977F9CD3912F61F1B815BB2A2FB7B0B11915 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FunctionDelegate_t8C96DB344551D9F404C0CE26BD88A55EFC04B676 (FunctionDelegate_t8C96DB344551D9F404C0CE26BD88A55EFC04B676 * __this, intptr_t ___state0, intptr_t ___arg01, intptr_t* ___exception2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___state0, ___arg01, ___exception2);

}
// System.Void easyar.Detail/FunctorOfVoidFromCloudRecognizationResult/FunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate__ctor_m387DE175BD9B4623830E1B2B95A2E768398D2A86 (FunctionDelegate_t8C96DB344551D9F404C0CE26BD88A55EFC04B676 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromCloudRecognizationResult/FunctionDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_Invoke_mBC17F4F6A52E3DADCF20CA42807399993034ED0F (FunctionDelegate_t8C96DB344551D9F404C0CE26BD88A55EFC04B676 * __this, intptr_t ___state0, intptr_t ___arg01, intptr_t* ___exception2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, ___arg01, ___exception2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___exception2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___exception2);
					else
						GenericVirtActionInvoker3< intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___exception2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0, ___arg01, ___exception2);
					else
						VirtActionInvoker3< intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0, ___arg01, ___exception2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___exception2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromCloudRecognizationResult/FunctionDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionDelegate_BeginInvoke_mC13E4D7F99E83561E2050FE8F6B73DF680ADA1C2 (FunctionDelegate_t8C96DB344551D9F404C0CE26BD88A55EFC04B676 * __this, intptr_t ___state0, intptr_t ___arg01, intptr_t* ___exception2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg01);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___exception2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void easyar.Detail/FunctorOfVoidFromCloudRecognizationResult/FunctionDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_EndInvoke_mE59623A7422A407B4E19837C7C0189086408CFDC (FunctionDelegate_t8C96DB344551D9F404C0CE26BD88A55EFC04B676 * __this, intptr_t* ___exception0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___exception0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DestroyDelegate_t7BDED6920CE3E40F91C7C1DEAB1B46D3892B88AF (DestroyDelegate_t7BDED6920CE3E40F91C7C1DEAB1B46D3892B88AF * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(____state0);

}
// System.Void easyar.Detail/FunctorOfVoidFromFeedbackFrame/DestroyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate__ctor_m17E05E359DCF09DD7720311AF7D5DBDD871B117B (DestroyDelegate_t7BDED6920CE3E40F91C7C1DEAB1B46D3892B88AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromFeedbackFrame/DestroyDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_Invoke_m4C334624A0DC0F0AE7136FBF3CFB8514722ED881 (DestroyDelegate_t7BDED6920CE3E40F91C7C1DEAB1B46D3892B88AF * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____state0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____state0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromFeedbackFrame/DestroyDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyDelegate_BeginInvoke_m25A65729286C84F6D135A2A5ECD8453A4076FAC1 (DestroyDelegate_t7BDED6920CE3E40F91C7C1DEAB1B46D3892B88AF * __this, intptr_t ____state0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &____state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void easyar.Detail/FunctorOfVoidFromFeedbackFrame/DestroyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_EndInvoke_mD3094A2A79A368001B8E15B3E2336585E45F7A14 (DestroyDelegate_t7BDED6920CE3E40F91C7C1DEAB1B46D3892B88AF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FunctionDelegate_t63D8F6644CF25CC0CD10C915CF627A61A37DB782 (FunctionDelegate_t63D8F6644CF25CC0CD10C915CF627A61A37DB782 * __this, intptr_t ___state0, intptr_t ___arg01, intptr_t* ___exception2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___state0, ___arg01, ___exception2);

}
// System.Void easyar.Detail/FunctorOfVoidFromFeedbackFrame/FunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate__ctor_m8263BFB21C365FC19F555C5BA58EEB9D9A2DD580 (FunctionDelegate_t63D8F6644CF25CC0CD10C915CF627A61A37DB782 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromFeedbackFrame/FunctionDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_Invoke_mF3CCA15FBEF5182C9067A35C2E771C9C1A31C125 (FunctionDelegate_t63D8F6644CF25CC0CD10C915CF627A61A37DB782 * __this, intptr_t ___state0, intptr_t ___arg01, intptr_t* ___exception2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, ___arg01, ___exception2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___exception2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___exception2);
					else
						GenericVirtActionInvoker3< intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___exception2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0, ___arg01, ___exception2);
					else
						VirtActionInvoker3< intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0, ___arg01, ___exception2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___exception2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromFeedbackFrame/FunctionDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionDelegate_BeginInvoke_m0D42DC5527FEB6C1BF13121C7F4BD3C87812DF0D (FunctionDelegate_t63D8F6644CF25CC0CD10C915CF627A61A37DB782 * __this, intptr_t ___state0, intptr_t ___arg01, intptr_t* ___exception2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg01);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___exception2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void easyar.Detail/FunctorOfVoidFromFeedbackFrame/FunctionDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_EndInvoke_m1DE5CCE3E809AB9761FB568CBE27142BFED41965 (FunctionDelegate_t63D8F6644CF25CC0CD10C915CF627A61A37DB782 * __this, intptr_t* ___exception0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___exception0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DestroyDelegate_tA1EB29EB660D3E37AD58D26A458DCA2E78715060 (DestroyDelegate_tA1EB29EB660D3E37AD58D26A458DCA2E78715060 * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(____state0);

}
// System.Void easyar.Detail/FunctorOfVoidFromInputFrame/DestroyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate__ctor_m3CB7CD6A42586E3865F493B2192AC6AE9C233E93 (DestroyDelegate_tA1EB29EB660D3E37AD58D26A458DCA2E78715060 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromInputFrame/DestroyDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_Invoke_mB399338650967DB7F2DF3827592821EC69AD2404 (DestroyDelegate_tA1EB29EB660D3E37AD58D26A458DCA2E78715060 * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____state0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____state0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromInputFrame/DestroyDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyDelegate_BeginInvoke_m4061DEEC866F9254EE676430B7C355860ABFBD2B (DestroyDelegate_tA1EB29EB660D3E37AD58D26A458DCA2E78715060 * __this, intptr_t ____state0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &____state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void easyar.Detail/FunctorOfVoidFromInputFrame/DestroyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_EndInvoke_mF211D46233DEAA997CA255DB690E45B2B5EC0BDA (DestroyDelegate_tA1EB29EB660D3E37AD58D26A458DCA2E78715060 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FunctionDelegate_tE29A986BBA6E60D8B7B5C1BB805A74AF4C1BC539 (FunctionDelegate_tE29A986BBA6E60D8B7B5C1BB805A74AF4C1BC539 * __this, intptr_t ___state0, intptr_t ___arg01, intptr_t* ___exception2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___state0, ___arg01, ___exception2);

}
// System.Void easyar.Detail/FunctorOfVoidFromInputFrame/FunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate__ctor_m66C8C22B0448FC3F86FD679E985B3EBD9FBCE6BB (FunctionDelegate_tE29A986BBA6E60D8B7B5C1BB805A74AF4C1BC539 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromInputFrame/FunctionDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_Invoke_mA843AF60009D45AABC24061CE96AD759D1033968 (FunctionDelegate_tE29A986BBA6E60D8B7B5C1BB805A74AF4C1BC539 * __this, intptr_t ___state0, intptr_t ___arg01, intptr_t* ___exception2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, ___arg01, ___exception2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___exception2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___exception2);
					else
						GenericVirtActionInvoker3< intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___exception2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0, ___arg01, ___exception2);
					else
						VirtActionInvoker3< intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0, ___arg01, ___exception2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___exception2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromInputFrame/FunctionDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionDelegate_BeginInvoke_mE581B206100000CED9828863433A1613D17F53EF (FunctionDelegate_tE29A986BBA6E60D8B7B5C1BB805A74AF4C1BC539 * __this, intptr_t ___state0, intptr_t ___arg01, intptr_t* ___exception2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg01);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___exception2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void easyar.Detail/FunctorOfVoidFromInputFrame/FunctionDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_EndInvoke_m9BF31FE591DC109974BE4B968653D51B69F3FAA4 (FunctionDelegate_tE29A986BBA6E60D8B7B5C1BB805A74AF4C1BC539 * __this, intptr_t* ___exception0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___exception0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DestroyDelegate_tB204BFC0472D0EC0E2AFA80A8466678520CB5544 (DestroyDelegate_tB204BFC0472D0EC0E2AFA80A8466678520CB5544 * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(____state0);

}
// System.Void easyar.Detail/FunctorOfVoidFromLogLevelAndString/DestroyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate__ctor_m86020BB4B1651B9BF15155B00B2797F9E22721E5 (DestroyDelegate_tB204BFC0472D0EC0E2AFA80A8466678520CB5544 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromLogLevelAndString/DestroyDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_Invoke_m91F28804870625E9AA3A91826601EE6D5B621922 (DestroyDelegate_tB204BFC0472D0EC0E2AFA80A8466678520CB5544 * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____state0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____state0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromLogLevelAndString/DestroyDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyDelegate_BeginInvoke_m719AECCDB8782B7737528FF39A1BFA5471E73813 (DestroyDelegate_tB204BFC0472D0EC0E2AFA80A8466678520CB5544 * __this, intptr_t ____state0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &____state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void easyar.Detail/FunctorOfVoidFromLogLevelAndString/DestroyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_EndInvoke_mD06A0DF14287D987176B4380E10CFF644E994F68 (DestroyDelegate_tB204BFC0472D0EC0E2AFA80A8466678520CB5544 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FunctionDelegate_t60B35940607A97C4A22FB9C9E35F87F21FDB4151 (FunctionDelegate_t60B35940607A97C4A22FB9C9E35F87F21FDB4151 * __this, intptr_t ___state0, int32_t ___arg01, intptr_t ___arg12, intptr_t* ___exception3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___state0, ___arg01, ___arg12, ___exception3);

}
// System.Void easyar.Detail/FunctorOfVoidFromLogLevelAndString/FunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate__ctor_m015944DB6C5F32F5B0F81A40E6CDA0FE988E79B2 (FunctionDelegate_t60B35940607A97C4A22FB9C9E35F87F21FDB4151 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromLogLevelAndString/FunctionDelegate::Invoke(System.IntPtr,easyar.LogLevel,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_Invoke_m311F8BA4B4A0CC14FC80FCB5128C5FD111A27736 (FunctionDelegate_t60B35940607A97C4A22FB9C9E35F87F21FDB4151 * __this, intptr_t ___state0, int32_t ___arg01, intptr_t ___arg12, intptr_t* ___exception3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, ___arg01, ___arg12, ___exception3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___arg12, ___exception3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< intptr_t, int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___arg12, ___exception3);
					else
						GenericVirtActionInvoker4< intptr_t, int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___arg12, ___exception3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< intptr_t, int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0, ___arg01, ___arg12, ___exception3);
					else
						VirtActionInvoker4< intptr_t, int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0, ___arg01, ___arg12, ___exception3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___arg12, ___exception3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromLogLevelAndString/FunctionDelegate::BeginInvoke(System.IntPtr,easyar.LogLevel,System.IntPtr,System.IntPtr&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionDelegate_BeginInvoke_mF7876949BD047C6E8B50056C6CD44959E3A987D7 (FunctionDelegate_t60B35940607A97C4A22FB9C9E35F87F21FDB4151 * __this, intptr_t ___state0, int32_t ___arg01, intptr_t ___arg12, intptr_t* ___exception3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogLevel_t3F10225190F577CB4304ED02792E8251E01CD955_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(LogLevel_t3F10225190F577CB4304ED02792E8251E01CD955_il2cpp_TypeInfo_var, &___arg01);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg12);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___exception3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void easyar.Detail/FunctorOfVoidFromLogLevelAndString/FunctionDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_EndInvoke_m5FD22E3CB0716E9EB9F701C68FB394E1ED6F66B2 (FunctionDelegate_t60B35940607A97C4A22FB9C9E35F87F21FDB4151 * __this, intptr_t* ___exception0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___exception0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DestroyDelegate_tE41281B5CEE44B297A62F28878698BC3ADD0EB6B (DestroyDelegate_tE41281B5CEE44B297A62F28878698BC3ADD0EB6B * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(____state0);

}
// System.Void easyar.Detail/FunctorOfVoidFromOutputFrame/DestroyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate__ctor_m3F95A58C50C734BA85851B128B56F27C5FA83522 (DestroyDelegate_tE41281B5CEE44B297A62F28878698BC3ADD0EB6B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromOutputFrame/DestroyDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_Invoke_mAC30093A343C014FBF1E8D518BC6C1552B575612 (DestroyDelegate_tE41281B5CEE44B297A62F28878698BC3ADD0EB6B * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____state0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____state0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromOutputFrame/DestroyDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyDelegate_BeginInvoke_m2760663F809C4A9AE236F7A0CA53E2A5CB5C3949 (DestroyDelegate_tE41281B5CEE44B297A62F28878698BC3ADD0EB6B * __this, intptr_t ____state0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &____state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void easyar.Detail/FunctorOfVoidFromOutputFrame/DestroyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_EndInvoke_m04486CC690A7AEE5AB8530C80407E161755629F2 (DestroyDelegate_tE41281B5CEE44B297A62F28878698BC3ADD0EB6B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FunctionDelegate_t6555C17DE7B970D98986CA8073AC56AA791B85E5 (FunctionDelegate_t6555C17DE7B970D98986CA8073AC56AA791B85E5 * __this, intptr_t ___state0, intptr_t ___arg01, intptr_t* ___exception2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___state0, ___arg01, ___exception2);

}
// System.Void easyar.Detail/FunctorOfVoidFromOutputFrame/FunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate__ctor_m1FC848726BB1A70FFD7A12F469E5437DF2F53067 (FunctionDelegate_t6555C17DE7B970D98986CA8073AC56AA791B85E5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromOutputFrame/FunctionDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_Invoke_m6AC4C64677B5392CB85803C1C2AC5DD2320B7F42 (FunctionDelegate_t6555C17DE7B970D98986CA8073AC56AA791B85E5 * __this, intptr_t ___state0, intptr_t ___arg01, intptr_t* ___exception2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, ___arg01, ___exception2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___exception2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___exception2);
					else
						GenericVirtActionInvoker3< intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___exception2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0, ___arg01, ___exception2);
					else
						VirtActionInvoker3< intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0, ___arg01, ___exception2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___exception2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromOutputFrame/FunctionDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionDelegate_BeginInvoke_m188D2810F74A72B9FD1B8BF189235DB0114A4992 (FunctionDelegate_t6555C17DE7B970D98986CA8073AC56AA791B85E5 * __this, intptr_t ___state0, intptr_t ___arg01, intptr_t* ___exception2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg01);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___exception2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void easyar.Detail/FunctorOfVoidFromOutputFrame/FunctionDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_EndInvoke_mFFD7B8C8E33737141201E000622C993D7C74E8B7 (FunctionDelegate_t6555C17DE7B970D98986CA8073AC56AA791B85E5 * __this, intptr_t* ___exception0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___exception0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DestroyDelegate_t15813369CAD8B5046CF2CF2EE4C50CBC27E59A02 (DestroyDelegate_t15813369CAD8B5046CF2CF2EE4C50CBC27E59A02 * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(____state0);

}
// System.Void easyar.Detail/FunctorOfVoidFromPermissionStatusAndString/DestroyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate__ctor_m98EADF141FC07E774F93A2395BA3982F6A2A7208 (DestroyDelegate_t15813369CAD8B5046CF2CF2EE4C50CBC27E59A02 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromPermissionStatusAndString/DestroyDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_Invoke_m412D76591FA75720AE3061DE1BB9825353BBE560 (DestroyDelegate_t15813369CAD8B5046CF2CF2EE4C50CBC27E59A02 * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____state0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____state0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromPermissionStatusAndString/DestroyDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyDelegate_BeginInvoke_m4C7F15A541228E0317026A5C570ADACDA55C956E (DestroyDelegate_t15813369CAD8B5046CF2CF2EE4C50CBC27E59A02 * __this, intptr_t ____state0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &____state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void easyar.Detail/FunctorOfVoidFromPermissionStatusAndString/DestroyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_EndInvoke_m749BBD15B1A003A035F280DA2264134140E031C5 (DestroyDelegate_t15813369CAD8B5046CF2CF2EE4C50CBC27E59A02 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FunctionDelegate_tA2E98FA95A56A55FB0FCABA3A35C65EDF8E72901 (FunctionDelegate_tA2E98FA95A56A55FB0FCABA3A35C65EDF8E72901 * __this, intptr_t ___state0, int32_t ___arg01, intptr_t ___arg12, intptr_t* ___exception3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___state0, ___arg01, ___arg12, ___exception3);

}
// System.Void easyar.Detail/FunctorOfVoidFromPermissionStatusAndString/FunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate__ctor_m8B3F2A484C9BBEF97DD971B989F850C1ACDC0928 (FunctionDelegate_tA2E98FA95A56A55FB0FCABA3A35C65EDF8E72901 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromPermissionStatusAndString/FunctionDelegate::Invoke(System.IntPtr,easyar.PermissionStatus,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_Invoke_m34E5DD6AEC66E6B9F8AAD11EE53434D90E5153CB (FunctionDelegate_tA2E98FA95A56A55FB0FCABA3A35C65EDF8E72901 * __this, intptr_t ___state0, int32_t ___arg01, intptr_t ___arg12, intptr_t* ___exception3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, ___arg01, ___arg12, ___exception3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___arg12, ___exception3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< intptr_t, int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___arg12, ___exception3);
					else
						GenericVirtActionInvoker4< intptr_t, int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___arg12, ___exception3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< intptr_t, int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0, ___arg01, ___arg12, ___exception3);
					else
						VirtActionInvoker4< intptr_t, int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0, ___arg01, ___arg12, ___exception3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___arg12, ___exception3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromPermissionStatusAndString/FunctionDelegate::BeginInvoke(System.IntPtr,easyar.PermissionStatus,System.IntPtr,System.IntPtr&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionDelegate_BeginInvoke_mBEDD19B1BA02E8C83F80D2DB0A25819D2956655D (FunctionDelegate_tA2E98FA95A56A55FB0FCABA3A35C65EDF8E72901 * __this, intptr_t ___state0, int32_t ___arg01, intptr_t ___arg12, intptr_t* ___exception3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PermissionStatus_t5944D431511F991F8A4BBD2A4292CEA1B9A501AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(PermissionStatus_t5944D431511F991F8A4BBD2A4292CEA1B9A501AB_il2cpp_TypeInfo_var, &___arg01);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg12);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___exception3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void easyar.Detail/FunctorOfVoidFromPermissionStatusAndString/FunctionDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_EndInvoke_m70A764EF297BD410291384763AF70731B715C1EB (FunctionDelegate_tA2E98FA95A56A55FB0FCABA3A35C65EDF8E72901 * __this, intptr_t* ___exception0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___exception0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DestroyDelegate_t9EC5470AC3EB7BB81496A4ED9095BDE3E4FEC987 (DestroyDelegate_t9EC5470AC3EB7BB81496A4ED9095BDE3E4FEC987 * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(____state0);

}
// System.Void easyar.Detail/FunctorOfVoidFromRecordStatusAndString/DestroyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate__ctor_m254B4488BB9DCC8972DEA1B21D26E8C054ABA9A6 (DestroyDelegate_t9EC5470AC3EB7BB81496A4ED9095BDE3E4FEC987 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromRecordStatusAndString/DestroyDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_Invoke_m77C0E8D9CAA7DE4BB30CD94DA088A53534C5E9B6 (DestroyDelegate_t9EC5470AC3EB7BB81496A4ED9095BDE3E4FEC987 * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____state0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____state0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromRecordStatusAndString/DestroyDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyDelegate_BeginInvoke_m30F9927A00A0E93642D4E7CEB40F558EFA40AB9F (DestroyDelegate_t9EC5470AC3EB7BB81496A4ED9095BDE3E4FEC987 * __this, intptr_t ____state0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &____state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void easyar.Detail/FunctorOfVoidFromRecordStatusAndString/DestroyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_EndInvoke_m7E454340FF593BE84AE441B28F1ACD592222431A (DestroyDelegate_t9EC5470AC3EB7BB81496A4ED9095BDE3E4FEC987 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FunctionDelegate_tE075AB16ED0ED8EA803B69FFD8E05476B9F86BE8 (FunctionDelegate_tE075AB16ED0ED8EA803B69FFD8E05476B9F86BE8 * __this, intptr_t ___state0, int32_t ___arg01, intptr_t ___arg12, intptr_t* ___exception3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___state0, ___arg01, ___arg12, ___exception3);

}
// System.Void easyar.Detail/FunctorOfVoidFromRecordStatusAndString/FunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate__ctor_m5AC33EE5D8C78E22B77EFB9FD4AE09EE1D4D87C6 (FunctionDelegate_tE075AB16ED0ED8EA803B69FFD8E05476B9F86BE8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromRecordStatusAndString/FunctionDelegate::Invoke(System.IntPtr,easyar.RecordStatus,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_Invoke_mA59E8450682A6FBB3AE3B8F4983F514C44724011 (FunctionDelegate_tE075AB16ED0ED8EA803B69FFD8E05476B9F86BE8 * __this, intptr_t ___state0, int32_t ___arg01, intptr_t ___arg12, intptr_t* ___exception3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, ___arg01, ___arg12, ___exception3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___arg12, ___exception3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< intptr_t, int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___arg12, ___exception3);
					else
						GenericVirtActionInvoker4< intptr_t, int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___arg12, ___exception3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< intptr_t, int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0, ___arg01, ___arg12, ___exception3);
					else
						VirtActionInvoker4< intptr_t, int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0, ___arg01, ___arg12, ___exception3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, intptr_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___arg12, ___exception3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromRecordStatusAndString/FunctionDelegate::BeginInvoke(System.IntPtr,easyar.RecordStatus,System.IntPtr,System.IntPtr&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionDelegate_BeginInvoke_mA6B23DEFA4E23FD2584779E3BE0BF90B876E60B4 (FunctionDelegate_tE075AB16ED0ED8EA803B69FFD8E05476B9F86BE8 * __this, intptr_t ___state0, int32_t ___arg01, intptr_t ___arg12, intptr_t* ___exception3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordStatus_t157BC0C04121E2F627428C0347C1DBDCE6222948_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(RecordStatus_t157BC0C04121E2F627428C0347C1DBDCE6222948_il2cpp_TypeInfo_var, &___arg01);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg12);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___exception3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void easyar.Detail/FunctorOfVoidFromRecordStatusAndString/FunctionDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_EndInvoke_m7B390ABDBD1271BA60F07F8C2B483E99921BE427 (FunctionDelegate_tE075AB16ED0ED8EA803B69FFD8E05476B9F86BE8 * __this, intptr_t* ___exception0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___exception0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DestroyDelegate_tD2C9B86C14009CE2E52364919D710875B80C72CB (DestroyDelegate_tD2C9B86C14009CE2E52364919D710875B80C72CB * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(____state0);

}
// System.Void easyar.Detail/FunctorOfVoidFromTargetAndBool/DestroyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate__ctor_m4B12DF6053BFF7879670C44086BF5EB766D4C8EA (DestroyDelegate_tD2C9B86C14009CE2E52364919D710875B80C72CB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromTargetAndBool/DestroyDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_Invoke_m8114C4043341BF432A5F23A73FB3371E2941E486 (DestroyDelegate_tD2C9B86C14009CE2E52364919D710875B80C72CB * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____state0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____state0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromTargetAndBool/DestroyDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyDelegate_BeginInvoke_m5A3CDF3B03BF851F066A7DAA5B338AE09F9A4516 (DestroyDelegate_tD2C9B86C14009CE2E52364919D710875B80C72CB * __this, intptr_t ____state0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &____state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void easyar.Detail/FunctorOfVoidFromTargetAndBool/DestroyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_EndInvoke_m076F58C76C25CFB0F6D9F5751338F78455DADFED (DestroyDelegate_tD2C9B86C14009CE2E52364919D710875B80C72CB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FunctionDelegate_t1662EA1F102A256065D62097EC04494299C61073 (FunctionDelegate_t1662EA1F102A256065D62097EC04494299C61073 * __this, intptr_t ___state0, intptr_t ___arg01, bool ___arg12, intptr_t* ___exception3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, int8_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___state0, ___arg01, static_cast<int8_t>(___arg12), ___exception3);

}
// System.Void easyar.Detail/FunctorOfVoidFromTargetAndBool/FunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate__ctor_m25EB4DD28B10CED93AB71904E76543125E8C3D9C (FunctionDelegate_t1662EA1F102A256065D62097EC04494299C61073 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromTargetAndBool/FunctionDelegate::Invoke(System.IntPtr,System.IntPtr,System.Boolean,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_Invoke_mDF8E1A50C5A03E910D2998904AED16B5DFBA895A (FunctionDelegate_t1662EA1F102A256065D62097EC04494299C61073 * __this, intptr_t ___state0, intptr_t ___arg01, bool ___arg12, intptr_t* ___exception3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, bool, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, ___arg01, ___arg12, ___exception3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, bool, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___arg12, ___exception3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< intptr_t, intptr_t, bool, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___arg12, ___exception3);
					else
						GenericVirtActionInvoker4< intptr_t, intptr_t, bool, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___arg12, ___exception3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< intptr_t, intptr_t, bool, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0, ___arg01, ___arg12, ___exception3);
					else
						VirtActionInvoker4< intptr_t, intptr_t, bool, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0, ___arg01, ___arg12, ___exception3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, bool, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___arg12, ___exception3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromTargetAndBool/FunctionDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.Boolean,System.IntPtr&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionDelegate_BeginInvoke_m06B2A2D9F0623A6DD2C0842C21FF4471C886F912 (FunctionDelegate_t1662EA1F102A256065D62097EC04494299C61073 * __this, intptr_t ___state0, intptr_t ___arg01, bool ___arg12, intptr_t* ___exception3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg01);
	__d_args[2] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___arg12);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___exception3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void easyar.Detail/FunctorOfVoidFromTargetAndBool/FunctionDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_EndInvoke_m4EA3A5DEE3C4745C3E83BFC479B75E53F4C07D5E (FunctionDelegate_t1662EA1F102A256065D62097EC04494299C61073 * __this, intptr_t* ___exception0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___exception0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DestroyDelegate_t5F1C180806668FDEEB7A743C1BB2F66D8E899F9A (DestroyDelegate_t5F1C180806668FDEEB7A743C1BB2F66D8E899F9A * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(____state0);

}
// System.Void easyar.Detail/FunctorOfVoidFromVideoStatus/DestroyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate__ctor_m7E94D5BAC777F9525439E53B431E65A790373FBC (DestroyDelegate_t5F1C180806668FDEEB7A743C1BB2F66D8E899F9A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromVideoStatus/DestroyDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_Invoke_m0CE18D713C828C7CE1BC0D55D240D07BCE9AC448 (DestroyDelegate_t5F1C180806668FDEEB7A743C1BB2F66D8E899F9A * __this, intptr_t ____state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ____state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____state0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____state0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____state0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromVideoStatus/DestroyDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyDelegate_BeginInvoke_mF4ED61D69914E6592586965BD4581F837E123D69 (DestroyDelegate_t5F1C180806668FDEEB7A743C1BB2F66D8E899F9A * __this, intptr_t ____state0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &____state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void easyar.Detail/FunctorOfVoidFromVideoStatus/DestroyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDelegate_EndInvoke_m4ACD27E8C81A6FE3DB6CEB9FE9BC149889469112 (DestroyDelegate_t5F1C180806668FDEEB7A743C1BB2F66D8E899F9A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FunctionDelegate_t36CB2EDB27F73CAF5278B8832DEE4A261A04DA23 (FunctionDelegate_t36CB2EDB27F73CAF5278B8832DEE4A261A04DA23 * __this, intptr_t ___state0, int32_t ___arg01, intptr_t* ___exception2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___state0, ___arg01, ___exception2);

}
// System.Void easyar.Detail/FunctorOfVoidFromVideoStatus/FunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate__ctor_mCD69781F354E2C312B850906CC0D72B27E097F19 (FunctionDelegate_t36CB2EDB27F73CAF5278B8832DEE4A261A04DA23 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void easyar.Detail/FunctorOfVoidFromVideoStatus/FunctionDelegate::Invoke(System.IntPtr,easyar.VideoStatus,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_Invoke_m6769AAC7D371BE72E7143F37C60FBD94F00B07BC (FunctionDelegate_t36CB2EDB27F73CAF5278B8832DEE4A261A04DA23 * __this, intptr_t ___state0, int32_t ___arg01, intptr_t* ___exception2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, ___arg01, ___exception2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___exception2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, int32_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___exception2);
					else
						GenericVirtActionInvoker3< intptr_t, int32_t, intptr_t* >::Invoke(targetMethod, targetThis, ___state0, ___arg01, ___exception2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, int32_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0, ___arg01, ___exception2);
					else
						VirtActionInvoker3< intptr_t, int32_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0, ___arg01, ___exception2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___arg01, ___exception2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult easyar.Detail/FunctorOfVoidFromVideoStatus/FunctionDelegate::BeginInvoke(System.IntPtr,easyar.VideoStatus,System.IntPtr&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionDelegate_BeginInvoke_m2C935A95AB405C4C7340AF83860420C64859AF53 (FunctionDelegate_t36CB2EDB27F73CAF5278B8832DEE4A261A04DA23 * __this, intptr_t ___state0, int32_t ___arg01, intptr_t* ___exception2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoStatus_tAE351744A8AFDD8B0FAE24C926369DDFFFBA9161_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(VideoStatus_tAE351744A8AFDD8B0FAE24C926369DDFFFBA9161_il2cpp_TypeInfo_var, &___arg01);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___exception2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void easyar.Detail/FunctorOfVoidFromVideoStatus/FunctionDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDelegate_EndInvoke_m4EAB0F6C3CA9F3E419F37FF862590C788C5A1705 (FunctionDelegate_t36CB2EDB27F73CAF5278B8832DEE4A261A04DA23 * __this, intptr_t* ___exception0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___exception0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void easyar.EasyARSettings/TargetGizmoConfig/ImageTargetConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetConfig__ctor_m2200CBA8AFDF694293F19CCF281198213BE4E2CA (ImageTargetConfig_t13E4A6FDB6BF388C78C1A3E886AF482338D94D08 * __this, const RuntimeMethod* method)
{
	{
		// public bool EnableImageFile = true;
		__this->set_EnableImageFile_0((bool)1);
		// public bool EnableTargetDataFile = true;
		__this->set_EnableTargetDataFile_1((bool)1);
		// public bool EnableTarget = true;
		__this->set_EnableTarget_2((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void easyar.EasyARSettings/TargetGizmoConfig/ObjectTargetConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTargetConfig__ctor_mE374EC865B58C4EA6F40623A483C24280BE4083D (ObjectTargetConfig_t62AD58634ED6E0AFF01A857C4486C330332D5EBE * __this, const RuntimeMethod* method)
{
	{
		// public bool Enable = true;
		__this->set_Enable_0((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
