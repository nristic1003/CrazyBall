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
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,EZCameraShake.CameraShaker>
struct Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D;
// System.Collections.Generic.IEnumerable`1<EZCameraShake.CameraShakeInstance>
struct IEnumerable_1_t227F638A285B6CCAAD175C115AA1BA8927EEDC65;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,EZCameraShake.CameraShaker>
struct KeyCollection_t872F56705115A16FDA4B7F2E59A78E2262AEEB1C;
// System.Collections.Generic.List`1<EZCameraShake.CameraShakeInstance>
struct List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,EZCameraShake.CameraShaker>
struct ValueCollection_tB004FDF2FFE8E28DBB80395BC72784F0214DAF10;
// System.Collections.Generic.Dictionary`2/Entry<System.String,EZCameraShake.CameraShaker>[]
struct EntryU5BU5D_t428D24452DC493F906D26979455A4E27BF918307;
// EZCameraShake.CameraShakeInstance[]
struct CameraShakeInstanceU5BU5D_t7EBB555FAB7DEDDBD1A6877CA3F8FC634D814EF0;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Axe
struct Axe_t60E1A21DEC4B86EAAFB6436359E770DB7D6E1D5B;
// BallMoving
struct BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// EZCameraShake.CameraShakeInstance
struct CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160;
// EZCameraShake.CameraShaker
struct CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333;
// EZCameraShake.CameraUtilities
struct CameraUtilities_t920F545F51C42D88F5DB3D4161B08A6D5E199D80;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// CollectorScript
struct CollectorScript_t7637D580B6A2CBC1828B58D44D434582F5852DE8;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB;
// GameController
struct GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Joystick
struct Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873;
// MainMenu
struct MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Score
struct Score_tE07CBD9780DFC212BE43719819F512E8861103C7;
// ShakeByDistance
struct ShakeByDistance_t4655C740DBEBD63E111F88E438B02DC63828E59A;
// ShakeDemo
struct ShakeDemo_t7E6501DA3EFC607FDD21FAF56E2571579CE26FFA;
// ShakeOnKeyPress
struct ShakeOnKeyPress_tA01A4E437C08A53200997CBDC693DE691CCDAB11;
// ShakeOnTrigger
struct ShakeOnTrigger_tA7DA0AADE86CC5654771BA07FDB52D18398800BC;
// Spawner
struct Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TubeScript
struct TubeScript_tB0AB73169771A424282FCC5BADBC645D039F215C;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// ShakeDemo/<>c
struct U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538;
// ShakeDemo/Slider
struct Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD;
// Spawner/<create>d__2
struct U3CcreateU3Ed__2_t2A7269DA4D4C022A6941BF4B5A4DDA5D44329035;

IL2CPP_EXTERN_C RuntimeClass* CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraShakeState_t66A406C932C029BD7B8E8781E0F80F73C669A400_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CcreateU3Ed__2_t2A7269DA4D4C022A6941BF4B5A4DDA5D44329035_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral0352CE8D64F9719150DB5FB895B7666408131AAC;
IL2CPP_EXTERN_C String_t* _stringLiteral081FC2571D6732CA892CE45DE7C64E96CFCABA7F;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
IL2CPP_EXTERN_C String_t* _stringLiteral0BBEDDBB54CE3A2189C5F4C8545E40AA7107F60B;
IL2CPP_EXTERN_C String_t* _stringLiteral1A706322D30880A4D385B9C17EF6CF078D4FDB20;
IL2CPP_EXTERN_C String_t* _stringLiteral1DA272BABB7385BBD034A0D48900222D3C40101D;
IL2CPP_EXTERN_C String_t* _stringLiteral223A27883BAC4DCD84AA7DE394FB5E37B2502995;
IL2CPP_EXTERN_C String_t* _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380;
IL2CPP_EXTERN_C String_t* _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
IL2CPP_EXTERN_C String_t* _stringLiteral2487EE56C74992C7EBC8151B84C12B18E4FB5F26;
IL2CPP_EXTERN_C String_t* _stringLiteral2C8B43E79B0518A0D4BA52F30B5324943A108B71;
IL2CPP_EXTERN_C String_t* _stringLiteral2F1886E56B0BE86496BC4003E63677AEC1139CC9;
IL2CPP_EXTERN_C String_t* _stringLiteral3C80910F10267023F7D8AF207D13744681E292BF;
IL2CPP_EXTERN_C String_t* _stringLiteral4060F0FB96C0F2AF00DED589F16E2EF2E0F4A60D;
IL2CPP_EXTERN_C String_t* _stringLiteral415532967CDC271A3E861A53C314003A47710165;
IL2CPP_EXTERN_C String_t* _stringLiteral42BE89C6A66E84EE1086370DF52323B75A26F3D6;
IL2CPP_EXTERN_C String_t* _stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673;
IL2CPP_EXTERN_C String_t* _stringLiteral630D1D2FF6651EAC53F7B7C743B2822BB336511A;
IL2CPP_EXTERN_C String_t* _stringLiteral6B1F6209AFC46D0B0BEF706304CC65145367EEC8;
IL2CPP_EXTERN_C String_t* _stringLiteral72D5DBE442E9194F36F705166F7B27EFAF3F0237;
IL2CPP_EXTERN_C String_t* _stringLiteral78E40C15ED5411DC388506A0803FD7C35BE5032F;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE8C3C0A60A6ACECA32354A399EE2CC5274F926;
IL2CPP_EXTERN_C String_t* _stringLiteral80D34E60DB62F6CF9B2138211D2EB0B4B75087D1;
IL2CPP_EXTERN_C String_t* _stringLiteral818B9FD18205A6A6D4F06727ADFA72469D697FCA;
IL2CPP_EXTERN_C String_t* _stringLiteral96CA915FA62159B51FF38C0E5BCD3A94F9A47528;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B55367222587EF826DD892F368FEAE544E081C;
IL2CPP_EXTERN_C String_t* _stringLiteralA8C8A40F3DCEED59DB2F1694F22C2380819C761B;
IL2CPP_EXTERN_C String_t* _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9;
IL2CPP_EXTERN_C String_t* _stringLiteralB7970E0429A83BD1EB36417A6DBFB411CA5525A1;
IL2CPP_EXTERN_C String_t* _stringLiteralBE37EEABBB7EDEA62EC88411545D853031136249;
IL2CPP_EXTERN_C String_t* _stringLiteralC5CB235FDF341E57B3A3E3D289810AD3382B4E8B;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9A0310257A87677DC88CAE88E97A78A79B8706;
IL2CPP_EXTERN_C String_t* _stringLiteralCEC979DB49C578BB006779B58C8F783C758562BB;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA0F31A790E44029039C7B4B14CBA23903CC94DC;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralDDF611DB0A704ACE16572058A52326F1D94303BD;
IL2CPP_EXTERN_C String_t* _stringLiteralE77F01078A5DB9C4085488D582D8669D837FD2C4;
IL2CPP_EXTERN_C String_t* _stringLiteralEB36B3027434601A552FC457DE65FB77F6F4D766;
IL2CPP_EXTERN_C String_t* _stringLiteralEFDDF27E09A8F5A7709A290BC561AC1F3E82805B;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m0B7766734B5A6F884BEEEDA37B87379D6DC07410_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mF85F71AC67339A01419E8CEC35D94F23C2DA1726_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m99016DBFDD161CC8A746987228C9C964E8096E68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC813A3142C8B2AE0993CE5FC58FD1013572E62D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD3BE8059031D9C7A0F118C37D2EAD726603C510B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDEBE892CB4963254B9688C8B5D64D89B9032000C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8508B66302BD200C5BFAADF15B324199B414FF1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7_m60EEE41BD6F7406B81103E30BAEE044B808E5EF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_m0906D4CAD135F57311BB9B9B920527676AB73479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFA7878097E1C5685CDDFB3AD695D35273A0D6314_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF9EC113241EA378F89BB0D50D5059E1A27375B7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mDF95E6375EA373D8F1F1A0486C4EF333FE630A90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4D002C993A070565E673832933FD5FE541DCB30F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA739B19362BA5129B5E2B0E0431E15D95992520D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD01FF37F6E23E38B1FA9EE611DF26E33E8F9A815_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3F48A62A0B3336E176A28B3346D16D7473D0A14D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnGUIU3Eb__10_0_m28D6C68537B0DE1103C2901D40E8D4A2E9E4BCFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CcreateU3Ed__2_System_Collections_IEnumerator_Reset_m2DE46BCBC95F027797F47ECCAE012BB8BD9D843F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,EZCameraShake.CameraShaker>
struct  Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t428D24452DC493F906D26979455A4E27BF918307* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t872F56705115A16FDA4B7F2E59A78E2262AEEB1C * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB004FDF2FFE8E28DBB80395BC72784F0214DAF10 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D, ___entries_1)); }
	inline EntryU5BU5D_t428D24452DC493F906D26979455A4E27BF918307* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t428D24452DC493F906D26979455A4E27BF918307** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t428D24452DC493F906D26979455A4E27BF918307* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D, ___keys_7)); }
	inline KeyCollection_t872F56705115A16FDA4B7F2E59A78E2262AEEB1C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t872F56705115A16FDA4B7F2E59A78E2262AEEB1C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t872F56705115A16FDA4B7F2E59A78E2262AEEB1C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D, ___values_8)); }
	inline ValueCollection_tB004FDF2FFE8E28DBB80395BC72784F0214DAF10 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB004FDF2FFE8E28DBB80395BC72784F0214DAF10 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB004FDF2FFE8E28DBB80395BC72784F0214DAF10 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<EZCameraShake.CameraShakeInstance>
struct  List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CameraShakeInstanceU5BU5D_t7EBB555FAB7DEDDBD1A6877CA3F8FC634D814EF0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E, ____items_1)); }
	inline CameraShakeInstanceU5BU5D_t7EBB555FAB7DEDDBD1A6877CA3F8FC634D814EF0* get__items_1() const { return ____items_1; }
	inline CameraShakeInstanceU5BU5D_t7EBB555FAB7DEDDBD1A6877CA3F8FC634D814EF0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CameraShakeInstanceU5BU5D_t7EBB555FAB7DEDDBD1A6877CA3F8FC634D814EF0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CameraShakeInstanceU5BU5D_t7EBB555FAB7DEDDBD1A6877CA3F8FC634D814EF0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E_StaticFields, ____emptyArray_5)); }
	inline CameraShakeInstanceU5BU5D_t7EBB555FAB7DEDDBD1A6877CA3F8FC634D814EF0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CameraShakeInstanceU5BU5D_t7EBB555FAB7DEDDBD1A6877CA3F8FC634D814EF0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CameraShakeInstanceU5BU5D_t7EBB555FAB7DEDDBD1A6877CA3F8FC634D814EF0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// EZCameraShake.CameraShakePresets
struct  CameraShakePresets_tCE8A21040BC559B60E9D1C7E959BD71FEC0D3095  : public RuntimeObject
{
public:

public:
};


// EZCameraShake.CameraUtilities
struct  CameraUtilities_t920F545F51C42D88F5DB3D4161B08A6D5E199D80  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// ShakeDemo/<>c
struct  U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538_StaticFields
{
public:
	// ShakeDemo/<>c ShakeDemo/<>c::<>9
	U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538 * ___U3CU3E9_0;
	// ShakeDemo/Slider ShakeDemo/<>c::<>9__10_0
	Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * ___U3CU3E9__10_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_1), (void*)value);
	}
};


// Spawner/<create>d__2
struct  U3CcreateU3Ed__2_t2A7269DA4D4C022A6941BF4B5A4DDA5D44329035  : public RuntimeObject
{
public:
	// System.Int32 Spawner/<create>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Spawner/<create>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Spawner Spawner/<create>d__2::<>4__this
	Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CcreateU3Ed__2_t2A7269DA4D4C022A6941BF4B5A4DDA5D44329035, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CcreateU3Ed__2_t2A7269DA4D4C022A6941BF4B5A4DDA5D44329035, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CcreateU3Ed__2_t2A7269DA4D4C022A6941BF4B5A4DDA5D44329035, ___U3CU3E4__this_2)); }
	inline Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<EZCameraShake.CameraShakeInstance>
struct  Enumerator_tBC07D4EED300FF8ABD471FEA162850350C482176 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tBC07D4EED300FF8ABD471FEA162850350C482176, ___list_0)); }
	inline List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * get_list_0() const { return ___list_0; }
	inline List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tBC07D4EED300FF8ABD471FEA162850350C482176, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tBC07D4EED300FF8ABD471FEA162850350C482176, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tBC07D4EED300FF8ABD471FEA162850350C482176, ___current_3)); }
	inline CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * get_current_3() const { return ___current_3; }
	inline CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// EZCameraShake.CameraShakeInstance
struct  CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160  : public RuntimeObject
{
public:
	// System.Single EZCameraShake.CameraShakeInstance::Magnitude
	float ___Magnitude_0;
	// System.Single EZCameraShake.CameraShakeInstance::Roughness
	float ___Roughness_1;
	// UnityEngine.Vector3 EZCameraShake.CameraShakeInstance::PositionInfluence
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___PositionInfluence_2;
	// UnityEngine.Vector3 EZCameraShake.CameraShakeInstance::RotationInfluence
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___RotationInfluence_3;
	// System.Boolean EZCameraShake.CameraShakeInstance::DeleteOnInactive
	bool ___DeleteOnInactive_4;
	// System.Single EZCameraShake.CameraShakeInstance::roughMod
	float ___roughMod_5;
	// System.Single EZCameraShake.CameraShakeInstance::magnMod
	float ___magnMod_6;
	// System.Single EZCameraShake.CameraShakeInstance::fadeOutDuration
	float ___fadeOutDuration_7;
	// System.Single EZCameraShake.CameraShakeInstance::fadeInDuration
	float ___fadeInDuration_8;
	// System.Boolean EZCameraShake.CameraShakeInstance::sustain
	bool ___sustain_9;
	// System.Single EZCameraShake.CameraShakeInstance::currentFadeTime
	float ___currentFadeTime_10;
	// System.Single EZCameraShake.CameraShakeInstance::tick
	float ___tick_11;
	// UnityEngine.Vector3 EZCameraShake.CameraShakeInstance::amt
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___amt_12;

public:
	inline static int32_t get_offset_of_Magnitude_0() { return static_cast<int32_t>(offsetof(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160, ___Magnitude_0)); }
	inline float get_Magnitude_0() const { return ___Magnitude_0; }
	inline float* get_address_of_Magnitude_0() { return &___Magnitude_0; }
	inline void set_Magnitude_0(float value)
	{
		___Magnitude_0 = value;
	}

	inline static int32_t get_offset_of_Roughness_1() { return static_cast<int32_t>(offsetof(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160, ___Roughness_1)); }
	inline float get_Roughness_1() const { return ___Roughness_1; }
	inline float* get_address_of_Roughness_1() { return &___Roughness_1; }
	inline void set_Roughness_1(float value)
	{
		___Roughness_1 = value;
	}

	inline static int32_t get_offset_of_PositionInfluence_2() { return static_cast<int32_t>(offsetof(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160, ___PositionInfluence_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_PositionInfluence_2() const { return ___PositionInfluence_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_PositionInfluence_2() { return &___PositionInfluence_2; }
	inline void set_PositionInfluence_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___PositionInfluence_2 = value;
	}

	inline static int32_t get_offset_of_RotationInfluence_3() { return static_cast<int32_t>(offsetof(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160, ___RotationInfluence_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_RotationInfluence_3() const { return ___RotationInfluence_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_RotationInfluence_3() { return &___RotationInfluence_3; }
	inline void set_RotationInfluence_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___RotationInfluence_3 = value;
	}

	inline static int32_t get_offset_of_DeleteOnInactive_4() { return static_cast<int32_t>(offsetof(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160, ___DeleteOnInactive_4)); }
	inline bool get_DeleteOnInactive_4() const { return ___DeleteOnInactive_4; }
	inline bool* get_address_of_DeleteOnInactive_4() { return &___DeleteOnInactive_4; }
	inline void set_DeleteOnInactive_4(bool value)
	{
		___DeleteOnInactive_4 = value;
	}

	inline static int32_t get_offset_of_roughMod_5() { return static_cast<int32_t>(offsetof(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160, ___roughMod_5)); }
	inline float get_roughMod_5() const { return ___roughMod_5; }
	inline float* get_address_of_roughMod_5() { return &___roughMod_5; }
	inline void set_roughMod_5(float value)
	{
		___roughMod_5 = value;
	}

	inline static int32_t get_offset_of_magnMod_6() { return static_cast<int32_t>(offsetof(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160, ___magnMod_6)); }
	inline float get_magnMod_6() const { return ___magnMod_6; }
	inline float* get_address_of_magnMod_6() { return &___magnMod_6; }
	inline void set_magnMod_6(float value)
	{
		___magnMod_6 = value;
	}

	inline static int32_t get_offset_of_fadeOutDuration_7() { return static_cast<int32_t>(offsetof(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160, ___fadeOutDuration_7)); }
	inline float get_fadeOutDuration_7() const { return ___fadeOutDuration_7; }
	inline float* get_address_of_fadeOutDuration_7() { return &___fadeOutDuration_7; }
	inline void set_fadeOutDuration_7(float value)
	{
		___fadeOutDuration_7 = value;
	}

	inline static int32_t get_offset_of_fadeInDuration_8() { return static_cast<int32_t>(offsetof(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160, ___fadeInDuration_8)); }
	inline float get_fadeInDuration_8() const { return ___fadeInDuration_8; }
	inline float* get_address_of_fadeInDuration_8() { return &___fadeInDuration_8; }
	inline void set_fadeInDuration_8(float value)
	{
		___fadeInDuration_8 = value;
	}

	inline static int32_t get_offset_of_sustain_9() { return static_cast<int32_t>(offsetof(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160, ___sustain_9)); }
	inline bool get_sustain_9() const { return ___sustain_9; }
	inline bool* get_address_of_sustain_9() { return &___sustain_9; }
	inline void set_sustain_9(bool value)
	{
		___sustain_9 = value;
	}

	inline static int32_t get_offset_of_currentFadeTime_10() { return static_cast<int32_t>(offsetof(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160, ___currentFadeTime_10)); }
	inline float get_currentFadeTime_10() const { return ___currentFadeTime_10; }
	inline float* get_address_of_currentFadeTime_10() { return &___currentFadeTime_10; }
	inline void set_currentFadeTime_10(float value)
	{
		___currentFadeTime_10 = value;
	}

	inline static int32_t get_offset_of_tick_11() { return static_cast<int32_t>(offsetof(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160, ___tick_11)); }
	inline float get_tick_11() const { return ___tick_11; }
	inline float* get_address_of_tick_11() { return &___tick_11; }
	inline void set_tick_11(float value)
	{
		___tick_11 = value;
	}

	inline static int32_t get_offset_of_amt_12() { return static_cast<int32_t>(offsetof(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160, ___amt_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_amt_12() const { return ___amt_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_amt_12() { return &___amt_12; }
	inline void set_amt_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___amt_12 = value;
	}
};


// EZCameraShake.CameraShakeState
struct  CameraShakeState_t66A406C932C029BD7B8E8781E0F80F73C669A400 
{
public:
	// System.Int32 EZCameraShake.CameraShakeState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraShakeState_t66A406C932C029BD7B8E8781E0F80F73C669A400, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
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

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.GUILayoutOption/Type
struct  Type_t79FB5C82B695061CED8D628CBB6A1E8709705288 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t79FB5C82B695061CED8D628CBB6A1E8709705288, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GUILayoutOption
struct  GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// ShakeDemo/Slider
struct  Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Collider2D
struct  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Axe
struct  Axe_t60E1A21DEC4B86EAAFB6436359E770DB7D6E1D5B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Axe::direction
	int32_t ___direction_4;
	// System.Single Axe::speed
	float ___speed_5;
	// UnityEngine.Rigidbody2D Axe::myBody
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___myBody_6;
	// System.Single Axe::x
	float ___x_7;
	// System.Single Axe::y
	float ___y_8;
	// UnityEngine.GameObject Axe::prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab_9;

public:
	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(Axe_t60E1A21DEC4B86EAAFB6436359E770DB7D6E1D5B, ___direction_4)); }
	inline int32_t get_direction_4() const { return ___direction_4; }
	inline int32_t* get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(int32_t value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(Axe_t60E1A21DEC4B86EAAFB6436359E770DB7D6E1D5B, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_myBody_6() { return static_cast<int32_t>(offsetof(Axe_t60E1A21DEC4B86EAAFB6436359E770DB7D6E1D5B, ___myBody_6)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_myBody_6() const { return ___myBody_6; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_myBody_6() { return &___myBody_6; }
	inline void set_myBody_6(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___myBody_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myBody_6), (void*)value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(Axe_t60E1A21DEC4B86EAAFB6436359E770DB7D6E1D5B, ___x_7)); }
	inline float get_x_7() const { return ___x_7; }
	inline float* get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(float value)
	{
		___x_7 = value;
	}

	inline static int32_t get_offset_of_y_8() { return static_cast<int32_t>(offsetof(Axe_t60E1A21DEC4B86EAAFB6436359E770DB7D6E1D5B, ___y_8)); }
	inline float get_y_8() const { return ___y_8; }
	inline float* get_address_of_y_8() { return &___y_8; }
	inline void set_y_8(float value)
	{
		___y_8 = value;
	}

	inline static int32_t get_offset_of_prefab_9() { return static_cast<int32_t>(offsetof(Axe_t60E1A21DEC4B86EAAFB6436359E770DB7D6E1D5B, ___prefab_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefab_9() const { return ___prefab_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefab_9() { return &___prefab_9; }
	inline void set_prefab_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefab_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefab_9), (void*)value);
	}
};


// BallMoving
struct  BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody2D BallMoving::myBody
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___myBody_4;
	// System.Boolean BallMoving::canMove
	bool ___canMove_5;
	// System.Single BallMoving::speed
	float ___speed_6;
	// System.Single BallMoving::d
	float ___d_7;
	// System.Boolean BallMoving::up
	bool ___up_8;
	// System.Boolean BallMoving::down
	bool ___down_9;

public:
	inline static int32_t get_offset_of_myBody_4() { return static_cast<int32_t>(offsetof(BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7, ___myBody_4)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_myBody_4() const { return ___myBody_4; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_myBody_4() { return &___myBody_4; }
	inline void set_myBody_4(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___myBody_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myBody_4), (void*)value);
	}

	inline static int32_t get_offset_of_canMove_5() { return static_cast<int32_t>(offsetof(BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7, ___canMove_5)); }
	inline bool get_canMove_5() const { return ___canMove_5; }
	inline bool* get_address_of_canMove_5() { return &___canMove_5; }
	inline void set_canMove_5(bool value)
	{
		___canMove_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_d_7() { return static_cast<int32_t>(offsetof(BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7, ___d_7)); }
	inline float get_d_7() const { return ___d_7; }
	inline float* get_address_of_d_7() { return &___d_7; }
	inline void set_d_7(float value)
	{
		___d_7 = value;
	}

	inline static int32_t get_offset_of_up_8() { return static_cast<int32_t>(offsetof(BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7, ___up_8)); }
	inline bool get_up_8() const { return ___up_8; }
	inline bool* get_address_of_up_8() { return &___up_8; }
	inline void set_up_8(bool value)
	{
		___up_8 = value;
	}

	inline static int32_t get_offset_of_down_9() { return static_cast<int32_t>(offsetof(BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7, ___down_9)); }
	inline bool get_down_9() const { return ___down_9; }
	inline bool* get_address_of_down_9() { return &___down_9; }
	inline void set_down_9(bool value)
	{
		___down_9 = value;
	}
};


// EZCameraShake.CameraShaker
struct  CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 EZCameraShake.CameraShaker::DefaultPosInfluence
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___DefaultPosInfluence_6;
	// UnityEngine.Vector3 EZCameraShake.CameraShaker::DefaultRotInfluence
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___DefaultRotInfluence_7;
	// UnityEngine.Vector3 EZCameraShake.CameraShaker::RestPositionOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___RestPositionOffset_8;
	// UnityEngine.Vector3 EZCameraShake.CameraShaker::RestRotationOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___RestRotationOffset_9;
	// UnityEngine.Vector3 EZCameraShake.CameraShaker::posAddShake
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___posAddShake_10;
	// UnityEngine.Vector3 EZCameraShake.CameraShaker::rotAddShake
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotAddShake_11;
	// System.Collections.Generic.List`1<EZCameraShake.CameraShakeInstance> EZCameraShake.CameraShaker::cameraShakeInstances
	List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * ___cameraShakeInstances_12;

public:
	inline static int32_t get_offset_of_DefaultPosInfluence_6() { return static_cast<int32_t>(offsetof(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333, ___DefaultPosInfluence_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_DefaultPosInfluence_6() const { return ___DefaultPosInfluence_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_DefaultPosInfluence_6() { return &___DefaultPosInfluence_6; }
	inline void set_DefaultPosInfluence_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___DefaultPosInfluence_6 = value;
	}

	inline static int32_t get_offset_of_DefaultRotInfluence_7() { return static_cast<int32_t>(offsetof(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333, ___DefaultRotInfluence_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_DefaultRotInfluence_7() const { return ___DefaultRotInfluence_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_DefaultRotInfluence_7() { return &___DefaultRotInfluence_7; }
	inline void set_DefaultRotInfluence_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___DefaultRotInfluence_7 = value;
	}

	inline static int32_t get_offset_of_RestPositionOffset_8() { return static_cast<int32_t>(offsetof(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333, ___RestPositionOffset_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_RestPositionOffset_8() const { return ___RestPositionOffset_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_RestPositionOffset_8() { return &___RestPositionOffset_8; }
	inline void set_RestPositionOffset_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___RestPositionOffset_8 = value;
	}

	inline static int32_t get_offset_of_RestRotationOffset_9() { return static_cast<int32_t>(offsetof(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333, ___RestRotationOffset_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_RestRotationOffset_9() const { return ___RestRotationOffset_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_RestRotationOffset_9() { return &___RestRotationOffset_9; }
	inline void set_RestRotationOffset_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___RestRotationOffset_9 = value;
	}

	inline static int32_t get_offset_of_posAddShake_10() { return static_cast<int32_t>(offsetof(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333, ___posAddShake_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_posAddShake_10() const { return ___posAddShake_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_posAddShake_10() { return &___posAddShake_10; }
	inline void set_posAddShake_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___posAddShake_10 = value;
	}

	inline static int32_t get_offset_of_rotAddShake_11() { return static_cast<int32_t>(offsetof(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333, ___rotAddShake_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rotAddShake_11() const { return ___rotAddShake_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rotAddShake_11() { return &___rotAddShake_11; }
	inline void set_rotAddShake_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rotAddShake_11 = value;
	}

	inline static int32_t get_offset_of_cameraShakeInstances_12() { return static_cast<int32_t>(offsetof(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333, ___cameraShakeInstances_12)); }
	inline List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * get_cameraShakeInstances_12() const { return ___cameraShakeInstances_12; }
	inline List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E ** get_address_of_cameraShakeInstances_12() { return &___cameraShakeInstances_12; }
	inline void set_cameraShakeInstances_12(List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * value)
	{
		___cameraShakeInstances_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraShakeInstances_12), (void*)value);
	}
};

struct CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_StaticFields
{
public:
	// EZCameraShake.CameraShaker EZCameraShake.CameraShaker::Instance
	CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * ___Instance_4;
	// System.Collections.Generic.Dictionary`2<System.String,EZCameraShake.CameraShaker> EZCameraShake.CameraShaker::instanceList
	Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D * ___instanceList_5;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_StaticFields, ___Instance_4)); }
	inline CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * get_Instance_4() const { return ___Instance_4; }
	inline CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_instanceList_5() { return static_cast<int32_t>(offsetof(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_StaticFields, ___instanceList_5)); }
	inline Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D * get_instanceList_5() const { return ___instanceList_5; }
	inline Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D ** get_address_of_instanceList_5() { return &___instanceList_5; }
	inline void set_instanceList_5(Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D * value)
	{
		___instanceList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instanceList_5), (void*)value);
	}
};


// CollectorScript
struct  CollectorScript_t7637D580B6A2CBC1828B58D44D434582F5852DE8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GameController
struct  GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text GameController::FinalScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___FinalScore_4;
	// UnityEngine.GameObject GameController::gameOverPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverPanel_5;
	// UnityEngine.GameObject GameController::scorePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___scorePanel_6;

public:
	inline static int32_t get_offset_of_FinalScore_4() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___FinalScore_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_FinalScore_4() const { return ___FinalScore_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_FinalScore_4() { return &___FinalScore_4; }
	inline void set_FinalScore_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___FinalScore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FinalScore_4), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverPanel_5() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___gameOverPanel_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOverPanel_5() const { return ___gameOverPanel_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOverPanel_5() { return &___gameOverPanel_5; }
	inline void set_gameOverPanel_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOverPanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverPanel_5), (void*)value);
	}

	inline static int32_t get_offset_of_scorePanel_6() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___scorePanel_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_scorePanel_6() const { return ___scorePanel_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_scorePanel_6() { return &___scorePanel_6; }
	inline void set_scorePanel_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___scorePanel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scorePanel_6), (void*)value);
	}
};


// Joystick
struct  Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// BallMoving Joystick::ball
	BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * ___ball_4;

public:
	inline static int32_t get_offset_of_ball_4() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___ball_4)); }
	inline BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * get_ball_4() const { return ___ball_4; }
	inline BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 ** get_address_of_ball_4() { return &___ball_4; }
	inline void set_ball_4(BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * value)
	{
		___ball_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ball_4), (void*)value);
	}
};


// MainMenu
struct  MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Score
struct  Score_tE07CBD9780DFC212BE43719819F512E8861103C7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Score::highScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___highScore_4;
	// System.Single Score::currentScore
	float ___currentScore_5;
	// System.Boolean Score::alive
	bool ___alive_6;

public:
	inline static int32_t get_offset_of_highScore_4() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7, ___highScore_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_highScore_4() const { return ___highScore_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_highScore_4() { return &___highScore_4; }
	inline void set_highScore_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___highScore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highScore_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentScore_5() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7, ___currentScore_5)); }
	inline float get_currentScore_5() const { return ___currentScore_5; }
	inline float* get_address_of_currentScore_5() { return &___currentScore_5; }
	inline void set_currentScore_5(float value)
	{
		___currentScore_5 = value;
	}

	inline static int32_t get_offset_of_alive_6() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7, ___alive_6)); }
	inline bool get_alive_6() const { return ___alive_6; }
	inline bool* get_address_of_alive_6() { return &___alive_6; }
	inline void set_alive_6(bool value)
	{
		___alive_6 = value;
	}
};

struct Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields
{
public:
	// Score Score::instance
	Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * ___instance_7;

public:
	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields, ___instance_7)); }
	inline Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * get_instance_7() const { return ___instance_7; }
	inline Score_tE07CBD9780DFC212BE43719819F512E8861103C7 ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_7), (void*)value);
	}
};


// ShakeByDistance
struct  ShakeByDistance_t4655C740DBEBD63E111F88E438B02DC63828E59A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ShakeByDistance::Player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Player_4;
	// System.Single ShakeByDistance::Distance
	float ___Distance_5;
	// EZCameraShake.CameraShakeInstance ShakeByDistance::_shakeInstance
	CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * ____shakeInstance_6;

public:
	inline static int32_t get_offset_of_Player_4() { return static_cast<int32_t>(offsetof(ShakeByDistance_t4655C740DBEBD63E111F88E438B02DC63828E59A, ___Player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Player_4() const { return ___Player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Player_4() { return &___Player_4; }
	inline void set_Player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Player_4), (void*)value);
	}

	inline static int32_t get_offset_of_Distance_5() { return static_cast<int32_t>(offsetof(ShakeByDistance_t4655C740DBEBD63E111F88E438B02DC63828E59A, ___Distance_5)); }
	inline float get_Distance_5() const { return ___Distance_5; }
	inline float* get_address_of_Distance_5() { return &___Distance_5; }
	inline void set_Distance_5(float value)
	{
		___Distance_5 = value;
	}

	inline static int32_t get_offset_of__shakeInstance_6() { return static_cast<int32_t>(offsetof(ShakeByDistance_t4655C740DBEBD63E111F88E438B02DC63828E59A, ____shakeInstance_6)); }
	inline CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * get__shakeInstance_6() const { return ____shakeInstance_6; }
	inline CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 ** get_address_of__shakeInstance_6() { return &____shakeInstance_6; }
	inline void set__shakeInstance_6(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * value)
	{
		____shakeInstance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shakeInstance_6), (void*)value);
	}
};


// ShakeDemo
struct  ShakeDemo_t7E6501DA3EFC607FDD21FAF56E2571579CE26FFA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 ShakeDemo::posInf
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___posInf_4;
	// UnityEngine.Vector3 ShakeDemo::rotInf
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotInf_5;
	// System.Single ShakeDemo::magn
	float ___magn_6;
	// System.Single ShakeDemo::rough
	float ___rough_7;
	// System.Single ShakeDemo::fadeIn
	float ___fadeIn_8;
	// System.Single ShakeDemo::fadeOut
	float ___fadeOut_9;
	// System.Boolean ShakeDemo::modValues
	bool ___modValues_10;
	// System.Boolean ShakeDemo::showList
	bool ___showList_11;
	// EZCameraShake.CameraShakeInstance ShakeDemo::shake
	CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * ___shake_12;

public:
	inline static int32_t get_offset_of_posInf_4() { return static_cast<int32_t>(offsetof(ShakeDemo_t7E6501DA3EFC607FDD21FAF56E2571579CE26FFA, ___posInf_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_posInf_4() const { return ___posInf_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_posInf_4() { return &___posInf_4; }
	inline void set_posInf_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___posInf_4 = value;
	}

	inline static int32_t get_offset_of_rotInf_5() { return static_cast<int32_t>(offsetof(ShakeDemo_t7E6501DA3EFC607FDD21FAF56E2571579CE26FFA, ___rotInf_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rotInf_5() const { return ___rotInf_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rotInf_5() { return &___rotInf_5; }
	inline void set_rotInf_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rotInf_5 = value;
	}

	inline static int32_t get_offset_of_magn_6() { return static_cast<int32_t>(offsetof(ShakeDemo_t7E6501DA3EFC607FDD21FAF56E2571579CE26FFA, ___magn_6)); }
	inline float get_magn_6() const { return ___magn_6; }
	inline float* get_address_of_magn_6() { return &___magn_6; }
	inline void set_magn_6(float value)
	{
		___magn_6 = value;
	}

	inline static int32_t get_offset_of_rough_7() { return static_cast<int32_t>(offsetof(ShakeDemo_t7E6501DA3EFC607FDD21FAF56E2571579CE26FFA, ___rough_7)); }
	inline float get_rough_7() const { return ___rough_7; }
	inline float* get_address_of_rough_7() { return &___rough_7; }
	inline void set_rough_7(float value)
	{
		___rough_7 = value;
	}

	inline static int32_t get_offset_of_fadeIn_8() { return static_cast<int32_t>(offsetof(ShakeDemo_t7E6501DA3EFC607FDD21FAF56E2571579CE26FFA, ___fadeIn_8)); }
	inline float get_fadeIn_8() const { return ___fadeIn_8; }
	inline float* get_address_of_fadeIn_8() { return &___fadeIn_8; }
	inline void set_fadeIn_8(float value)
	{
		___fadeIn_8 = value;
	}

	inline static int32_t get_offset_of_fadeOut_9() { return static_cast<int32_t>(offsetof(ShakeDemo_t7E6501DA3EFC607FDD21FAF56E2571579CE26FFA, ___fadeOut_9)); }
	inline float get_fadeOut_9() const { return ___fadeOut_9; }
	inline float* get_address_of_fadeOut_9() { return &___fadeOut_9; }
	inline void set_fadeOut_9(float value)
	{
		___fadeOut_9 = value;
	}

	inline static int32_t get_offset_of_modValues_10() { return static_cast<int32_t>(offsetof(ShakeDemo_t7E6501DA3EFC607FDD21FAF56E2571579CE26FFA, ___modValues_10)); }
	inline bool get_modValues_10() const { return ___modValues_10; }
	inline bool* get_address_of_modValues_10() { return &___modValues_10; }
	inline void set_modValues_10(bool value)
	{
		___modValues_10 = value;
	}

	inline static int32_t get_offset_of_showList_11() { return static_cast<int32_t>(offsetof(ShakeDemo_t7E6501DA3EFC607FDD21FAF56E2571579CE26FFA, ___showList_11)); }
	inline bool get_showList_11() const { return ___showList_11; }
	inline bool* get_address_of_showList_11() { return &___showList_11; }
	inline void set_showList_11(bool value)
	{
		___showList_11 = value;
	}

	inline static int32_t get_offset_of_shake_12() { return static_cast<int32_t>(offsetof(ShakeDemo_t7E6501DA3EFC607FDD21FAF56E2571579CE26FFA, ___shake_12)); }
	inline CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * get_shake_12() const { return ___shake_12; }
	inline CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 ** get_address_of_shake_12() { return &___shake_12; }
	inline void set_shake_12(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * value)
	{
		___shake_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shake_12), (void*)value);
	}
};


// ShakeOnKeyPress
struct  ShakeOnKeyPress_tA01A4E437C08A53200997CBDC693DE691CCDAB11  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ShakeOnKeyPress::Magnitude
	float ___Magnitude_4;
	// System.Single ShakeOnKeyPress::Roughness
	float ___Roughness_5;
	// System.Single ShakeOnKeyPress::FadeOutTime
	float ___FadeOutTime_6;

public:
	inline static int32_t get_offset_of_Magnitude_4() { return static_cast<int32_t>(offsetof(ShakeOnKeyPress_tA01A4E437C08A53200997CBDC693DE691CCDAB11, ___Magnitude_4)); }
	inline float get_Magnitude_4() const { return ___Magnitude_4; }
	inline float* get_address_of_Magnitude_4() { return &___Magnitude_4; }
	inline void set_Magnitude_4(float value)
	{
		___Magnitude_4 = value;
	}

	inline static int32_t get_offset_of_Roughness_5() { return static_cast<int32_t>(offsetof(ShakeOnKeyPress_tA01A4E437C08A53200997CBDC693DE691CCDAB11, ___Roughness_5)); }
	inline float get_Roughness_5() const { return ___Roughness_5; }
	inline float* get_address_of_Roughness_5() { return &___Roughness_5; }
	inline void set_Roughness_5(float value)
	{
		___Roughness_5 = value;
	}

	inline static int32_t get_offset_of_FadeOutTime_6() { return static_cast<int32_t>(offsetof(ShakeOnKeyPress_tA01A4E437C08A53200997CBDC693DE691CCDAB11, ___FadeOutTime_6)); }
	inline float get_FadeOutTime_6() const { return ___FadeOutTime_6; }
	inline float* get_address_of_FadeOutTime_6() { return &___FadeOutTime_6; }
	inline void set_FadeOutTime_6(float value)
	{
		___FadeOutTime_6 = value;
	}
};


// ShakeOnTrigger
struct  ShakeOnTrigger_tA7DA0AADE86CC5654771BA07FDB52D18398800BC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// EZCameraShake.CameraShakeInstance ShakeOnTrigger::_shakeInstance
	CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * ____shakeInstance_4;

public:
	inline static int32_t get_offset_of__shakeInstance_4() { return static_cast<int32_t>(offsetof(ShakeOnTrigger_tA7DA0AADE86CC5654771BA07FDB52D18398800BC, ____shakeInstance_4)); }
	inline CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * get__shakeInstance_4() const { return ____shakeInstance_4; }
	inline CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 ** get_address_of__shakeInstance_4() { return &____shakeInstance_4; }
	inline void set__shakeInstance_4(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * value)
	{
		____shakeInstance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shakeInstance_4), (void*)value);
	}
};


// Spawner
struct  Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] Spawner::elements
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___elements_4;

public:
	inline static int32_t get_offset_of_elements_4() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___elements_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_elements_4() const { return ___elements_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_elements_4() { return &___elements_4; }
	inline void set_elements_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___elements_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elements_4), (void*)value);
	}
};


// TubeScript
struct  TubeScript_tB0AB73169771A424282FCC5BADBC645D039F215C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * m_Items[1];

public:
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Random::RandomRange(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_RandomRange_mB427DE5CA4D6F47620663070D9ADFD42CA7AAD11 (float ___min0, float ___max1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Score::notAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_notAlive_m68C309D22ACF51414585F4AD87970863801F85F5 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GameController>()
inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * GameObject_GetComponent_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_m0906D4CAD135F57311BB9B9B920527676AB73479 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void GameController::SetFinalScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SetFinalScore_mA754663CBF846C2F6D14E7351BD2A51A9FB4E565 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void BallMoving::moveUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallMoving_moveUp_m19DD33A25F517100D0C27FF33E722362A6508C07 (BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * __this, const RuntimeMethod* method);
// System.Void BallMoving::moveDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallMoving_moveDown_m98622B7188162992495C8DA126D1D0C25F09ABC1 (BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519 (float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Boolean EZCameraShake.CameraShakeInstance::get_IsFadingIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraShakeInstance_get_IsFadingIn_m8376BC9CC3A768242D427720DA0704AD8E02CF24 (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, const RuntimeMethod* method);
// System.Boolean EZCameraShake.CameraShakeInstance::get_IsFadingOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraShakeInstance_get_IsFadingOut_m51D2DB9A6B6EE3B78727EA888DB038292AEA9049 (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, const RuntimeMethod* method);
// System.Boolean EZCameraShake.CameraShakeInstance::get_IsShaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraShakeInstance_get_IsShaking_m643C60467EB82852B79A97AC68178713926D4D0D (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, const RuntimeMethod* method);
// System.Void EZCameraShake.CameraShakeInstance::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShakeInstance__ctor_mD33471A787DCAEE52E5D709654DB8702E2427ADF (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, float ___magnitude0, float ___roughness1, float ___fadeInTime2, float ___fadeOutTime3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,EZCameraShake.CameraShaker>::Add(!0,!1)
inline void Dictionary_2_Add_m0B7766734B5A6F884BEEEDA37B87379D6DC07410 (Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D * __this, String_t* ___key0, CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D *, String_t*, CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<EZCameraShake.CameraShakeInstance>::get_Count()
inline int32_t List_1_get_Count_mD01FF37F6E23E38B1FA9EE611DF26E33E8F9A815_inline (List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<EZCameraShake.CameraShakeInstance>::get_Item(System.Int32)
inline CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * List_1_get_Item_m3F48A62A0B3336E176A28B3346D16D7473D0A14D_inline (List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * (*) (List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// EZCameraShake.CameraShakeState EZCameraShake.CameraShakeInstance::get_CurrentState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraShakeInstance_get_CurrentState_m9A2E29B66972E9EFABDD4A29CE51FFEA7F903186 (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<EZCameraShake.CameraShakeInstance>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mDF95E6375EA373D8F1F1A0486C4EF333FE630A90 (List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 EZCameraShake.CameraShakeInstance::UpdateShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CameraShakeInstance_UpdateShake_m4C423AB051E2DA2257E8575A5258C2673E296A6A (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 EZCameraShake.CameraUtilities::MultiplyVectors(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CameraUtilities_MultiplyVectors_m6BC1FA39E740B30EE99E79C8D07C614006E2B8A5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___w1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,EZCameraShake.CameraShaker>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m99016DBFDD161CC8A746987228C9C964E8096E68 (Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D * __this, String_t* ___key0, CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D *, String_t*, CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<EZCameraShake.CameraShakeInstance>::Add(!0)
inline void List_1_Add_mFA7878097E1C5685CDDFB3AD695D35273A0D6314 (List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * __this, CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E *, CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void EZCameraShake.CameraShakeInstance::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShakeInstance__ctor_mAE99DDF2021D226CBCCCD608516DDDAB2BF4ECE3 (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, float ___magnitude0, float ___roughness1, const RuntimeMethod* method);
// System.Void EZCameraShake.CameraShakeInstance::StartFadeIn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShakeInstance_StartFadeIn_m97E75A3804298FE3A791E3DE080EDADF8B1CE72B (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, float ___fadeInTime0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<EZCameraShake.CameraShakeInstance>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m4D002C993A070565E673832933FD5FE541DCB30F (List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,EZCameraShake.CameraShaker>::Remove(!0)
inline bool Dictionary_2_Remove_mF85F71AC67339A01419E8CEC35D94F23C2DA1726 (Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<EZCameraShake.CameraShakeInstance>::.ctor()
inline void List_1__ctor_mA739B19362BA5129B5E2B0E0431E15D95992520D (List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,EZCameraShake.CameraShaker>::.ctor()
inline void Dictionary_2__ctor_mC813A3142C8B2AE0993CE5FC58FD1013572E62D6 (Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_mB876CA3D4A313CF29074CCDDB784CAF5533EBA46 (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Single Score::getHighScore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Score_getHighScore_m694CF366370DBBF9324D24258D5D349C0B830B96_inline (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<BallMoving>()
inline BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * GameObject_GetComponent_TisBallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7_m60EEE41BD6F7406B81103E30BAEE044B808E5EF7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void BallMoving::SetMoveDown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallMoving_SetMoveDown_mD0944B6505A083A44C483CD7D91ED3F538D0F23C (BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * __this, bool ___v0, const RuntimeMethod* method);
// System.Void BallMoving::SetMoveUp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallMoving_SetMoveUp_m643EC3A95B09D8319BEF800A161D1834BE5F4E1D (BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * __this, bool ___v0, const RuntimeMethod* method);
// System.Void BallMoving::stopUpAndDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallMoving_stopUpAndDown_m93504C39BD66A0CFF63A996C97F1F60F6D1A64BD (BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// EZCameraShake.CameraShakeInstance EZCameraShake.CameraShaker::StartShake(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * CameraShaker_StartShake_m82B19390FF7D3415FF88F89F3E7B8D3F4C1E4493 (CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * __this, float ___magnitude0, float ___roughness1, float ___fadeInTime2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void EZCameraShake.CameraShakeInstance::set_ScaleMagnitude(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraShakeInstance_set_ScaleMagnitude_m985D975622853802C64CE84AB94B494C2826F564_inline (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void ShakeDemo/Slider::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider__ctor_m64DF033114E2228ABDF675845B4F1DFCB44FA0C9 (Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_mA4BA00A35EAEA960B5F645B66F95DA0C59CB09D9 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___screenRect0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502 (String_t* ___text0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options1, const RuntimeMethod* method);
// System.Single ShakeDemo/Slider::Invoke(System.Single,System.String,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Slider_Invoke_mC532D4287E3B5701BA9B350B243EE981B86CA58A (Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * __this, float ___val0, String_t* ___prefix1, float ___min2, float ___max3, int32_t ___pad4, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162 (String_t* ___text0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options1, const RuntimeMethod* method);
// System.Void EZCameraShake.CameraShakeInstance::StartFadeOut(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShakeInstance_StartFadeOut_m13E1EC8DEBD7794DA25A4C02111C3C6FD3C2BFF9 (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, float ___fadeOutTime0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginHorizontal_m217AAF9BF30836EA73B22FF47B817F6F430E3661 (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946 (const RuntimeMethod* method);
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Toggle_m5388FD56AEAB5F72BCA655760BD157DC1ABB63BB (bool ___value0, String_t* ___text1, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options2, const RuntimeMethod* method);
// System.Void EZCameraShake.CameraShakeInstance::set_ScaleRoughness(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraShakeInstance_set_ScaleRoughness_mE0B00DAA1B66361026C8B6056D161E3E1B97C6AE_inline (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, float ___value0, const RuntimeMethod* method);
// EZCameraShake.CameraShakeInstance EZCameraShake.CameraShaker::ShakeOnce(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * CameraShaker_ShakeOnce_mCE96B0D14EAABE9B0759D6E3E308F74AD95B2B01 (CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * __this, float ___magnitude0, float ___roughness1, float ___fadeInTime2, float ___fadeOutTime3, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151 (const RuntimeMethod* method);
// System.Collections.Generic.List`1<EZCameraShake.CameraShakeInstance> EZCameraShake.CameraShaker::get_ShakeInstances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * CameraShaker_get_ShakeInstances_m784F774A70C3EDB17EC506A822999E39562ABF7A (CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<EZCameraShake.CameraShakeInstance>::GetEnumerator()
inline Enumerator_tBC07D4EED300FF8ABD471FEA162850350C482176  List_1_GetEnumerator_mF9EC113241EA378F89BB0D50D5059E1A27375B7E (List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBC07D4EED300FF8ABD471FEA162850350C482176  (*) (List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<EZCameraShake.CameraShakeInstance>::get_Current()
inline CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * Enumerator_get_Current_m8508B66302BD200C5BFAADF15B324199B414FF1B_inline (Enumerator_tBC07D4EED300FF8ABD471FEA162850350C482176 * __this, const RuntimeMethod* method)
{
	return ((  CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * (*) (Enumerator_tBC07D4EED300FF8ABD471FEA162850350C482176 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<EZCameraShake.CameraShakeInstance>::MoveNext()
inline bool Enumerator_MoveNext_mDEBE892CB4963254B9688C8B5D64D89B9032000C (Enumerator_tBC07D4EED300FF8ABD471FEA162850350C482176 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBC07D4EED300FF8ABD471FEA162850350C482176 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<EZCameraShake.CameraShakeInstance>::Dispose()
inline void Enumerator_Dispose_mD3BE8059031D9C7A0F118C37D2EAD726603C510B (Enumerator_tBC07D4EED300FF8ABD471FEA162850350C482176 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBC07D4EED300FF8ABD471FEA162850350C482176 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Collections.IEnumerator Spawner::create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Spawner_create_m1BC20A6FB6D046A479A5A3556CDC991327D8B01B (Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Spawner/<create>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcreateU3Ed__2__ctor_m783C55C955E9CDE586C2DD4FBD289F927B7D3B5F (U3CcreateU3Ed__2_t2A7269DA4D4C022A6941BF4B5A4DDA5D44329035 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// System.Void BallMoving::stopMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallMoving_stopMoving_m16B62407CF8AC13472E747E87EA330430FE2902F (BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * __this, const RuntimeMethod* method);
// System.Void BallMoving::startMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallMoving_startMoving_m7FD1417D51A3A44D73187A86786E4EA5AC008975 (BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * __this, const RuntimeMethod* method);
// System.Void ShakeDemo/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA1A81A31C356829CC9B938DE03C48F553D04A468 (U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538 * __this, const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MaxWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_MaxWidth_mE6C754AB0A4366AB7E0BECE6D85A254CA7E553FB (float ___maxWidth0, const RuntimeMethod* method);
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUILayout_HorizontalSlider_m03D4AF69A1F1EA05236AB10FAD393580F2A3DC3D (float ___value0, float ___leftValue1, float ___rightValue2, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options3, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void Axe::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Axe_Awake_m8254E8001D4E58B183F2CAC6DB21F195D198B306 (Axe_t60E1A21DEC4B86EAAFB6436359E770DB7D6E1D5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myBody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_myBody_6(L_0);
		// }
		return;
	}
}
// System.Void Axe::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Axe_Start_m321150BA6F12A23077A56A29C747DA91764FFEA0 (Axe_t60E1A21DEC4B86EAAFB6436359E770DB7D6E1D5B * __this, const RuntimeMethod* method)
{
	{
		// y = Random.RandomRange(-5f, 5f);
		float L_0;
		L_0 = Random_RandomRange_mB427DE5CA4D6F47620663070D9ADFD42CA7AAD11((-5.0f), (5.0f), /*hidden argument*/NULL);
		__this->set_y_8(L_0);
		// x = transform.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		__this->set_x_7(L_3);
		// }
		return;
	}
}
// System.Void Axe::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Axe_FixedUpdate_m7605C117FE0AA74927386E548693CDA70B7EAF38 (Axe_t60E1A21DEC4B86EAAFB6436359E770DB7D6E1D5B * __this, const RuntimeMethod* method)
{
	{
		// myBody.velocity = new Vector2(-1 * x, y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_myBody_6();
		float L_1 = __this->get_x_7();
		float L_2 = __this->get_y_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), ((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_1)), L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_0, L_3, /*hidden argument*/NULL);
		// transform.Rotate(0, 0, 5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_4, (0.0f), (0.0f), (5.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Axe::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Axe_OnTriggerEnter2D_m7293E727DFD2466C9D9287ED193528F5E2146BD9 (Axe_t60E1A21DEC4B86EAAFB6436359E770DB7D6E1D5B * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_m0906D4CAD135F57311BB9B9B920527676AB73479_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE77F01078A5DB9C4085488D582D8669D837FD2C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.tag == "Ball")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		// Score.instance.notAlive();
		Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * L_3 = ((Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields*)il2cpp_codegen_static_fields_for(Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_3);
		Score_notAlive_m68C309D22ACF51414585F4AD87970863801F85F5(L_3, /*hidden argument*/NULL);
		// Instantiate(prefab, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_prefab_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_4, L_6, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// GameObject.Find("GameController").GetComponent<GameController>().SetFinalScore();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralE77F01078A5DB9C4085488D582D8669D837FD2C4, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_10;
		L_10 = GameObject_GetComponent_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_m0906D4CAD135F57311BB9B9B920527676AB73479(L_9, /*hidden argument*/GameObject_GetComponent_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_m0906D4CAD135F57311BB9B9B920527676AB73479_RuntimeMethod_var);
		NullCheck(L_10);
		GameController_SetFinalScore_mA754663CBF846C2F6D14E7351BD2A51A9FB4E565(L_10, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_11 = ___collision0;
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_12, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Axe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Axe__ctor_m0ACBA149467F492DB2F1DF83A9EA988E85C3A192 (Axe_t60E1A21DEC4B86EAAFB6436359E770DB7D6E1D5B * __this, const RuntimeMethod* method)
{
	{
		// private float speed = 3f;
		__this->set_speed_5((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BallMoving::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallMoving_Awake_m3778FA17AD89268FC19603D4B14F6E448805D59F (BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myBody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_myBody_4(L_0);
		// }
		return;
	}
}
// System.Void BallMoving::SetMoveDown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallMoving_SetMoveDown_mD0944B6505A083A44C483CD7D91ED3F538D0F23C (BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * __this, bool ___v0, const RuntimeMethod* method)
{
	{
		// down = true;
		__this->set_down_9((bool)1);
		// up = false;
		__this->set_up_8((bool)0);
		// }
		return;
	}
}
// System.Void BallMoving::SetMoveUp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallMoving_SetMoveUp_m643EC3A95B09D8319BEF800A161D1834BE5F4E1D (BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * __this, bool ___v0, const RuntimeMethod* method)
{
	{
		// up = true;
		__this->set_up_8((bool)1);
		// down = false;
		__this->set_down_9((bool)0);
		// }
		return;
	}
}
// System.Void BallMoving::stopUpAndDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallMoving_stopUpAndDown_m93504C39BD66A0CFF63A996C97F1F60F6D1A64BD (BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * __this, const RuntimeMethod* method)
{
	{
		// up = false;
		__this->set_up_8((bool)0);
		// down = false;
		__this->set_down_9((bool)0);
		// }
		return;
	}
}
// System.Void BallMoving::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallMoving_FixedUpdate_m16B0BE19DCC9640797F9C039693D230F04605183 (BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * __this, const RuntimeMethod* method)
{
	{
		// if(up)
		bool L_0 = __this->get_up_8();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// moveUp();
		BallMoving_moveUp_m19DD33A25F517100D0C27FF33E722362A6508C07(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_000f:
	{
		// else if(down)
		bool L_1 = __this->get_down_9();
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// moveDown();
		BallMoving_moveDown_m98622B7188162992495C8DA126D1D0C25F09ABC1(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001e:
	{
		// myBody.velocity = new Vector2(0, 0);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2 = __this->get_myBody_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BallMoving::moveUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallMoving_moveUp_m19DD33A25F517100D0C27FF33E722362A6508C07 (BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * __this, const RuntimeMethod* method)
{
	{
		// if ((!canMove && up && transform.position.y < 0)) canMove = true;
		bool L_0 = __this->get_canMove_5();
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1 = __this->get_up_8();
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		if ((!(((float)L_4) < ((float)(0.0f)))))
		{
			goto IL_002e;
		}
	}
	{
		// if ((!canMove && up && transform.position.y < 0)) canMove = true;
		__this->set_canMove_5((bool)1);
	}

IL_002e:
	{
		// if (canMove)
		bool L_5 = __this->get_canMove_5();
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		// myBody.velocity = new Vector2(myBody.velocity.x, speed * d);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_6 = __this->get_myBody_4();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_7 = __this->get_myBody_4();
		NullCheck(L_7);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_0();
		float L_10 = __this->get_speed_6();
		float L_11 = __this->get_d_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_12), L_9, ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), /*hidden argument*/NULL);
		NullCheck(L_6);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_6, L_12, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void BallMoving::moveDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallMoving_moveDown_m98622B7188162992495C8DA126D1D0C25F09ABC1 (BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * __this, const RuntimeMethod* method)
{
	{
		// if (!canMove && down && transform.position.y > 0) canMove = true;
		bool L_0 = __this->get_canMove_5();
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1 = __this->get_down_9();
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_002e;
		}
	}
	{
		// if (!canMove && down && transform.position.y > 0) canMove = true;
		__this->set_canMove_5((bool)1);
	}

IL_002e:
	{
		// if (canMove)
		bool L_5 = __this->get_canMove_5();
		if (!L_5)
		{
			goto IL_0069;
		}
	}
	{
		// myBody.velocity = new Vector2(myBody.velocity.x, -1*speed * d);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_6 = __this->get_myBody_4();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_7 = __this->get_myBody_4();
		NullCheck(L_7);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_0();
		float L_10 = __this->get_speed_6();
		float L_11 = __this->get_d_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_12), L_9, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_10)), (float)L_11)), /*hidden argument*/NULL);
		NullCheck(L_6);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_6, L_12, /*hidden argument*/NULL);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void BallMoving::stopMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallMoving_stopMoving_m16B62407CF8AC13472E747E87EA330430FE2902F (BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * __this, const RuntimeMethod* method)
{
	{
		// canMove = false;
		__this->set_canMove_5((bool)0);
		// }
		return;
	}
}
// System.Void BallMoving::startMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallMoving_startMoving_m7FD1417D51A3A44D73187A86786E4EA5AC008975 (BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * __this, const RuntimeMethod* method)
{
	{
		// canMove = true;
		__this->set_canMove_5((bool)1);
		// }
		return;
	}
}
// System.Void BallMoving::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallMoving__ctor_mC907AD4F6FFE8F6D7D3D58968C3FFB29AC554952 (BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 1f;
		__this->set_speed_6((1.0f));
		// private float d = 1;
		__this->set_d_7((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EZCameraShake.CameraShakeInstance::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShakeInstance__ctor_mD33471A787DCAEE52E5D709654DB8702E2427ADF (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, float ___magnitude0, float ___roughness1, float ___fadeInTime2, float ___fadeOutTime3, const RuntimeMethod* method)
{
	{
		// public bool DeleteOnInactive = true;
		__this->set_DeleteOnInactive_4((bool)1);
		// float roughMod = 1, magnMod = 1;
		__this->set_roughMod_5((1.0f));
		// float roughMod = 1, magnMod = 1;
		__this->set_magnMod_6((1.0f));
		// public CameraShakeInstance(float magnitude, float roughness, float fadeInTime, float fadeOutTime)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.Magnitude = magnitude;
		float L_0 = ___magnitude0;
		__this->set_Magnitude_0(L_0);
		// fadeOutDuration = fadeOutTime;
		float L_1 = ___fadeOutTime3;
		__this->set_fadeOutDuration_7(L_1);
		// fadeInDuration = fadeInTime;
		float L_2 = ___fadeInTime2;
		__this->set_fadeInDuration_8(L_2);
		// this.Roughness = roughness;
		float L_3 = ___roughness1;
		__this->set_Roughness_1(L_3);
		// if (fadeInTime > 0)
		float L_4 = ___fadeInTime2;
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_005c;
		}
	}
	{
		// sustain = true;
		__this->set_sustain_9((bool)1);
		// currentFadeTime = 0;
		__this->set_currentFadeTime_10((0.0f));
		// }
		goto IL_006e;
	}

IL_005c:
	{
		// sustain = false;
		__this->set_sustain_9((bool)0);
		// currentFadeTime = 1;
		__this->set_currentFadeTime_10((1.0f));
	}

IL_006e:
	{
		// tick = Random.Range(-100, 100);
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-100), ((int32_t)100), /*hidden argument*/NULL);
		__this->set_tick_11(((float)((float)L_5)));
		// }
		return;
	}
}
// System.Void EZCameraShake.CameraShakeInstance::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShakeInstance__ctor_mAE99DDF2021D226CBCCCD608516DDDAB2BF4ECE3 (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, float ___magnitude0, float ___roughness1, const RuntimeMethod* method)
{
	{
		// public bool DeleteOnInactive = true;
		__this->set_DeleteOnInactive_4((bool)1);
		// float roughMod = 1, magnMod = 1;
		__this->set_roughMod_5((1.0f));
		// float roughMod = 1, magnMod = 1;
		__this->set_magnMod_6((1.0f));
		// public CameraShakeInstance(float magnitude, float roughness)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.Magnitude = magnitude;
		float L_0 = ___magnitude0;
		__this->set_Magnitude_0(L_0);
		// this.Roughness = roughness;
		float L_1 = ___roughness1;
		__this->set_Roughness_1(L_1);
		// sustain = true;
		__this->set_sustain_9((bool)1);
		// tick = Random.Range(-100, 100);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-100), ((int32_t)100), /*hidden argument*/NULL);
		__this->set_tick_11(((float)((float)L_2)));
		// }
		return;
	}
}
// UnityEngine.Vector3 EZCameraShake.CameraShakeInstance::UpdateShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CameraShakeInstance_UpdateShake_m4C423AB051E2DA2257E8575A5258C2673E296A6A (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, const RuntimeMethod* method)
{
	{
		// amt.x = Mathf.PerlinNoise(tick, 0) - 0.5f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_amt_12();
		float L_1 = __this->get_tick_11();
		float L_2;
		L_2 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519(L_1, (0.0f), /*hidden argument*/NULL);
		L_0->set_x_2(((float)il2cpp_codegen_subtract((float)L_2, (float)(0.5f))));
		// amt.y = Mathf.PerlinNoise(0, tick) - 0.5f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of_amt_12();
		float L_4 = __this->get_tick_11();
		float L_5;
		L_5 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519((0.0f), L_4, /*hidden argument*/NULL);
		L_3->set_y_3(((float)il2cpp_codegen_subtract((float)L_5, (float)(0.5f))));
		// amt.z = Mathf.PerlinNoise(tick, tick) - 0.5f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_amt_12();
		float L_7 = __this->get_tick_11();
		float L_8 = __this->get_tick_11();
		float L_9;
		L_9 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519(L_7, L_8, /*hidden argument*/NULL);
		L_6->set_z_4(((float)il2cpp_codegen_subtract((float)L_9, (float)(0.5f))));
		// if (fadeInDuration > 0 && sustain)
		float L_10 = __this->get_fadeInDuration_8();
		if ((!(((float)L_10) > ((float)(0.0f)))))
		{
			goto IL_00b5;
		}
	}
	{
		bool L_11 = __this->get_sustain_9();
		if (!L_11)
		{
			goto IL_00b5;
		}
	}
	{
		// if (currentFadeTime < 1)
		float L_12 = __this->get_currentFadeTime_10();
		if ((!(((float)L_12) < ((float)(1.0f)))))
		{
			goto IL_00a1;
		}
	}
	{
		// currentFadeTime += Time.deltaTime / fadeInDuration;
		float L_13 = __this->get_currentFadeTime_10();
		float L_14;
		L_14 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_15 = __this->get_fadeInDuration_8();
		__this->set_currentFadeTime_10(((float)il2cpp_codegen_add((float)L_13, (float)((float)((float)L_14/(float)L_15)))));
		goto IL_00b5;
	}

IL_00a1:
	{
		// else if (fadeOutDuration > 0)
		float L_16 = __this->get_fadeOutDuration_7();
		if ((!(((float)L_16) > ((float)(0.0f)))))
		{
			goto IL_00b5;
		}
	}
	{
		// sustain = false;
		__this->set_sustain_9((bool)0);
	}

IL_00b5:
	{
		// if (!sustain)
		bool L_17 = __this->get_sustain_9();
		if (L_17)
		{
			goto IL_00d6;
		}
	}
	{
		// currentFadeTime -= Time.deltaTime / fadeOutDuration;
		float L_18 = __this->get_currentFadeTime_10();
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_20 = __this->get_fadeOutDuration_7();
		__this->set_currentFadeTime_10(((float)il2cpp_codegen_subtract((float)L_18, (float)((float)((float)L_19/(float)L_20)))));
	}

IL_00d6:
	{
		// if (sustain)
		bool L_21 = __this->get_sustain_9();
		if (!L_21)
		{
			goto IL_0100;
		}
	}
	{
		// tick += Time.deltaTime * Roughness * roughMod;
		float L_22 = __this->get_tick_11();
		float L_23;
		L_23 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_24 = __this->get_Roughness_1();
		float L_25 = __this->get_roughMod_5();
		__this->set_tick_11(((float)il2cpp_codegen_add((float)L_22, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_23, (float)L_24)), (float)L_25)))));
		goto IL_0127;
	}

IL_0100:
	{
		// tick += Time.deltaTime * Roughness * roughMod * currentFadeTime;
		float L_26 = __this->get_tick_11();
		float L_27;
		L_27 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_28 = __this->get_Roughness_1();
		float L_29 = __this->get_roughMod_5();
		float L_30 = __this->get_currentFadeTime_10();
		__this->set_tick_11(((float)il2cpp_codegen_add((float)L_26, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_27, (float)L_28)), (float)L_29)), (float)L_30)))));
	}

IL_0127:
	{
		// return amt * Magnitude * magnMod * currentFadeTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = __this->get_amt_12();
		float L_32 = __this->get_Magnitude_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_31, L_32, /*hidden argument*/NULL);
		float L_34 = __this->get_magnMod_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_33, L_34, /*hidden argument*/NULL);
		float L_36 = __this->get_currentFadeTime_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_35, L_36, /*hidden argument*/NULL);
		return L_37;
	}
}
// System.Void EZCameraShake.CameraShakeInstance::StartFadeOut(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShakeInstance_StartFadeOut_m13E1EC8DEBD7794DA25A4C02111C3C6FD3C2BFF9 (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, float ___fadeOutTime0, const RuntimeMethod* method)
{
	{
		// if (fadeOutTime == 0)
		float L_0 = ___fadeOutTime0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0013;
		}
	}
	{
		// currentFadeTime = 0;
		__this->set_currentFadeTime_10((0.0f));
	}

IL_0013:
	{
		// fadeOutDuration = fadeOutTime;
		float L_1 = ___fadeOutTime0;
		__this->set_fadeOutDuration_7(L_1);
		// fadeInDuration = 0;
		__this->set_fadeInDuration_8((0.0f));
		// sustain = false;
		__this->set_sustain_9((bool)0);
		// }
		return;
	}
}
// System.Void EZCameraShake.CameraShakeInstance::StartFadeIn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShakeInstance_StartFadeIn_m97E75A3804298FE3A791E3DE080EDADF8B1CE72B (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, float ___fadeInTime0, const RuntimeMethod* method)
{
	{
		// if (fadeInTime == 0)
		float L_0 = ___fadeInTime0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0013;
		}
	}
	{
		// currentFadeTime = 1;
		__this->set_currentFadeTime_10((1.0f));
	}

IL_0013:
	{
		// fadeInDuration = fadeInTime;
		float L_1 = ___fadeInTime0;
		__this->set_fadeInDuration_8(L_1);
		// fadeOutDuration = 0;
		__this->set_fadeOutDuration_7((0.0f));
		// sustain = true;
		__this->set_sustain_9((bool)1);
		// }
		return;
	}
}
// System.Single EZCameraShake.CameraShakeInstance::get_ScaleRoughness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraShakeInstance_get_ScaleRoughness_mDEA29ECA404EA2D8951D7CC294624640EA315091 (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, const RuntimeMethod* method)
{
	{
		// get { return roughMod; }
		float L_0 = __this->get_roughMod_5();
		return L_0;
	}
}
// System.Void EZCameraShake.CameraShakeInstance::set_ScaleRoughness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShakeInstance_set_ScaleRoughness_mE0B00DAA1B66361026C8B6056D161E3E1B97C6AE (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { roughMod = value; }
		float L_0 = ___value0;
		__this->set_roughMod_5(L_0);
		// set { roughMod = value; }
		return;
	}
}
// System.Single EZCameraShake.CameraShakeInstance::get_ScaleMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraShakeInstance_get_ScaleMagnitude_m3CF6BA909B3712613CAC2C41833F37441268333A (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, const RuntimeMethod* method)
{
	{
		// get { return magnMod; }
		float L_0 = __this->get_magnMod_6();
		return L_0;
	}
}
// System.Void EZCameraShake.CameraShakeInstance::set_ScaleMagnitude(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShakeInstance_set_ScaleMagnitude_m985D975622853802C64CE84AB94B494C2826F564 (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { magnMod = value; }
		float L_0 = ___value0;
		__this->set_magnMod_6(L_0);
		// set { magnMod = value; }
		return;
	}
}
// System.Single EZCameraShake.CameraShakeInstance::get_NormalizedFadeTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraShakeInstance_get_NormalizedFadeTime_m010066884B75248D99342012FFA5FBFC2BA3A8CF (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, const RuntimeMethod* method)
{
	{
		// { get { return currentFadeTime; } }
		float L_0 = __this->get_currentFadeTime_10();
		return L_0;
	}
}
// System.Boolean EZCameraShake.CameraShakeInstance::get_IsShaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraShakeInstance_get_IsShaking_m643C60467EB82852B79A97AC68178713926D4D0D (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, const RuntimeMethod* method)
{
	{
		// { get { return currentFadeTime > 0 || sustain; } }
		float L_0 = __this->get_currentFadeTime_10();
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = __this->get_sustain_9();
		return L_1;
	}

IL_0014:
	{
		return (bool)1;
	}
}
// System.Boolean EZCameraShake.CameraShakeInstance::get_IsFadingOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraShakeInstance_get_IsFadingOut_m51D2DB9A6B6EE3B78727EA888DB038292AEA9049 (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, const RuntimeMethod* method)
{
	{
		// { get { return !sustain && currentFadeTime > 0; } }
		bool L_0 = __this->get_sustain_9();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		float L_1 = __this->get_currentFadeTime_10();
		return (bool)((((float)L_1) > ((float)(0.0f)))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
// System.Boolean EZCameraShake.CameraShakeInstance::get_IsFadingIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraShakeInstance_get_IsFadingIn_m8376BC9CC3A768242D427720DA0704AD8E02CF24 (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, const RuntimeMethod* method)
{
	{
		// { get { return currentFadeTime < 1 && sustain && fadeInDuration > 0; } }
		float L_0 = __this->get_currentFadeTime_10();
		if ((!(((float)L_0) < ((float)(1.0f)))))
		{
			goto IL_0023;
		}
	}
	{
		bool L_1 = __this->get_sustain_9();
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		float L_2 = __this->get_fadeInDuration_8();
		return (bool)((((float)L_2) > ((float)(0.0f)))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
// EZCameraShake.CameraShakeState EZCameraShake.CameraShakeInstance::get_CurrentState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraShakeInstance_get_CurrentState_m9A2E29B66972E9EFABDD4A29CE51FFEA7F903186 (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, const RuntimeMethod* method)
{
	{
		// if (IsFadingIn)
		bool L_0;
		L_0 = CameraShakeInstance_get_IsFadingIn_m8376BC9CC3A768242D427720DA0704AD8E02CF24(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return CameraShakeState.FadingIn;
		return (int32_t)(0);
	}

IL_000a:
	{
		// else if (IsFadingOut)
		bool L_1;
		L_1 = CameraShakeInstance_get_IsFadingOut_m51D2DB9A6B6EE3B78727EA888DB038292AEA9049(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return CameraShakeState.FadingOut;
		return (int32_t)(1);
	}

IL_0014:
	{
		// else if (IsShaking)
		bool L_2;
		L_2 = CameraShakeInstance_get_IsShaking_m643C60467EB82852B79A97AC68178713926D4D0D(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// return CameraShakeState.Sustained;
		return (int32_t)(2);
	}

IL_001e:
	{
		// return CameraShakeState.Inactive;
		return (int32_t)(3);
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
// EZCameraShake.CameraShakeInstance EZCameraShake.CameraShakePresets::get_Bump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * CameraShakePresets_get_Bump_mBFB816B5C3F2635A7A50AD7770824EAC00CFD373 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraShakeInstance c = new CameraShakeInstance(2.5f, 4, 0.1f, 0.75f);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_0 = (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 *)il2cpp_codegen_object_new(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		CameraShakeInstance__ctor_mD33471A787DCAEE52E5D709654DB8702E2427ADF(L_0, (2.5f), (4.0f), (0.100000001f), (0.75f), /*hidden argument*/NULL);
		// c.PositionInfluence = Vector3.one * 0.15f;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_1 = L_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, (0.150000006f), /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_PositionInfluence_2(L_3);
		// c.RotationInfluence = Vector3.one;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_4 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_RotationInfluence_3(L_5);
		// return c;
		return L_4;
	}
}
// EZCameraShake.CameraShakeInstance EZCameraShake.CameraShakePresets::get_Explosion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * CameraShakePresets_get_Explosion_m6F57CC9A21C9D3218A76BA0A21DE3DB749678300 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraShakeInstance c = new CameraShakeInstance(5f, 10, 0, 1.5f);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_0 = (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 *)il2cpp_codegen_object_new(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		CameraShakeInstance__ctor_mD33471A787DCAEE52E5D709654DB8702E2427ADF(L_0, (5.0f), (10.0f), (0.0f), (1.5f), /*hidden argument*/NULL);
		// c.PositionInfluence = Vector3.one * 0.25f;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_1 = L_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, (0.25f), /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_PositionInfluence_2(L_3);
		// c.RotationInfluence = new Vector3(4, 1, 1);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_4 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (4.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_RotationInfluence_3(L_5);
		// return c;
		return L_4;
	}
}
// EZCameraShake.CameraShakeInstance EZCameraShake.CameraShakePresets::get_Earthquake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * CameraShakePresets_get_Earthquake_mE287E8B8FC05384B224D9097F42CD601FA3EB8D7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraShakeInstance c = new CameraShakeInstance(0.6f, 3.5f, 2f, 10f);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_0 = (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 *)il2cpp_codegen_object_new(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		CameraShakeInstance__ctor_mD33471A787DCAEE52E5D709654DB8702E2427ADF(L_0, (0.600000024f), (3.5f), (2.0f), (10.0f), /*hidden argument*/NULL);
		// c.PositionInfluence = Vector3.one * 0.25f;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_1 = L_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, (0.25f), /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_PositionInfluence_2(L_3);
		// c.RotationInfluence = new Vector3(1, 1, 4);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_4 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (1.0f), (1.0f), (4.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_RotationInfluence_3(L_5);
		// return c;
		return L_4;
	}
}
// EZCameraShake.CameraShakeInstance EZCameraShake.CameraShakePresets::get_BadTrip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * CameraShakePresets_get_BadTrip_mE1592732D00CC78BA4DB2760DA745DAF32E7E150 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraShakeInstance c = new CameraShakeInstance(10f, 0.15f, 5f, 10f);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_0 = (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 *)il2cpp_codegen_object_new(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		CameraShakeInstance__ctor_mD33471A787DCAEE52E5D709654DB8702E2427ADF(L_0, (10.0f), (0.150000006f), (5.0f), (10.0f), /*hidden argument*/NULL);
		// c.PositionInfluence = new Vector3(0, 0, 0.15f);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_1 = L_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.0f), (0.150000006f), /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_PositionInfluence_2(L_2);
		// c.RotationInfluence = new Vector3(2, 1, 4);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_3 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (2.0f), (1.0f), (4.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_RotationInfluence_3(L_4);
		// return c;
		return L_3;
	}
}
// EZCameraShake.CameraShakeInstance EZCameraShake.CameraShakePresets::get_HandheldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * CameraShakePresets_get_HandheldCamera_m47A1CD77A7C6E31FE864EF43BC10D83E227F318C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraShakeInstance c = new CameraShakeInstance(1f, 0.25f, 5f, 10f);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_0 = (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 *)il2cpp_codegen_object_new(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		CameraShakeInstance__ctor_mD33471A787DCAEE52E5D709654DB8702E2427ADF(L_0, (1.0f), (0.25f), (5.0f), (10.0f), /*hidden argument*/NULL);
		// c.PositionInfluence = Vector3.zero;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_1 = L_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_PositionInfluence_2(L_2);
		// c.RotationInfluence = new Vector3(1, 0.5f, 0.5f);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_3 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (1.0f), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_RotationInfluence_3(L_4);
		// return c;
		return L_3;
	}
}
// EZCameraShake.CameraShakeInstance EZCameraShake.CameraShakePresets::get_Vibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * CameraShakePresets_get_Vibration_mEB9DC3D6C0CC85C7C42005D950745118EAFF7892 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraShakeInstance c = new CameraShakeInstance(0.4f, 20f, 2f, 2f);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_0 = (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 *)il2cpp_codegen_object_new(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		CameraShakeInstance__ctor_mD33471A787DCAEE52E5D709654DB8702E2427ADF(L_0, (0.400000006f), (20.0f), (2.0f), (2.0f), /*hidden argument*/NULL);
		// c.PositionInfluence = new Vector3(0, 0.15f, 0);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_1 = L_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.150000006f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_PositionInfluence_2(L_2);
		// c.RotationInfluence = new Vector3(1.25f, 0, 4);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_3 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (1.25f), (0.0f), (4.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_RotationInfluence_3(L_4);
		// return c;
		return L_3;
	}
}
// EZCameraShake.CameraShakeInstance EZCameraShake.CameraShakePresets::get_RoughDriving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * CameraShakePresets_get_RoughDriving_m9E271F505FAEFF08022CFE75E33682EFD57E9FE4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraShakeInstance c = new CameraShakeInstance(1, 2f, 1f, 1f);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_0 = (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 *)il2cpp_codegen_object_new(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		CameraShakeInstance__ctor_mD33471A787DCAEE52E5D709654DB8702E2427ADF(L_0, (1.0f), (2.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		// c.PositionInfluence = Vector3.zero;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_1 = L_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_PositionInfluence_2(L_2);
		// c.RotationInfluence = Vector3.one;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_3 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_RotationInfluence_3(L_4);
		// return c;
		return L_3;
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
// System.Void EZCameraShake.CameraShaker::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShaker_Awake_mB8F5126BF6A2A3F92DE79FDD05A30CBEE0569F83 (CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m0B7766734B5A6F884BEEEDA37B87379D6DC07410_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var);
		((CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_StaticFields*)il2cpp_codegen_static_fields_for(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// instanceList.Add(gameObject.name, this);
		Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D * L_0 = ((CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_StaticFields*)il2cpp_codegen_static_fields_for(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var))->get_instanceList_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_Add_m0B7766734B5A6F884BEEEDA37B87379D6DC07410(L_0, L_2, __this, /*hidden argument*/Dictionary_2_Add_m0B7766734B5A6F884BEEEDA37B87379D6DC07410_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EZCameraShake.CameraShaker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShaker_Update_mAF0E4AE84AD536D70DFB938309A9A9D23D484B1D (CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mDF95E6375EA373D8F1F1A0486C4EF333FE630A90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD01FF37F6E23E38B1FA9EE611DF26E33E8F9A815_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3F48A62A0B3336E176A28B3346D16D7473D0A14D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * V_1 = NULL;
	{
		// posAddShake = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_posAddShake_10(L_0);
		// rotAddShake = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_rotAddShake_11(L_1);
		// for (int i = 0; i < cameraShakeInstances.Count; i++)
		V_0 = 0;
		goto IL_00af;
	}

IL_001d:
	{
		// if (i >= cameraShakeInstances.Count)
		int32_t L_2 = V_0;
		List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * L_3 = __this->get_cameraShakeInstances_12();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mD01FF37F6E23E38B1FA9EE611DF26E33E8F9A815_inline(L_3, /*hidden argument*/List_1_get_Count_mD01FF37F6E23E38B1FA9EE611DF26E33E8F9A815_RuntimeMethod_var);
		if ((((int32_t)L_2) >= ((int32_t)L_4)))
		{
			goto IL_00c0;
		}
	}
	{
		// CameraShakeInstance c = cameraShakeInstances[i];
		List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * L_5 = __this->get_cameraShakeInstances_12();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_7;
		L_7 = List_1_get_Item_m3F48A62A0B3336E176A28B3346D16D7473D0A14D_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m3F48A62A0B3336E176A28B3346D16D7473D0A14D_RuntimeMethod_var);
		V_1 = L_7;
		// if (c.CurrentState == CameraShakeState.Inactive && c.DeleteOnInactive)
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = CameraShakeInstance_get_CurrentState_m9A2E29B66972E9EFABDD4A29CE51FFEA7F903186(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_005e;
		}
	}
	{
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = L_10->get_DeleteOnInactive_4();
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		// cameraShakeInstances.RemoveAt(i);
		List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * L_12 = __this->get_cameraShakeInstances_12();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		List_1_RemoveAt_mDF95E6375EA373D8F1F1A0486C4EF333FE630A90(L_12, L_13, /*hidden argument*/List_1_RemoveAt_mDF95E6375EA373D8F1F1A0486C4EF333FE630A90_RuntimeMethod_var);
		// i--;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
		// }
		goto IL_00ab;
	}

IL_005e:
	{
		// else if (c.CurrentState != CameraShakeState.Inactive)
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = CameraShakeInstance_get_CurrentState_m9A2E29B66972E9EFABDD4A29CE51FFEA7F903186(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) == ((int32_t)3)))
		{
			goto IL_00ab;
		}
	}
	{
		// posAddShake += CameraUtilities.MultiplyVectors(c.UpdateShake(), c.PositionInfluence);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_posAddShake_10();
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_18 = V_1;
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = CameraShakeInstance_UpdateShake_m4C423AB051E2DA2257E8575A5258C2673E296A6A(L_18, /*hidden argument*/NULL);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_20 = V_1;
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = L_20->get_PositionInfluence_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = CameraUtilities_MultiplyVectors_m6BC1FA39E740B30EE99E79C8D07C614006E2B8A5(L_19, L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_17, L_22, /*hidden argument*/NULL);
		__this->set_posAddShake_10(L_23);
		// rotAddShake += CameraUtilities.MultiplyVectors(c.UpdateShake(), c.RotationInfluence);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = __this->get_rotAddShake_11();
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_25 = V_1;
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = CameraShakeInstance_UpdateShake_m4C423AB051E2DA2257E8575A5258C2673E296A6A(L_25, /*hidden argument*/NULL);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_27 = V_1;
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = L_27->get_RotationInfluence_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = CameraUtilities_MultiplyVectors_m6BC1FA39E740B30EE99E79C8D07C614006E2B8A5(L_26, L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_24, L_29, /*hidden argument*/NULL);
		__this->set_rotAddShake_11(L_30);
	}

IL_00ab:
	{
		// for (int i = 0; i < cameraShakeInstances.Count; i++)
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00af:
	{
		// for (int i = 0; i < cameraShakeInstances.Count; i++)
		int32_t L_32 = V_0;
		List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * L_33 = __this->get_cameraShakeInstances_12();
		NullCheck(L_33);
		int32_t L_34;
		L_34 = List_1_get_Count_mD01FF37F6E23E38B1FA9EE611DF26E33E8F9A815_inline(L_33, /*hidden argument*/List_1_get_Count_mD01FF37F6E23E38B1FA9EE611DF26E33E8F9A815_RuntimeMethod_var);
		if ((((int32_t)L_32) < ((int32_t)L_34)))
		{
			goto IL_001d;
		}
	}

IL_00c0:
	{
		// transform.localPosition = posAddShake + RestPositionOffset;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = __this->get_posAddShake_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = __this->get_RestPositionOffset_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_36, L_37, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_35, L_38, /*hidden argument*/NULL);
		// transform.localEulerAngles = rotAddShake + RestRotationOffset;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = __this->get_rotAddShake_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = __this->get_RestRotationOffset_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_40, L_41, /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_39, L_42, /*hidden argument*/NULL);
		// }
		return;
	}
}
// EZCameraShake.CameraShaker EZCameraShake.CameraShaker::GetInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * CameraShaker_GetInstance_mB8665976FCBCD712F4AB2BE1391387F0DC5BE987 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m99016DBFDD161CC8A746987228C9C964E8096E68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral415532967CDC271A3E861A53C314003A47710165);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE8C3C0A60A6ACECA32354A399EE2CC5274F926);
		s_Il2CppMethodInitialized = true;
	}
	CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * V_0 = NULL;
	{
		// if (instanceList.TryGetValue(name, out c))
		IL2CPP_RUNTIME_CLASS_INIT(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var);
		Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D * L_0 = ((CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_StaticFields*)il2cpp_codegen_static_fields_for(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var))->get_instanceList_5();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m99016DBFDD161CC8A746987228C9C964E8096E68(L_0, L_1, (CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m99016DBFDD161CC8A746987228C9C964E8096E68_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return c;
		CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * L_3 = V_0;
		return L_3;
	}

IL_0011:
	{
		// Debug.LogError("CameraShake " + name + " not found!");
		String_t* L_4 = ___name0;
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral415532967CDC271A3E861A53C314003A47710165, L_4, _stringLiteral7DE8C3C0A60A6ACECA32354A399EE2CC5274F926, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_5, /*hidden argument*/NULL);
		// return null;
		return (CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 *)NULL;
	}
}
// EZCameraShake.CameraShakeInstance EZCameraShake.CameraShaker::Shake(EZCameraShake.CameraShakeInstance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * CameraShaker_Shake_mC1ECE551D57F9B7B094B707DD33D7A6927A00572 (CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * __this, CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * ___shake0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFA7878097E1C5685CDDFB3AD695D35273A0D6314_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraShakeInstances.Add(shake);
		List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * L_0 = __this->get_cameraShakeInstances_12();
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_1 = ___shake0;
		NullCheck(L_0);
		List_1_Add_mFA7878097E1C5685CDDFB3AD695D35273A0D6314(L_0, L_1, /*hidden argument*/List_1_Add_mFA7878097E1C5685CDDFB3AD695D35273A0D6314_RuntimeMethod_var);
		// return shake;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_2 = ___shake0;
		return L_2;
	}
}
// EZCameraShake.CameraShakeInstance EZCameraShake.CameraShaker::ShakeOnce(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * CameraShaker_ShakeOnce_mCE96B0D14EAABE9B0759D6E3E308F74AD95B2B01 (CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * __this, float ___magnitude0, float ___roughness1, float ___fadeInTime2, float ___fadeOutTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFA7878097E1C5685CDDFB3AD695D35273A0D6314_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * V_0 = NULL;
	{
		// CameraShakeInstance shake = new CameraShakeInstance(magnitude, roughness, fadeInTime, fadeOutTime);
		float L_0 = ___magnitude0;
		float L_1 = ___roughness1;
		float L_2 = ___fadeInTime2;
		float L_3 = ___fadeOutTime3;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_4 = (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 *)il2cpp_codegen_object_new(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		CameraShakeInstance__ctor_mD33471A787DCAEE52E5D709654DB8702E2427ADF(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// shake.PositionInfluence = DefaultPosInfluence;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = __this->get_DefaultPosInfluence_6();
		NullCheck(L_5);
		L_5->set_PositionInfluence_2(L_6);
		// shake.RotationInfluence = DefaultRotInfluence;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_7 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_DefaultRotInfluence_7();
		NullCheck(L_7);
		L_7->set_RotationInfluence_3(L_8);
		// cameraShakeInstances.Add(shake);
		List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * L_9 = __this->get_cameraShakeInstances_12();
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_10 = V_0;
		NullCheck(L_9);
		List_1_Add_mFA7878097E1C5685CDDFB3AD695D35273A0D6314(L_9, L_10, /*hidden argument*/List_1_Add_mFA7878097E1C5685CDDFB3AD695D35273A0D6314_RuntimeMethod_var);
		// return shake;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_11 = V_0;
		return L_11;
	}
}
// EZCameraShake.CameraShakeInstance EZCameraShake.CameraShaker::ShakeOnce(System.Single,System.Single,System.Single,System.Single,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * CameraShaker_ShakeOnce_m1F4666B02997804BF4087283383B8DAE38C3E7F1 (CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * __this, float ___magnitude0, float ___roughness1, float ___fadeInTime2, float ___fadeOutTime3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___posInfluence4, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotInfluence5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFA7878097E1C5685CDDFB3AD695D35273A0D6314_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * V_0 = NULL;
	{
		// CameraShakeInstance shake = new CameraShakeInstance(magnitude, roughness, fadeInTime, fadeOutTime);
		float L_0 = ___magnitude0;
		float L_1 = ___roughness1;
		float L_2 = ___fadeInTime2;
		float L_3 = ___fadeOutTime3;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_4 = (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 *)il2cpp_codegen_object_new(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		CameraShakeInstance__ctor_mD33471A787DCAEE52E5D709654DB8702E2427ADF(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// shake.PositionInfluence = posInfluence;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___posInfluence4;
		NullCheck(L_5);
		L_5->set_PositionInfluence_2(L_6);
		// shake.RotationInfluence = rotInfluence;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_7 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___rotInfluence5;
		NullCheck(L_7);
		L_7->set_RotationInfluence_3(L_8);
		// cameraShakeInstances.Add(shake);
		List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * L_9 = __this->get_cameraShakeInstances_12();
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_10 = V_0;
		NullCheck(L_9);
		List_1_Add_mFA7878097E1C5685CDDFB3AD695D35273A0D6314(L_9, L_10, /*hidden argument*/List_1_Add_mFA7878097E1C5685CDDFB3AD695D35273A0D6314_RuntimeMethod_var);
		// return shake;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_11 = V_0;
		return L_11;
	}
}
// EZCameraShake.CameraShakeInstance EZCameraShake.CameraShaker::StartShake(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * CameraShaker_StartShake_m82B19390FF7D3415FF88F89F3E7B8D3F4C1E4493 (CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * __this, float ___magnitude0, float ___roughness1, float ___fadeInTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFA7878097E1C5685CDDFB3AD695D35273A0D6314_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * V_0 = NULL;
	{
		// CameraShakeInstance shake = new CameraShakeInstance(magnitude, roughness);
		float L_0 = ___magnitude0;
		float L_1 = ___roughness1;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_2 = (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 *)il2cpp_codegen_object_new(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		CameraShakeInstance__ctor_mAE99DDF2021D226CBCCCD608516DDDAB2BF4ECE3(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// shake.PositionInfluence = DefaultPosInfluence;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_3 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_DefaultPosInfluence_6();
		NullCheck(L_3);
		L_3->set_PositionInfluence_2(L_4);
		// shake.RotationInfluence = DefaultRotInfluence;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = __this->get_DefaultRotInfluence_7();
		NullCheck(L_5);
		L_5->set_RotationInfluence_3(L_6);
		// shake.StartFadeIn(fadeInTime);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_7 = V_0;
		float L_8 = ___fadeInTime2;
		NullCheck(L_7);
		CameraShakeInstance_StartFadeIn_m97E75A3804298FE3A791E3DE080EDADF8B1CE72B(L_7, L_8, /*hidden argument*/NULL);
		// cameraShakeInstances.Add(shake);
		List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * L_9 = __this->get_cameraShakeInstances_12();
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_10 = V_0;
		NullCheck(L_9);
		List_1_Add_mFA7878097E1C5685CDDFB3AD695D35273A0D6314(L_9, L_10, /*hidden argument*/List_1_Add_mFA7878097E1C5685CDDFB3AD695D35273A0D6314_RuntimeMethod_var);
		// return shake;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_11 = V_0;
		return L_11;
	}
}
// EZCameraShake.CameraShakeInstance EZCameraShake.CameraShaker::StartShake(System.Single,System.Single,System.Single,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * CameraShaker_StartShake_m2F3BA7A8A7C519A263E751F0E3B938CD67411794 (CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * __this, float ___magnitude0, float ___roughness1, float ___fadeInTime2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___posInfluence3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotInfluence4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFA7878097E1C5685CDDFB3AD695D35273A0D6314_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * V_0 = NULL;
	{
		// CameraShakeInstance shake = new CameraShakeInstance(magnitude, roughness);
		float L_0 = ___magnitude0;
		float L_1 = ___roughness1;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_2 = (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 *)il2cpp_codegen_object_new(CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160_il2cpp_TypeInfo_var);
		CameraShakeInstance__ctor_mAE99DDF2021D226CBCCCD608516DDDAB2BF4ECE3(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// shake.PositionInfluence = posInfluence;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_3 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___posInfluence3;
		NullCheck(L_3);
		L_3->set_PositionInfluence_2(L_4);
		// shake.RotationInfluence = rotInfluence;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rotInfluence4;
		NullCheck(L_5);
		L_5->set_RotationInfluence_3(L_6);
		// shake.StartFadeIn(fadeInTime);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_7 = V_0;
		float L_8 = ___fadeInTime2;
		NullCheck(L_7);
		CameraShakeInstance_StartFadeIn_m97E75A3804298FE3A791E3DE080EDADF8B1CE72B(L_7, L_8, /*hidden argument*/NULL);
		// cameraShakeInstances.Add(shake);
		List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * L_9 = __this->get_cameraShakeInstances_12();
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_10 = V_0;
		NullCheck(L_9);
		List_1_Add_mFA7878097E1C5685CDDFB3AD695D35273A0D6314(L_9, L_10, /*hidden argument*/List_1_Add_mFA7878097E1C5685CDDFB3AD695D35273A0D6314_RuntimeMethod_var);
		// return shake;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_11 = V_0;
		return L_11;
	}
}
// System.Collections.Generic.List`1<EZCameraShake.CameraShakeInstance> EZCameraShake.CameraShaker::get_ShakeInstances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * CameraShaker_get_ShakeInstances_m784F774A70C3EDB17EC506A822999E39562ABF7A (CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4D002C993A070565E673832933FD5FE541DCB30F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// { get { return new List<CameraShakeInstance>(cameraShakeInstances); } }
		List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * L_0 = __this->get_cameraShakeInstances_12();
		List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * L_1 = (List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E *)il2cpp_codegen_object_new(List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E_il2cpp_TypeInfo_var);
		List_1__ctor_m4D002C993A070565E673832933FD5FE541DCB30F(L_1, L_0, /*hidden argument*/List_1__ctor_m4D002C993A070565E673832933FD5FE541DCB30F_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void EZCameraShake.CameraShaker::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShaker_OnDestroy_m3E2E0E5A94BBBB6B14FE0F44E350FFEA15DFF248 (CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mF85F71AC67339A01419E8CEC35D94F23C2DA1726_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instanceList.Remove(gameObject.name);
		IL2CPP_RUNTIME_CLASS_INIT(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var);
		Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D * L_0 = ((CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_StaticFields*)il2cpp_codegen_static_fields_for(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var))->get_instanceList_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_Remove_mF85F71AC67339A01419E8CEC35D94F23C2DA1726(L_0, L_2, /*hidden argument*/Dictionary_2_Remove_mF85F71AC67339A01419E8CEC35D94F23C2DA1726_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EZCameraShake.CameraShaker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShaker__ctor_m279F96CED490F063FA32A741F324DC18BE2C56BB (CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA739B19362BA5129B5E2B0E0431E15D95992520D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3 DefaultPosInfluence = new Vector3(0.15f, 0.15f, 0.15f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.150000006f), (0.150000006f), (0.150000006f), /*hidden argument*/NULL);
		__this->set_DefaultPosInfluence_6(L_0);
		// public Vector3 DefaultRotInfluence = new Vector3(1, 1, 1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_DefaultRotInfluence_7(L_1);
		// public Vector3 RestPositionOffset = new Vector3(0, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_RestPositionOffset_8(L_2);
		// public Vector3 RestRotationOffset = new Vector3(0, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_RestRotationOffset_9(L_3);
		// List<CameraShakeInstance> cameraShakeInstances = new List<CameraShakeInstance>();
		List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * L_4 = (List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E *)il2cpp_codegen_object_new(List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E_il2cpp_TypeInfo_var);
		List_1__ctor_mA739B19362BA5129B5E2B0E0431E15D95992520D(L_4, /*hidden argument*/List_1__ctor_mA739B19362BA5129B5E2B0E0431E15D95992520D_RuntimeMethod_var);
		__this->set_cameraShakeInstances_12(L_4);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EZCameraShake.CameraShaker::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShaker__cctor_m38877112A785BE0AC0098A7027F26160AE9E55E5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC813A3142C8B2AE0993CE5FC58FD1013572E62D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Dictionary<string, CameraShaker> instanceList = new Dictionary<string, CameraShaker>();
		Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D * L_0 = (Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D *)il2cpp_codegen_object_new(Dictionary_2_t30777523DBD81DEEAD2EFB5F093C75B4AFD64B5D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC813A3142C8B2AE0993CE5FC58FD1013572E62D6(L_0, /*hidden argument*/Dictionary_2__ctor_mC813A3142C8B2AE0993CE5FC58FD1013572E62D6_RuntimeMethod_var);
		((CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_StaticFields*)il2cpp_codegen_static_fields_for(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var))->set_instanceList_5(L_0);
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
// UnityEngine.Vector3 EZCameraShake.CameraUtilities::SmoothDampEuler(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CameraUtilities_SmoothDampEuler_m6F3D66D5D4308E3E37D069B80B4B0488DF76785C (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___velocity2, float ___smoothTime3, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// v.x = Mathf.SmoothDampAngle(current.x, target.x, ref velocity.x, smoothTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___current0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___target1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = ___velocity2;
		float* L_5 = L_4->get_address_of_x_2();
		float L_6 = ___smoothTime3;
		float L_7;
		L_7 = Mathf_SmoothDampAngle_mB876CA3D4A313CF29074CCDDB784CAF5533EBA46(L_1, L_3, (float*)L_5, L_6, /*hidden argument*/NULL);
		(&V_0)->set_x_2(L_7);
		// v.y = Mathf.SmoothDampAngle(current.y, target.y, ref velocity.y, smoothTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___current0;
		float L_9 = L_8.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___target1;
		float L_11 = L_10.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = ___velocity2;
		float* L_13 = L_12->get_address_of_y_3();
		float L_14 = ___smoothTime3;
		float L_15;
		L_15 = Mathf_SmoothDampAngle_mB876CA3D4A313CF29074CCDDB784CAF5533EBA46(L_9, L_11, (float*)L_13, L_14, /*hidden argument*/NULL);
		(&V_0)->set_y_3(L_15);
		// v.z = Mathf.SmoothDampAngle(current.z, target.z, ref velocity.z, smoothTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___current0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___target1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_20 = ___velocity2;
		float* L_21 = L_20->get_address_of_z_4();
		float L_22 = ___smoothTime3;
		float L_23;
		L_23 = Mathf_SmoothDampAngle_mB876CA3D4A313CF29074CCDDB784CAF5533EBA46(L_17, L_19, (float*)L_21, L_22, /*hidden argument*/NULL);
		(&V_0)->set_z_4(L_23);
		// return v;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
// UnityEngine.Vector3 EZCameraShake.CameraUtilities::MultiplyVectors(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CameraUtilities_MultiplyVectors_m6BC1FA39E740B30EE99E79C8D07C614006E2B8A5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___w1, const RuntimeMethod* method)
{
	{
		// v.x *= w.x;
		float* L_0 = (&___v0)->get_address_of_x_2();
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___w1;
		float L_4 = L_3.get_x_2();
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_4));
		// v.y *= w.y;
		float* L_5 = (&___v0)->get_address_of_y_3();
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___w1;
		float L_9 = L_8.get_y_3();
		*((float*)L_6) = (float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_9));
		// v.z *= w.z;
		float* L_10 = (&___v0)->get_address_of_z_4();
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___w1;
		float L_14 = L_13.get_z_4();
		*((float*)L_11) = (float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_14));
		// return v;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = ___v0;
		return L_15;
	}
}
// System.Void EZCameraShake.CameraUtilities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraUtilities__ctor_mAF7208A456E555D050B023582D597306EF8353C2 (CameraUtilities_t920F545F51C42D88F5DB3D4161B08A6D5E199D80 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void CollectorScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectorScript_OnTriggerEnter2D_mA13623886769701712D4E772B583767CF5B12E7A (CollectorScript_t7637D580B6A2CBC1828B58D44D434582F5852DE8 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CollectorScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectorScript__ctor_m37A87ACA77B50430920C49F6319EECD1320AEE77 (CollectorScript_t7637D580B6A2CBC1828B58D44D434582F5852DE8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameController::PlayAgain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_PlayAgain_m1A807E5257D06CDAEE72E9FD66A64CCE3464BB34 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42BE89C6A66E84EE1086370DF52323B75A26F3D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameOverPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameOverPanel_5();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// scorePanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_scorePanel_6();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// SceneManager.LoadScene("Gameplay");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral42BE89C6A66E84EE1086370DF52323B75A26F3D6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::ToMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ToMainMenu_mB69626AA93D2F3F4AE2B07854FED06E4D2C4B145 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::SetFinalScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SetFinalScore_mA754663CBF846C2F6D14E7351BD2A51A9FB4E565 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// FinalScore.text = "" + Score.instance.getHighScore() + "s";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_FinalScore_4();
		Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * L_1 = ((Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields*)il2cpp_codegen_static_fields_for(Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_1);
		float L_2;
		L_2 = Score_getHighScore_m694CF366370DBBF9324D24258D5D349C0B830B96_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// scorePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_scorePanel_6();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// gameOverPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_gameOverPanel_5();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_m9D952052C0A7234373FA5531292FCA8855BE2643 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Joystick::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Awake_mC2C2B674EC0F1DE67628AA24AA25E7FD196955AB (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7_m60EEE41BD6F7406B81103E30BAEE044B808E5EF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ball = GameObject.Find("Ball").GetComponent<BallMoving>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		NullCheck(L_0);
		BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * L_1;
		L_1 = GameObject_GetComponent_TisBallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7_m60EEE41BD6F7406B81103E30BAEE044B808E5EF7(L_0, /*hidden argument*/GameObject_GetComponent_TisBallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7_m60EEE41BD6F7406B81103E30BAEE044B808E5EF7_RuntimeMethod_var);
		__this->set_ball_4(L_1);
		// }
		return;
	}
}
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mB2A665CAD2B74565B6A1ACE2CA5A98A66020CE18 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(gameObject.name);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// if (gameObject.name == "Down")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// ball.SetMoveDown(true);
		BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * L_5 = __this->get_ball_4();
		NullCheck(L_5);
		BallMoving_SetMoveDown_mD0944B6505A083A44C483CD7D91ED3F538D0F23C(L_5, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0034:
	{
		// ball.SetMoveUp(false);
		BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * L_6 = __this->get_ball_4();
		NullCheck(L_6);
		BallMoving_SetMoveUp_m643EC3A95B09D8319BEF800A161D1834BE5F4E1D(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_m84FA57FCD3325BDEE02FED329B1C963C4DA2A037 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	{
		// ball.stopUpAndDown();
		BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * L_0 = __this->get_ball_4();
		NullCheck(L_0);
		BallMoving_stopUpAndDown_m93504C39BD66A0CFF63A996C97F1F60F6D1A64BD(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_mF7C14D62A9A6B3BD77F6365BB88DE406A9CE4E08 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MainMenu::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_StartGame_m8EFE49FE95784A266A683D0CCAAE7C2274981049 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42BE89C6A66E84EE1086370DF52323B75A26F3D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Gameplay");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral42BE89C6A66E84EE1086370DF52323B75A26F3D6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Quit_m65E045D8746B583667D2641184783FDD7796758A (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m4D77CEC8F91682A2D9492AE815F89B178BF9717D (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Score::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Start_m65B0DAC30D1A9E246D4CF14672D8138B53EDA564 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!instance) instance = this;
		Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * L_0 = ((Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields*)il2cpp_codegen_static_fields_for(Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var))->get_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (!instance) instance = this;
		((Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields*)il2cpp_codegen_static_fields_for(Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var))->set_instance_7(__this);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void Score::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Update_mB696B161F91F1AE220BCD4F47028DE039D9697D2 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA0F31A790E44029039C7B4B14CBA23903CC94DC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(alive)
		bool L_0 = __this->get_alive_6();
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// currentScore += Time.deltaTime;
		float L_1 = __this->get_currentScore_5();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_currentScore_5(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		// currentScore = currentScore % 60;
		float L_3 = __this->get_currentScore_5();
		__this->set_currentScore_5((fmodf(L_3, (60.0f))));
		// highScore.text = "Score (s): " + currentScore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_highScore_4();
		float* L_5 = __this->get_address_of_currentScore_5();
		String_t* L_6;
		L_6 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralDA0F31A790E44029039C7B4B14CBA23903CC94DC, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Score::notAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_notAlive_m68C309D22ACF51414585F4AD87970863801F85F5 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method)
{
	{
		// public void notAlive() { alive = false; }
		__this->set_alive_6((bool)0);
		// public void notAlive() { alive = false; }
		return;
	}
}
// System.Single Score::getHighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Score_getHighScore_m694CF366370DBBF9324D24258D5D349C0B830B96 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method)
{
	{
		// return currentScore;
		float L_0 = __this->get_currentScore_5();
		return L_0;
	}
}
// System.Void Score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mEE9186D20D9B28A735262B29AB6E8D9FF1380FB6 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method)
{
	{
		// private bool alive = true;
		__this->set_alive_6((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ShakeByDistance::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeByDistance_Start_m0A4D1E72E91907145243A0532B2E91378E6697F2 (ShakeByDistance_t4655C740DBEBD63E111F88E438B02DC63828E59A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _shakeInstance = CameraShaker.Instance.StartShake(2, 14, 0);
		IL2CPP_RUNTIME_CLASS_INIT(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var);
		CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * L_0 = ((CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_StaticFields*)il2cpp_codegen_static_fields_for(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_0);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_1;
		L_1 = CameraShaker_StartShake_m82B19390FF7D3415FF88F89F3E7B8D3F4C1E4493(L_0, (2.0f), (14.0f), (0.0f), /*hidden argument*/NULL);
		__this->set__shakeInstance_6(L_1);
		// }
		return;
	}
}
// System.Void ShakeByDistance::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeByDistance_Update_m871D004BF97F3B623B5673FC8807A21F10477B75 (ShakeByDistance_t4655C740DBEBD63E111F88E438B02DC63828E59A * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float currentDistance = Vector3.Distance(Player.transform.position, this.transform.position);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Player_4();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5;
		L_5 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// _shakeInstance.ScaleMagnitude = 1 - Mathf.Clamp01(currentDistance / Distance);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_6 = __this->get__shakeInstance_6();
		float L_7 = V_0;
		float L_8 = __this->get_Distance_5();
		float L_9;
		L_9 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		NullCheck(L_6);
		CameraShakeInstance_set_ScaleMagnitude_m985D975622853802C64CE84AB94B494C2826F564_inline(L_6, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_9)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShakeByDistance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeByDistance__ctor_m356FC28330C2A48627002BD58B0B389CB3F65555 (ShakeByDistance_t4655C740DBEBD63E111F88E438B02DC63828E59A * __this, const RuntimeMethod* method)
{
	{
		// public float Distance = 10f;
		__this->set_Distance_5((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ShakeDemo::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeDemo_OnGUI_m651E735477788CF9F4FB82EEEC6970676DF7C05C (ShakeDemo_t7E6501DA3EFC607FDD21FAF56E2571579CE26FFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShakeState_t66A406C932C029BD7B8E8781E0F80F73C669A400_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD3BE8059031D9C7A0F118C37D2EAD726603C510B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDEBE892CB4963254B9688C8B5D64D89B9032000C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8508B66302BD200C5BFAADF15B324199B414FF1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF9EC113241EA378F89BB0D50D5059E1A27375B7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD01FF37F6E23E38B1FA9EE611DF26E33E8F9A815_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnGUIU3Eb__10_0_m28D6C68537B0DE1103C2901D40E8D4A2E9E4BCFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0352CE8D64F9719150DB5FB895B7666408131AAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral081FC2571D6732CA892CE45DE7C64E96CFCABA7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BBEDDBB54CE3A2189C5F4C8545E40AA7107F60B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A706322D30880A4D385B9C17EF6CF078D4FDB20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA272BABB7385BBD034A0D48900222D3C40101D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral223A27883BAC4DCD84AA7DE394FB5E37B2502995);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2487EE56C74992C7EBC8151B84C12B18E4FB5F26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C8B43E79B0518A0D4BA52F30B5324943A108B71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F1886E56B0BE86496BC4003E63677AEC1139CC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C80910F10267023F7D8AF207D13744681E292BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4060F0FB96C0F2AF00DED589F16E2EF2E0F4A60D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral630D1D2FF6651EAC53F7B7C743B2822BB336511A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B1F6209AFC46D0B0BEF706304CC65145367EEC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72D5DBE442E9194F36F705166F7B27EFAF3F0237);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78E40C15ED5411DC388506A0803FD7C35BE5032F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80D34E60DB62F6CF9B2138211D2EB0B4B75087D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral818B9FD18205A6A6D4F06727ADFA72469D697FCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96CA915FA62159B51FF38C0E5BCD3A94F9A47528);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7B55367222587EF826DD892F368FEAE544E081C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8C8A40F3DCEED59DB2F1694F22C2380819C761B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7970E0429A83BD1EB36417A6DBFB411CA5525A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE37EEABBB7EDEA62EC88411545D853031136249);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CB235FDF341E57B3A3E3D289810AD3382B4E8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB9A0310257A87677DC88CAE88E97A78A79B8706);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEC979DB49C578BB006779B58C8F783C758562BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDF611DB0A704ACE16572058A52326F1D94303BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB36B3027434601A552FC457DE65FB77F6F4D766);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFDDF27E09A8F5A7709A290BC561AC1F3E82805B);
		s_Il2CppMethodInitialized = true;
	}
	Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * V_0 = NULL;
	float V_1 = 0.0f;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Enumerator_tBC07D4EED300FF8ABD471FEA162850350C482176  V_4;
	memset((&V_4), 0, sizeof(V_4));
	CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * V_5 = NULL;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * G_B4_0 = NULL;
	Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * G_B3_0 = NULL;
	{
		// if (Input.GetKeyDown(KeyCode.R))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)114), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_1;
		L_1 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_2 = L_1;
		int32_t L_2;
		L_2 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_2), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// Slider s = delegate(float val, string prefix, float min, float max, int pad)
		// {
		//     GUILayout.BeginHorizontal();
		//     GUILayout.Label(prefix, GUILayout.MaxWidth(pad));
		//     val = GUILayout.HorizontalSlider(val, min, max);
		//     GUILayout.Label(val.ToString("F2"), GUILayout.MaxWidth(50));
		//     GUILayout.EndHorizontal();
		//     return val;
		// };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538_il2cpp_TypeInfo_var);
		Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * L_3 = ((U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538_il2cpp_TypeInfo_var))->get_U3CU3E9__10_0_1();
		Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538_il2cpp_TypeInfo_var);
		U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538 * L_5 = ((U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * L_6 = (Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD *)il2cpp_codegen_object_new(Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD_il2cpp_TypeInfo_var);
		Slider__ctor_m64DF033114E2228ABDF675845B4F1DFCB44FA0C9(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3COnGUIU3Eb__10_0_m28D6C68537B0DE1103C2901D40E8D4A2E9E4BCFF_RuntimeMethod_var), /*hidden argument*/NULL);
		Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * L_7 = L_6;
		((U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538_il2cpp_TypeInfo_var))->set_U3CU3E9__10_0_1(L_7);
		G_B4_0 = L_7;
	}

IL_003a:
	{
		V_0 = G_B4_0;
		// GUI.Box(new Rect(10, 10, 250, Screen.height - 15), "Make-A-Shake");
		int32_t L_8;
		L_8 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_9), (10.0f), (10.0f), (250.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)15))))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Box_mA4BA00A35EAEA960B5F645B66F95DA0C59CB09D9(L_9, _stringLiteral80D34E60DB62F6CF9B2138211D2EB0B4B75087D1, /*hidden argument*/NULL);
		// GUILayout.BeginArea(new Rect(29f, 40, 215, Screen.height - 40));
		int32_t L_10;
		L_10 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_11), (29.0f), (40.0f), (215.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)40))))), /*hidden argument*/NULL);
		GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0(L_11, /*hidden argument*/NULL);
		// GUILayout.Label("--Position Infleunce--");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_12;
		L_12 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteral630D1D2FF6651EAC53F7B7C743B2822BB336511A, L_12, /*hidden argument*/NULL);
		// posInf.x = s(posInf.x, "X", 0, 4, 25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = __this->get_address_of_posInf_4();
		Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * L_14 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = __this->get_address_of_posInf_4();
		float L_16 = L_15->get_x_2();
		NullCheck(L_14);
		float L_17;
		L_17 = Slider_Invoke_mC532D4287E3B5701BA9B350B243EE981B86CA58A(L_14, L_16, _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, (0.0f), (4.0f), ((int32_t)25), /*hidden argument*/NULL);
		L_13->set_x_2(L_17);
		// posInf.y = s(posInf.y, "Y", 0, 4, 25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = __this->get_address_of_posInf_4();
		Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * L_19 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_20 = __this->get_address_of_posInf_4();
		float L_21 = L_20->get_y_3();
		NullCheck(L_19);
		float L_22;
		L_22 = Slider_Invoke_mC532D4287E3B5701BA9B350B243EE981B86CA58A(L_19, L_21, _stringLiteralC5CB235FDF341E57B3A3E3D289810AD3382B4E8B, (0.0f), (4.0f), ((int32_t)25), /*hidden argument*/NULL);
		L_18->set_y_3(L_22);
		// posInf.z = s(posInf.z, "Z", 0, 4, 25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_23 = __this->get_address_of_posInf_4();
		Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * L_24 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_25 = __this->get_address_of_posInf_4();
		float L_26 = L_25->get_z_4();
		NullCheck(L_24);
		float L_27;
		L_27 = Slider_Invoke_mC532D4287E3B5701BA9B350B243EE981B86CA58A(L_24, L_26, _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380, (0.0f), (4.0f), ((int32_t)25), /*hidden argument*/NULL);
		L_23->set_z_4(L_27);
		// GUILayout.Label("--Rotation Infleunce--");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_28;
		L_28 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteral2487EE56C74992C7EBC8151B84C12B18E4FB5F26, L_28, /*hidden argument*/NULL);
		// rotInf.x = s(rotInf.x, "X", 0, 4, 25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_29 = __this->get_address_of_rotInf_5();
		Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * L_30 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_31 = __this->get_address_of_rotInf_5();
		float L_32 = L_31->get_x_2();
		NullCheck(L_30);
		float L_33;
		L_33 = Slider_Invoke_mC532D4287E3B5701BA9B350B243EE981B86CA58A(L_30, L_32, _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, (0.0f), (4.0f), ((int32_t)25), /*hidden argument*/NULL);
		L_29->set_x_2(L_33);
		// rotInf.y = s(rotInf.y, "Y", 0, 4, 25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_34 = __this->get_address_of_rotInf_5();
		Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * L_35 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_36 = __this->get_address_of_rotInf_5();
		float L_37 = L_36->get_y_3();
		NullCheck(L_35);
		float L_38;
		L_38 = Slider_Invoke_mC532D4287E3B5701BA9B350B243EE981B86CA58A(L_35, L_37, _stringLiteralC5CB235FDF341E57B3A3E3D289810AD3382B4E8B, (0.0f), (4.0f), ((int32_t)25), /*hidden argument*/NULL);
		L_34->set_y_3(L_38);
		// rotInf.z = s(rotInf.z, "Z", 0, 4, 25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_39 = __this->get_address_of_rotInf_5();
		Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * L_40 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_41 = __this->get_address_of_rotInf_5();
		float L_42 = L_41->get_z_4();
		NullCheck(L_40);
		float L_43;
		L_43 = Slider_Invoke_mC532D4287E3B5701BA9B350B243EE981B86CA58A(L_40, L_42, _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380, (0.0f), (4.0f), ((int32_t)25), /*hidden argument*/NULL);
		L_39->set_z_4(L_43);
		// GUILayout.Label("--Other Properties--");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_44;
		L_44 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteral3C80910F10267023F7D8AF207D13744681E292BF, L_44, /*hidden argument*/NULL);
		// magn = s(magn, "Magnitude:", 0, 10, 75);
		Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * L_45 = V_0;
		float L_46 = __this->get_magn_6();
		NullCheck(L_45);
		float L_47;
		L_47 = Slider_Invoke_mC532D4287E3B5701BA9B350B243EE981B86CA58A(L_45, L_46, _stringLiteral0BBEDDBB54CE3A2189C5F4C8545E40AA7107F60B, (0.0f), (10.0f), ((int32_t)75), /*hidden argument*/NULL);
		__this->set_magn_6(L_47);
		// rough = s(rough, "Roughness:", 0, 20, 75);
		Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * L_48 = V_0;
		float L_49 = __this->get_rough_7();
		NullCheck(L_48);
		float L_50;
		L_50 = Slider_Invoke_mC532D4287E3B5701BA9B350B243EE981B86CA58A(L_48, L_49, _stringLiteral1A706322D30880A4D385B9C17EF6CF078D4FDB20, (0.0f), (20.0f), ((int32_t)75), /*hidden argument*/NULL);
		__this->set_rough_7(L_50);
		// fadeIn = s(fadeIn, "Fade In:", 0, 10, 75);
		Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * L_51 = V_0;
		float L_52 = __this->get_fadeIn_8();
		NullCheck(L_51);
		float L_53;
		L_53 = Slider_Invoke_mC532D4287E3B5701BA9B350B243EE981B86CA58A(L_51, L_52, _stringLiteralBE37EEABBB7EDEA62EC88411545D853031136249, (0.0f), (10.0f), ((int32_t)75), /*hidden argument*/NULL);
		__this->set_fadeIn_8(L_53);
		// fadeOut = s(fadeOut, "Fade Out:", 0, 10, 75);
		Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * L_54 = V_0;
		float L_55 = __this->get_fadeOut_9();
		NullCheck(L_54);
		float L_56;
		L_56 = Slider_Invoke_mC532D4287E3B5701BA9B350B243EE981B86CA58A(L_54, L_55, _stringLiteralCB9A0310257A87677DC88CAE88E97A78A79B8706, (0.0f), (10.0f), ((int32_t)75), /*hidden argument*/NULL);
		__this->set_fadeOut_9(L_56);
		// GUILayout.Label("--Saved Shake Instance--");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_57;
		L_57 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteralEFDDF27E09A8F5A7709A290BC561AC1F3E82805B, L_57, /*hidden argument*/NULL);
		// GUILayout.Label("You can save shake instances and modify their properties at runtime.");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_58;
		L_58 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteral2C8B43E79B0518A0D4BA52F30B5324943A108B71, L_58, /*hidden argument*/NULL);
		// if (shake == null && GUILayout.Button("Create Shake Instance"))
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_59 = __this->get_shake_12();
		if (L_59)
		{
			goto IL_02b0;
		}
	}
	{
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_60;
		L_60 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_61;
		L_61 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(_stringLiteral2F1886E56B0BE86496BC4003E63677AEC1139CC9, L_60, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_02b0;
		}
	}
	{
		// shake = CameraShaker.Instance.StartShake(magn, rough, fadeIn);
		IL2CPP_RUNTIME_CLASS_INIT(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var);
		CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * L_62 = ((CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_StaticFields*)il2cpp_codegen_static_fields_for(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var))->get_Instance_4();
		float L_63 = __this->get_magn_6();
		float L_64 = __this->get_rough_7();
		float L_65 = __this->get_fadeIn_8();
		NullCheck(L_62);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_66;
		L_66 = CameraShaker_StartShake_m82B19390FF7D3415FF88F89F3E7B8D3F4C1E4493(L_62, L_63, L_64, L_65, /*hidden argument*/NULL);
		__this->set_shake_12(L_66);
		// shake.DeleteOnInactive = false;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_67 = __this->get_shake_12();
		NullCheck(L_67);
		L_67->set_DeleteOnInactive_4((bool)0);
	}

IL_02b0:
	{
		// if (shake != null)
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_68 = __this->get_shake_12();
		if (!L_68)
		{
			goto IL_03b5;
		}
	}
	{
		// if (GUILayout.Button("Delete Shake Instance"))
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_69;
		L_69 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_70;
		L_70 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(_stringLiteral72D5DBE442E9194F36F705166F7B27EFAF3F0237, L_69, /*hidden argument*/NULL);
		if (!L_70)
		{
			goto IL_02f0;
		}
	}
	{
		// shake.DeleteOnInactive = true;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_71 = __this->get_shake_12();
		NullCheck(L_71);
		L_71->set_DeleteOnInactive_4((bool)1);
		// shake.StartFadeOut(fadeOut);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_72 = __this->get_shake_12();
		float L_73 = __this->get_fadeOut_9();
		NullCheck(L_72);
		CameraShakeInstance_StartFadeOut_m13E1EC8DEBD7794DA25A4C02111C3C6FD3C2BFF9(L_72, L_73, /*hidden argument*/NULL);
		// shake = null;
		__this->set_shake_12((CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 *)NULL);
	}

IL_02f0:
	{
		// if (shake != null)
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_74 = __this->get_shake_12();
		if (!L_74)
		{
			goto IL_03b5;
		}
	}
	{
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_75;
		L_75 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m217AAF9BF30836EA73B22FF47B817F6F430E3661(L_75, /*hidden argument*/NULL);
		// if (GUILayout.Button("Fade Out"))
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_76;
		L_76 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_77;
		L_77 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(_stringLiteral0352CE8D64F9719150DB5FB895B7666408131AAC, L_76, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_0327;
		}
	}
	{
		// shake.StartFadeOut(fadeOut);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_78 = __this->get_shake_12();
		float L_79 = __this->get_fadeOut_9();
		NullCheck(L_78);
		CameraShakeInstance_StartFadeOut_m13E1EC8DEBD7794DA25A4C02111C3C6FD3C2BFF9(L_78, L_79, /*hidden argument*/NULL);
	}

IL_0327:
	{
		// if (GUILayout.Button("Fade In"))
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_80;
		L_80 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_81;
		L_81 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(_stringLiteral6B1F6209AFC46D0B0BEF706304CC65145367EEC8, L_80, /*hidden argument*/NULL);
		if (!L_81)
		{
			goto IL_0349;
		}
	}
	{
		// shake.StartFadeIn(fadeIn);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_82 = __this->get_shake_12();
		float L_83 = __this->get_fadeIn_8();
		NullCheck(L_82);
		CameraShakeInstance_StartFadeIn_m97E75A3804298FE3A791E3DE080EDADF8B1CE72B(L_82, L_83, /*hidden argument*/NULL);
	}

IL_0349:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946(/*hidden argument*/NULL);
		// modValues = GUILayout.Toggle(modValues, "Modify Instance Values");
		bool L_84 = __this->get_modValues_10();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_85;
		L_85 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_86;
		L_86 = GUILayout_Toggle_m5388FD56AEAB5F72BCA655760BD157DC1ABB63BB(L_84, _stringLiteralDDF611DB0A704ACE16572058A52326F1D94303BD, L_85, /*hidden argument*/NULL);
		__this->set_modValues_10(L_86);
		// if (modValues)
		bool L_87 = __this->get_modValues_10();
		if (!L_87)
		{
			goto IL_03b5;
		}
	}
	{
		// shake.ScaleMagnitude = magn;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_88 = __this->get_shake_12();
		float L_89 = __this->get_magn_6();
		NullCheck(L_88);
		CameraShakeInstance_set_ScaleMagnitude_m985D975622853802C64CE84AB94B494C2826F564_inline(L_88, L_89, /*hidden argument*/NULL);
		// shake.ScaleRoughness = rough;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_90 = __this->get_shake_12();
		float L_91 = __this->get_rough_7();
		NullCheck(L_90);
		CameraShakeInstance_set_ScaleRoughness_mE0B00DAA1B66361026C8B6056D161E3E1B97C6AE_inline(L_90, L_91, /*hidden argument*/NULL);
		// shake.PositionInfluence = posInf;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_92 = __this->get_shake_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93 = __this->get_posInf_4();
		NullCheck(L_92);
		L_92->set_PositionInfluence_2(L_93);
		// shake.RotationInfluence = rotInf;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_94 = __this->get_shake_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95 = __this->get_rotInf_5();
		NullCheck(L_94);
		L_94->set_RotationInfluence_3(L_95);
	}

IL_03b5:
	{
		// GUILayout.Label("--Shake Once--");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_96;
		L_96 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteralB7970E0429A83BD1EB36417A6DBFB411CA5525A1, L_96, /*hidden argument*/NULL);
		// GUILayout.Label("You can simply have a shake that automatically starts and stops too.");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_97;
		L_97 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteral818B9FD18205A6A6D4F06727ADFA72469D697FCA, L_97, /*hidden argument*/NULL);
		// if (GUILayout.Button("Shake!"))
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_98;
		L_98 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_99;
		L_99 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(_stringLiteral223A27883BAC4DCD84AA7DE394FB5E37B2502995, L_98, /*hidden argument*/NULL);
		if (!L_99)
		{
			goto IL_041d;
		}
	}
	{
		// CameraShakeInstance c = CameraShaker.Instance.ShakeOnce(magn, rough, fadeIn, fadeOut);
		IL2CPP_RUNTIME_CLASS_INIT(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var);
		CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * L_100 = ((CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_StaticFields*)il2cpp_codegen_static_fields_for(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var))->get_Instance_4();
		float L_101 = __this->get_magn_6();
		float L_102 = __this->get_rough_7();
		float L_103 = __this->get_fadeIn_8();
		float L_104 = __this->get_fadeOut_9();
		NullCheck(L_100);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_105;
		L_105 = CameraShaker_ShakeOnce_mCE96B0D14EAABE9B0759D6E3E308F74AD95B2B01(L_100, L_101, L_102, L_103, L_104, /*hidden argument*/NULL);
		// c.PositionInfluence = posInf;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_106 = L_105;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107 = __this->get_posInf_4();
		NullCheck(L_106);
		L_106->set_PositionInfluence_2(L_107);
		// c.RotationInfluence = rotInf;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_108 = __this->get_rotInf_5();
		NullCheck(L_106);
		L_106->set_RotationInfluence_3(L_108);
	}

IL_041d:
	{
		// GUILayout.EndArea();
		GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151(/*hidden argument*/NULL);
		// if (!showList)
		bool L_109 = __this->get_showList_11();
		if (L_109)
		{
			goto IL_0432;
		}
	}
	{
		// height = 120;
		V_1 = (120.0f);
		goto IL_044f;
	}

IL_0432:
	{
		// height = 120 + CameraShaker.Instance.ShakeInstances.Count * 130f;
		IL2CPP_RUNTIME_CLASS_INIT(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var);
		CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * L_110 = ((CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_StaticFields*)il2cpp_codegen_static_fields_for(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_110);
		List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * L_111;
		L_111 = CameraShaker_get_ShakeInstances_m784F774A70C3EDB17EC506A822999E39562ABF7A(L_110, /*hidden argument*/NULL);
		NullCheck(L_111);
		int32_t L_112;
		L_112 = List_1_get_Count_mD01FF37F6E23E38B1FA9EE611DF26E33E8F9A815_inline(L_111, /*hidden argument*/List_1_get_Count_mD01FF37F6E23E38B1FA9EE611DF26E33E8F9A815_RuntimeMethod_var);
		V_1 = ((float)il2cpp_codegen_add((float)(120.0f), (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_112)), (float)(130.0f)))));
	}

IL_044f:
	{
		// GUI.Box(new Rect(Screen.width - 310, 10, 300, height), "Shake Instance List");
		int32_t L_113;
		L_113 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		float L_114 = V_1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_115;
		memset((&L_115), 0, sizeof(L_115));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_115), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_113, (int32_t)((int32_t)310))))), (10.0f), (300.0f), L_114, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Box_mA4BA00A35EAEA960B5F645B66F95DA0C59CB09D9(L_115, _stringLiteralA8C8A40F3DCEED59DB2F1694F22C2380819C761B, /*hidden argument*/NULL);
		// GUILayout.BeginArea(new Rect(Screen.width - 285, 40, 255, Screen.height - 40));
		int32_t L_116;
		L_116 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_117;
		L_117 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_118;
		memset((&L_118), 0, sizeof(L_118));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_118), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_116, (int32_t)((int32_t)285))))), (40.0f), (255.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_117, (int32_t)((int32_t)40))))), /*hidden argument*/NULL);
		GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0(L_118, /*hidden argument*/NULL);
		// GUILayout.Label("All shake instances are saved and stacked as long as they are active.");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_119;
		L_119 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteralCEC979DB49C578BB006779B58C8F783C758562BB, L_119, /*hidden argument*/NULL);
		// showList = GUILayout.Toggle(showList, "Show List");
		bool L_120 = __this->get_showList_11();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_121;
		L_121 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_122;
		L_122 = GUILayout_Toggle_m5388FD56AEAB5F72BCA655760BD157DC1ABB63BB(L_120, _stringLiteral4060F0FB96C0F2AF00DED589F16E2EF2E0F4A60D, L_121, /*hidden argument*/NULL);
		__this->set_showList_11(L_122);
		// if (showList)
		bool L_123 = __this->get_showList_11();
		if (!L_123)
		{
			goto IL_0604;
		}
	}
	{
		// int index = 1;
		V_3 = 1;
		// foreach (CameraShakeInstance c in CameraShaker.Instance.ShakeInstances)
		IL2CPP_RUNTIME_CLASS_INIT(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var);
		CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * L_124 = ((CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_StaticFields*)il2cpp_codegen_static_fields_for(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_124);
		List_1_tCC7FEFF55640680ECA8165ED9D3803C90FED4B9E * L_125;
		L_125 = CameraShaker_get_ShakeInstances_m784F774A70C3EDB17EC506A822999E39562ABF7A(L_124, /*hidden argument*/NULL);
		NullCheck(L_125);
		Enumerator_tBC07D4EED300FF8ABD471FEA162850350C482176  L_126;
		L_126 = List_1_GetEnumerator_mF9EC113241EA378F89BB0D50D5059E1A27375B7E(L_125, /*hidden argument*/List_1_GetEnumerator_mF9EC113241EA378F89BB0D50D5059E1A27375B7E_RuntimeMethod_var);
		V_4 = L_126;
	}

IL_04e6:
	try
	{ // begin try (depth: 1)
		{
			goto IL_05e8;
		}

IL_04eb:
		{
			// foreach (CameraShakeInstance c in CameraShaker.Instance.ShakeInstances)
			CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_127;
			L_127 = Enumerator_get_Current_m8508B66302BD200C5BFAADF15B324199B414FF1B_inline((Enumerator_tBC07D4EED300FF8ABD471FEA162850350C482176 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m8508B66302BD200C5BFAADF15B324199B414FF1B_RuntimeMethod_var);
			V_5 = L_127;
			// string state = c.CurrentState.ToString();
			CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_128 = V_5;
			NullCheck(L_128);
			int32_t L_129;
			L_129 = CameraShakeInstance_get_CurrentState_m9A2E29B66972E9EFABDD4A29CE51FFEA7F903186(L_128, /*hidden argument*/NULL);
			V_7 = L_129;
			RuntimeObject * L_130 = Box(CameraShakeState_t66A406C932C029BD7B8E8781E0F80F73C669A400_il2cpp_TypeInfo_var, (&V_7));
			NullCheck(L_130);
			String_t* L_131;
			L_131 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_130);
			V_7 = *(int32_t*)UnBox(L_130);
			V_6 = L_131;
			// GUILayout.Label("#" + index + ": Magnitude: " + c.Magnitude.ToString("F2") + ", Roughness: " + c.Roughness.ToString("F2"));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_132 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_133 = L_132;
			NullCheck(L_133);
			ArrayElementTypeCheck (L_133, _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
			(L_133)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_134 = L_133;
			String_t* L_135;
			L_135 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_3), /*hidden argument*/NULL);
			NullCheck(L_134);
			ArrayElementTypeCheck (L_134, L_135);
			(L_134)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_135);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_136 = L_134;
			NullCheck(L_136);
			ArrayElementTypeCheck (L_136, _stringLiteral081FC2571D6732CA892CE45DE7C64E96CFCABA7F);
			(L_136)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral081FC2571D6732CA892CE45DE7C64E96CFCABA7F);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_137 = L_136;
			CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_138 = V_5;
			NullCheck(L_138);
			float* L_139 = L_138->get_address_of_Magnitude_0();
			String_t* L_140;
			L_140 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_139, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, /*hidden argument*/NULL);
			NullCheck(L_137);
			ArrayElementTypeCheck (L_137, L_140);
			(L_137)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_140);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_141 = L_137;
			NullCheck(L_141);
			ArrayElementTypeCheck (L_141, _stringLiteral96CA915FA62159B51FF38C0E5BCD3A94F9A47528);
			(L_141)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral96CA915FA62159B51FF38C0E5BCD3A94F9A47528);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_142 = L_141;
			CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_143 = V_5;
			NullCheck(L_143);
			float* L_144 = L_143->get_address_of_Roughness_1();
			String_t* L_145;
			L_145 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_144, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, /*hidden argument*/NULL);
			NullCheck(L_142);
			ArrayElementTypeCheck (L_142, L_145);
			(L_142)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_145);
			String_t* L_146;
			L_146 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_142, /*hidden argument*/NULL);
			GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_147;
			L_147 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
			GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_146, L_147, /*hidden argument*/NULL);
			// GUILayout.Label("      Position Influence: " + c.PositionInfluence);
			CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_148 = V_5;
			NullCheck(L_148);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_149 = L_148->get_PositionInfluence_2();
			V_8 = L_149;
			String_t* L_150;
			L_150 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_8), /*hidden argument*/NULL);
			String_t* L_151;
			L_151 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1DA272BABB7385BBD034A0D48900222D3C40101D, L_150, /*hidden argument*/NULL);
			GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_152;
			L_152 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
			GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_151, L_152, /*hidden argument*/NULL);
			// GUILayout.Label("      Rotation Influence: " + c.RotationInfluence);
			CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_153 = V_5;
			NullCheck(L_153);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_154 = L_153->get_RotationInfluence_3();
			V_8 = L_154;
			String_t* L_155;
			L_155 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_8), /*hidden argument*/NULL);
			String_t* L_156;
			L_156 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral78E40C15ED5411DC388506A0803FD7C35BE5032F, L_155, /*hidden argument*/NULL);
			GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_157;
			L_157 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
			GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_156, L_157, /*hidden argument*/NULL);
			// GUILayout.Label("      State: " + state);
			String_t* L_158 = V_6;
			String_t* L_159;
			L_159 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEB36B3027434601A552FC457DE65FB77F6F4D766, L_158, /*hidden argument*/NULL);
			GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_160;
			L_160 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
			GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_159, L_160, /*hidden argument*/NULL);
			// GUILayout.Label("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
			GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_161;
			L_161 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
			GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteralA7B55367222587EF826DD892F368FEAE544E081C, L_161, /*hidden argument*/NULL);
			// index++;
			int32_t L_162 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_162, (int32_t)1));
		}

IL_05e8:
		{
			// foreach (CameraShakeInstance c in CameraShaker.Instance.ShakeInstances)
			bool L_163;
			L_163 = Enumerator_MoveNext_mDEBE892CB4963254B9688C8B5D64D89B9032000C((Enumerator_tBC07D4EED300FF8ABD471FEA162850350C482176 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mDEBE892CB4963254B9688C8B5D64D89B9032000C_RuntimeMethod_var);
			if (L_163)
			{
				goto IL_04eb;
			}
		}

IL_05f4:
		{
			IL2CPP_LEAVE(0x604, FINALLY_05f6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_05f6;
	}

FINALLY_05f6:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD3BE8059031D9C7A0F118C37D2EAD726603C510B((Enumerator_tBC07D4EED300FF8ABD471FEA162850350C482176 *)(&V_4), /*hidden argument*/Enumerator_Dispose_mD3BE8059031D9C7A0F118C37D2EAD726603C510B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(1526)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1526)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x604, IL_0604)
	}

IL_0604:
	{
		// GUILayout.EndArea();
		GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShakeDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeDemo__ctor_mA06E6D902897828DF14D3DE598F31005BB9876F2 (ShakeDemo_t7E6501DA3EFC607FDD21FAF56E2571579CE26FFA * __this, const RuntimeMethod* method)
{
	{
		// Vector3 posInf = new Vector3(0.25f, 0.25f, 0.25f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.25f), (0.25f), (0.25f), /*hidden argument*/NULL);
		__this->set_posInf_4(L_0);
		// Vector3 rotInf = new Vector3(1, 1, 1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_rotInf_5(L_1);
		// float magn = 1, rough = 1, fadeIn = 0.1f, fadeOut = 2f;
		__this->set_magn_6((1.0f));
		// float magn = 1, rough = 1, fadeIn = 0.1f, fadeOut = 2f;
		__this->set_rough_7((1.0f));
		// float magn = 1, rough = 1, fadeIn = 0.1f, fadeOut = 2f;
		__this->set_fadeIn_8((0.100000001f));
		// float magn = 1, rough = 1, fadeIn = 0.1f, fadeOut = 2f;
		__this->set_fadeOut_9((2.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ShakeOnKeyPress::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeOnKeyPress_Update_m2810E6594F4737C9C6EC9CE53D4EA91686808B73 (ShakeOnKeyPress_tA01A4E437C08A53200997CBDC693DE691CCDAB11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetKeyDown(KeyCode.LeftShift))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)304), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// CameraShaker.Instance.ShakeOnce(Magnitude, Roughness, 0, FadeOutTime);
		IL2CPP_RUNTIME_CLASS_INIT(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var);
		CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * L_1 = ((CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_StaticFields*)il2cpp_codegen_static_fields_for(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var))->get_Instance_4();
		float L_2 = __this->get_Magnitude_4();
		float L_3 = __this->get_Roughness_5();
		float L_4 = __this->get_FadeOutTime_6();
		NullCheck(L_1);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_5;
		L_5 = CameraShaker_ShakeOnce_mCE96B0D14EAABE9B0759D6E3E308F74AD95B2B01(L_1, L_2, L_3, (0.0f), L_4, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void ShakeOnKeyPress::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeOnKeyPress__ctor_m31A053217972AD5F157F71E2666B9E0A5F28D4F1 (ShakeOnKeyPress_tA01A4E437C08A53200997CBDC693DE691CCDAB11 * __this, const RuntimeMethod* method)
{
	{
		// public float Magnitude = 2f;
		__this->set_Magnitude_4((2.0f));
		// public float Roughness = 10f;
		__this->set_Roughness_5((10.0f));
		// public float FadeOutTime = 5f;
		__this->set_FadeOutTime_6((5.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ShakeOnTrigger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeOnTrigger_Start_m354D6AE6B2CC0133807DA926F3E4A8B689BAED2C (ShakeOnTrigger_tA7DA0AADE86CC5654771BA07FDB52D18398800BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _shakeInstance = CameraShaker.Instance.StartShake(2, 15, 2);
		IL2CPP_RUNTIME_CLASS_INIT(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var);
		CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333 * L_0 = ((CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_StaticFields*)il2cpp_codegen_static_fields_for(CameraShaker_t3A0FFFC0236D885BC34FE39D8B87F6D7C43F2333_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_0);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_1;
		L_1 = CameraShaker_StartShake_m82B19390FF7D3415FF88F89F3E7B8D3F4C1E4493(L_0, (2.0f), (15.0f), (2.0f), /*hidden argument*/NULL);
		__this->set__shakeInstance_4(L_1);
		// _shakeInstance.StartFadeOut(0);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_2 = __this->get__shakeInstance_4();
		NullCheck(L_2);
		CameraShakeInstance_StartFadeOut_m13E1EC8DEBD7794DA25A4C02111C3C6FD3C2BFF9(L_2, (0.0f), /*hidden argument*/NULL);
		// _shakeInstance.DeleteOnInactive = true;
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_3 = __this->get__shakeInstance_4();
		NullCheck(L_3);
		L_3->set_DeleteOnInactive_4((bool)1);
		// }
		return;
	}
}
// System.Void ShakeOnTrigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeOnTrigger_OnTriggerEnter_mAE7D859F46EE43FB1DFF9B7940425AA3670C3BCD (ShakeOnTrigger_tA7DA0AADE86CC5654771BA07FDB52D18398800BC * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (c.CompareTag("Player"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___c0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// _shakeInstance.StartFadeIn(1);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_2 = __this->get__shakeInstance_4();
		NullCheck(L_2);
		CameraShakeInstance_StartFadeIn_m97E75A3804298FE3A791E3DE080EDADF8B1CE72B(L_2, (1.0f), /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void ShakeOnTrigger::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeOnTrigger_OnTriggerExit_m5CFA5C6B0913C9630435F0482305B855210A286E (ShakeOnTrigger_tA7DA0AADE86CC5654771BA07FDB52D18398800BC * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (c.CompareTag("Player"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___c0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// _shakeInstance.StartFadeOut(3f);
		CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * L_2 = __this->get__shakeInstance_4();
		NullCheck(L_2);
		CameraShakeInstance_StartFadeOut_m13E1EC8DEBD7794DA25A4C02111C3C6FD3C2BFF9(L_2, (3.0f), /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void ShakeOnTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeOnTrigger__ctor_m9F558DC7D3CC1D602C31D61E3AC1B15772E7058B (ShakeOnTrigger_tA7DA0AADE86CC5654771BA07FDB52D18398800BC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Spawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_Start_m61D97BD980BD1B1877634A1E7626E47418D5D6D8 (Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(create());
		RuntimeObject* L_0;
		L_0 = Spawner_create_m1BC20A6FB6D046A479A5A3556CDC991327D8B01B(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Spawner::create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Spawner_create_m1BC20A6FB6D046A479A5A3556CDC991327D8B01B (Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CcreateU3Ed__2_t2A7269DA4D4C022A6941BF4B5A4DDA5D44329035_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CcreateU3Ed__2_t2A7269DA4D4C022A6941BF4B5A4DDA5D44329035 * L_0 = (U3CcreateU3Ed__2_t2A7269DA4D4C022A6941BF4B5A4DDA5D44329035 *)il2cpp_codegen_object_new(U3CcreateU3Ed__2_t2A7269DA4D4C022A6941BF4B5A4DDA5D44329035_il2cpp_TypeInfo_var);
		U3CcreateU3Ed__2__ctor_m783C55C955E9CDE586C2DD4FBD289F927B7D3B5F(L_0, 0, /*hidden argument*/NULL);
		U3CcreateU3Ed__2_t2A7269DA4D4C022A6941BF4B5A4DDA5D44329035 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Spawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner__ctor_m08E8D40AAA40F4329D8A95EEE2B2B6BE842CEB9C (Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TubeScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeScript_OnTriggerEnter2D_mFF4565CE92007F638C6F229FAEB08F52941E21C1 (TubeScript_tB0AB73169771A424282FCC5BADBC645D039F215C * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7_m60EEE41BD6F7406B81103E30BAEE044B808E5EF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.tag =="Ball")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		// GameObject.FindGameObjectWithTag("Ball").GetComponent<BallMoving>().stopUpAndDown();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		NullCheck(L_3);
		BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * L_4;
		L_4 = GameObject_GetComponent_TisBallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7_m60EEE41BD6F7406B81103E30BAEE044B808E5EF7(L_3, /*hidden argument*/GameObject_GetComponent_TisBallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7_m60EEE41BD6F7406B81103E30BAEE044B808E5EF7_RuntimeMethod_var);
		NullCheck(L_4);
		BallMoving_stopUpAndDown_m93504C39BD66A0CFF63A996C97F1F60F6D1A64BD(L_4, /*hidden argument*/NULL);
		// GameObject.FindGameObjectWithTag("Ball").GetComponent<BallMoving>().stopMoving();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		NullCheck(L_5);
		BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * L_6;
		L_6 = GameObject_GetComponent_TisBallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7_m60EEE41BD6F7406B81103E30BAEE044B808E5EF7(L_5, /*hidden argument*/GameObject_GetComponent_TisBallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7_m60EEE41BD6F7406B81103E30BAEE044B808E5EF7_RuntimeMethod_var);
		NullCheck(L_6);
		BallMoving_stopMoving_m16B62407CF8AC13472E747E87EA330430FE2902F(L_6, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void TubeScript::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeScript_OnTriggerExit2D_m52DB9F991635D84A1CA1C7C3BFE288AAECEA5F82 (TubeScript_tB0AB73169771A424282FCC5BADBC645D039F215C * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7_m60EEE41BD6F7406B81103E30BAEE044B808E5EF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.tag == "Ball")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// GameObject.FindGameObjectWithTag("Ball").GetComponent<BallMoving>().startMoving();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		NullCheck(L_3);
		BallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7 * L_4;
		L_4 = GameObject_GetComponent_TisBallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7_m60EEE41BD6F7406B81103E30BAEE044B808E5EF7(L_3, /*hidden argument*/GameObject_GetComponent_TisBallMoving_tFC25633003B835AF9058E26361880B0D3FA347C7_m60EEE41BD6F7406B81103E30BAEE044B808E5EF7_RuntimeMethod_var);
		NullCheck(L_4);
		BallMoving_startMoving_m7FD1417D51A3A44D73187A86786E4EA5AC008975(L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void TubeScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeScript__ctor_m81888DB64B9509B0FA29815CEDB6574F67D0AD87 (TubeScript_tB0AB73169771A424282FCC5BADBC645D039F215C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ShakeDemo/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAD29821F64D8BBFA81498BD6134BC17C5100BD3C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538 * L_0 = (U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538 *)il2cpp_codegen_object_new(U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA1A81A31C356829CC9B938DE03C48F553D04A468(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ShakeDemo/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA1A81A31C356829CC9B938DE03C48F553D04A468 (U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single ShakeDemo/<>c::<OnGUI>b__10_0(System.Single,System.String,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3COnGUIU3Eb__10_0_m28D6C68537B0DE1103C2901D40E8D4A2E9E4BCFF (U3CU3Ec_tEAA08E50C4E4BDFA7430A1262BCA46FCFE85D538 * __this, float ___val0, String_t* ___prefix1, float ___min2, float ___max3, int32_t ___pad4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_0;
		L_0 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m217AAF9BF30836EA73B22FF47B817F6F430E3661(L_0, /*hidden argument*/NULL);
		// GUILayout.Label(prefix, GUILayout.MaxWidth(pad));
		String_t* L_1 = ___prefix1;
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_2 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_3 = L_2;
		int32_t L_4 = ___pad4;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_5;
		L_5 = GUILayout_MaxWidth_mE6C754AB0A4366AB7E0BECE6D85A254CA7E553FB(((float)((float)L_4)), /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_5);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_1, L_3, /*hidden argument*/NULL);
		// val = GUILayout.HorizontalSlider(val, min, max);
		float L_6 = ___val0;
		float L_7 = ___min2;
		float L_8 = ___max3;
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_9;
		L_9 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		float L_10;
		L_10 = GUILayout_HorizontalSlider_m03D4AF69A1F1EA05236AB10FAD393580F2A3DC3D(L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		___val0 = L_10;
		// GUILayout.Label(val.ToString("F2"), GUILayout.MaxWidth(50));
		String_t* L_11;
		L_11 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&___val0), _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_12 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_13 = L_12;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_14;
		L_14 = GUILayout_MaxWidth_mE6C754AB0A4366AB7E0BECE6D85A254CA7E553FB((50.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_14);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_11, L_13, /*hidden argument*/NULL);
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946(/*hidden argument*/NULL);
		// return val;
		float L_15 = ___val0;
		return L_15;
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
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper_Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD (Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * __this, float ___val0, String_t* ___prefix1, float ___min2, float ___max3, int32_t ___pad4, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(float, char*, float, float, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___prefix1' to native representation
	char* ____prefix1_marshaled = NULL;
	____prefix1_marshaled = il2cpp_codegen_marshal_string(___prefix1);

	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___val0, ____prefix1_marshaled, ___min2, ___max3, ___pad4);

	// Marshaling cleanup of parameter '___prefix1' native representation
	il2cpp_codegen_marshal_free(____prefix1_marshaled);
	____prefix1_marshaled = NULL;

	return returnValue;
}
// System.Void ShakeDemo/Slider::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider__ctor_m64DF033114E2228ABDF675845B4F1DFCB44FA0C9 (Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Single ShakeDemo/Slider::Invoke(System.Single,System.String,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Slider_Invoke_mC532D4287E3B5701BA9B350B243EE981B86CA58A (Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * __this, float ___val0, String_t* ___prefix1, float ___min2, float ___max3, int32_t ___pad4, const RuntimeMethod* method)
{
	float result = 0.0f;
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
				typedef float (*FunctionPointerType) (float, String_t*, float, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___val0, ___prefix1, ___min2, ___max3, ___pad4, targetMethod);
			}
			else
			{
				// closed
				typedef float (*FunctionPointerType) (void*, float, String_t*, float, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___val0, ___prefix1, ___min2, ___max3, ___pad4, targetMethod);
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
						result = GenericInterfaceFuncInvoker5< float, float, String_t*, float, float, int32_t >::Invoke(targetMethod, targetThis, ___val0, ___prefix1, ___min2, ___max3, ___pad4);
					else
						result = GenericVirtFuncInvoker5< float, float, String_t*, float, float, int32_t >::Invoke(targetMethod, targetThis, ___val0, ___prefix1, ___min2, ___max3, ___pad4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< float, float, String_t*, float, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___val0, ___prefix1, ___min2, ___max3, ___pad4);
					else
						result = VirtFuncInvoker5< float, float, String_t*, float, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___val0, ___prefix1, ___min2, ___max3, ___pad4);
				}
			}
			else
			{
				typedef float (*FunctionPointerType) (void*, float, String_t*, float, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___val0, ___prefix1, ___min2, ___max3, ___pad4, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult ShakeDemo/Slider::BeginInvoke(System.Single,System.String,System.Single,System.Single,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Slider_BeginInvoke_mD74E0222F62EAF4A34067AD455FBC4366D64B746 (Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * __this, float ___val0, String_t* ___prefix1, float ___min2, float ___max3, int32_t ___pad4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___val0);
	__d_args[1] = ___prefix1;
	__d_args[2] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___min2);
	__d_args[3] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___max3);
	__d_args[4] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___pad4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Single ShakeDemo/Slider::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Slider_EndInvoke_mF7F9AD16802C8D8177B3BF14C5F24085E107F484 (Slider_tAC68E23D475DC0110ABB9AA8C08B733185DDB3FD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spawner/<create>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcreateU3Ed__2__ctor_m783C55C955E9CDE586C2DD4FBD289F927B7D3B5F (U3CcreateU3Ed__2_t2A7269DA4D4C022A6941BF4B5A4DDA5D44329035 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Spawner/<create>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcreateU3Ed__2_System_IDisposable_Dispose_mD55D983F7F87BDB7569017B84D827264D50E6C5D (U3CcreateU3Ed__2_t2A7269DA4D4C022A6941BF4B5A4DDA5D44329035 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Spawner/<create>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CcreateU3Ed__2_MoveNext_m926D9D7C58EA7102EE0ED61BF3926F05919AEC52 (U3CcreateU3Ed__2_t2A7269DA4D4C022A6941BF4B5A4DDA5D44329035 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(Random.Range(1, 4));
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 4, /*hidden argument*/NULL);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, ((float)((float)L_4)), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int i = Random.Range(0, 2);
		int32_t L_6;
		L_6 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 2, /*hidden argument*/NULL);
		V_2 = L_6;
		// Instantiate(elements[i], transform.position, Quaternion.identity);
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_7 = V_1;
		NullCheck(L_7);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = L_7->get_elements_4();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_12 = V_1;
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_11, L_14, L_15, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// StartCoroutine(create());
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_17 = V_1;
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_18 = V_1;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = Spawner_create_m1BC20A6FB6D046A479A5A3556CDC991327D8B01B(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_20;
		L_20 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_17, L_19, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Spawner/<create>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CcreateU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m92C119FCC9900AF9910143CA1127B1B27487F9BA (U3CcreateU3Ed__2_t2A7269DA4D4C022A6941BF4B5A4DDA5D44329035 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Spawner/<create>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcreateU3Ed__2_System_Collections_IEnumerator_Reset_m2DE46BCBC95F027797F47ECCAE012BB8BD9D843F (U3CcreateU3Ed__2_t2A7269DA4D4C022A6941BF4B5A4DDA5D44329035 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CcreateU3Ed__2_System_Collections_IEnumerator_Reset_m2DE46BCBC95F027797F47ECCAE012BB8BD9D843F_RuntimeMethod_var)));
	}
}
// System.Object Spawner/<create>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CcreateU3Ed__2_System_Collections_IEnumerator_get_Current_m642E039A832D011AEBBE74ED0B153CD11BBE074C (U3CcreateU3Ed__2_t2A7269DA4D4C022A6941BF4B5A4DDA5D44329035 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Score_getHighScore_m694CF366370DBBF9324D24258D5D349C0B830B96_inline (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method)
{
	{
		// return currentScore;
		float L_0 = __this->get_currentScore_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraShakeInstance_set_ScaleMagnitude_m985D975622853802C64CE84AB94B494C2826F564_inline (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { magnMod = value; }
		float L_0 = ___value0;
		__this->set_magnMod_6(L_0);
		// set { magnMod = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraShakeInstance_set_ScaleRoughness_mE0B00DAA1B66361026C8B6056D161E3E1B97C6AE_inline (CameraShakeInstance_t8100906BB903D87405F67502615F42FEBFE4A160 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { roughMod = value; }
		float L_0 = ___value0;
		__this->set_roughMod_5(L_0);
		// set { roughMod = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
