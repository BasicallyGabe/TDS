#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<TDSTK.Unit>
struct IEnumerable_1_t8A8D2E3F200B4A6A8162171E157F555A0D488C84;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<TDSTK.Effect>
struct List_1_t67C1269B9C12E9FFF3CA7A2E190A9AC1D672EB70;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<TDSTK.Perk>
struct List_1_tE649F11D3909FE91F6DEDADB77B7AFFC51F7727B;
// System.Collections.Generic.List`1<TDSTK.SubWave>
struct List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5;
// System.Collections.Generic.List`1<TDSTK.TDSArea>
struct List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<TDSTK.Unit>
struct List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503;
// System.Collections.Generic.List`1<TDSTK.Wave>
struct List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449;
// System.Collections.Generic.List`1<TDSTK.Weapon>
struct List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315;
// System.Collections.Generic.List`1<TDSTK.PlayerPerk/AbilityStatMultiplier>
struct List_1_tFDD4567762703C803814BA28E0F1EEC28472FF52;
// System.Collections.Generic.List`1<TDSTK.PlayerPerk/WeaponStatMultiplier>
struct List_1_t5C25EF01A1AB7DEAAA54C8A9587A4A90DC7D9BED;
// System.Collections.Generic.List`1<TDSTK.Unit/DestroyCallback>
struct List_1_t62C717C483662B3D42C6D7079F421BF984EBA2CA;
// System.Collections.Generic.List`1<TDSTK.Weapon/FireCallback>
struct List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TDSTK.SubWave[]
struct SubWaveU5BU5D_t1A6F255C9599B2B87C02F03B78D735391CD7CD95;
// TDSTK.TDSArea[]
struct TDSAreaU5BU5D_t55AC04F6F7FCA374655D22BE0F1ADDB072F54070;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// TDSTK.Unit[]
struct UnitU5BU5D_t3FCA674CB453BB8F13B31D5B34D57DE6C96B93B3;
// TDSTK.Wave[]
struct WaveU5BU5D_tA0135BE3B1E4F3583569C1BE54BA120465C24816;
// TDSTK.Weapon[]
struct WeaponU5BU5D_t89013A972A36262A311A8255EA167377D6DDFCA2;
// TDSTK.Weapon/FireCallback[]
struct FireCallbackU5BU5D_tF9987F7D2947D385F1BEEB005E3C5B81C4A08B4C;
// TDSTK.Ability
struct Ability_t16A59DB906BC6E3C6E8F6641165B52AA1D738927;
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// TDSTK.AttackInstance
struct AttackInstance_tF5DE0CD786CADF8A4414F8F07F4447A154BA9682;
// TDSTK.AttackStats
struct AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// TDSTK.Effect
struct Effect_tC238E6505E0459AA21520B0623F2AEE2CD7FF4B9;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// TDSTK.PlayerPerk
struct PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3;
// TDSTK.PlayerProgression
struct PlayerProgression_tD6896122CBC1AD0554B2328EF7CE55986FCC03EB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// TDSTK.ShootObject
struct ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TDSTK.SubWave
struct SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB;
// TDSTK.TDSArea
struct TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TDSTK.Unit
struct Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B;
// TDSTK.UnitAI
struct UnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029;
// TDSTK.UnitAnimation
struct UnitAnimation_t1B983CB3533B3A96CCEDB441E048E35E96F3771A;
// TDSTK.UnitPlayer
struct UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215;
// TDSTK.UnitSpawner
struct UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// TDSTK.Wave
struct Wave_t65332B65BB35E2A0A549B5074493644DE6159233;
// TDSTK.Weapon
struct Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// TDSTK.PlayerPerk/AbilityStatMultiplier
struct AbilityStatMultiplier_tA72B012E511930596F24B638DA0A3A1B60E3E43E;
// TDSTK.PlayerPerk/WeaponStatMultiplier
struct WeaponStatMultiplier_t1F2743DB492570BF573BBD1064CFADD692CB2B81;
// TDSTK.ShootObject/AimInfo
struct AimInfo_tA62E8374FF9EAD82BA84AE823D6CFE9B28F0902A;
// TDSTK.Unit/DestroyCallback
struct DestroyCallback_t73143D8A71CE8CAFE3A22439D2EF6DFAA1E0048B;
// TDSTK.UnitPlayer/<ShootRoutine>d__60
struct U3CShootRoutineU3Ed__60_t711A3ED8FDAB58DA80A7908D2F8E07CB46BF85B5;
// TDSTK.UnitPlayer/<TemporaryWeaponTimer>d__41
struct U3CTemporaryWeaponTimerU3Ed__41_t26CE6BCC1A6BE65E4D4801CEF4A99D6C9A04FC71;
// TDSTK.UnitPlayer/<_Dash>d__135
struct U3C_DashU3Ed__135_t3345FA3F735968DE5005206CA89A60773C71192D;
// TDSTK.UnitSpawner/<OverridingHitPointRoutine>d__50
struct U3COverridingHitPointRoutineU3Ed__50_tCC1895F1EEB71BDEEBAD5A8E33804A9D2B770F24;
// TDSTK.UnitSpawner/<SpawnFreeForm>d__47
struct U3CSpawnFreeFormU3Ed__47_tD77592873DD7214CC46E7B46C7A14963D98F9E39;
// TDSTK.UnitSpawner/<SpawnLimitTimerRoutine>d__49
struct U3CSpawnLimitTimerRoutineU3Ed__49_t135813F7125DBB6F562B5F1F399FE96E87C7D61F;
// TDSTK.UnitSpawner/<SpawnSubWave>d__44
struct U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E;
// TDSTK.UnitSpawner/<SpawnWave>d__43
struct U3CSpawnWaveU3Ed__43_tE26381FD24D84D23EBC5CD47D796C4525D9B5656;
// TDSTK.Weapon/<ReloadRoutine>d__40
struct U3CReloadRoutineU3Ed__40_tCFE0588688ACD9641C5F7F0A6C3000F543CA966C;
// TDSTK.Weapon/FireCallback
struct FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC;

IL2CPP_EXTERN_C RuntimeClass* AttackInstance_tF5DE0CD786CADF8A4414F8F07F4447A154BA9682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioManager_tE498B75E6C6D1E531A7C6BFBF7FDEAD605AB9B0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DestroyCallback_t73143D8A71CE8CAFE3A22439D2EF6DFAA1E0048B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Effect_tC238E6505E0459AA21520B0623F2AEE2CD7FF4B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COverridingHitPointRoutineU3Ed__50_tCC1895F1EEB71BDEEBAD5A8E33804A9D2B770F24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReloadRoutineU3Ed__40_tCFE0588688ACD9641C5F7F0A6C3000F543CA966C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnFreeFormU3Ed__47_tD77592873DD7214CC46E7B46C7A14963D98F9E39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnLimitTimerRoutineU3Ed__49_t135813F7125DBB6F562B5F1F399FE96E87C7D61F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnWaveU3Ed__43_tE26381FD24D84D23EBC5CD47D796C4525D9B5656_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnitSpawnerTracker_t3956012F9FA946DFE2AA57A8C5CBA7D345FBFAD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Wave_t65332B65BB35E2A0A549B5074493644DE6159233_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076;
IL2CPP_EXTERN_C String_t* _stringLiteral1BA66642DAAE1D162439F945892B944CC3AE7112;
IL2CPP_EXTERN_C String_t* _stringLiteral2865EB1915452F2950D41BFFE1118FC55D94B6AA;
IL2CPP_EXTERN_C String_t* _stringLiteral2BCEBD18C2DC79D05DA1C5CC1CF92EDA9DFC118D;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral6AA9A9BBFE964CECB50647DA5B9FB7E29EDFAC91;
IL2CPP_EXTERN_C String_t* _stringLiteral6F81523138B0217A2E6AB5163C9451B144606C8E;
IL2CPP_EXTERN_C String_t* _stringLiteral818FB4490EA1A78D9BA71206962E1F3AE3469D70;
IL2CPP_EXTERN_C String_t* _stringLiteral9EBB7C807401ACF2EDF06EEC33277AEF70688AF8;
IL2CPP_EXTERN_C String_t* _stringLiteralA0BD0F9020BFEE7D468DE161096185BAE45AECD8;
IL2CPP_EXTERN_C String_t* _stringLiteralB881BEBBD4CC50D8D9874B06344138D33BF7D36F;
IL2CPP_EXTERN_C String_t* _stringLiteralC12B6904086DE3F1B74F6F2BF1A196D1B6A913C0;
IL2CPP_EXTERN_C String_t* _stringLiteralCC6ACC219413F8E5E3F24200BDC34C6A3C8E5BB6;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE966D359311D146731C61B7CC8E9235F6FBE8F32;
IL2CPP_EXTERN_C String_t* _stringLiteralFDBF05439B6366F0C5522BC8D41C495733A86ED9;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C_mC2E6B97BDA162EDD0A1BB9EA56502C3BD545A30D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05_m50591508D518473D54B5E5155C8BE461AA359AC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029_mB8B44FAE8A381EF96AA4CB7D0693AA7B2B6B73E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m20FB1BFA8A85AA8026124052610DB0A1E7138548_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9B56FCA69D7CF9126307924715FAA659B199ACB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE2EE0AFBF3DBAED3C19306EA2B445B88B948F4F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m19CE75ADD1F0CFD72B2CC2819362CFE36C37E1BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m722E5A7E24C6F7853217A20B61BB798841BD44A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m32DAAC395D1CFF0FA67A268857C6C999BA4B6882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m59E8F3A2D2D6297F07A7C8BF9812545D3E0454F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m839FAABC816FAFDEC32B5270F736E90938BEDBFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD7581AA5E18EE2F72654084B85C8B6AB22034304_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE66BA4DF881E19595251A20BA0B1FB5F6D1B9D70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF03DFC6E86A660ECD1175DE14A893E663974275B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5AC41EF92B89686C206EE7693C51F94FDE3CF155_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m610F3504AA5B2BEB809F8E2E9A658C13E78EA565_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA3E1B6A1F509C442C9EFB5EABC7A6585FDEBA5B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA99D4AC9C67178CEA8EBFD419441FB75B0393CAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE0EB1D4F388BFDF9840E5E2DD984741C39FF4080_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1DC2EDDA2684D3FE9DAB38AA40DC371409C03130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m83332FE97EF978E0EEDEFF62B442F13018B039F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mEB2192FA1C5AA2AD75983DFFA7FF4336FE96AF2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COverridingHitPointRoutineU3Ed__50_System_Collections_IEnumerator_Reset_m496523080ED479850347A5AA268C3CF3A3C01499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReloadRoutineU3Ed__40_System_Collections_IEnumerator_Reset_m365F3CD8EE4343AE8A6EC4FFD108D46940766950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShootRoutineU3Ed__60_System_Collections_IEnumerator_Reset_mD69A89EF83A24B255D35F45178B99F186756061B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnFreeFormU3Ed__47_System_Collections_IEnumerator_Reset_m7C74B2FA0D52DF637D6BE68CEB869913F87A1F3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnLimitTimerRoutineU3Ed__49_System_Collections_IEnumerator_Reset_m88F6A4D8657234F76E0539C5A308F3C99E6579B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnSubWaveU3Ed__44_System_Collections_IEnumerator_Reset_mC48CFC419176745B39A6764FE22ADEB624F8A459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnWaveU3Ed__43_System_Collections_IEnumerator_Reset_m591F08613634F08F93B9178A87111B6507162F14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTemporaryWeaponTimerU3Ed__41_System_Collections_IEnumerator_Reset_mCEFC8382CE253C153A7013080F9030F4A22C6DA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_DashU3Ed__135_System_Collections_IEnumerator_Reset_mC9BA6E3A03541377F0C765F27AEF5CB22B170891_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitSpawner_UnitDestroy_m84FBC7F2056315368C6997B8427B1209480EBA0F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<TDSTK.SubWave>
struct List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SubWaveU5BU5D_t1A6F255C9599B2B87C02F03B78D735391CD7CD95* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<TDSTK.TDSArea>
struct List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TDSAreaU5BU5D_t55AC04F6F7FCA374655D22BE0F1ADDB072F54070* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<TDSTK.Unit>
struct List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UnitU5BU5D_t3FCA674CB453BB8F13B31D5B34D57DE6C96B93B3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<TDSTK.Wave>
struct List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WaveU5BU5D_tA0135BE3B1E4F3583569C1BE54BA120465C24816* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<TDSTK.Weapon>
struct List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WeaponU5BU5D_t89013A972A36262A311A8255EA167377D6DDFCA2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<TDSTK.Weapon/FireCallback>
struct List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FireCallbackU5BU5D_tF9987F7D2947D385F1BEEB005E3C5B81C4A08B4C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// TDSTK.AttackInstance
struct AttackInstance_tF5DE0CD786CADF8A4414F8F07F4447A154BA9682  : public RuntimeObject
{
	// TDSTK.Unit TDSTK.AttackInstance::srcUnit
	Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* ___srcUnit_0;
	// System.Boolean TDSTK.AttackInstance::isAOE
	bool ___isAOE_1;
	// System.Single TDSTK.AttackInstance::aoeDistance
	float ___aoeDistance_2;
	// TDSTK.AttackStats TDSTK.AttackInstance::aStats
	AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* ___aStats_3;
};

// TDSTK.AttackStats
struct AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A  : public RuntimeObject
{
	// System.Int32 TDSTK.AttackStats::damageType
	int32_t ___damageType_0;
	// System.Single TDSTK.AttackStats::damageMin
	float ___damageMin_1;
	// System.Single TDSTK.AttackStats::damageMax
	float ___damageMax_2;
	// System.Single TDSTK.AttackStats::aoeRadius
	float ___aoeRadius_3;
	// System.Boolean TDSTK.AttackStats::diminishingAOE
	bool ___diminishingAOE_4;
	// System.Single TDSTK.AttackStats::critChance
	float ___critChance_5;
	// System.Single TDSTK.AttackStats::critMultiplier
	float ___critMultiplier_6;
	// System.Single TDSTK.AttackStats::impactForce
	float ___impactForce_7;
	// System.Single TDSTK.AttackStats::explosionRadius
	float ___explosionRadius_8;
	// System.Single TDSTK.AttackStats::explosionForce
	float ___explosionForce_9;
	// System.Int32 TDSTK.AttackStats::effectID
	int32_t ___effectID_10;
	// System.Int32 TDSTK.AttackStats::effectIdx
	int32_t ___effectIdx_11;
};

// TDSTK.Item
struct Item_tFEF641AD2E90D359103DB3FA577CA6BCBC3874A3  : public RuntimeObject
{
	// System.Int32 TDSTK.Item::ID
	int32_t ___ID_0;
	// System.String TDSTK.Item::name
	String_t* ___name_1;
	// UnityEngine.Sprite TDSTK.Item::icon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// TDSTK.SubWave
struct SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB  : public RuntimeObject
{
	// System.Int32 TDSTK.SubWave::count
	int32_t ___count_0;
	// TDSTK.Unit TDSTK.SubWave::unitPrefab
	Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* ___unitPrefab_1;
	// System.Single TDSTK.SubWave::startDelay
	float ___startDelay_2;
	// System.Single TDSTK.SubWave::interval
	float ___interval_3;
	// TDSTK.TDSArea TDSTK.SubWave::spawnArea
	TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* ___spawnArea_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// TDSTK.Wave
struct Wave_t65332B65BB35E2A0A549B5074493644DE6159233  : public RuntimeObject
{
	// System.Int32 TDSTK.Wave::waveID
	int32_t ___waveID_0;
	// System.Collections.Generic.List`1<TDSTK.SubWave> TDSTK.Wave::subWaveList
	List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5* ___subWaveList_1;
	// System.Int32 TDSTK.Wave::creditGain
	int32_t ___creditGain_2;
	// System.Int32 TDSTK.Wave::scoreGain
	int32_t ___scoreGain_3;
	// TDSTK.TDSArea TDSTK.Wave::spawnArea
	TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* ___spawnArea_4;
	// System.Int32 TDSTK.Wave::activeUnitCount
	int32_t ___activeUnitCount_5;
	// System.Int32 TDSTK.Wave::subWaveSpawned
	int32_t ___subWaveSpawned_6;
	// System.Boolean TDSTK.Wave::spawned
	bool ___spawned_7;
	// System.Boolean TDSTK.Wave::cleared
	bool ___cleared_8;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// TDSTK.UnitPlayer/<ShootRoutine>d__60
struct U3CShootRoutineU3Ed__60_t711A3ED8FDAB58DA80A7908D2F8E07CB46BF85B5  : public RuntimeObject
{
	// System.Int32 TDSTK.UnitPlayer/<ShootRoutine>d__60::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TDSTK.UnitPlayer/<ShootRoutine>d__60::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TDSTK.UnitPlayer TDSTK.UnitPlayer/<ShootRoutine>d__60::<>4__this
	UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* ___U3CU3E4__this_2;
	// TDSTK.ShootObject/AimInfo TDSTK.UnitPlayer/<ShootRoutine>d__60::aimInfo
	AimInfo_tA62E8374FF9EAD82BA84AE823D6CFE9B28F0902A* ___aimInfo_3;
	// TDSTK.AttackInstance TDSTK.UnitPlayer/<ShootRoutine>d__60::<aInstance>5__2
	AttackInstance_tF5DE0CD786CADF8A4414F8F07F4447A154BA9682* ___U3CaInstanceU3E5__2_4;
	// System.Int32 TDSTK.UnitPlayer/<ShootRoutine>d__60::<weapID>5__3
	int32_t ___U3CweapIDU3E5__3_5;
	// System.Int32 TDSTK.UnitPlayer/<ShootRoutine>d__60::<spread>5__4
	int32_t ___U3CspreadU3E5__4_6;
	// System.Single TDSTK.UnitPlayer/<ShootRoutine>d__60::<startAngle>5__5
	float ___U3CstartAngleU3E5__5_7;
	// System.Single TDSTK.UnitPlayer/<ShootRoutine>d__60::<angleDelta>5__6
	float ___U3CangleDeltaU3E5__6_8;
	// System.Collections.Generic.List`1<UnityEngine.Collider> TDSTK.UnitPlayer/<ShootRoutine>d__60::<soColliderList>5__7
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___U3CsoColliderListU3E5__7_9;
	// System.Int32 TDSTK.UnitPlayer/<ShootRoutine>d__60::<i>5__8
	int32_t ___U3CiU3E5__8_10;
};

// TDSTK.UnitPlayer/<TemporaryWeaponTimer>d__41
struct U3CTemporaryWeaponTimerU3Ed__41_t26CE6BCC1A6BE65E4D4801CEF4A99D6C9A04FC71  : public RuntimeObject
{
	// System.Int32 TDSTK.UnitPlayer/<TemporaryWeaponTimer>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TDSTK.UnitPlayer/<TemporaryWeaponTimer>d__41::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single TDSTK.UnitPlayer/<TemporaryWeaponTimer>d__41::time
	float ___time_2;
	// TDSTK.Weapon TDSTK.UnitPlayer/<TemporaryWeaponTimer>d__41::weapon
	Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* ___weapon_3;
	// TDSTK.UnitPlayer TDSTK.UnitPlayer/<TemporaryWeaponTimer>d__41::<>4__this
	UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* ___U3CU3E4__this_4;
	// TDSTK.Effect TDSTK.UnitPlayer/<TemporaryWeaponTimer>d__41::<effect>5__2
	Effect_tC238E6505E0459AA21520B0623F2AEE2CD7FF4B9* ___U3CeffectU3E5__2_5;
};

// TDSTK.UnitSpawner/<OverridingHitPointRoutine>d__50
struct U3COverridingHitPointRoutineU3Ed__50_tCC1895F1EEB71BDEEBAD5A8E33804A9D2B770F24  : public RuntimeObject
{
	// System.Int32 TDSTK.UnitSpawner/<OverridingHitPointRoutine>d__50::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TDSTK.UnitSpawner/<OverridingHitPointRoutine>d__50::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TDSTK.UnitSpawner TDSTK.UnitSpawner/<OverridingHitPointRoutine>d__50::<>4__this
	UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* ___U3CU3E4__this_2;
};

// TDSTK.UnitSpawner/<SpawnFreeForm>d__47
struct U3CSpawnFreeFormU3Ed__47_tD77592873DD7214CC46E7B46C7A14963D98F9E39  : public RuntimeObject
{
	// System.Int32 TDSTK.UnitSpawner/<SpawnFreeForm>d__47::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TDSTK.UnitSpawner/<SpawnFreeForm>d__47::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TDSTK.UnitSpawner TDSTK.UnitSpawner/<SpawnFreeForm>d__47::<>4__this
	UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* ___U3CU3E4__this_2;
};

// TDSTK.UnitSpawner/<SpawnLimitTimerRoutine>d__49
struct U3CSpawnLimitTimerRoutineU3Ed__49_t135813F7125DBB6F562B5F1F399FE96E87C7D61F  : public RuntimeObject
{
	// System.Int32 TDSTK.UnitSpawner/<SpawnLimitTimerRoutine>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TDSTK.UnitSpawner/<SpawnLimitTimerRoutine>d__49::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TDSTK.UnitSpawner TDSTK.UnitSpawner/<SpawnLimitTimerRoutine>d__49::<>4__this
	UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* ___U3CU3E4__this_2;
};

// TDSTK.UnitSpawner/<SpawnSubWave>d__44
struct U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E  : public RuntimeObject
{
	// System.Int32 TDSTK.UnitSpawner/<SpawnSubWave>d__44::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TDSTK.UnitSpawner/<SpawnSubWave>d__44::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TDSTK.Wave TDSTK.UnitSpawner/<SpawnSubWave>d__44::wave
	Wave_t65332B65BB35E2A0A549B5074493644DE6159233* ___wave_2;
	// System.Int32 TDSTK.UnitSpawner/<SpawnSubWave>d__44::subWaveIdx
	int32_t ___subWaveIdx_3;
	// TDSTK.UnitSpawner TDSTK.UnitSpawner/<SpawnSubWave>d__44::<>4__this
	UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* ___U3CU3E4__this_4;
	// TDSTK.SubWave TDSTK.UnitSpawner/<SpawnSubWave>d__44::<subWave>5__2
	SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* ___U3CsubWaveU3E5__2_5;
	// TDSTK.TDSArea TDSTK.UnitSpawner/<SpawnSubWave>d__44::<sArea>5__3
	TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* ___U3CsAreaU3E5__3_6;
	// System.Int32 TDSTK.UnitSpawner/<SpawnSubWave>d__44::<i>5__4
	int32_t ___U3CiU3E5__4_7;
};

// TDSTK.UnitSpawner/<SpawnWave>d__43
struct U3CSpawnWaveU3Ed__43_tE26381FD24D84D23EBC5CD47D796C4525D9B5656  : public RuntimeObject
{
	// System.Int32 TDSTK.UnitSpawner/<SpawnWave>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TDSTK.UnitSpawner/<SpawnWave>d__43::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single TDSTK.UnitSpawner/<SpawnWave>d__43::delay
	float ___delay_2;
	// TDSTK.UnitSpawner TDSTK.UnitSpawner/<SpawnWave>d__43::<>4__this
	UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* ___U3CU3E4__this_3;
	// TDSTK.Wave TDSTK.UnitSpawner/<SpawnWave>d__43::wave
	Wave_t65332B65BB35E2A0A549B5074493644DE6159233* ___wave_4;
};

// TDSTK.Weapon/<ReloadRoutine>d__40
struct U3CReloadRoutineU3Ed__40_tCFE0588688ACD9641C5F7F0A6C3000F543CA966C  : public RuntimeObject
{
	// System.Int32 TDSTK.Weapon/<ReloadRoutine>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TDSTK.Weapon/<ReloadRoutine>d__40::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TDSTK.Weapon TDSTK.Weapon/<ReloadRoutine>d__40::<>4__this
	Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* ___U3CU3E4__this_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// TDSTK.Effect
struct Effect_tC238E6505E0459AA21520B0623F2AEE2CD7FF4B9  : public Item_tFEF641AD2E90D359103DB3FA577CA6BCBC3874A3
{
	// System.String TDSTK.Effect::desp
	String_t* ___desp_3;
	// System.Boolean TDSTK.Effect::showOnUI
	bool ___showOnUI_4;
	// System.Single TDSTK.Effect::hitChance
	float ___hitChance_5;
	// System.Single TDSTK.Effect::duration
	float ___duration_6;
	// System.Single TDSTK.Effect::restoreHitPoint
	float ___restoreHitPoint_7;
	// System.Single TDSTK.Effect::restoreEnergy
	float ___restoreEnergy_8;
	// System.Single TDSTK.Effect::speedMul
	float ___speedMul_9;
	// System.Boolean TDSTK.Effect::stun
	bool ___stun_10;
	// System.Boolean TDSTK.Effect::invincible
	bool ___invincible_11;
	// System.Single TDSTK.Effect::damageMul
	float ___damageMul_12;
	// System.Single TDSTK.Effect::critChanceMul
	float ___critChanceMul_13;
	// System.Single TDSTK.Effect::critMultiplierMul
	float ___critMultiplierMul_14;
	// System.Boolean TDSTK.Effect::expired
	bool ___expired_15;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TDSTK.Ability
struct Ability_t16A59DB906BC6E3C6E8F6641165B52AA1D738927  : public Item_tFEF641AD2E90D359103DB3FA577CA6BCBC3874A3
{
	// System.String TDSTK.Ability::desp
	String_t* ___desp_3;
	// TDSTK._AbilityType TDSTK.Ability::type
	int32_t ___type_4;
	// TDSTK._MoveType TDSTK.Ability::moveType
	int32_t ___moveType_5;
	// System.Single TDSTK.Ability::duration
	float ___duration_6;
	// System.Single TDSTK.Ability::cost
	float ___cost_7;
	// System.Single TDSTK.Ability::cooldown
	float ___cooldown_8;
	// System.Single TDSTK.Ability::currentCD
	float ___currentCD_9;
	// TDSTK.AttackStats TDSTK.Ability::aStats
	AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* ___aStats_10;
	// System.Single TDSTK.Ability::range
	float ___range_11;
	// UnityEngine.GameObject TDSTK.Ability::shootObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shootObject_12;
	// UnityEngine.Vector3 TDSTK.Ability::shootPosOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___shootPosOffset_13;
	// UnityEngine.GameObject TDSTK.Ability::launchObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___launchObj_14;
	// System.Boolean TDSTK.Ability::autoDestroyLaunchObj
	bool ___autoDestroyLaunchObj_15;
	// System.Single TDSTK.Ability::launchObjActiveDuration
	float ___launchObjActiveDuration_16;
	// UnityEngine.AudioClip TDSTK.Ability::launchSFX
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___launchSFX_17;
	// TDSTK.PlayerPerk TDSTK.Ability::perk
	PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* ___perk_18;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// TDSTK.ShootObject/AimInfo
struct AimInfo_tA62E8374FF9EAD82BA84AE823D6CFE9B28F0902A  : public RuntimeObject
{
	// UnityEngine.Vector3 TDSTK.ShootObject/AimInfo::hitPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hitPoint_0;
	// UnityEngine.Transform TDSTK.ShootObject/AimInfo::targetT
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetT_1;
	// UnityEngine.Collider TDSTK.ShootObject/AimInfo::collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_2;
	// TDSTK.Unit TDSTK.ShootObject/AimInfo::unit
	Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* ___unit_3;
};

// TDSTK.UnitPlayer/<_Dash>d__135
struct U3C_DashU3Ed__135_t3345FA3F735968DE5005206CA89A60773C71192D  : public RuntimeObject
{
	// System.Int32 TDSTK.UnitPlayer/<_Dash>d__135::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TDSTK.UnitPlayer/<_Dash>d__135::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TDSTK.UnitPlayer TDSTK.UnitPlayer/<_Dash>d__135::<>4__this
	UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* ___U3CU3E4__this_2;
	// System.Single TDSTK.UnitPlayer/<_Dash>d__135::range
	float ___range_3;
	// System.Single TDSTK.UnitPlayer/<_Dash>d__135::dur
	float ___dur_4;
	// UnityEngine.Vector3 TDSTK.UnitPlayer/<_Dash>d__135::<startPos>5__2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CstartPosU3E5__2_5;
	// UnityEngine.Vector3 TDSTK.UnitPlayer/<_Dash>d__135::<tgtPos>5__3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CtgtPosU3E5__3_6;
	// System.Single TDSTK.UnitPlayer/<_Dash>d__135::<step>5__4
	float ___U3CstepU3E5__4_7;
	// System.Single TDSTK.UnitPlayer/<_Dash>d__135::<duration>5__5
	float ___U3CdurationU3E5__5_8;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TDSTK.Unit/DestroyCallback
struct DestroyCallback_t73143D8A71CE8CAFE3A22439D2EF6DFAA1E0048B  : public MulticastDelegate_t
{
};

// TDSTK.Weapon/FireCallback
struct FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// TDSTK.PlayerPerk
struct PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean TDSTK.PlayerPerk::enablePerk
	bool ___enablePerk_4;
	// System.Int32 TDSTK.PlayerPerk::perkCurrency
	int32_t ___perkCurrency_5;
	// System.Int32 TDSTK.PlayerPerk::perkPoint
	int32_t ___perkPoint_6;
	// System.Collections.Generic.List`1<System.Int32> TDSTK.PlayerPerk::unavailableIDList
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___unavailableIDList_7;
	// System.Collections.Generic.List`1<System.Int32> TDSTK.PlayerPerk::purchasedIDList
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___purchasedIDList_8;
	// System.Collections.Generic.List`1<TDSTK.Perk> TDSTK.PlayerPerk::perkList
	List_1_tE649F11D3909FE91F6DEDADB77B7AFFC51F7727B* ___perkList_9;
	// TDSTK.UnitPlayer TDSTK.PlayerPerk::player
	UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* ___player_10;
	// System.Boolean TDSTK.PlayerPerk::init
	bool ___init_11;
	// System.Single TDSTK.PlayerPerk::hitPointCap
	float ___hitPointCap_12;
	// System.Single TDSTK.PlayerPerk::hitPointRegen
	float ___hitPointRegen_13;
	// System.Single TDSTK.PlayerPerk::energyCap
	float ___energyCap_14;
	// System.Single TDSTK.PlayerPerk::energyRegen
	float ___energyRegen_15;
	// System.Single TDSTK.PlayerPerk::moveSpeedMul
	float ___moveSpeedMul_16;
	// System.Single TDSTK.PlayerPerk::damageMul
	float ___damageMul_17;
	// System.Single TDSTK.PlayerPerk::critMul
	float ___critMul_18;
	// System.Single TDSTK.PlayerPerk::critMulMul
	float ___critMulMul_19;
	// System.Single TDSTK.PlayerPerk::expGainMul
	float ___expGainMul_20;
	// System.Single TDSTK.PlayerPerk::creditGainMul
	float ___creditGainMul_21;
	// System.Single TDSTK.PlayerPerk::scoreGainMul
	float ___scoreGainMul_22;
	// System.Single TDSTK.PlayerPerk::hitPointGainMul
	float ___hitPointGainMul_23;
	// System.Single TDSTK.PlayerPerk::energyGainMul
	float ___energyGainMul_24;
	// TDSTK.PlayerPerk/WeaponStatMultiplier TDSTK.PlayerPerk::weapStatG
	WeaponStatMultiplier_t1F2743DB492570BF573BBD1064CFADD692CB2B81* ___weapStatG_25;
	// System.Collections.Generic.List`1<TDSTK.PlayerPerk/WeaponStatMultiplier> TDSTK.PlayerPerk::weapStatList
	List_1_t5C25EF01A1AB7DEAAA54C8A9587A4A90DC7D9BED* ___weapStatList_26;
	// TDSTK.PlayerPerk/WeaponStatMultiplier TDSTK.PlayerPerk::tempWItem
	WeaponStatMultiplier_t1F2743DB492570BF573BBD1064CFADD692CB2B81* ___tempWItem_27;
	// TDSTK.PlayerPerk/AbilityStatMultiplier TDSTK.PlayerPerk::abilityStatG
	AbilityStatMultiplier_tA72B012E511930596F24B638DA0A3A1B60E3E43E* ___abilityStatG_28;
	// System.Collections.Generic.List`1<TDSTK.PlayerPerk/AbilityStatMultiplier> TDSTK.PlayerPerk::abilityStatList
	List_1_tFDD4567762703C803814BA28E0F1EEC28472FF52* ___abilityStatList_29;
	// TDSTK.PlayerPerk/AbilityStatMultiplier TDSTK.PlayerPerk::tempABItem
	AbilityStatMultiplier_tA72B012E511930596F24B638DA0A3A1B60E3E43E* ___tempABItem_30;
};

// TDSTK.ShootObject
struct ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TDSTK._SOType TDSTK.ShootObject::type
	int32_t ___type_4;
	// TDSTK.ShootObject/_State TDSTK.ShootObject::state
	int32_t ___state_5;
	// UnityEngine.Transform TDSTK.ShootObject::thisT
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___thisT_6;
	// UnityEngine.GameObject TDSTK.ShootObject::thisObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___thisObj_7;
	// System.Single TDSTK.ShootObject::srcRange
	float ___srcRange_8;
	// System.Single TDSTK.ShootObject::speed
	float ___speed_9;
	// System.Single TDSTK.ShootObject::delayBeforeDestroy
	float ___delayBeforeDestroy_10;
	// System.Single TDSTK.ShootObject::travelledDistance
	float ___travelledDistance_11;
	// System.Single TDSTK.ShootObject::trackingDuration
	float ___trackingDuration_12;
	// System.Single TDSTK.ShootObject::spread
	float ___spread_13;
	// TDSTK.Unit TDSTK.ShootObject::targetUnit
	Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* ___targetUnit_14;
	// UnityEngine.Vector3 TDSTK.ShootObject::targetPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos_15;
	// UnityEngine.Vector3 TDSTK.ShootObject::initialPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialPos_16;
	// UnityEngine.Vector3 TDSTK.ShootObject::dummyPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dummyPos_17;
	// System.Single TDSTK.ShootObject::initialDist
	float ___initialDist_18;
	// System.Single TDSTK.ShootObject::curveMod
	float ___curveMod_19;
	// System.Single TDSTK.ShootObject::timeSinceFire
	float ___timeSinceFire_20;
	// UnityEngine.LineRenderer TDSTK.ShootObject::line
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___line_21;
	// System.Single TDSTK.ShootObject::beamDuration
	float ___beamDuration_22;
	// System.Boolean TDSTK.ShootObject::continousEffect
	bool ___continousEffect_23;
	// System.Single TDSTK.ShootObject::lastHitCD
	float ___lastHitCD_24;
	// System.Boolean TDSTK.ShootObject::shootThrough
	bool ___shootThrough_25;
	// System.Single TDSTK.ShootObject::hitRadius
	float ___hitRadius_26;
	// System.Single TDSTK.ShootObject::impactCamShake
	float ___impactCamShake_27;
	// UnityEngine.GameObject TDSTK.ShootObject::shootEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shootEffect_28;
	// System.Boolean TDSTK.ShootObject::destroyShootEffect
	bool ___destroyShootEffect_29;
	// System.Single TDSTK.ShootObject::destroyShootDuration
	float ___destroyShootDuration_30;
	// UnityEngine.GameObject TDSTK.ShootObject::hitEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hitEffect_31;
	// System.Boolean TDSTK.ShootObject::destroyHitEffect
	bool ___destroyHitEffect_32;
	// System.Single TDSTK.ShootObject::destroyHitDuration
	float ___destroyHitDuration_33;
	// TDSTK.AttackInstance TDSTK.ShootObject::attInstance
	AttackInstance_tF5DE0CD786CADF8A4414F8F07F4447A154BA9682* ___attInstance_34;
	// System.Single TDSTK.ShootObject::destroyTime
	float ___destroyTime_35;
	// System.Single TDSTK.ShootObject::shootTime
	float ___shootTime_36;
	// System.Int32 TDSTK.ShootObject::srcLayer
	int32_t ___srcLayer_37;
	// UnityEngine.LayerMask TDSTK.ShootObject::mask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask_38;
	// System.Boolean TDSTK.ShootObject::init
	bool ___init_39;
	// UnityEngine.Collider TDSTK.ShootObject::thisCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___thisCollider_40;
	// UnityEngine.GameObject TDSTK.ShootObject::hideObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hideObject_41;
	// System.Single TDSTK.ShootObject::projectileDestroyDelay
	float ___projectileDestroyDelay_42;
	// System.Boolean TDSTK.ShootObject::splitUponHit
	bool ___splitUponHit_43;
	// System.Int32 TDSTK.ShootObject::splitCount
	int32_t ___splitCount_44;
	// System.Int32 TDSTK.ShootObject::splitRange
	int32_t ___splitRange_45;
	// TDSTK.ShootObject/_SplitMode TDSTK.ShootObject::splitMode
	int32_t ___splitMode_46;
	// System.Boolean TDSTK.ShootObject::splitRecursively
	bool ___splitRecursively_47;
};

// TDSTK.TDSArea
struct TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TDSTK.TDSArea/_AreaType TDSTK.TDSArea::type
	int32_t ___type_4;
	// UnityEngine.Transform TDSTK.TDSArea::thisT
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___thisT_5;
	// UnityEngine.Color TDSTK.TDSArea::gizmoColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___gizmoColor_6;
};

// TDSTK.Unit
struct Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<TDSTK.Unit/DestroyCallback> TDSTK.Unit::destroyCallbackList
	List_1_t62C717C483662B3D42C6D7079F421BF984EBA2CA* ___destroyCallbackList_4;
	// UnityEngine.Transform TDSTK.Unit::thisT
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___thisT_5;
	// UnityEngine.GameObject TDSTK.Unit::thisObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___thisObj_6;
	// System.Int32 TDSTK.Unit::prefabID
	int32_t ___prefabID_7;
	// System.Int32 TDSTK.Unit::instanceID
	int32_t ___instanceID_8;
	// UnityEngine.Sprite TDSTK.Unit::icon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon_9;
	// System.String TDSTK.Unit::unitName
	String_t* ___unitName_10;
	// System.String TDSTK.Unit::desp
	String_t* ___desp_11;
	// System.Boolean TDSTK.Unit::hostileUnit
	bool ___hostileUnit_12;
	// System.Boolean TDSTK.Unit::isPlayer
	bool ___isPlayer_13;
	// System.Int32 TDSTK.Unit::level
	int32_t ___level_14;
	// System.Single TDSTK.Unit::hitPointFull
	float ___hitPointFull_15;
	// System.Single TDSTK.Unit::hitPoint
	float ___hitPoint_16;
	// System.Boolean TDSTK.Unit::startHitPointAtFull
	bool ___startHitPointAtFull_17;
	// System.Single TDSTK.Unit::hpRegenRate
	float ___hpRegenRate_18;
	// System.Single TDSTK.Unit::hpRegenStagger
	float ___hpRegenStagger_19;
	// System.Single TDSTK.Unit::hpRegenStaggerCounter
	float ___hpRegenStaggerCounter_20;
	// System.Single TDSTK.Unit::energyFull
	float ___energyFull_21;
	// System.Single TDSTK.Unit::energy
	float ___energy_22;
	// System.Single TDSTK.Unit::energyRate
	float ___energyRate_23;
	// System.Boolean TDSTK.Unit::startEnergyAtFull
	bool ___startEnergyAtFull_24;
	// System.Int32 TDSTK.Unit::armorType
	int32_t ___armorType_25;
	// System.Boolean TDSTK.Unit::anchorDown
	bool ___anchorDown_26;
	// System.Single TDSTK.Unit::moveSpeed
	float ___moveSpeed_27;
	// System.Single TDSTK.Unit::brakeRange
	float ___brakeRange_28;
	// System.Single TDSTK.Unit::rotateSpeed
	float ___rotateSpeed_29;
	// TDSTK.Unit TDSTK.Unit::target
	Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* ___target_30;
	// System.Boolean TDSTK.Unit::enableRangeAttack
	bool ___enableRangeAttack_31;
	// UnityEngine.GameObject TDSTK.Unit::shootObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shootObject_32;
	// System.Collections.Generic.List`1<UnityEngine.Transform> TDSTK.Unit::shootPointList
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___shootPointList_33;
	// System.Single TDSTK.Unit::shootPointDelay
	float ___shootPointDelay_34;
	// UnityEngine.Transform TDSTK.Unit::turretObj
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___turretObj_35;
	// System.Boolean TDSTK.Unit::smoothTurretRotation
	bool ___smoothTurretRotation_36;
	// System.Single TDSTK.Unit::turretTrackingSpeed
	float ___turretTrackingSpeed_37;
	// System.Single TDSTK.Unit::range
	float ___range_38;
	// System.Single TDSTK.Unit::cooldown
	float ___cooldown_39;
	// System.Single TDSTK.Unit::currentCD
	float ___currentCD_40;
	// TDSTK.AttackStats TDSTK.Unit::attackStats
	AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* ___attackStats_41;
	// System.Boolean TDSTK.Unit::enableContactAttack
	bool ___enableContactAttack_42;
	// System.Single TDSTK.Unit::contactCooldown
	float ___contactCooldown_43;
	// System.Single TDSTK.Unit::contactCurrentCD
	float ___contactCurrentCD_44;
	// TDSTK.AttackStats TDSTK.Unit::contactAttackStats
	AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* ___contactAttackStats_45;
	// System.Int32 TDSTK.Unit::valueCredits
	int32_t ___valueCredits_46;
	// System.Int32 TDSTK.Unit::valueScore
	int32_t ___valueScore_47;
	// System.Int32 TDSTK.Unit::valueHitPoint
	int32_t ___valueHitPoint_48;
	// System.Int32 TDSTK.Unit::valueEnergy
	int32_t ___valueEnergy_49;
	// System.Int32 TDSTK.Unit::valueExp
	int32_t ___valueExp_50;
	// System.Int32 TDSTK.Unit::valuePerkC
	int32_t ___valuePerkC_51;
	// System.Single TDSTK.Unit::destroyCamShake
	float ___destroyCamShake_52;
	// UnityEngine.GameObject TDSTK.Unit::destroyedEffectObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___destroyedEffectObj_53;
	// System.Boolean TDSTK.Unit::autoDestroyDObj
	bool ___autoDestroyDObj_54;
	// System.Single TDSTK.Unit::dObjActiveDuration
	float ___dObjActiveDuration_55;
	// System.Boolean TDSTK.Unit::useDropManager
	bool ___useDropManager_56;
	// UnityEngine.GameObject TDSTK.Unit::dropObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dropObject_57;
	// System.Single TDSTK.Unit::dropChance
	float ___dropChance_58;
	// TDSTK.Unit TDSTK.Unit::spawnUponDestroy
	Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* ___spawnUponDestroy_59;
	// System.Int32 TDSTK.Unit::spawnUponDestroyCount
	int32_t ___spawnUponDestroyCount_60;
	// System.Boolean TDSTK.Unit::destroyed
	bool ___destroyed_61;
	// UnityEngine.Collider TDSTK.Unit::thisCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___thisCollider_62;
	// System.Single TDSTK.Unit::spawnImmunity
	float ___spawnImmunity_63;
	// System.Single TDSTK.Unit::immunityCounter
	float ___immunityCounter_64;
	// TDSTK.UnitAnimation TDSTK.Unit::uAnimation
	UnitAnimation_t1B983CB3533B3A96CCEDB441E048E35E96F3771A* ___uAnimation_65;
	// System.Boolean TDSTK.Unit::moved
	bool ___moved_66;
	// System.Int32 TDSTK.Unit::waveID
	int32_t ___waveID_67;
	// TDSTK.UnitSpawner TDSTK.Unit::spawner
	UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* ___spawner_68;
	// System.Collections.Generic.List`1<TDSTK.Effect> TDSTK.Unit::effectList
	List_1_t67C1269B9C12E9FFF3CA7A2E190A9AC1D672EB70* ___effectList_69;
	// System.Boolean TDSTK.Unit::effCoroutine
	bool ___effCoroutine_70;
	// TDSTK.Effect TDSTK.Unit::activeEffect
	Effect_tC238E6505E0459AA21520B0623F2AEE2CD7FF4B9* ___activeEffect_71;
};

// TDSTK.UnitAnimation
struct UnitAnimation_t1B983CB3533B3A96CCEDB441E048E35E96F3771A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator TDSTK.UnitAnimation::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
	// UnityEngine.AnimationClip TDSTK.UnitAnimation::clipIdle
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clipIdle_5;
	// UnityEngine.AnimationClip TDSTK.UnitAnimation::clipForward
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clipForward_6;
	// UnityEngine.AnimationClip TDSTK.UnitAnimation::clipBackward
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clipBackward_7;
	// UnityEngine.AnimationClip TDSTK.UnitAnimation::clipStrafeLeft
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clipStrafeLeft_8;
	// UnityEngine.AnimationClip TDSTK.UnitAnimation::clipStrafeRight
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clipStrafeRight_9;
	// UnityEngine.AnimationClip TDSTK.UnitAnimation::clipAttackRange
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clipAttackRange_10;
	// UnityEngine.AnimationClip TDSTK.UnitAnimation::clipAttackMelee
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clipAttackMelee_11;
	// UnityEngine.AnimationClip TDSTK.UnitAnimation::clipHit
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clipHit_12;
	// UnityEngine.AnimationClip TDSTK.UnitAnimation::clipDestroyed
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clipDestroyed_13;
	// TDSTK.UnitPlayer TDSTK.UnitAnimation::unitPlayer
	UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* ___unitPlayer_14;
	// TDSTK.UnitAI TDSTK.UnitAnimation::unitAI
	UnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029* ___unitAI_15;
	// UnityEngine.Transform TDSTK.UnitAnimation::animatorT
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___animatorT_16;
};

// TDSTK.UnitSpawner
struct UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TDSTK._SpawnMode TDSTK.UnitSpawner::spawnMode
	int32_t ___spawnMode_4;
	// System.Boolean TDSTK.UnitSpawner::spawnUponStart
	bool ___spawnUponStart_5;
	// System.Boolean TDSTK.UnitSpawner::spawnStarted
	bool ___spawnStarted_6;
	// System.Single TDSTK.UnitSpawner::startDelay
	float ___startDelay_7;
	// System.Collections.Generic.List`1<TDSTK.TDSArea> TDSTK.UnitSpawner::spawnAreaList
	List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* ___spawnAreaList_8;
	// System.Boolean TDSTK.UnitSpawner::randomRotation
	bool ___randomRotation_9;
	// System.Boolean TDSTK.UnitSpawner::anchorToPoint
	bool ___anchorToPoint_10;
	// System.Single TDSTK.UnitSpawner::anchorRadius
	float ___anchorRadius_11;
	// System.Collections.Generic.List`1<TDSTK.Unit> TDSTK.UnitSpawner::spawnUnitList
	List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* ___spawnUnitList_12;
	// System.Boolean TDSTK.UnitSpawner::overrideHitPoint
	bool ___overrideHitPoint_13;
	// TDSTK._OverrideMode TDSTK.UnitSpawner::overrideHPMode
	int32_t ___overrideHPMode_14;
	// System.Single TDSTK.UnitSpawner::startingHitPoint
	float ___startingHitPoint_15;
	// System.Single TDSTK.UnitSpawner::hitPointIncrement
	float ___hitPointIncrement_16;
	// System.Single TDSTK.UnitSpawner::hitPointTimeStep
	float ___hitPointTimeStep_17;
	// System.Single TDSTK.UnitSpawner::spawnHP
	float ___spawnHP_18;
	// System.Int32 TDSTK.UnitSpawner::currentWaveIDX
	int32_t ___currentWaveIDX_19;
	// System.Boolean TDSTK.UnitSpawner::endlessWave
	bool ___endlessWave_20;
	// System.Collections.Generic.List`1<TDSTK.Wave> TDSTK.UnitSpawner::waveList
	List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* ___waveList_21;
	// System.Single TDSTK.UnitSpawner::delayBetweenWave
	float ___delayBetweenWave_22;
	// System.Int32 TDSTK.UnitSpawner::maxSubWaveCount
	int32_t ___maxSubWaveCount_23;
	// System.Int32 TDSTK.UnitSpawner::unitCount
	int32_t ___unitCount_24;
	// System.Int32 TDSTK.UnitSpawner::unitCountInc
	int32_t ___unitCountInc_25;
	// TDSTK.Wave TDSTK.UnitSpawner::waveE
	Wave_t65332B65BB35E2A0A549B5074493644DE6159233* ___waveE_26;
	// System.Int32 TDSTK.UnitSpawner::startingCredit
	int32_t ___startingCredit_27;
	// System.Int32 TDSTK.UnitSpawner::creditIncrement
	int32_t ___creditIncrement_28;
	// System.Int32 TDSTK.UnitSpawner::startingScore
	int32_t ___startingScore_29;
	// System.Int32 TDSTK.UnitSpawner::scoreIncrement
	int32_t ___scoreIncrement_30;
	// System.Single TDSTK.UnitSpawner::spawnCD
	float ___spawnCD_31;
	// System.Int32 TDSTK.UnitSpawner::activeLimit
	int32_t ___activeLimit_32;
	// System.Int32 TDSTK.UnitSpawner::limitSpawnCount
	int32_t ___limitSpawnCount_33;
	// System.Int32 TDSTK.UnitSpawner::limitSpawnTime
	int32_t ___limitSpawnTime_34;
	// TDSTK._SpawnLimitType TDSTK.UnitSpawner::limitType
	int32_t ___limitType_35;
	// System.Int32 TDSTK.UnitSpawner::activeCount
	int32_t ___activeCount_36;
	// System.Int32 TDSTK.UnitSpawner::spawnCount
	int32_t ___spawnCount_37;
	// System.Int32 TDSTK.UnitSpawner::killCount
	int32_t ___killCount_38;
	// UnityEngine.Transform TDSTK.UnitSpawner::thisT
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___thisT_39;
	// System.Boolean TDSTK.UnitSpawner::freeformTimeOut
	bool ___freeformTimeOut_40;
};

// TDSTK.Weapon
struct Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<TDSTK.Weapon/FireCallback> TDSTK.Weapon::fireCallbackList
	List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A* ___fireCallbackList_4;
	// System.Int32 TDSTK.Weapon::ID
	int32_t ___ID_5;
	// UnityEngine.Sprite TDSTK.Weapon::icon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon_6;
	// System.String TDSTK.Weapon::weaponName
	String_t* ___weaponName_7;
	// System.String TDSTK.Weapon::desp
	String_t* ___desp_8;
	// UnityEngine.GameObject TDSTK.Weapon::shootObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shootObject_9;
	// System.Collections.Generic.List`1<UnityEngine.Transform> TDSTK.Weapon::shootPointList
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___shootPointList_10;
	// System.Single TDSTK.Weapon::shootPointDelay
	float ___shootPointDelay_11;
	// System.Boolean TDSTK.Weapon::continousFire
	bool ___continousFire_12;
	// System.Single TDSTK.Weapon::range
	float ___range_13;
	// System.Single TDSTK.Weapon::cooldown
	float ___cooldown_14;
	// System.Single TDSTK.Weapon::currentCD
	float ___currentCD_15;
	// System.Boolean TDSTK.Weapon::useEnergyAsAmmo
	bool ___useEnergyAsAmmo_16;
	// System.Single TDSTK.Weapon::energyCost
	float ___energyCost_17;
	// System.Int32 TDSTK.Weapon::clipSize
	int32_t ___clipSize_18;
	// System.Int32 TDSTK.Weapon::currentClip
	int32_t ___currentClip_19;
	// System.Int32 TDSTK.Weapon::ammoCap
	int32_t ___ammoCap_20;
	// System.Int32 TDSTK.Weapon::ammo
	int32_t ___ammo_21;
	// System.Single TDSTK.Weapon::reloadDuration
	float ___reloadDuration_22;
	// System.Single TDSTK.Weapon::currentReload
	float ___currentReload_23;
	// System.Single TDSTK.Weapon::recoilMagnitude
	float ___recoilMagnitude_24;
	// System.Single TDSTK.Weapon::recoil
	float ___recoil_25;
	// System.Single TDSTK.Weapon::recoilCamShake
	float ___recoilCamShake_26;
	// System.Int32 TDSTK.Weapon::spread
	int32_t ___spread_27;
	// System.Single TDSTK.Weapon::spreadAngle
	float ___spreadAngle_28;
	// TDSTK.AttackStats TDSTK.Weapon::aStats
	AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* ___aStats_29;
	// UnityEngine.AudioClip TDSTK.Weapon::shootSFX
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___shootSFX_30;
	// UnityEngine.AudioClip TDSTK.Weapon::reloadSFX
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___reloadSFX_31;
	// System.Boolean TDSTK.Weapon::temporary
	bool ___temporary_32;
	// System.Boolean TDSTK.Weapon::reloading
	bool ___reloading_33;
	// System.Int32 TDSTK.Weapon::abilityID
	int32_t ___abilityID_34;
	// TDSTK.Ability TDSTK.Weapon::ability
	Ability_t16A59DB906BC6E3C6E8F6641165B52AA1D738927* ___ability_35;
	// System.Boolean TDSTK.Weapon::requireAiming
	bool ___requireAiming_36;
	// System.Boolean TDSTK.Weapon::randCursorForRecoil
	bool ___randCursorForRecoil_37;
	// TDSTK.PlayerPerk TDSTK.Weapon::perk
	PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* ___perk_38;
};

// TDSTK.UnitAI
struct UnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029  : public Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B
{
	// UnityEngine.AI.NavMeshAgent TDSTK.UnitAI::agent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___agent_72;
	// System.Boolean TDSTK.UnitAI::destroyUponPlayerContact
	bool ___destroyUponPlayerContact_73;
	// TDSTK._Behaviour TDSTK.UnitAI::behaviour
	int32_t ___behaviour_74;
	// System.Single TDSTK.UnitAI::aggroRange
	float ___aggroRange_75;
	// System.Boolean TDSTK.UnitAI::guardTriggered
	bool ___guardTriggered_76;
	// System.Boolean TDSTK.UnitAI::stopOccasionally
	bool ___stopOccasionally_77;
	// System.Single TDSTK.UnitAI::stopRate
	float ___stopRate_78;
	// System.Single TDSTK.UnitAI::stopDuration
	float ___stopDuration_79;
	// System.Single TDSTK.UnitAI::stopCooldown
	float ___stopCooldown_80;
	// System.Boolean TDSTK.UnitAI::stopping
	bool ___stopping_81;
	// System.Single TDSTK.UnitAI::stopCD
	float ___stopCD_82;
	// System.Boolean TDSTK.UnitAI::evadeOccasionally
	bool ___evadeOccasionally_83;
	// System.Single TDSTK.UnitAI::evadeRate
	float ___evadeRate_84;
	// System.Single TDSTK.UnitAI::evadeDuration
	float ___evadeDuration_85;
	// System.Single TDSTK.UnitAI::evadeCooldown
	float ___evadeCooldown_86;
	// System.Boolean TDSTK.UnitAI::evading
	bool ___evading_87;
	// System.Single TDSTK.UnitAI::evadeCD
	float ___evadeCD_88;
	// System.Boolean TDSTK.UnitAI::shootPeriodically
	bool ___shootPeriodically_89;
	// System.Boolean TDSTK.UnitAI::alwaysShootTowardsTarget
	bool ___alwaysShootTowardsTarget_90;
	// System.Boolean TDSTK.UnitAI::randFirstAttackDelay
	bool ___randFirstAttackDelay_91;
	// System.Single TDSTK.UnitAI::firstAttackDelay
	float ___firstAttackDelay_92;
	// System.Boolean TDSTK.UnitAI::anchorToPoint
	bool ___anchorToPoint_93;
	// UnityEngine.Transform TDSTK.UnitAI::anchorT
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___anchorT_94;
	// System.Single TDSTK.UnitAI::anchorRadius
	float ___anchorRadius_95;
	// UnityEngine.Vector3 TDSTK.UnitAI::anchorPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___anchorPoint_96;
	// UnityEngine.Vector3 TDSTK.UnitAI::currentAnchor
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentAnchor_97;
	// System.Boolean TDSTK.UnitAI::inRange
	bool ___inRange_98;
	// UnityEngine.Vector3 TDSTK.UnitAI::targetLastPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetLastPos_99;
};

// TDSTK.UnitPlayer
struct UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215  : public Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B
{
	// UnityEngine.Camera TDSTK.UnitPlayer::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_72;
	// UnityEngine.Transform TDSTK.UnitPlayer::camT
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camT_73;
	// UnityEngine.Transform TDSTK.UnitPlayer::turretObjParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___turretObjParent_74;
	// UnityEngine.Transform TDSTK.UnitPlayer::weaponMountPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___weaponMountPoint_75;
	// System.Boolean TDSTK.UnitPlayer::enableAllWeapons
	bool ___enableAllWeapons_76;
	// System.Collections.Generic.List`1<TDSTK.Weapon> TDSTK.UnitPlayer::weaponList
	List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315* ___weaponList_77;
	// System.Int32 TDSTK.UnitPlayer::weaponID
	int32_t ___weaponID_78;
	// System.Boolean TDSTK.UnitPlayer::weaponInitiated
	bool ___weaponInitiated_79;
	// System.Boolean TDSTK.UnitPlayer::enableAbility
	bool ___enableAbility_80;
	// System.Boolean TDSTK.UnitPlayer::enableAllAbilities
	bool ___enableAllAbilities_81;
	// System.Collections.Generic.List`1<System.Int32> TDSTK.UnitPlayer::abilityIDList
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___abilityIDList_82;
	// System.Boolean TDSTK.UnitPlayer::enableTurretRotate
	bool ___enableTurretRotate_83;
	// TDSTK._TurretAimMode TDSTK.UnitPlayer::turretAimMode
	int32_t ___turretAimMode_84;
	// System.Boolean TDSTK.UnitPlayer::aimAtTravelDirection
	bool ___aimAtTravelDirection_85;
	// System.Boolean TDSTK.UnitPlayer::enableAutoAim
	bool ___enableAutoAim_86;
	// System.Boolean TDSTK.UnitPlayer::faceTravelDirection
	bool ___faceTravelDirection_87;
	// System.Boolean TDSTK.UnitPlayer::enabledMovementX
	bool ___enabledMovementX_88;
	// System.Boolean TDSTK.UnitPlayer::enabledMovementZ
	bool ___enabledMovementZ_89;
	// TDSTK._MovementMode TDSTK.UnitPlayer::movementMode
	int32_t ___movementMode_90;
	// System.Single TDSTK.UnitPlayer::acceleration
	float ___acceleration_91;
	// System.Single TDSTK.UnitPlayer::decceleration
	float ___decceleration_92;
	// System.Single TDSTK.UnitPlayer::boostEnergyRate
	float ___boostEnergyRate_93;
	// System.Single TDSTK.UnitPlayer::boostMultiplier
	float ___boostMultiplier_94;
	// System.Single TDSTK.UnitPlayer::activeBrakingRate
	float ___activeBrakingRate_95;
	// UnityEngine.Vector3 TDSTK.UnitPlayer::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_96;
	// System.Single TDSTK.UnitPlayer::momentum
	float ___momentum_97;
	// System.Boolean TDSTK.UnitPlayer::useLimit
	bool ___useLimit_98;
	// System.Boolean TDSTK.UnitPlayer::showGizmo
	bool ___showGizmo_99;
	// System.Single TDSTK.UnitPlayer::minPosX
	float ___minPosX_100;
	// System.Single TDSTK.UnitPlayer::minPosZ
	float ___minPosZ_101;
	// System.Single TDSTK.UnitPlayer::maxPosX
	float ___maxPosX_102;
	// System.Single TDSTK.UnitPlayer::maxPosZ
	float ___maxPosZ_103;
	// System.Boolean TDSTK.UnitPlayer::init
	bool ___init_104;
	// System.Int32 TDSTK.UnitPlayer::tempWeapReturnID
	int32_t ___tempWeapReturnID_105;
	// System.Single TDSTK.UnitPlayer::obstacleStopMultiplier
	float ___obstacleStopMultiplier_106;
	// TDSTK.Effect TDSTK.UnitPlayer::levelModifier
	Effect_tC238E6505E0459AA21520B0623F2AEE2CD7FF4B9* ___levelModifier_107;
	// System.Boolean TDSTK.UnitPlayer::disableFire
	bool ___disableFire_108;
	// System.Single TDSTK.UnitPlayer::recoilSignTH
	float ___recoilSignTH_109;
	// System.Int32 TDSTK.UnitPlayer::playerID
	int32_t ___playerID_110;
	// System.Boolean TDSTK.UnitPlayer::loadProgress
	bool ___loadProgress_111;
	// System.Boolean TDSTK.UnitPlayer::saveProgress
	bool ___saveProgress_112;
	// System.Boolean TDSTK.UnitPlayer::saveUponChange
	bool ___saveUponChange_113;
	// TDSTK.PlayerProgression TDSTK.UnitPlayer::progress
	PlayerProgression_tD6896122CBC1AD0554B2328EF7CE55986FCC03EB* ___progress_114;
	// TDSTK.PlayerPerk TDSTK.UnitPlayer::perk
	PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* ___perk_115;
	// System.Single TDSTK.UnitPlayer::hitPointBase
	float ___hitPointBase_116;
	// System.Single TDSTK.UnitPlayer::energyBase
	float ___energyBase_117;
	// System.Boolean TDSTK.UnitPlayer::dashing
	bool ___dashing_118;
};

// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Collider>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<TDSTK.SubWave>
struct List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SubWaveU5BU5D_t1A6F255C9599B2B87C02F03B78D735391CD7CD95* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TDSTK.SubWave>

// System.Collections.Generic.List`1<TDSTK.TDSArea>
struct List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TDSAreaU5BU5D_t55AC04F6F7FCA374655D22BE0F1ADDB072F54070* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TDSTK.TDSArea>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>

// System.Collections.Generic.List`1<TDSTK.Unit>
struct List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UnitU5BU5D_t3FCA674CB453BB8F13B31D5B34D57DE6C96B93B3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TDSTK.Unit>

// System.Collections.Generic.List`1<TDSTK.Wave>
struct List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WaveU5BU5D_tA0135BE3B1E4F3583569C1BE54BA120465C24816* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TDSTK.Wave>

// System.Collections.Generic.List`1<TDSTK.Weapon>
struct List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WeaponU5BU5D_t89013A972A36262A311A8255EA167377D6DDFCA2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TDSTK.Weapon>

// System.Collections.Generic.List`1<TDSTK.Weapon/FireCallback>
struct List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FireCallbackU5BU5D_tF9987F7D2947D385F1BEEB005E3C5B81C4A08B4C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TDSTK.Weapon/FireCallback>

// TDSTK.AttackInstance

// TDSTK.AttackInstance

// TDSTK.AttackStats

// TDSTK.AttackStats

// TDSTK.Item

// TDSTK.Item

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// TDSTK.SubWave

// TDSTK.SubWave

// TDSTK.Wave

// TDSTK.Wave

// TDSTK.UnitPlayer/<ShootRoutine>d__60

// TDSTK.UnitPlayer/<ShootRoutine>d__60

// TDSTK.UnitPlayer/<TemporaryWeaponTimer>d__41

// TDSTK.UnitPlayer/<TemporaryWeaponTimer>d__41

// TDSTK.UnitSpawner/<OverridingHitPointRoutine>d__50

// TDSTK.UnitSpawner/<OverridingHitPointRoutine>d__50

// TDSTK.UnitSpawner/<SpawnFreeForm>d__47

// TDSTK.UnitSpawner/<SpawnFreeForm>d__47

// TDSTK.UnitSpawner/<SpawnLimitTimerRoutine>d__49

// TDSTK.UnitSpawner/<SpawnLimitTimerRoutine>d__49

// TDSTK.UnitSpawner/<SpawnSubWave>d__44

// TDSTK.UnitSpawner/<SpawnSubWave>d__44

// TDSTK.UnitSpawner/<SpawnWave>d__43

// TDSTK.UnitSpawner/<SpawnWave>d__43

// TDSTK.Weapon/<ReloadRoutine>d__40

// TDSTK.Weapon/<ReloadRoutine>d__40

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// TDSTK.Effect

// TDSTK.Effect

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// TDSTK.Ability

// TDSTK.Ability

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// TDSTK.ShootObject/AimInfo

// TDSTK.ShootObject/AimInfo

// TDSTK.UnitPlayer/<_Dash>d__135

// TDSTK.UnitPlayer/<_Dash>d__135

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// TDSTK.Unit/DestroyCallback

// TDSTK.Unit/DestroyCallback

// TDSTK.Weapon/FireCallback

// TDSTK.Weapon/FireCallback

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// TDSTK.PlayerPerk

// TDSTK.PlayerPerk

// TDSTK.ShootObject

// TDSTK.ShootObject

// TDSTK.TDSArea

// TDSTK.TDSArea

// TDSTK.Unit

// TDSTK.Unit

// TDSTK.UnitAnimation

// TDSTK.UnitAnimation

// TDSTK.UnitSpawner

// TDSTK.UnitSpawner

// TDSTK.Weapon

// TDSTK.Weapon

// TDSTK.UnitAI

// TDSTK.UnitAI

// TDSTK.UnitPlayer

// TDSTK.UnitPlayer
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void TDSTK.Effect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Effect__ctor_mE01BF0C736BAFF01A6F2BF9E92F6AE046C54ECF9 (Effect_tC238E6505E0459AA21520B0623F2AEE2CD7FF4B9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void TDSTK.UnitPlayer::RemoveWeapon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitPlayer_RemoveWeapon_mF79877A582C5578B195C1550286A10B99356F911 (UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void TDSTK.UnitAnimation::AttackMelee()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitAnimation_AttackMelee_m936318E801118A013EA4AA0C48ED1F905A579675 (UnitAnimation_t1B983CB3533B3A96CCEDB441E048E35E96F3771A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<TDSTK.Weapon>::get_Item(System.Int32)
inline Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF (List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* (*) (List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// TDSTK.AttackStats TDSTK.Weapon::GetRuntimeAttackStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* Weapon_GetRuntimeAttackStats_m40F2F2859E15A608B4464EA5EFCC08414F1B726C (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) ;
// TDSTK.AttackStats TDSTK.UnitPlayer::ModifyAttackStatsToLevel(TDSTK.AttackStats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* UnitPlayer_ModifyAttackStatsToLevel_m72FAC2C117CAD7732986ECECD75EF64F7670085F (UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* __this, AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* ___0_aStats, const RuntimeMethod* method) ;
// TDSTK.AttackStats TDSTK.Unit::ModifyAttackStatsToExistingEffect(TDSTK.AttackStats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* Unit_ModifyAttackStatsToExistingEffect_mCDAD40CB6F1AC9DFA4976E39374A961BCDBE8EBB (Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* __this, AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* ___0_aStats, const RuntimeMethod* method) ;
// System.Void TDSTK.AttackInstance::.ctor(TDSTK.Unit,TDSTK.AttackStats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackInstance__ctor_m5E4F40B00BE1168943911D568AFDE4B829745A67 (AttackInstance_tF5DE0CD786CADF8A4414F8F07F4447A154BA9682* __this, Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* ___0_src, AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* ___1_aSt, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::.ctor()
inline void List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Single TDSTK.UnitPlayer::GetRecoil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnitPlayer_GetRecoil_mFCD52FA07D0384ECE9A19BD65640432B575ACDE9 (UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.GameObject ObjectPoolManager::Spawn(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPoolManager_Spawn_mBB5C03F297CAD60FA89CC3C90C2C7EA18CCF23B7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rot, float ___3_activeDuration, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TDSTK.ShootObject>()
inline ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05* GameObject_GetComponent_TisShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05_m50591508D518473D54B5E5155C8BE461AA359AC7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Collider TDSTK.Unit::GetCollider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Unit_GetCollider_m062EED8CAFF74E4A434637A467B81C391B2B8578_inline (Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* __this, const RuntimeMethod* method) ;
// System.Void TDSTK.ShootObject::IgnoreCollider(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootObject_IgnoreCollider_m77586A7E55AF7764530287E7014E6BDBD71F18B6 (ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_collider, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Collider>::get_Item(System.Int32)
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587 (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Collider>::get_Count()
inline int32_t List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Collider TDSTK.ShootObject::GetCollider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ShootObject_GetCollider_m3AE22E8F5A18ABEBE2E4EC6AE9A0C33511448871_inline (ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::Add(T)
inline void List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_inline (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// TDSTK.AttackInstance TDSTK.AttackInstance::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttackInstance_tF5DE0CD786CADF8A4414F8F07F4447A154BA9682* AttackInstance_Clone_mE19A113722097B5F13F9BD91078069C1461652F1 (AttackInstance_tF5DE0CD786CADF8A4414F8F07F4447A154BA9682* __this, const RuntimeMethod* method) ;
// System.Void TDSTK.ShootObject::Shoot(System.Int32,System.Single,UnityEngine.Transform,TDSTK.AttackInstance,TDSTK.ShootObject/AimInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootObject_Shoot_m04DCA160937260C85E66148BD293CD846F06BE2E (ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05* __this, int32_t ___0_srcL, float ___1_srcR, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_shootPoint, AttackInstance_tF5DE0CD786CADF8A4414F8F07F4447A154BA9682* ___3_aInstance, AimInfo_tA62E8374FF9EAD82BA84AE823D6CFE9B28F0902A* ___4_aimInfo, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// System.Void TDSTK.TDS::CameraShake(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TDS_CameraShake_mEF9407E7F5C0470432FC32E24B9D89BD23D6978E (float ___0_mag, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TDSTK.Weapon>::get_Count()
inline int32_t List_1_get_Count_m5AC41EF92B89686C206EE7693C51F94FDE3CF155_inline (List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<TDSTK.Wave>::get_Item(System.Int32)
inline Wave_t65332B65BB35E2A0A549B5074493644DE6159233* List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F (List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Wave_t65332B65BB35E2A0A549B5074493644DE6159233* (*) (List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<TDSTK.Wave>::get_Count()
inline int32_t List_1_get_Count_mA99D4AC9C67178CEA8EBFD419441FB75B0393CAB_inline (List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<TDSTK.TDSArea>::get_Item(System.Int32)
inline TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874 (List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* (*) (List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TDSTK.TDSArea>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m19CE75ADD1F0CFD72B2CC2819362CFE36C37E1BA (List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<TDSTK.TDSArea>::get_Count()
inline int32_t List_1_get_Count_m610F3504AA5B2BEB809F8E2E9A658C13E78EA565_inline (List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<TDSTK.Unit>::get_Item(System.Int32)
inline Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* List_1_get_Item_m1DC2EDDA2684D3FE9DAB38AA40DC371409C03130 (List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* (*) (List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<TDSTK.Unit>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m722E5A7E24C6F7853217A20B61BB798841BD44A7 (List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<TDSTK.Unit>::get_Count()
inline int32_t List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_inline (List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<TDSTK.TDSArea>()
inline TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* GameObject_AddComponent_TisTDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C_mC2E6B97BDA162EDD0A1BB9EA56502C3BD545A30D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TDSTK.TDSArea>::Add(T)
inline void List_1_Add_mE2EE0AFBF3DBAED3C19306EA2B445B88B948F4F5_inline (List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* __this, TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C*, TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Void TDSTK.UnitSpawner::InitObjectPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_InitObjectPool_m73061A8CCB0155B7B35B03424D7130B8D900F330 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) ;
// System.Void TDSTK.UnitSpawnerTracker::AddSpawner(TDSTK.UnitSpawner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnerTracker_AddSpawner_m4B238EF28727E3CC2A4B9402811156C989E6C1AE (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* ___0_spawner, const RuntimeMethod* method) ;
// System.Void TDSTK.UnitSpawner::StartSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_StartSpawn_m8FEBC4215C228F0F5D4408ADD6652CDE8D8D3B14 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) ;
// System.Void TDSTK.UnitSpawner::Cleared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_Cleared_m31FA0F295194D1BE1708943CF9AD32DDF415B9CE (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) ;
// System.Int32 ObjectPoolManager::New(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPoolManager_New_mFAED796027F2216E14F003173F63A1670B4AE020 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, int32_t ___1_count, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<TDSTK.SubWave>::get_Item(System.Int32)
inline SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* List_1_get_Item_mEB2192FA1C5AA2AD75983DFFA7FF4336FE96AF2D (List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* (*) (List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TDSTK.SubWave>::get_Count()
inline int32_t List_1_get_Count_mE0EB1D4F388BFDF9840E5E2DD984741C39FF4080_inline (List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void TDSTK.UnitSpawner::SpawnWaveFromList(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_SpawnWaveFromList_mC2C64BD23E2182F138A9FE679EEF21C36CC7760F (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, float ___0_delay, const RuntimeMethod* method) ;
// System.Void TDSTK.UnitSpawner::SpawnGeneratedWave(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_SpawnGeneratedWave_m96F0FA265975695A8C5A30625121E0C2F9C2FA35 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, float ___0_delay, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TDSTK.UnitSpawner::SpawnFreeForm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitSpawner_SpawnFreeForm_m85E307E39AAD408D674CAA55DB38AE6125BCC45C (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TDSTK.UnitSpawner::SpawnWave(TDSTK.Wave,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitSpawner_SpawnWave_mBEB4D4975343C32578FD35AF0F3B36697EEF6AF5 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, Wave_t65332B65BB35E2A0A549B5074493644DE6159233* ___0_wave, float ___1_delay, const RuntimeMethod* method) ;
// TDSTK.Wave TDSTK.UnitSpawner::GenerateWave(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Wave_t65332B65BB35E2A0A549B5074493644DE6159233* UnitSpawner_GenerateWave_mA720C8C8D1601FAD31F9CD77AA75546D7A64169E (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, int32_t ___0_waveIDX, const RuntimeMethod* method) ;
// System.Void TDSTK.UnitSpawner/<SpawnWave>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnWaveU3Ed__43__ctor_m391215B43A69F346C44D1A7B43A19E617779D562 (U3CSpawnWaveU3Ed__43_tE26381FD24D84D23EBC5CD47D796C4525D9B5656* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void TDSTK.UnitSpawner/<SpawnSubWave>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnSubWaveU3Ed__44__ctor_mBEDF673CD216CFE84EE08BAA5400ECA551368DA4 (U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void TDSTK.UnitSpawner::AddUnit(TDSTK.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_AddUnit_m45E241AAAAEC306D4159DB5ADFE22D4F8E53A170 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* ___0_unitInstance, const RuntimeMethod* method) ;
// System.Void TDSTK.Wave::Completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wave_Completed_m73A32D30814DCB558C87A164737493F78431DF43 (Wave_t65332B65BB35E2A0A549B5074493644DE6159233* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void TDSTK.UnitSpawner/<SpawnFreeForm>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnFreeFormU3Ed__47__ctor_m923DA683E3B2E7F50D9420458FBB727583703191 (U3CSpawnFreeFormU3Ed__47_tD77592873DD7214CC46E7B46C7A14963D98F9E39* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void TDSTK.UnitSpawner/<SpawnLimitTimerRoutine>d__49::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnLimitTimerRoutineU3Ed__49__ctor_m08FBA2A6A247EBCE2F65D26B678DB8C58C193A1B (U3CSpawnLimitTimerRoutineU3Ed__49_t135813F7125DBB6F562B5F1F399FE96E87C7D61F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void TDSTK.UnitSpawner/<OverridingHitPointRoutine>d__50::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COverridingHitPointRoutineU3Ed__50__ctor_mBE4883E1E34F8F5EE642F995C5B2418702007C6D (U3COverridingHitPointRoutineU3Ed__50_tCC1895F1EEB71BDEEBAD5A8E33804A9D2B770F24* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Int32 TDSTK.TDS::GetLayerAIUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TDS_GetLayerAIUnit_mFF98246C9CC1F338B53722B272DBF32FF9BFE4E2 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TDSTK.UnitAI>()
inline UnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029* GameObject_GetComponent_TisUnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029_mB8B44FAE8A381EF96AA4CB7D0693AA7B2B6B73E1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// TDSTK.UnitPlayer TDSTK.GameControl::GetPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* GameControl_GetPlayer_mDF5E018D7B5501B285B859C824DBF36C983D6078 (const RuntimeMethod* method) ;
// System.Void TDSTK.Unit::OverrideHitPoint(System.Single,TDSTK._OverrideMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_OverrideHitPoint_m9DB341BFA3CAEE1A6F037820E1C6E85A3332B239 (Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* __this, float ___0_value, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void TDSTK.Unit/DestroyCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyCallback__ctor_mF4E8E73D4853C31C7483798D6415954C34D1F048 (DestroyCallback_t73143D8A71CE8CAFE3A22439D2EF6DFAA1E0048B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void TDSTK.Unit::SetDestroyCallback(TDSTK.Unit/DestroyCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_SetDestroyCallback_m6013F380DA3FA416C381E59534CBAEDF7D0B764B (Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* __this, DestroyCallback_t73143D8A71CE8CAFE3A22439D2EF6DFAA1E0048B* ___0_callback, const RuntimeMethod* method) ;
// System.Void TDSTK.UnitSpawnerTracker::RemoveSpawner(TDSTK.UnitSpawner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnerTracker_RemoveSpawner_m651A52597B3FEACDDF730DA1DD483356AAACCA7C (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* ___0_spawner, const RuntimeMethod* method) ;
// System.Void TDSTK.GameControl::UnitSpawnerCleared(TDSTK.UnitSpawner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_UnitSpawnerCleared_mBA128B285B47B0C34BE243B9C3D4FF1F443F8006 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* ___0_spawner, const RuntimeMethod* method) ;
// System.Void TDSTK.Wave::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wave__ctor_m10B4851DAAF340DA68A9A9A8F9ED8C11BBB8E5BC (Wave_t65332B65BB35E2A0A549B5074493644DE6159233* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
inline void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<TDSTK.Unit>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m32DAAC395D1CFF0FA67A268857C6C999BA4B6882 (List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___0_collection, method);
}
// System.Void System.Collections.Generic.List`1<TDSTK.SubWave>::.ctor()
inline void List_1__ctor_m59E8F3A2D2D6297F07A7C8BF9812545D3E0454F6 (List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void TDSTK.SubWave::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubWave__ctor_m1D892C7F7B1CDAF2D7CD15002674B083B591231A (SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TDSTK.SubWave>::Add(T)
inline void List_1_Add_m20FB1BFA8A85AA8026124052610DB0A1E7138548_inline (List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5* __this, SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5*, SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawIcon(UnityEngine.Vector3,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawIcon_m676C6510EFA7C3A425A7B42BD2745B1731A261CE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, String_t* ___1_name, bool ___2_allowScaling, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TDSTK.TDSArea::GetPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TDSArea_GetPos_m680FBDC0F0EFB2A199DAD37183B61F5C3213D5E6 (TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TDSTK.TDSArea>::.ctor()
inline void List_1__ctor_m839FAABC816FAFDEC32B5270F736E90938BEDBFE (List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TDSTK.Unit>::.ctor()
inline void List_1__ctor_mF03DFC6E86A660ECD1175DE14A893E663974275B (List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TDSTK.Wave>::.ctor()
inline void List_1__ctor_mE66BA4DF881E19595251A20BA0B1FB5F6D1B9D70 (List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TDSTK.UnitSpawner::SpawnSubWave(TDSTK.Wave,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitSpawner_SpawnSubWave_mBB958D0E72B733D2AE9AE8F314FBDB903BE9F0C1 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, Wave_t65332B65BB35E2A0A549B5074493644DE6159233* ___0_wave, int32_t ___1_subWaveIdx, const RuntimeMethod* method) ;
// UnityEngine.Quaternion TDSTK.TDSArea::GetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TDSArea_GetRotation_mA9CBCD5700A144A463850CE63437A5D87E606C2A (TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TDSTK.TDSArea::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TDSArea_GetPosition_mDA0A103EA588293E1FCA56EF7DC8DA3D1076B04E (TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* __this, const RuntimeMethod* method) ;
// TDSTK.UnitAI TDSTK.UnitSpawner::SpawnUnit(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029* UnitSpawner_SpawnUnit_mD449168E2D4F3BF63A6436F419F8633AD5B51D42 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_prefab, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_spawnPos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rot, String_t* ___3_name, const RuntimeMethod* method) ;
// System.Void TDSTK.Unit::SetWaveID(TDSTK.UnitSpawner,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_SetWaveID_m796720260340F6D875E577EBF562B8795395104E (Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* __this, UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* ___0_sp, int32_t ___1_id, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TDSTK.UnitSpawner::SpawnLimitTimerRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitSpawner_SpawnLimitTimerRoutine_m699B6F77CA283F2BF3BE67775671461755B1A609 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TDSTK.UnitSpawner::OverridingHitPointRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitSpawner_OverridingHitPointRoutine_mB923B27907B41F10B6CC74DCDF941876AAD04A68 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TDSTK.Weapon/FireCallback>::Add(T)
inline void List_1_Add_m9B56FCA69D7CF9126307924715FAA659B199ACB9_inline (List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A* __this, FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A*, FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// TDSTK.AttackStats TDSTK.AttackStats::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* AttackStats_Clone_mCA046086E98E78AB6309460138DBB95FB7ADB622 (AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* __this, const RuntimeMethod* method) ;
// TDSTK.AttackStats TDSTK.Weapon::ModifyAttackStatsToPerk(TDSTK.AttackStats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* Weapon_ModifyAttackStatsToPerk_m80CE3AB5F086A09F0CB3A60F4F135F09A43A5B38 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* ___0_aStats, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void TDSTK.Weapon::InitShootObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_InitShootObject_mD23824925B89F8E3E14743CFE6D63B59F0141369 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) ;
// System.Void TDSTK.AttackStats::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackStats_Init_m8FE3FBF0E1671D32C1E041A4993D8E484A0347B7 (AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* __this, const RuntimeMethod* method) ;
// TDSTK.Ability TDSTK.Ability_DB::CloneItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ability_t16A59DB906BC6E3C6E8F6641165B52AA1D738927* Ability_DB_CloneItem_mEF5AD2DA79219240FE48D257ECC5002B18F57F63 (int32_t ___0_ID, const RuntimeMethod* method) ;
// System.Void TDSTK.Ability::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ability_Init_m5CD39429FA798BB245FB84DB96459F11B72C205B (Ability_t16A59DB906BC6E3C6E8F6641165B52AA1D738927* __this, const RuntimeMethod* method) ;
// System.Void TDSTK.Weapon::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Reset_m2B356C8D5D95A8C381E6CD574A004F1A6C6D411B (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) ;
// System.Int32 TDSTK.Weapon::GetClipSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Weapon_GetClipSize_m18C1C8AA3B9534DB2C7970F323B9C8A3966512A9 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) ;
// System.Int32 TDSTK.Weapon::GetAmmoCap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Weapon_GetAmmoCap_mED787005D16694216447338A25703F104AD0C645 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<TDSTK.Weapon/FireCallback>::get_Item(System.Int32)
inline FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* List_1_get_Item_m83332FE97EF978E0EEDEFF62B442F13018B039F3 (List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* (*) (List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void TDSTK.Weapon/FireCallback::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireCallback_Invoke_m1257F7AF01A5FE88C4BACFDBA1D16DE1DA162DA6_inline (FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TDSTK.Weapon/FireCallback>::get_Count()
inline int32_t List_1_get_Count_mA3E1B6A1F509C442C9EFB5EABC7A6585FDEBA5B4_inline (List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Single TDSTK.Weapon::GetCoolDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Weapon_GetCoolDown_m13935333970402AA242531E1F7AFBFC21873E64B (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) ;
// System.Single TDSTK.Weapon::GetRecoilMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Weapon_GetRecoilMagnitude_mC4EA0231E78DC952DCD9D794F09E23D724F6B401 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) ;
// System.Void TDSTK.AudioManager::PlaySound(UnityEngine.AudioClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlaySound_m938384111E21E81FEAE6B70EB3BCC7E35A11130C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, bool ___1_loop, const RuntimeMethod* method) ;
// System.Boolean TDSTK.GameControl::EnableAutoReload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameControl_EnableAutoReload_m16D1079D6ECE7CA5CEE73ED60EC69B8912598DB8 (const RuntimeMethod* method) ;
// System.Boolean TDSTK.Weapon::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Weapon_Reload_mB45F8A38737F19AF51C9A2F05322ECB9EC34B432 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TDSTK.Weapon::ReloadRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Weapon_ReloadRoutine_mC54E380F0D1ACDC00BB9C6586F6C69DFF8B9A695 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) ;
// System.Void TDSTK.TDS::Reloading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TDS_Reloading_mDD8AA0FE24827814565779478AF40693BF7F9531 (const RuntimeMethod* method) ;
// System.Void TDSTK.Weapon/<ReloadRoutine>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReloadRoutineU3Ed__40__ctor_m1DDD90729BF4090FC195BFB822DAD5250ECA18AA (U3CReloadRoutineU3Ed__40_tCFE0588688ACD9641C5F7F0A6C3000F543CA966C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// System.String TDSTK.Ability::IsReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Ability_IsReady_m1B70D65EEB667798AF1122FC2D7EFAEFAF9CB6CD (Ability_t16A59DB906BC6E3C6E8F6641165B52AA1D738927* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void TDSTK.TDS::FireAltFail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TDS_FireAltFail_m3F3E985575B2A29532E8A04D67DB20F844B1C119 (String_t* ___0_msg, const RuntimeMethod* method) ;
// System.Void TDSTK.AbilityManager::LaunchAbility(TDSTK.Ability,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbilityManager_LaunchAbility_m716FC37D3416F00229718E68676379EA6687A21F (Ability_t16A59DB906BC6E3C6E8F6641165B52AA1D738927* ___0_ability, bool ___1_useCostNCD, const RuntimeMethod* method) ;
// System.Single TDSTK.PlayerPerk::GetWeaponRangeMul(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPerk_GetWeaponRangeMul_m31691C104B38FA67160FE34559F8E148887A623B (PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* __this, int32_t ___0_ID, const RuntimeMethod* method) ;
// System.Single TDSTK.PlayerPerk::GetWeaponCDMul(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPerk_GetWeaponCDMul_m7760A8F823E7A2D73BC5529A718D6AE099AE495E (PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* __this, int32_t ___0_ID, const RuntimeMethod* method) ;
// System.Single TDSTK.PlayerPerk::GetWeaponClipSizeMul(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPerk_GetWeaponClipSizeMul_mB4D0201AA21AFBEE6E612D39D304C4E8BC954378 (PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* __this, int32_t ___0_ID, const RuntimeMethod* method) ;
// System.Single TDSTK.PlayerPerk::GetWeaponAmmoCapMul(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPerk_GetWeaponAmmoCapMul_m5D3D1B73B7EF6E89FDF21D9FFE7A86AB5D7CACFE (PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* __this, int32_t ___0_ID, const RuntimeMethod* method) ;
// System.Single TDSTK.PlayerPerk::GetWeaponReloadDurMul(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPerk_GetWeaponReloadDurMul_m561444D7DBB72F9FDD3F8B6FF6C16BC694C09DB8 (PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* __this, int32_t ___0_ID, const RuntimeMethod* method) ;
// System.Single TDSTK.PlayerPerk::GetWeaponRecoilMagMul(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPerk_GetWeaponRecoilMagMul_m243381D5DD8F51254978FD9CD4E35525B579F505 (PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* __this, int32_t ___0_ID, const RuntimeMethod* method) ;
// System.Single TDSTK.PlayerPerk::GetWeaponDamageMul(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPerk_GetWeaponDamageMul_mDA5F708A0DD46B058826FEEEA51C072A41692A4C (PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* __this, int32_t ___0_ID, const RuntimeMethod* method) ;
// System.Single TDSTK.PlayerPerk::GetWeaponCritMul(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPerk_GetWeaponCritMul_m915F69BCF4941A28644F85AF1BC5A14D3EAAE84F (PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* __this, int32_t ___0_ID, const RuntimeMethod* method) ;
// System.Single TDSTK.PlayerPerk::GetWeaponCritMulMul(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPerk_GetWeaponCritMulMul_mB5AF6194564C0D8314AF90CD80D95F3EB381A427 (PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* __this, int32_t ___0_ID, const RuntimeMethod* method) ;
// System.Single TDSTK.PlayerPerk::GetWeaponAOEMul(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPerk_GetWeaponAOEMul_mC2A1416F5EAF3C21F4120E5E96F5ACFDB213D6A0 (PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* __this, int32_t ___0_ID, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TDSTK.Weapon/FireCallback>::.ctor()
inline void List_1__ctor_mD7581AA5E18EE2F72654084B85C8B6AB22034304 (List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void TDSTK.AttackStats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackStats__ctor_m77D35670607EE93434F62E36FAC6C2B48EB53BEB (AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* __this, const RuntimeMethod* method) ;
// System.Single TDSTK.Weapon::GetReloadDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Weapon_GetReloadDuration_mEB97BF4849FACEF4E1E05CC364C9AA9F01F08E35 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TDSTK.UnitPlayer/<TemporaryWeaponTimer>d__41::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTemporaryWeaponTimerU3Ed__41__ctor_mA13B61B4B53D1A29D829DBF8FA2D17306C7DFECD (U3CTemporaryWeaponTimerU3Ed__41_t26CE6BCC1A6BE65E4D4801CEF4A99D6C9A04FC71* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TDSTK.UnitPlayer/<TemporaryWeaponTimer>d__41::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTemporaryWeaponTimerU3Ed__41_System_IDisposable_Dispose_m9EC199E9039C9433B26A0E90307D95F1F1B1BC24 (U3CTemporaryWeaponTimerU3Ed__41_t26CE6BCC1A6BE65E4D4801CEF4A99D6C9A04FC71* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TDSTK.UnitPlayer/<TemporaryWeaponTimer>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTemporaryWeaponTimerU3Ed__41_MoveNext_m8BA1E65B8A5C9752B4C44C85D2C45CCA6252B7EA (U3CTemporaryWeaponTimerU3Ed__41_t26CE6BCC1A6BE65E4D4801CEF4A99D6C9A04FC71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Effect_tC238E6505E0459AA21520B0623F2AEE2CD7FF4B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_1 = __this->___U3CU3E4__this_4;
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
			goto IL_007f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Effect effect=new Effect();
		Effect_tC238E6505E0459AA21520B0623F2AEE2CD7FF4B9* L_4 = (Effect_tC238E6505E0459AA21520B0623F2AEE2CD7FF4B9*)il2cpp_codegen_object_new(Effect_tC238E6505E0459AA21520B0623F2AEE2CD7FF4B9_il2cpp_TypeInfo_var);
		Effect__ctor_mE01BF0C736BAFF01A6F2BF9E92F6AE046C54ECF9(L_4, NULL);
		__this->___U3CeffectU3E5__2_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeffectU3E5__2_5), (void*)L_4);
		// effect.ID=999;
		Effect_tC238E6505E0459AA21520B0623F2AEE2CD7FF4B9* L_5 = __this->___U3CeffectU3E5__2_5;
		((Item_tFEF641AD2E90D359103DB3FA577CA6BCBC3874A3*)L_5)->___ID_0 = ((int32_t)999);
		// effect.duration=time;
		Effect_tC238E6505E0459AA21520B0623F2AEE2CD7FF4B9* L_6 = __this->___U3CeffectU3E5__2_5;
		float L_7 = __this->___time_2;
		L_6->___duration_6 = L_7;
		// effect.icon=weapon.icon;
		Effect_tC238E6505E0459AA21520B0623F2AEE2CD7FF4B9* L_8 = __this->___U3CeffectU3E5__2_5;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_9 = __this->___weapon_3;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10 = L_9->___icon_6;
		((Item_tFEF641AD2E90D359103DB3FA577CA6BCBC3874A3*)L_8)->___icon_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Item_tFEF641AD2E90D359103DB3FA577CA6BCBC3874A3*)L_8)->___icon_2), (void*)L_10);
		// ApplyEffect(effect);
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_11 = V_1;
		Effect_tC238E6505E0459AA21520B0623F2AEE2CD7FF4B9* L_12 = __this->___U3CeffectU3E5__2_5;
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Effect_tC238E6505E0459AA21520B0623F2AEE2CD7FF4B9* >::Invoke(11 /* System.Boolean TDSTK.Unit::ApplyEffect(TDSTK.Effect) */, L_11, L_12);
		goto IL_0086;
	}

IL_006f:
	{
		// while(effect.duration>0 && weapon!=null) yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007f:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0086:
	{
		// while(effect.duration>0 && weapon!=null) yield return null;
		Effect_tC238E6505E0459AA21520B0623F2AEE2CD7FF4B9* L_14 = __this->___U3CeffectU3E5__2_5;
		float L_15 = L_14->___duration_6;
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_00a6;
		}
	}
	{
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_16 = __this->___weapon_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_17)
		{
			goto IL_006f;
		}
	}

IL_00a6:
	{
		// effect.duration=-1;
		Effect_tC238E6505E0459AA21520B0623F2AEE2CD7FF4B9* L_18 = __this->___U3CeffectU3E5__2_5;
		L_18->___duration_6 = (-1.0f);
		// if(weapon!=null) RemoveWeapon();
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_19 = __this->___weapon_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_00ca;
		}
	}
	{
		// if(weapon!=null) RemoveWeapon();
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_21 = V_1;
		UnitPlayer_RemoveWeapon_mF79877A582C5578B195C1550286A10B99356F911(L_21, NULL);
	}

IL_00ca:
	{
		// }
		return (bool)0;
	}
}
// System.Object TDSTK.UnitPlayer/<TemporaryWeaponTimer>d__41::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTemporaryWeaponTimerU3Ed__41_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m89ADCE07E077F054A50B4FBCCC7168E154F65BB5 (U3CTemporaryWeaponTimerU3Ed__41_t26CE6BCC1A6BE65E4D4801CEF4A99D6C9A04FC71* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TDSTK.UnitPlayer/<TemporaryWeaponTimer>d__41::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTemporaryWeaponTimerU3Ed__41_System_Collections_IEnumerator_Reset_mCEFC8382CE253C153A7013080F9030F4A22C6DA7 (U3CTemporaryWeaponTimerU3Ed__41_t26CE6BCC1A6BE65E4D4801CEF4A99D6C9A04FC71* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTemporaryWeaponTimerU3Ed__41_System_Collections_IEnumerator_Reset_mCEFC8382CE253C153A7013080F9030F4A22C6DA7_RuntimeMethod_var)));
	}
}
// System.Object TDSTK.UnitPlayer/<TemporaryWeaponTimer>d__41::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTemporaryWeaponTimerU3Ed__41_System_Collections_IEnumerator_get_Current_mB7068E5EADB1877D59FE54D50916E2A67CD620AA (U3CTemporaryWeaponTimerU3Ed__41_t26CE6BCC1A6BE65E4D4801CEF4A99D6C9A04FC71* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void TDSTK.UnitPlayer/<ShootRoutine>d__60::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootRoutineU3Ed__60__ctor_mDD40B9686AF8C7DF53D6F9C41A5EBA1085965994 (U3CShootRoutineU3Ed__60_t711A3ED8FDAB58DA80A7908D2F8E07CB46BF85B5* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TDSTK.UnitPlayer/<ShootRoutine>d__60::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootRoutineU3Ed__60_System_IDisposable_Dispose_mCE4DD57D57FA92300D82766A01018F42C74ECF5B (U3CShootRoutineU3Ed__60_t711A3ED8FDAB58DA80A7908D2F8E07CB46BF85B5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TDSTK.UnitPlayer/<ShootRoutine>d__60::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShootRoutineU3Ed__60_MoveNext_m21CFDEE4E8890B07028C3C0F9698258DF888F7BD (U3CShootRoutineU3Ed__60_t711A3ED8FDAB58DA80A7908D2F8E07CB46BF85B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttackInstance_tF5DE0CD786CADF8A4414F8F07F4447A154BA9682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05_m50591508D518473D54B5E5155C8BE461AA359AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5AC41EF92B89686C206EE7693C51F94FDE3CF155_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* V_1 = NULL;
	AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* V_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_9;
	memset((&V_9), 0, sizeof(V_9));
	ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	U3CShootRoutineU3Ed__60_t711A3ED8FDAB58DA80A7908D2F8E07CB46BF85B5* G_B9_0 = NULL;
	U3CShootRoutineU3Ed__60_t711A3ED8FDAB58DA80A7908D2F8E07CB46BF85B5* G_B8_0 = NULL;
	float G_B10_0 = 0.0f;
	U3CShootRoutineU3Ed__60_t711A3ED8FDAB58DA80A7908D2F8E07CB46BF85B5* G_B10_1 = NULL;
	U3CShootRoutineU3Ed__60_t711A3ED8FDAB58DA80A7908D2F8E07CB46BF85B5* G_B12_0 = NULL;
	U3CShootRoutineU3Ed__60_t711A3ED8FDAB58DA80A7908D2F8E07CB46BF85B5* G_B11_0 = NULL;
	float G_B13_0 = 0.0f;
	U3CShootRoutineU3Ed__60_t711A3ED8FDAB58DA80A7908D2F8E07CB46BF85B5* G_B13_1 = NULL;
	int32_t G_B17_0 = 0;
	float G_B19_0 = 0.0f;
	UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* G_B19_1 = NULL;
	float G_B18_0 = 0.0f;
	UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* G_B18_1 = NULL;
	float G_B20_0 = 0.0f;
	float G_B20_1 = 0.0f;
	UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* G_B20_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_038d;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(uAnimation!=null) uAnimation.AttackMelee();
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_4 = V_1;
		UnitAnimation_t1B983CB3533B3A96CCEDB441E048E35E96F3771A* L_5 = ((Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B*)L_4)->___uAnimation_65;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		// if(uAnimation!=null) uAnimation.AttackMelee();
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_7 = V_1;
		UnitAnimation_t1B983CB3533B3A96CCEDB441E048E35E96F3771A* L_8 = ((Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B*)L_7)->___uAnimation_65;
		UnitAnimation_AttackMelee_m936318E801118A013EA4AA0C48ED1F905A579675(L_8, NULL);
	}

IL_003a:
	{
		// AttackStats aStats=ModifyAttackStatsToLevel(weaponList[weaponID].GetRuntimeAttackStats());
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_9 = V_1;
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_10 = V_1;
		List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315* L_11 = L_10->___weaponList_77;
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_12 = V_1;
		int32_t L_13 = L_12->___weaponID_78;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_14;
		L_14 = List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF(L_11, L_13, List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF_RuntimeMethod_var);
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_15;
		L_15 = Weapon_GetRuntimeAttackStats_m40F2F2859E15A608B4464EA5EFCC08414F1B726C(L_14, NULL);
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_16;
		L_16 = UnitPlayer_ModifyAttackStatsToLevel_m72FAC2C117CAD7732986ECECD75EF64F7670085F(L_9, L_15, NULL);
		V_2 = L_16;
		// aStats=ModifyAttackStatsToExistingEffect(aStats);
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_17 = V_1;
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_18 = V_2;
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_19;
		L_19 = Unit_ModifyAttackStatsToExistingEffect_mCDAD40CB6F1AC9DFA4976E39374A961BCDBE8EBB(L_17, L_18, NULL);
		V_2 = L_19;
		// AttackInstance aInstance=new AttackInstance(this, aStats);
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_20 = V_1;
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_21 = V_2;
		AttackInstance_tF5DE0CD786CADF8A4414F8F07F4447A154BA9682* L_22 = (AttackInstance_tF5DE0CD786CADF8A4414F8F07F4447A154BA9682*)il2cpp_codegen_object_new(AttackInstance_tF5DE0CD786CADF8A4414F8F07F4447A154BA9682_il2cpp_TypeInfo_var);
		AttackInstance__ctor_m5E4F40B00BE1168943911D568AFDE4B829745A67(L_22, L_20, L_21, NULL);
		__this->___U3CaInstanceU3E5__2_4 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaInstanceU3E5__2_4), (void*)L_22);
		// int weapID=weaponID;    //to prevent weapon switch and state change while delay and firing multiple so
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_23 = V_1;
		int32_t L_24 = L_23->___weaponID_78;
		__this->___U3CweapIDU3E5__3_5 = L_24;
		// int spread=weaponList[weapID].spread;
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_25 = V_1;
		List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315* L_26 = L_25->___weaponList_77;
		int32_t L_27 = __this->___U3CweapIDU3E5__3_5;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_28;
		L_28 = List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF(L_26, L_27, List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF_RuntimeMethod_var);
		int32_t L_29 = L_28->___spread_27;
		__this->___U3CspreadU3E5__4_6 = L_29;
		// if(spread>1){
		int32_t L_30 = __this->___U3CspreadU3E5__4_6;
		if ((((int32_t)L_30) <= ((int32_t)1)))
		{
			goto IL_00d9;
		}
	}
	{
		// aInstance.aStats.damageMin/=spread;
		AttackInstance_tF5DE0CD786CADF8A4414F8F07F4447A154BA9682* L_31 = __this->___U3CaInstanceU3E5__2_4;
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_32 = L_31->___aStats_3;
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_33 = L_32;
		float L_34 = L_33->___damageMin_1;
		int32_t L_35 = __this->___U3CspreadU3E5__4_6;
		L_33->___damageMin_1 = ((float)(L_34/((float)L_35)));
		// aInstance.aStats.damageMax/=spread;
		AttackInstance_tF5DE0CD786CADF8A4414F8F07F4447A154BA9682* L_36 = __this->___U3CaInstanceU3E5__2_4;
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_37 = L_36->___aStats_3;
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_38 = L_37;
		float L_39 = L_38->___damageMax_2;
		int32_t L_40 = __this->___U3CspreadU3E5__4_6;
		L_38->___damageMax_2 = ((float)(L_39/((float)L_40)));
	}

IL_00d9:
	{
		// float startAngle=spread>1 ? -weaponList[weapID].spreadAngle/2f : 0 ;
		int32_t L_41 = __this->___U3CspreadU3E5__4_6;
		G_B8_0 = __this;
		if ((((int32_t)L_41) > ((int32_t)1)))
		{
			G_B9_0 = __this;
			goto IL_00ea;
		}
	}
	{
		G_B10_0 = (0.0f);
		G_B10_1 = G_B8_0;
		goto IL_0107;
	}

IL_00ea:
	{
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_42 = V_1;
		List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315* L_43 = L_42->___weaponList_77;
		int32_t L_44 = __this->___U3CweapIDU3E5__3_5;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_45;
		L_45 = List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF(L_43, L_44, List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF_RuntimeMethod_var);
		float L_46 = L_45->___spreadAngle_28;
		G_B10_0 = ((float)(((-L_46))/(2.0f)));
		G_B10_1 = G_B9_0;
	}

IL_0107:
	{
		G_B10_1->___U3CstartAngleU3E5__5_7 = G_B10_0;
		// float angleDelta=spread>1 ? weaponList[weapID].spreadAngle/(spread-1) : 0 ;
		int32_t L_47 = __this->___U3CspreadU3E5__4_6;
		G_B11_0 = __this;
		if ((((int32_t)L_47) > ((int32_t)1)))
		{
			G_B12_0 = __this;
			goto IL_011d;
		}
	}
	{
		G_B13_0 = (0.0f);
		G_B13_1 = G_B11_0;
		goto IL_013d;
	}

IL_011d:
	{
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_48 = V_1;
		List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315* L_49 = L_48->___weaponList_77;
		int32_t L_50 = __this->___U3CweapIDU3E5__3_5;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_51;
		L_51 = List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF(L_49, L_50, List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF_RuntimeMethod_var);
		float L_52 = L_51->___spreadAngle_28;
		int32_t L_53 = __this->___U3CspreadU3E5__4_6;
		G_B13_0 = ((float)(L_52/((float)((int32_t)il2cpp_codegen_subtract(L_53, 1)))));
		G_B13_1 = G_B12_0;
	}

IL_013d:
	{
		G_B13_1->___U3CangleDeltaU3E5__6_8 = G_B13_0;
		// List<Collider> soColliderList=new List<Collider>();    //colliders of all the so fired, used to tell each so to ignore each other
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_54 = (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*)il2cpp_codegen_object_new(List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE(L_54, List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		__this->___U3CsoColliderListU3E5__7_9 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsoColliderListU3E5__7_9), (void*)L_54);
		// for(int i=0; i<weaponList[weapID].shootPointList.Count; i++){
		__this->___U3CiU3E5__8_10 = 0;
		goto IL_03b9;
	}

IL_0159:
	{
		// Transform shootPoint=weaponList[weapID].shootPointList[i];
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_55 = V_1;
		List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315* L_56 = L_55->___weaponList_77;
		int32_t L_57 = __this->___U3CweapIDU3E5__3_5;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_58;
		L_58 = List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF(L_56, L_57, List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF_RuntimeMethod_var);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_59 = L_58->___shootPointList_10;
		int32_t L_60 = __this->___U3CiU3E5__8_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_59, L_60, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		V_3 = L_61;
		// float recoilSign=(Random.value<recoilSignTH ? -1 : 1);
		float L_62;
		L_62 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_63 = V_1;
		float L_64 = L_63->___recoilSignTH_109;
		if ((((float)L_62) < ((float)L_64)))
		{
			goto IL_018b;
		}
	}
	{
		G_B17_0 = 1;
		goto IL_018c;
	}

IL_018b:
	{
		G_B17_0 = (-1);
	}

IL_018c:
	{
		V_4 = ((float)G_B17_0);
		// recoilSignTH=Mathf.Clamp(recoilSignTH+(recoilSign>0 ? 0.25f : -0.25f), 0, 1);
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_65 = V_1;
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_66 = V_1;
		float L_67 = L_66->___recoilSignTH_109;
		float L_68 = V_4;
		G_B18_0 = L_67;
		G_B18_1 = L_65;
		if ((((float)L_68) > ((float)(0.0f))))
		{
			G_B19_0 = L_67;
			G_B19_1 = L_65;
			goto IL_01a6;
		}
	}
	{
		G_B20_0 = (-0.25f);
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		goto IL_01ab;
	}

IL_01a6:
	{
		G_B20_0 = (0.25f);
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
	}

IL_01ab:
	{
		float L_69;
		L_69 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_add(G_B20_1, G_B20_0)), (0.0f), (1.0f), NULL);
		G_B20_2->___recoilSignTH_109 = L_69;
		// float recoilValue=recoilSign*Random.Range(0.1f, 1f)*GetRecoil();
		float L_70 = V_4;
		float L_71;
		L_71 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.100000001f), (1.0f), NULL);
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_72 = V_1;
		float L_73;
		L_73 = UnitPlayer_GetRecoil_mFCD52FA07D0384ECE9A19BD65640432B575ACDE9(L_72, NULL);
		V_5 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_70, L_71)), L_73));
		// Quaternion baseShootRot=shootPoint.rotation*Quaternion.Euler(0, recoilValue, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_75;
		L_75 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_74, NULL);
		float L_76 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_77;
		L_77 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_76, (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_78;
		L_78 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_75, L_77, NULL);
		V_6 = L_78;
		// for(int m=0; m<Mathf.Max(1, spread); m++){
		V_7 = 0;
		goto IL_0318;
	}

IL_0201:
	{
		// Vector3 shootPos=shootPoint.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_79, NULL);
		V_8 = L_80;
		// if(spread>1) shootPos=shootPoint.TransformPoint(new Vector3(0, 0, Random.Range(-1.5f, 1.5f)));
		int32_t L_81 = __this->___U3CspreadU3E5__4_6;
		if ((((int32_t)L_81) <= ((int32_t)1)))
		{
			goto IL_0238;
		}
	}
	{
		// if(spread>1) shootPos=shootPoint.TransformPoint(new Vector3(0, 0, Random.Range(-1.5f, 1.5f)));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82 = V_3;
		float L_83;
		L_83 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-1.5f), (1.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		memset((&L_84), 0, sizeof(L_84));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_84), (0.0f), (0.0f), L_83, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_82, L_84, NULL);
		V_8 = L_85;
	}

IL_0238:
	{
		// Quaternion shootRot=baseShootRot*Quaternion.Euler(0, startAngle+(m*angleDelta), 0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_86 = V_6;
		float L_87 = __this->___U3CstartAngleU3E5__5_7;
		int32_t L_88 = V_7;
		float L_89 = __this->___U3CangleDeltaU3E5__6_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_90;
		L_90 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), ((float)il2cpp_codegen_add(L_87, ((float)il2cpp_codegen_multiply(((float)L_88), L_89)))), (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_91;
		L_91 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_86, L_90, NULL);
		V_9 = L_91;
		// GameObject soObj=ObjectPoolManager.Spawn(weaponList[weapID].shootObject, shootPos, shootRot);
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_92 = V_1;
		List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315* L_93 = L_92->___weaponList_77;
		int32_t L_94 = __this->___U3CweapIDU3E5__3_5;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_95;
		L_95 = List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF(L_93, L_94, List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96 = L_95->___shootObject_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_98 = V_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_99;
		L_99 = ObjectPoolManager_Spawn_mBB5C03F297CAD60FA89CC3C90C2C7EA18CCF23B7(L_96, L_97, L_98, (-1.0f), NULL);
		// ShootObject soInstance=soObj.GetComponent<ShootObject>();
		ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05* L_100;
		L_100 = GameObject_GetComponent_TisShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05_m50591508D518473D54B5E5155C8BE461AA359AC7(L_99, GameObject_GetComponent_TisShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05_m50591508D518473D54B5E5155C8BE461AA359AC7_RuntimeMethod_var);
		V_10 = L_100;
		// soInstance.IgnoreCollider(GetCollider());
		ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05* L_101 = V_10;
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_102 = V_1;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_103;
		L_103 = Unit_GetCollider_m062EED8CAFF74E4A434637A467B81C391B2B8578_inline(L_102, NULL);
		ShootObject_IgnoreCollider_m77586A7E55AF7764530287E7014E6BDBD71F18B6(L_101, L_103, NULL);
		// for(int n=0; n<soColliderList.Count; n++) soInstance.IgnoreCollider(soColliderList[n]);
		V_11 = 0;
		goto IL_02b8;
	}

IL_029e:
	{
		// for(int n=0; n<soColliderList.Count; n++) soInstance.IgnoreCollider(soColliderList[n]);
		ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05* L_104 = V_10;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_105 = __this->___U3CsoColliderListU3E5__7_9;
		int32_t L_106 = V_11;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_107;
		L_107 = List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587(L_105, L_106, List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		ShootObject_IgnoreCollider_m77586A7E55AF7764530287E7014E6BDBD71F18B6(L_104, L_107, NULL);
		// for(int n=0; n<soColliderList.Count; n++) soInstance.IgnoreCollider(soColliderList[n]);
		int32_t L_108 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_108, 1));
	}

IL_02b8:
	{
		// for(int n=0; n<soColliderList.Count; n++) soInstance.IgnoreCollider(soColliderList[n]);
		int32_t L_109 = V_11;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_110 = __this->___U3CsoColliderListU3E5__7_9;
		int32_t L_111;
		L_111 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_110, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		if ((((int32_t)L_109) < ((int32_t)L_111)))
		{
			goto IL_029e;
		}
	}
	{
		// if(soInstance.GetCollider()!=null) soColliderList.Add(soInstance.GetCollider());
		ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05* L_112 = V_10;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_113;
		L_113 = ShootObject_GetCollider_m3AE22E8F5A18ABEBE2E4EC6AE9A0C33511448871_inline(L_112, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_114;
		L_114 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_113, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_114)
		{
			goto IL_02e8;
		}
	}
	{
		// if(soInstance.GetCollider()!=null) soColliderList.Add(soInstance.GetCollider());
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_115 = __this->___U3CsoColliderListU3E5__7_9;
		ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05* L_116 = V_10;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_117;
		L_117 = ShootObject_GetCollider_m3AE22E8F5A18ABEBE2E4EC6AE9A0C33511448871_inline(L_116, NULL);
		List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_inline(L_115, L_117, List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_RuntimeMethod_var);
	}

IL_02e8:
	{
		// soInstance.Shoot(thisObj.layer, GetRange(), shootPoint, aInstance.Clone(), aimInfo);
		ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05* L_118 = V_10;
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_119 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_120 = ((Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B*)L_119)->___thisObj_6;
		int32_t L_121;
		L_121 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_120, NULL);
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_122 = V_1;
		float L_123;
		L_123 = VirtualFuncInvoker0< float >::Invoke(4 /* System.Single TDSTK.Unit::GetRange() */, L_122);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_124 = V_3;
		AttackInstance_tF5DE0CD786CADF8A4414F8F07F4447A154BA9682* L_125 = __this->___U3CaInstanceU3E5__2_4;
		AttackInstance_tF5DE0CD786CADF8A4414F8F07F4447A154BA9682* L_126;
		L_126 = AttackInstance_Clone_mE19A113722097B5F13F9BD91078069C1461652F1(L_125, NULL);
		AimInfo_tA62E8374FF9EAD82BA84AE823D6CFE9B28F0902A* L_127 = __this->___aimInfo_3;
		ShootObject_Shoot_m04DCA160937260C85E66148BD293CD846F06BE2E(L_118, L_121, L_123, L_124, L_126, L_127, NULL);
		// for(int m=0; m<Mathf.Max(1, spread); m++){
		int32_t L_128 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_128, 1));
	}

IL_0318:
	{
		// for(int m=0; m<Mathf.Max(1, spread); m++){
		int32_t L_129 = V_7;
		int32_t L_130 = __this->___U3CspreadU3E5__4_6;
		int32_t L_131;
		L_131 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(1, L_130, NULL);
		if ((((int32_t)L_129) < ((int32_t)L_131)))
		{
			goto IL_0201;
		}
	}
	{
		// TDS.CameraShake(weaponList[weapID].recoilCamShake);
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_132 = V_1;
		List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315* L_133 = L_132->___weaponList_77;
		int32_t L_134 = __this->___U3CweapIDU3E5__3_5;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_135;
		L_135 = List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF(L_133, L_134, List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF_RuntimeMethod_var);
		float L_136 = L_135->___recoilCamShake_26;
		TDS_CameraShake_mEF9407E7F5C0470432FC32E24B9D89BD23D6978E(L_136, NULL);
		// if(weaponList[weapID].shootPointDelay>0) yield return new WaitForSeconds(weaponList[weapID].shootPointDelay);
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_137 = V_1;
		List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315* L_138 = L_137->___weaponList_77;
		int32_t L_139 = __this->___U3CweapIDU3E5__3_5;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_140;
		L_140 = List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF(L_138, L_139, List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF_RuntimeMethod_var);
		float L_141 = L_140->___shootPointDelay_11;
		if ((!(((float)L_141) > ((float)(0.0f)))))
		{
			goto IL_0394;
		}
	}
	{
		// if(weaponList[weapID].shootPointDelay>0) yield return new WaitForSeconds(weaponList[weapID].shootPointDelay);
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_142 = V_1;
		List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315* L_143 = L_142->___weaponList_77;
		int32_t L_144 = __this->___U3CweapIDU3E5__3_5;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_145;
		L_145 = List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF(L_143, L_144, List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF_RuntimeMethod_var);
		float L_146 = L_145->___shootPointDelay_11;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_147 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_147, L_146, NULL);
		__this->___U3CU3E2__current_1 = L_147;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_147);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_038d:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0394:
	{
		// if(weapID>=weaponList.Count) break;
		int32_t L_148 = __this->___U3CweapIDU3E5__3_5;
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_149 = V_1;
		List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315* L_150 = L_149->___weaponList_77;
		int32_t L_151;
		L_151 = List_1_get_Count_m5AC41EF92B89686C206EE7693C51F94FDE3CF155_inline(L_150, List_1_get_Count_m5AC41EF92B89686C206EE7693C51F94FDE3CF155_RuntimeMethod_var);
		if ((((int32_t)L_148) >= ((int32_t)L_151)))
		{
			goto IL_03df;
		}
	}
	{
		// for(int i=0; i<weaponList[weapID].shootPointList.Count; i++){
		int32_t L_152 = __this->___U3CiU3E5__8_10;
		V_12 = L_152;
		int32_t L_153 = V_12;
		__this->___U3CiU3E5__8_10 = ((int32_t)il2cpp_codegen_add(L_153, 1));
	}

IL_03b9:
	{
		// for(int i=0; i<weaponList[weapID].shootPointList.Count; i++){
		int32_t L_154 = __this->___U3CiU3E5__8_10;
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_155 = V_1;
		List_1_t9B6AEA7FC5E5E86809E100AC907A3B789E14C315* L_156 = L_155->___weaponList_77;
		int32_t L_157 = __this->___U3CweapIDU3E5__3_5;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_158;
		L_158 = List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF(L_156, L_157, List_1_get_Item_m38724436796A7BC69DB88D8B8EE9FF7C8BFDABEF_RuntimeMethod_var);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_159 = L_158->___shootPointList_10;
		int32_t L_160;
		L_160 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_159, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_154) < ((int32_t)L_160)))
		{
			goto IL_0159;
		}
	}

IL_03df:
	{
		// }
		return (bool)0;
	}
}
// System.Object TDSTK.UnitPlayer/<ShootRoutine>d__60::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShootRoutineU3Ed__60_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m64AC4D3A460514E88DB31545C22C1263143DB7A3 (U3CShootRoutineU3Ed__60_t711A3ED8FDAB58DA80A7908D2F8E07CB46BF85B5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TDSTK.UnitPlayer/<ShootRoutine>d__60::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootRoutineU3Ed__60_System_Collections_IEnumerator_Reset_mD69A89EF83A24B255D35F45178B99F186756061B (U3CShootRoutineU3Ed__60_t711A3ED8FDAB58DA80A7908D2F8E07CB46BF85B5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShootRoutineU3Ed__60_System_Collections_IEnumerator_Reset_mD69A89EF83A24B255D35F45178B99F186756061B_RuntimeMethod_var)));
	}
}
// System.Object TDSTK.UnitPlayer/<ShootRoutine>d__60::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShootRoutineU3Ed__60_System_Collections_IEnumerator_get_Current_mC6709DA5F21E44DEC21BC60331A5DEE27A4A90CA (U3CShootRoutineU3Ed__60_t711A3ED8FDAB58DA80A7908D2F8E07CB46BF85B5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void TDSTK.UnitPlayer/<_Dash>d__135::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_DashU3Ed__135__ctor_m5E61C0B9AA6A1D2CDD1C2C51D8306452AC6D30BB (U3C_DashU3Ed__135_t3345FA3F735968DE5005206CA89A60773C71192D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TDSTK.UnitPlayer/<_Dash>d__135::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_DashU3Ed__135_System_IDisposable_Dispose_mE91619F37910A7C74BDDB12FE33824C825B4871C (U3C_DashU3Ed__135_t3345FA3F735968DE5005206CA89A60773C71192D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TDSTK.UnitPlayer/<_Dash>d__135::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_DashU3Ed__135_MoveNext_m4B884A073072C86BBAF95D8D2D1DDF3AADD32D28 (U3C_DashU3Ed__135_t3345FA3F735968DE5005206CA89A60773C71192D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00c4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// dashing=true;
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_4 = V_1;
		L_4->___dashing_118 = (bool)1;
		// Vector3 startPos=thisT.position;
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_5 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ((Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B*)L_5)->___thisT_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		__this->___U3CstartPosU3E5__2_5 = L_7;
		// Vector3 tgtPos=thisT.TransformPoint(Vector3.forward*range);
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_8 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ((Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B*)L_8)->___thisT_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_11 = __this->___range_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_9, L_12, NULL);
		__this->___U3CtgtPosU3E5__3_6 = L_13;
		// float step=1f/dur;
		float L_14 = __this->___dur_4;
		__this->___U3CstepU3E5__4_7 = ((float)((1.0f)/L_14));
		// float duration=0;
		__this->___U3CdurationU3E5__5_8 = (0.0f);
		goto IL_00cb;
	}

IL_0079:
	{
		// thisT.position=Vector3.Lerp(startPos, tgtPos, duration);
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_15 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ((Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B*)L_15)->___thisT_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___U3CstartPosU3E5__2_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___U3CtgtPosU3E5__3_6;
		float L_19 = __this->___U3CdurationU3E5__5_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_17, L_18, L_19, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_20, NULL);
		// duration+=Time.deltaTime*step;
		float L_21 = __this->___U3CdurationU3E5__5_8;
		float L_22;
		L_22 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_23 = __this->___U3CstepU3E5__4_7;
		__this->___U3CdurationU3E5__5_8 = ((float)il2cpp_codegen_add(L_21, ((float)il2cpp_codegen_multiply(L_22, L_23))));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00c4:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00cb:
	{
		// while(duration<1){
		float L_24 = __this->___U3CdurationU3E5__5_8;
		if ((((float)L_24) < ((float)(1.0f))))
		{
			goto IL_0079;
		}
	}
	{
		// thisT.position=tgtPos;
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_25 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = ((Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B*)L_25)->___thisT_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___U3CtgtPosU3E5__3_6;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_26, L_27, NULL);
		// dashing=false;
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_28 = V_1;
		L_28->___dashing_118 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object TDSTK.UnitPlayer/<_Dash>d__135::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3C_DashU3Ed__135_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD0C1F9708AA2F0FABAF3E2F7F00E015EF8A6F72F (U3C_DashU3Ed__135_t3345FA3F735968DE5005206CA89A60773C71192D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TDSTK.UnitPlayer/<_Dash>d__135::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_DashU3Ed__135_System_Collections_IEnumerator_Reset_mC9BA6E3A03541377F0C765F27AEF5CB22B170891 (U3C_DashU3Ed__135_t3345FA3F735968DE5005206CA89A60773C71192D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_DashU3Ed__135_System_Collections_IEnumerator_Reset_mC9BA6E3A03541377F0C765F27AEF5CB22B170891_RuntimeMethod_var)));
	}
}
// System.Object TDSTK.UnitPlayer/<_Dash>d__135::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3C_DashU3Ed__135_System_Collections_IEnumerator_get_Current_mCB8CDB5DE7373E512B3FEA17C5C47DC5BD86F707 (U3C_DashU3Ed__135_t3345FA3F735968DE5005206CA89A60773C71192D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void TDSTK.UnitSpawner::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_Awake_m4B3C7C0AF0A845253FB863D505EA2A8856B142F5 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C_mC2E6B97BDA162EDD0A1BB9EA56502C3BD545A30D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2EE0AFBF3DBAED3C19306EA2B445B88B948F4F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m19CE75ADD1F0CFD72B2CC2819362CFE36C37E1BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m722E5A7E24C6F7853217A20B61BB798841BD44A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m610F3504AA5B2BEB809F8E2E9A658C13E78EA565_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA99D4AC9C67178CEA8EBFD419441FB75B0393CAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1DC2EDDA2684D3FE9DAB38AA40DC371409C03130_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EBB7C807401ACF2EDF06EEC33277AEF70688AF8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// thisT=transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___thisT_39 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisT_39), (void*)L_0);
		// for(int i=0; i<waveList.Count; i++) waveList[i].waveID=i;
		V_0 = 0;
		goto IL_0026;
	}

IL_0010:
	{
		// for(int i=0; i<waveList.Count; i++) waveList[i].waveID=i;
		List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* L_1 = __this->___waveList_21;
		int32_t L_2 = V_0;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_3;
		L_3 = List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F(L_1, L_2, List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F_RuntimeMethod_var);
		int32_t L_4 = V_0;
		L_3->___waveID_0 = L_4;
		// for(int i=0; i<waveList.Count; i++) waveList[i].waveID=i;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0026:
	{
		// for(int i=0; i<waveList.Count; i++) waveList[i].waveID=i;
		int32_t L_6 = V_0;
		List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* L_7 = __this->___waveList_21;
		int32_t L_8;
		L_8 = List_1_get_Count_mA99D4AC9C67178CEA8EBFD419441FB75B0393CAB_inline(L_7, List_1_get_Count_mA99D4AC9C67178CEA8EBFD419441FB75B0393CAB_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0010;
		}
	}
	{
		// for(int i=0; i<spawnAreaList.Count; i++){
		V_1 = 0;
		goto IL_0060;
	}

IL_0038:
	{
		// if(spawnAreaList[i]==null){
		List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* L_9 = __this->___spawnAreaList_8;
		int32_t L_10 = V_1;
		TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* L_11;
		L_11 = List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874(L_9, L_10, List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// spawnAreaList.RemoveAt(i); i-=1;
		List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* L_13 = __this->___spawnAreaList_8;
		int32_t L_14 = V_1;
		List_1_RemoveAt_m19CE75ADD1F0CFD72B2CC2819362CFE36C37E1BA(L_13, L_14, List_1_RemoveAt_m19CE75ADD1F0CFD72B2CC2819362CFE36C37E1BA_RuntimeMethod_var);
		// spawnAreaList.RemoveAt(i); i-=1;
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_005c:
	{
		// for(int i=0; i<spawnAreaList.Count; i++){
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0060:
	{
		// for(int i=0; i<spawnAreaList.Count; i++){
		int32_t L_17 = V_1;
		List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* L_18 = __this->___spawnAreaList_8;
		int32_t L_19;
		L_19 = List_1_get_Count_m610F3504AA5B2BEB809F8E2E9A658C13E78EA565_inline(L_18, List_1_get_Count_m610F3504AA5B2BEB809F8E2E9A658C13E78EA565_RuntimeMethod_var);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0038;
		}
	}
	{
		// for(int i=0; i<spawnUnitList.Count; i++){
		V_2 = 0;
		goto IL_009a;
	}

IL_0072:
	{
		// if(spawnUnitList[i]==null){
		List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* L_20 = __this->___spawnUnitList_12;
		int32_t L_21 = V_2;
		Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* L_22;
		L_22 = List_1_get_Item_m1DC2EDDA2684D3FE9DAB38AA40DC371409C03130(L_20, L_21, List_1_get_Item_m1DC2EDDA2684D3FE9DAB38AA40DC371409C03130_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		// spawnUnitList.RemoveAt(i); i-=1;
		List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* L_24 = __this->___spawnUnitList_12;
		int32_t L_25 = V_2;
		List_1_RemoveAt_m722E5A7E24C6F7853217A20B61BB798841BD44A7(L_24, L_25, List_1_RemoveAt_m722E5A7E24C6F7853217A20B61BB798841BD44A7_RuntimeMethod_var);
		// spawnUnitList.RemoveAt(i); i-=1;
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
	}

IL_0096:
	{
		// for(int i=0; i<spawnUnitList.Count; i++){
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_009a:
	{
		// for(int i=0; i<spawnUnitList.Count; i++){
		int32_t L_28 = V_2;
		List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* L_29 = __this->___spawnUnitList_12;
		int32_t L_30;
		L_30 = List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_inline(L_29, List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0072;
		}
	}
	{
		// if(spawnAreaList.Count==0){
		List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* L_31 = __this->___spawnAreaList_8;
		int32_t L_32;
		L_32 = List_1_get_Count_m610F3504AA5B2BEB809F8E2E9A658C13E78EA565_inline(L_31, List_1_get_Count_m610F3504AA5B2BEB809F8E2E9A658C13E78EA565_RuntimeMethod_var);
		if (L_32)
		{
			goto IL_00cb;
		}
	}
	{
		// spawnAreaList.Add(gameObject.AddComponent<TDSArea>());
		List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* L_33 = __this->___spawnAreaList_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* L_35;
		L_35 = GameObject_AddComponent_TisTDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C_mC2E6B97BDA162EDD0A1BB9EA56502C3BD545A30D(L_34, GameObject_AddComponent_TisTDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C_mC2E6B97BDA162EDD0A1BB9EA56502C3BD545A30D_RuntimeMethod_var);
		List_1_Add_mE2EE0AFBF3DBAED3C19306EA2B445B88B948F4F5_inline(L_33, L_35, List_1_Add_mE2EE0AFBF3DBAED3C19306EA2B445B88B948F4F5_RuntimeMethod_var);
	}

IL_00cb:
	{
		// if(spawnMode==_SpawnMode.FreeForm || (spawnMode==_SpawnMode.WaveBased && endlessWave)){
		int32_t L_36 = __this->___spawnMode_4;
		if ((((int32_t)L_36) == ((int32_t)1)))
		{
			goto IL_00e4;
		}
	}
	{
		int32_t L_37 = __this->___spawnMode_4;
		if (L_37)
		{
			goto IL_0101;
		}
	}
	{
		bool L_38 = __this->___endlessWave_20;
		if (!L_38)
		{
			goto IL_0101;
		}
	}

IL_00e4:
	{
		// if(spawnUnitList.Count==0) Debug.LogWarning("No unit has been specified for unit spawner", thisT);
		List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* L_39 = __this->___spawnUnitList_12;
		int32_t L_40;
		L_40 = List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_inline(L_39, List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_RuntimeMethod_var);
		if (L_40)
		{
			goto IL_0101;
		}
	}
	{
		// if(spawnUnitList.Count==0) Debug.LogWarning("No unit has been specified for unit spawner", thisT);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = __this->___thisT_39;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteral9EBB7C807401ACF2EDF06EEC33277AEF70688AF8, L_41, NULL);
	}

IL_0101:
	{
		// }
		return;
	}
}
// System.Void TDSTK.UnitSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_Start_mA243F185D5426B9C744E66BD9D1C15917F41A7E6 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitSpawnerTracker_t3956012F9FA946DFE2AA57A8C5CBA7D345FBFAD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InitObjectPool();
		UnitSpawner_InitObjectPool_m73061A8CCB0155B7B35B03424D7130B8D900F330(__this, NULL);
		// UnitSpawnerTracker.AddSpawner(this);
		il2cpp_codegen_runtime_class_init_inline(UnitSpawnerTracker_t3956012F9FA946DFE2AA57A8C5CBA7D345FBFAD4_il2cpp_TypeInfo_var);
		UnitSpawnerTracker_AddSpawner_m4B238EF28727E3CC2A4B9402811156C989E6C1AE(__this, NULL);
		// if(overrideHitPoint) spawnHP=startingHitPoint;
		bool L_0 = __this->___overrideHitPoint_13;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// if(overrideHitPoint) spawnHP=startingHitPoint;
		float L_1 = __this->___startingHitPoint_15;
		__this->___spawnHP_18 = L_1;
	}

IL_0020:
	{
		// if(spawnUponStart) StartSpawn();
		bool L_2 = __this->___spawnUponStart_5;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// if(spawnUponStart) StartSpawn();
		UnitSpawner_StartSpawn_m8FEBC4215C228F0F5D4408ADD6652CDE8D8D3B14(__this, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void TDSTK.UnitSpawner::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_OnDisable_mA482B43492C9968C45C9ED26456301886836B9E6 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) 
{
	{
		// Cleared();
		UnitSpawner_Cleared_m31FA0F295194D1BE1708943CF9AD32DDF415B9CE(__this, NULL);
		// }
		return;
	}
}
// System.Void TDSTK.UnitSpawner::InitObjectPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_InitObjectPool_m73061A8CCB0155B7B35B03424D7130B8D900F330 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA99D4AC9C67178CEA8EBFD419441FB75B0393CAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE0EB1D4F388BFDF9840E5E2DD984741C39FF4080_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1DC2EDDA2684D3FE9DAB38AA40DC371409C03130_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEB2192FA1C5AA2AD75983DFFA7FF4336FE96AF2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BA66642DAAE1D162439F945892B944CC3AE7112);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F81523138B0217A2E6AB5163C9451B144606C8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0BD0F9020BFEE7D468DE161096185BAE45AECD8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if(spawnMode==_SpawnMode.FreeForm || (spawnMode==_SpawnMode.WaveBased && endlessWave)){
		int32_t L_0 = __this->___spawnMode_4;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->___spawnMode_4;
		if (L_1)
		{
			goto IL_0048;
		}
	}
	{
		bool L_2 = __this->___endlessWave_20;
		if (!L_2)
		{
			goto IL_0048;
		}
	}

IL_0019:
	{
		// for(int i=0; i<spawnUnitList.Count; i++){
		V_0 = 0;
		goto IL_0039;
	}

IL_001d:
	{
		// ObjectPoolManager.New(spawnUnitList[i].gameObject, 5);
		List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* L_3 = __this->___spawnUnitList_12;
		int32_t L_4 = V_0;
		Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* L_5;
		L_5 = List_1_get_Item_m1DC2EDDA2684D3FE9DAB38AA40DC371409C03130(L_3, L_4, List_1_get_Item_m1DC2EDDA2684D3FE9DAB38AA40DC371409C03130_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		int32_t L_7;
		L_7 = ObjectPoolManager_New_mFAED796027F2216E14F003173F63A1670B4AE020(L_6, 5, NULL);
		// for(int i=0; i<spawnUnitList.Count; i++){
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0039:
	{
		// for(int i=0; i<spawnUnitList.Count; i++){
		int32_t L_9 = V_0;
		List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* L_10 = __this->___spawnUnitList_12;
		int32_t L_11;
		L_11 = List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_inline(L_10, List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_0048:
	{
		// for(int i=0; i<waveList.Count; i++){
		V_1 = 0;
		goto IL_0105;
	}

IL_004f:
	{
		// for(int n=0; n<waveList[i].subWaveList.Count; n++){
		V_2 = 0;
		goto IL_00e5;
	}

IL_0056:
	{
		// if(waveList[i].subWaveList[n].unitPrefab!=null)
		List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* L_12 = __this->___waveList_21;
		int32_t L_13 = V_1;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_14;
		L_14 = List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F(L_12, L_13, List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F_RuntimeMethod_var);
		List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5* L_15 = L_14->___subWaveList_1;
		int32_t L_16 = V_2;
		SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* L_17;
		L_17 = List_1_get_Item_mEB2192FA1C5AA2AD75983DFFA7FF4336FE96AF2D(L_15, L_16, List_1_get_Item_mEB2192FA1C5AA2AD75983DFFA7FF4336FE96AF2D_RuntimeMethod_var);
		Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* L_18 = L_17->___unitPrefab_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_00a4;
		}
	}
	{
		// ObjectPoolManager.New(waveList[i].subWaveList[n].unitPrefab.gameObject, 5);
		List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* L_20 = __this->___waveList_21;
		int32_t L_21 = V_1;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_22;
		L_22 = List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F(L_20, L_21, List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F_RuntimeMethod_var);
		List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5* L_23 = L_22->___subWaveList_1;
		int32_t L_24 = V_2;
		SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* L_25;
		L_25 = List_1_get_Item_mEB2192FA1C5AA2AD75983DFFA7FF4336FE96AF2D(L_23, L_24, List_1_get_Item_mEB2192FA1C5AA2AD75983DFFA7FF4336FE96AF2D_RuntimeMethod_var);
		Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* L_26 = L_25->___unitPrefab_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_26, NULL);
		int32_t L_28;
		L_28 = ObjectPoolManager_New_mFAED796027F2216E14F003173F63A1670B4AE020(L_27, 5, NULL);
		goto IL_00e1;
	}

IL_00a4:
	{
		// Debug.LogWarning("unit prefab for wave-"+i+", subwave-"+n+" is unspecified", this);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		ArrayElementTypeCheck (L_30, _stringLiteralA0BD0F9020BFEE7D468DE161096185BAE45AECD8);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA0BD0F9020BFEE7D468DE161096185BAE45AECD8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_31;
		ArrayElementTypeCheck (L_33, _stringLiteral6F81523138B0217A2E6AB5163C9451B144606C8E);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral6F81523138B0217A2E6AB5163C9451B144606C8E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		String_t* L_35;
		L_35 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_35);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_34;
		ArrayElementTypeCheck (L_36, _stringLiteral1BA66642DAAE1D162439F945892B944CC3AE7112);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1BA66642DAAE1D162439F945892B944CC3AE7112);
		String_t* L_37;
		L_37 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_37, __this, NULL);
	}

IL_00e1:
	{
		// for(int n=0; n<waveList[i].subWaveList.Count; n++){
		int32_t L_38 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00e5:
	{
		// for(int n=0; n<waveList[i].subWaveList.Count; n++){
		int32_t L_39 = V_2;
		List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* L_40 = __this->___waveList_21;
		int32_t L_41 = V_1;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_42;
		L_42 = List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F(L_40, L_41, List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F_RuntimeMethod_var);
		List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5* L_43 = L_42->___subWaveList_1;
		int32_t L_44;
		L_44 = List_1_get_Count_mE0EB1D4F388BFDF9840E5E2DD984741C39FF4080_inline(L_43, List_1_get_Count_mE0EB1D4F388BFDF9840E5E2DD984741C39FF4080_RuntimeMethod_var);
		if ((((int32_t)L_39) < ((int32_t)L_44)))
		{
			goto IL_0056;
		}
	}
	{
		// for(int i=0; i<waveList.Count; i++){
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0105:
	{
		// for(int i=0; i<waveList.Count; i++){
		int32_t L_46 = V_1;
		List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* L_47 = __this->___waveList_21;
		int32_t L_48;
		L_48 = List_1_get_Count_mA99D4AC9C67178CEA8EBFD419441FB75B0393CAB_inline(L_47, List_1_get_Count_mA99D4AC9C67178CEA8EBFD419441FB75B0393CAB_RuntimeMethod_var);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_004f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TDSTK.UnitSpawner::StartSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_StartSpawn_m8FEBC4215C228F0F5D4408ADD6652CDE8D8D3B14 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) 
{
	{
		// if(!gameObject.activeInHierarchy) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if(!gameObject.activeInHierarchy) return;
		return;
	}

IL_000e:
	{
		// if(spawnStarted) return;    //prevent duplicate spawning routine
		bool L_2 = __this->___spawnStarted_6;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// if(spawnStarted) return;    //prevent duplicate spawning routine
		return;
	}

IL_0017:
	{
		// spawnStarted=true;
		__this->___spawnStarted_6 = (bool)1;
		// if(spawnMode==_SpawnMode.WaveBased){
		int32_t L_3 = __this->___spawnMode_4;
		if (L_3)
		{
			goto IL_0048;
		}
	}
	{
		// if(!endlessWave) SpawnWaveFromList(startDelay);
		bool L_4 = __this->___endlessWave_20;
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		// if(!endlessWave) SpawnWaveFromList(startDelay);
		float L_5 = __this->___startDelay_7;
		UnitSpawner_SpawnWaveFromList_mC2C64BD23E2182F138A9FE679EEF21C36CC7760F(__this, L_5, NULL);
		return;
	}

IL_003b:
	{
		// else SpawnGeneratedWave(startDelay);
		float L_6 = __this->___startDelay_7;
		UnitSpawner_SpawnGeneratedWave_m96F0FA265975695A8C5A30625121E0C2F9C2FA35(__this, L_6, NULL);
		return;
	}

IL_0048:
	{
		// else if(spawnMode==_SpawnMode.FreeForm){
		int32_t L_7 = __this->___spawnMode_4;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		// StartCoroutine(SpawnFreeForm());
		RuntimeObject* L_8;
		L_8 = UnitSpawner_SpawnFreeForm_m85E307E39AAD408D674CAA55DB38AE6125BCC45C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void TDSTK.UnitSpawner::SpawnWaveFromList(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_SpawnWaveFromList_mC2C64BD23E2182F138A9FE679EEF21C36CC7760F (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, float ___0_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA99D4AC9C67178CEA8EBFD419441FB75B0393CAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC12B6904086DE3F1B74F6F2BF1A196D1B6A913C0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(currentWaveIDX+1>=waveList.Count){
		int32_t L_0 = __this->___currentWaveIDX_19;
		List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* L_1 = __this->___waveList_21;
		int32_t L_2;
		L_2 = List_1_get_Count_mA99D4AC9C67178CEA8EBFD419441FB75B0393CAB_inline(L_1, List_1_get_Count_mA99D4AC9C67178CEA8EBFD419441FB75B0393CAB_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 1))) < ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		// Debug.Log(gameObject.name+" - all waves cleared");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteralC12B6904086DE3F1B74F6F2BF1A196D1B6A913C0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// Cleared();
		UnitSpawner_Cleared_m31FA0F295194D1BE1708943CF9AD32DDF415B9CE(__this, NULL);
		// return;
		return;
	}

IL_0036:
	{
		// StartCoroutine(SpawnWave(waveList[currentWaveIDX+=1], delay));
		List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* L_6 = __this->___waveList_21;
		int32_t L_7 = __this->___currentWaveIDX_19;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		V_0 = L_8;
		__this->___currentWaveIDX_19 = L_8;
		int32_t L_9 = V_0;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_10;
		L_10 = List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F(L_6, L_9, List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F_RuntimeMethod_var);
		float L_11 = ___0_delay;
		RuntimeObject* L_12;
		L_12 = UnitSpawner_SpawnWave_mBEB4D4975343C32578FD35AF0F3B36697EEF6AF5(__this, L_10, L_11, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_12, NULL);
		// }
		return;
	}
}
// System.Void TDSTK.UnitSpawner::SpawnGeneratedWave(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_SpawnGeneratedWave_m96F0FA265975695A8C5A30625121E0C2F9C2FA35 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, float ___0_delay, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// waveE=GenerateWave(currentWaveIDX+=1);
		int32_t L_0 = __this->___currentWaveIDX_19;
		int32_t L_1 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		V_0 = L_1;
		__this->___currentWaveIDX_19 = L_1;
		int32_t L_2 = V_0;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_3;
		L_3 = UnitSpawner_GenerateWave_mA720C8C8D1601FAD31F9CD77AA75546D7A64169E(__this, L_2, NULL);
		__this->___waveE_26 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waveE_26), (void*)L_3);
		// StartCoroutine(SpawnWave(waveE, delay));
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_4 = __this->___waveE_26;
		float L_5 = ___0_delay;
		RuntimeObject* L_6;
		L_6 = UnitSpawner_SpawnWave_mBEB4D4975343C32578FD35AF0F3B36697EEF6AF5(__this, L_4, L_5, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TDSTK.UnitSpawner::SpawnWave(TDSTK.Wave,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitSpawner_SpawnWave_mBEB4D4975343C32578FD35AF0F3B36697EEF6AF5 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, Wave_t65332B65BB35E2A0A549B5074493644DE6159233* ___0_wave, float ___1_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnWaveU3Ed__43_tE26381FD24D84D23EBC5CD47D796C4525D9B5656_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnWaveU3Ed__43_tE26381FD24D84D23EBC5CD47D796C4525D9B5656* L_0 = (U3CSpawnWaveU3Ed__43_tE26381FD24D84D23EBC5CD47D796C4525D9B5656*)il2cpp_codegen_object_new(U3CSpawnWaveU3Ed__43_tE26381FD24D84D23EBC5CD47D796C4525D9B5656_il2cpp_TypeInfo_var);
		U3CSpawnWaveU3Ed__43__ctor_m391215B43A69F346C44D1A7B43A19E617779D562(L_0, 0, NULL);
		U3CSpawnWaveU3Ed__43_tE26381FD24D84D23EBC5CD47D796C4525D9B5656* L_1 = L_0;
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CSpawnWaveU3Ed__43_tE26381FD24D84D23EBC5CD47D796C4525D9B5656* L_2 = L_1;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_3 = ___0_wave;
		L_2->___wave_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___wave_4), (void*)L_3);
		U3CSpawnWaveU3Ed__43_tE26381FD24D84D23EBC5CD47D796C4525D9B5656* L_4 = L_2;
		float L_5 = ___1_delay;
		L_4->___delay_2 = L_5;
		return L_4;
	}
}
// System.Collections.IEnumerator TDSTK.UnitSpawner::SpawnSubWave(TDSTK.Wave,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitSpawner_SpawnSubWave_mBB958D0E72B733D2AE9AE8F314FBDB903BE9F0C1 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, Wave_t65332B65BB35E2A0A549B5074493644DE6159233* ___0_wave, int32_t ___1_subWaveIdx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E* L_0 = (U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E*)il2cpp_codegen_object_new(U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E_il2cpp_TypeInfo_var);
		U3CSpawnSubWaveU3Ed__44__ctor_mBEDF673CD216CFE84EE08BAA5400ECA551368DA4(L_0, 0, NULL);
		U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E* L_1 = L_0;
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E* L_2 = L_1;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_3 = ___0_wave;
		L_2->___wave_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___wave_2), (void*)L_3);
		U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E* L_4 = L_2;
		int32_t L_5 = ___1_subWaveIdx;
		L_4->___subWaveIdx_3 = L_5;
		return L_4;
	}
}
// System.Void TDSTK.UnitSpawner::AddUnitToWave(TDSTK.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_AddUnitToWave_m42B92B258F1658327F09840685AE2CCF3F9FC29A (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* ___0_unitInstance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// waveList[unitInstance.waveID].activeUnitCount+=1;
		List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* L_0 = __this->___waveList_21;
		Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* L_1 = ___0_unitInstance;
		int32_t L_2 = L_1->___waveID_67;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_3;
		L_3 = List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F(L_0, L_2, List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F_RuntimeMethod_var);
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_4 = L_3;
		int32_t L_5 = L_4->___activeUnitCount_5;
		L_4->___activeUnitCount_5 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// AddUnit(unitInstance);
		Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* L_6 = ___0_unitInstance;
		UnitSpawner_AddUnit_m45E241AAAAEC306D4159DB5ADFE22D4F8E53A170(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void TDSTK.UnitSpawner::UnitCleared(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_UnitCleared_m366D70BE9BD95AE429FF77578EF2EB636FD06399 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, int32_t ___0_waveID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2865EB1915452F2950D41BFFE1118FC55D94B6AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB881BEBBD4CC50D8D9874B06344138D33BF7D36F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool waveCleared=false;
		V_0 = (bool)0;
		// if(!endlessWave){
		bool L_0 = __this->___endlessWave_20;
		if (L_0)
		{
			goto IL_006a;
		}
	}
	{
		// waveList[waveID].activeUnitCount-=1;
		List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* L_1 = __this->___waveList_21;
		int32_t L_2 = ___0_waveID;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_3;
		L_3 = List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F(L_1, L_2, List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F_RuntimeMethod_var);
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_4 = L_3;
		int32_t L_5 = L_4->___activeUnitCount_5;
		L_4->___activeUnitCount_5 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		// if(waveList[waveID].spawned && waveList[waveID].activeUnitCount==0){
		List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* L_6 = __this->___waveList_21;
		int32_t L_7 = ___0_waveID;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_8;
		L_8 = List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F(L_6, L_7, List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F_RuntimeMethod_var);
		bool L_9 = L_8->___spawned_7;
		if (!L_9)
		{
			goto IL_00b0;
		}
	}
	{
		List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* L_10 = __this->___waveList_21;
		int32_t L_11 = ___0_waveID;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_12;
		L_12 = List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F(L_10, L_11, List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F_RuntimeMethod_var);
		int32_t L_13 = L_12->___activeUnitCount_5;
		if (L_13)
		{
			goto IL_00b0;
		}
	}
	{
		// waveCleared=true;
		V_0 = (bool)1;
		// waveList[waveID].Completed();
		List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* L_14 = __this->___waveList_21;
		int32_t L_15 = ___0_waveID;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_16;
		L_16 = List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F(L_14, L_15, List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F_RuntimeMethod_var);
		Wave_Completed_m73A32D30814DCB558C87A164737493F78431DF43(L_16, NULL);
		// SpawnWaveFromList(delayBetweenWave); //start spawning the next wave
		float L_17 = __this->___delayBetweenWave_22;
		UnitSpawner_SpawnWaveFromList_mC2C64BD23E2182F138A9FE679EEF21C36CC7760F(__this, L_17, NULL);
		goto IL_00b0;
	}

IL_006a:
	{
		// waveE.activeUnitCount-=1;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_18 = __this->___waveE_26;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_19 = L_18;
		int32_t L_20 = L_19->___activeUnitCount_5;
		L_19->___activeUnitCount_5 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		// if(waveE.spawned && waveE.activeUnitCount==0){
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_21 = __this->___waveE_26;
		bool L_22 = L_21->___spawned_7;
		if (!L_22)
		{
			goto IL_00b0;
		}
	}
	{
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_23 = __this->___waveE_26;
		int32_t L_24 = L_23->___activeUnitCount_5;
		if (L_24)
		{
			goto IL_00b0;
		}
	}
	{
		// waveCleared=true;
		V_0 = (bool)1;
		// waveE.Completed();
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_25 = __this->___waveE_26;
		Wave_Completed_m73A32D30814DCB558C87A164737493F78431DF43(L_25, NULL);
		// SpawnGeneratedWave(delayBetweenWave);    //start spawning the next wave
		float L_26 = __this->___delayBetweenWave_22;
		UnitSpawner_SpawnGeneratedWave_m96F0FA265975695A8C5A30625121E0C2F9C2FA35(__this, L_26, NULL);
	}

IL_00b0:
	{
		// if(waveCleared){
		bool L_27 = V_0;
		if (!L_27)
		{
			goto IL_00ec;
		}
	}
	{
		// Debug.Log(gameObject.name+" - wave "+(currentWaveIDX-1)+" cleared");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_29;
		L_29 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_28, NULL);
		int32_t L_30 = __this->___currentWaveIDX_19;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		String_t* L_31;
		L_31 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_32;
		L_32 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_29, _stringLiteralB881BEBBD4CC50D8D9874B06344138D33BF7D36F, L_31, _stringLiteral2865EB1915452F2950D41BFFE1118FC55D94B6AA, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_32, NULL);
		// Debug.Log("");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_00ec:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TDSTK.UnitSpawner::SpawnFreeForm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitSpawner_SpawnFreeForm_m85E307E39AAD408D674CAA55DB38AE6125BCC45C (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnFreeFormU3Ed__47_tD77592873DD7214CC46E7B46C7A14963D98F9E39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnFreeFormU3Ed__47_tD77592873DD7214CC46E7B46C7A14963D98F9E39* L_0 = (U3CSpawnFreeFormU3Ed__47_tD77592873DD7214CC46E7B46C7A14963D98F9E39*)il2cpp_codegen_object_new(U3CSpawnFreeFormU3Ed__47_tD77592873DD7214CC46E7B46C7A14963D98F9E39_il2cpp_TypeInfo_var);
		U3CSpawnFreeFormU3Ed__47__ctor_m923DA683E3B2E7F50D9420458FBB727583703191(L_0, 0, NULL);
		U3CSpawnFreeFormU3Ed__47_tD77592873DD7214CC46E7B46C7A14963D98F9E39* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator TDSTK.UnitSpawner::SpawnLimitTimerRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitSpawner_SpawnLimitTimerRoutine_m699B6F77CA283F2BF3BE67775671461755B1A609 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnLimitTimerRoutineU3Ed__49_t135813F7125DBB6F562B5F1F399FE96E87C7D61F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnLimitTimerRoutineU3Ed__49_t135813F7125DBB6F562B5F1F399FE96E87C7D61F* L_0 = (U3CSpawnLimitTimerRoutineU3Ed__49_t135813F7125DBB6F562B5F1F399FE96E87C7D61F*)il2cpp_codegen_object_new(U3CSpawnLimitTimerRoutineU3Ed__49_t135813F7125DBB6F562B5F1F399FE96E87C7D61F_il2cpp_TypeInfo_var);
		U3CSpawnLimitTimerRoutineU3Ed__49__ctor_m08FBA2A6A247EBCE2F65D26B678DB8C58C193A1B(L_0, 0, NULL);
		U3CSpawnLimitTimerRoutineU3Ed__49_t135813F7125DBB6F562B5F1F399FE96E87C7D61F* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator TDSTK.UnitSpawner::OverridingHitPointRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitSpawner_OverridingHitPointRoutine_mB923B27907B41F10B6CC74DCDF941876AAD04A68 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COverridingHitPointRoutineU3Ed__50_tCC1895F1EEB71BDEEBAD5A8E33804A9D2B770F24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COverridingHitPointRoutineU3Ed__50_tCC1895F1EEB71BDEEBAD5A8E33804A9D2B770F24* L_0 = (U3COverridingHitPointRoutineU3Ed__50_tCC1895F1EEB71BDEEBAD5A8E33804A9D2B770F24*)il2cpp_codegen_object_new(U3COverridingHitPointRoutineU3Ed__50_tCC1895F1EEB71BDEEBAD5A8E33804A9D2B770F24_il2cpp_TypeInfo_var);
		U3COverridingHitPointRoutineU3Ed__50__ctor_mBE4883E1E34F8F5EE642F995C5B2418702007C6D(L_0, 0, NULL);
		U3COverridingHitPointRoutineU3Ed__50_tCC1895F1EEB71BDEEBAD5A8E33804A9D2B770F24* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Boolean TDSTK.UnitSpawner::IsSpawnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnitSpawner_IsSpawnCompleted_mABCBC055BDBEADB27F7B6F74A68E2C636ECBC860 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA99D4AC9C67178CEA8EBFD419441FB75B0393CAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if(spawnMode==_SpawnMode.WaveBased){
		int32_t L_0 = __this->___spawnMode_4;
		if (L_0)
		{
			goto IL_0043;
		}
	}
	{
		// if(endlessWave) return false;    //the spawn will never complete in endless mode
		bool L_1 = __this->___endlessWave_20;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if(endlessWave) return false;    //the spawn will never complete in endless mode
		return (bool)0;
	}

IL_0012:
	{
		// bool allSpawned=true;
		V_0 = (bool)1;
		// for(int i=0; i<waveList.Count; i++){
		V_1 = 0;
		goto IL_0033;
	}

IL_0018:
	{
		// if(!waveList[i].spawned){
		List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* L_2 = __this->___waveList_21;
		int32_t L_3 = V_1;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_4;
		L_4 = List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F(L_2, L_3, List_1_get_Item_m422355970C20A54D9D0ACE33B3FA82A2BA879A3F_RuntimeMethod_var);
		bool L_5 = L_4->___spawned_7;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		// allSpawned=false;
		V_0 = (bool)0;
		// break;
		goto IL_0041;
	}

IL_002f:
	{
		// for(int i=0; i<waveList.Count; i++){
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0033:
	{
		// for(int i=0; i<waveList.Count; i++){
		int32_t L_7 = V_1;
		List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* L_8 = __this->___waveList_21;
		int32_t L_9;
		L_9 = List_1_get_Count_mA99D4AC9C67178CEA8EBFD419441FB75B0393CAB_inline(L_8, List_1_get_Count_mA99D4AC9C67178CEA8EBFD419441FB75B0393CAB_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0018;
		}
	}

IL_0041:
	{
		// return allSpawned;
		bool L_10 = V_0;
		return L_10;
	}

IL_0043:
	{
		// else if(spawnMode==_SpawnMode.FreeForm){
		int32_t L_11 = __this->___spawnMode_4;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0077;
		}
	}
	{
		// if(limitType==_SpawnLimitType.Count && spawnCount>=limitSpawnCount) return true;
		int32_t L_12 = __this->___limitType_35;
		if (L_12)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_13 = __this->___spawnCount_37;
		int32_t L_14 = __this->___limitSpawnCount_33;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0064;
		}
	}
	{
		// if(limitType==_SpawnLimitType.Count && spawnCount>=limitSpawnCount) return true;
		return (bool)1;
	}

IL_0064:
	{
		// else if(limitType==_SpawnLimitType.Timed && freeformTimeOut) return true;
		int32_t L_15 = __this->___limitType_35;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_0077;
		}
	}
	{
		bool L_16 = __this->___freeformTimeOut_40;
		if (!L_16)
		{
			goto IL_0077;
		}
	}
	{
		// else if(limitType==_SpawnLimitType.Timed && freeformTimeOut) return true;
		return (bool)1;
	}

IL_0077:
	{
		// return false;
		return (bool)0;
	}
}
// TDSTK.UnitAI TDSTK.UnitSpawner::SpawnUnit(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029* UnitSpawner_SpawnUnit_mD449168E2D4F3BF63A6436F419F8633AD5B51D42 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_prefab, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_spawnPos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rot, String_t* ___3_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029_mB8B44FAE8A381EF96AA4CB7D0693AA7B2B6B73E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029* V_0 = NULL;
	{
		// GameObject unitObj=ObjectPoolManager.Spawn(prefab, spawnPos, rot);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_prefab;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_spawnPos;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___2_rot;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = ObjectPoolManager_Spawn_mBB5C03F297CAD60FA89CC3C90C2C7EA18CCF23B7(L_0, L_1, L_2, (-1.0f), NULL);
		// unitObj.layer=TDS.GetLayerAIUnit();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
		int32_t L_5;
		L_5 = TDS_GetLayerAIUnit_mFF98246C9CC1F338B53722B272DBF32FF9BFE4E2(NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_4, L_5, NULL);
		// unitObj.name=name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_4;
		String_t* L_7 = ___3_name;
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_6, L_7, NULL);
		// UnitAI unitInstance=unitObj.GetComponent<UnitAI>();
		UnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029* L_8;
		L_8 = GameObject_GetComponent_TisUnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029_mB8B44FAE8A381EF96AA4CB7D0693AA7B2B6B73E1(L_6, GameObject_GetComponent_TisUnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029_mB8B44FAE8A381EF96AA4CB7D0693AA7B2B6B73E1_RuntimeMethod_var);
		V_0 = L_8;
		// unitInstance.target=GameControl.GetPlayer();
		UnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029* L_9 = V_0;
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_10;
		L_10 = GameControl_GetPlayer_mDF5E018D7B5501B285B859C824DBF36C983D6078(NULL);
		((Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B*)L_9)->___target_30 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B*)L_9)->___target_30), (void*)L_10);
		// if(overrideHitPoint) unitInstance.OverrideHitPoint(spawnHP, overrideHPMode);
		bool L_11 = __this->___overrideHitPoint_13;
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		// if(overrideHitPoint) unitInstance.OverrideHitPoint(spawnHP, overrideHPMode);
		UnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029* L_12 = V_0;
		float L_13 = __this->___spawnHP_18;
		int32_t L_14 = __this->___overrideHPMode_14;
		Unit_OverrideHitPoint_m9DB341BFA3CAEE1A6F037820E1C6E85A3332B239(L_12, L_13, L_14, NULL);
	}

IL_004b:
	{
		// AddUnit(unitInstance);    //track unit
		UnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029* L_15 = V_0;
		UnitSpawner_AddUnit_m45E241AAAAEC306D4159DB5ADFE22D4F8E53A170(__this, L_15, NULL);
		// return unitInstance;
		UnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029* L_16 = V_0;
		return L_16;
	}
}
// System.Void TDSTK.UnitSpawner::AddUnit(TDSTK.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_AddUnit_m45E241AAAAEC306D4159DB5ADFE22D4F8E53A170 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* ___0_unitInstance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DestroyCallback_t73143D8A71CE8CAFE3A22439D2EF6DFAA1E0048B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitSpawner_UnitDestroy_m84FBC7F2056315368C6997B8427B1209480EBA0F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// unitInstance.SetDestroyCallback(this.UnitDestroy);
		Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* L_0 = ___0_unitInstance;
		DestroyCallback_t73143D8A71CE8CAFE3A22439D2EF6DFAA1E0048B* L_1 = (DestroyCallback_t73143D8A71CE8CAFE3A22439D2EF6DFAA1E0048B*)il2cpp_codegen_object_new(DestroyCallback_t73143D8A71CE8CAFE3A22439D2EF6DFAA1E0048B_il2cpp_TypeInfo_var);
		DestroyCallback__ctor_mF4E8E73D4853C31C7483798D6415954C34D1F048(L_1, __this, (intptr_t)((void*)UnitSpawner_UnitDestroy_m84FBC7F2056315368C6997B8427B1209480EBA0F_RuntimeMethod_var), NULL);
		Unit_SetDestroyCallback_m6013F380DA3FA416C381E59534CBAEDF7D0B764B(L_0, L_1, NULL);
		// spawnCount+=1;
		int32_t L_2 = __this->___spawnCount_37;
		__this->___spawnCount_37 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// activeCount+=1;
		int32_t L_3 = __this->___activeCount_36;
		__this->___activeCount_36 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// }
		return;
	}
}
// System.Void TDSTK.UnitSpawner::UnitDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_UnitDestroy_m84FBC7F2056315368C6997B8427B1209480EBA0F (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) 
{
	{
		// activeCount-=1;
		int32_t L_0 = __this->___activeCount_36;
		__this->___activeCount_36 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// killCount+=1;
		int32_t L_1 = __this->___killCount_38;
		__this->___killCount_38 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// }
		return;
	}
}
// System.Void TDSTK.UnitSpawner::Cleared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_Cleared_m31FA0F295194D1BE1708943CF9AD32DDF415B9CE (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitSpawnerTracker_t3956012F9FA946DFE2AA57A8C5CBA7D345FBFAD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnitSpawnerTracker.RemoveSpawner(this);
		il2cpp_codegen_runtime_class_init_inline(UnitSpawnerTracker_t3956012F9FA946DFE2AA57A8C5CBA7D345FBFAD4_il2cpp_TypeInfo_var);
		UnitSpawnerTracker_RemoveSpawner_m651A52597B3FEACDDF730DA1DD483356AAACCA7C(__this, NULL);
		// GameControl.UnitSpawnerCleared(this);
		GameControl_UnitSpawnerCleared_mBA128B285B47B0C34BE243B9C3D4FF1F443F8006(__this, NULL);
		// }
		return;
	}
}
// TDSTK.Wave TDSTK.UnitSpawner::GenerateWave(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Wave_t65332B65BB35E2A0A549B5074493644DE6159233* UnitSpawner_GenerateWave_mA720C8C8D1601FAD31F9CD77AA75546D7A64169E (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, int32_t ___0_waveIDX, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m20FB1BFA8A85AA8026124052610DB0A1E7138548_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m722E5A7E24C6F7853217A20B61BB798841BD44A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m32DAAC395D1CFF0FA67A268857C6C999BA4B6882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m59E8F3A2D2D6297F07A7C8BF9812545D3E0454F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m610F3504AA5B2BEB809F8E2E9A658C13E78EA565_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1DC2EDDA2684D3FE9DAB38AA40DC371409C03130_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wave_t65332B65BB35E2A0A549B5074493644DE6159233_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Wave_t65332B65BB35E2A0A549B5074493644DE6159233* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* V_11 = NULL;
	int32_t V_12 = 0;
	{
		// Wave wave=new Wave();
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_0 = (Wave_t65332B65BB35E2A0A549B5074493644DE6159233*)il2cpp_codegen_object_new(Wave_t65332B65BB35E2A0A549B5074493644DE6159233_il2cpp_TypeInfo_var);
		Wave__ctor_m10B4851DAAF340DA68A9A9A8F9ED8C11BBB8E5BC(L_0, NULL);
		V_0 = L_0;
		// wave.waveID=waveIDX;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_1 = V_0;
		int32_t L_2 = ___0_waveIDX;
		L_1->___waveID_0 = L_2;
		// wave.spawnArea=spawnAreaList[Random.Range(0, spawnAreaList.Count)];
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_3 = V_0;
		List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* L_4 = __this->___spawnAreaList_8;
		List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* L_5 = __this->___spawnAreaList_8;
		int32_t L_6;
		L_6 = List_1_get_Count_m610F3504AA5B2BEB809F8E2E9A658C13E78EA565_inline(L_5, List_1_get_Count_m610F3504AA5B2BEB809F8E2E9A658C13E78EA565_RuntimeMethod_var);
		int32_t L_7;
		L_7 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_6, NULL);
		TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* L_8;
		L_8 = List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874(L_4, L_7, List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874_RuntimeMethod_var);
		L_3->___spawnArea_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___spawnArea_4), (void*)L_8);
		// wave.creditGain=startingCredit+creditIncrement*waveIDX;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_9 = V_0;
		int32_t L_10 = __this->___startingCredit_27;
		int32_t L_11 = __this->___creditIncrement_28;
		int32_t L_12 = ___0_waveIDX;
		L_9->___creditGain_2 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply(L_11, L_12))));
		// wave.scoreGain=startingScore+scoreIncrement*waveIDX;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_13 = V_0;
		int32_t L_14 = __this->___startingScore_29;
		int32_t L_15 = __this->___scoreIncrement_30;
		int32_t L_16 = ___0_waveIDX;
		L_13->___scoreGain_3 = ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)il2cpp_codegen_multiply(L_15, L_16))));
		// int subWaveCount=Random.Range(1, waveIDX);
		int32_t L_17 = ___0_waveIDX;
		int32_t L_18;
		L_18 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, L_17, NULL);
		V_1 = L_18;
		// subWaveCount=Mathf.Clamp(subWaveCount, 1, maxSubWaveCount);
		int32_t L_19 = V_1;
		int32_t L_20 = __this->___maxSubWaveCount_23;
		int32_t L_21;
		L_21 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_19, 1, L_20, NULL);
		V_1 = L_21;
		// subWaveCount=Mathf.Clamp(subWaveCount, 1, spawnUnitList.Count);
		int32_t L_22 = V_1;
		List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* L_23 = __this->___spawnUnitList_12;
		int32_t L_24;
		L_24 = List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_inline(L_23, List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_RuntimeMethod_var);
		int32_t L_25;
		L_25 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_22, 1, L_24, NULL);
		V_1 = L_25;
		// List<int> countList=new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_26 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_26, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_2 = L_26;
		// for(int i=0; i<subWaveCount; i++) countList.Add(1);
		V_6 = 0;
		goto IL_009a;
	}

IL_008d:
	{
		// for(int i=0; i<subWaveCount; i++) countList.Add(1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_27 = V_2;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_27, 1, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// for(int i=0; i<subWaveCount; i++) countList.Add(1);
		int32_t L_28 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_009a:
	{
		// for(int i=0; i<subWaveCount; i++) countList.Add(1);
		int32_t L_29 = V_6;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_008d;
		}
	}
	{
		// int totalUnitCount=unitCount+unitCountInc*waveIDX-subWaveCount;
		int32_t L_31 = __this->___unitCount_24;
		int32_t L_32 = __this->___unitCountInc_25;
		int32_t L_33 = ___0_waveIDX;
		int32_t L_34 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_31, ((int32_t)il2cpp_codegen_multiply(L_32, L_33)))), L_34));
		// if(subWaveCount<=0) totalUnitCount=0;
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		// if(subWaveCount<=0) totalUnitCount=0;
		V_3 = 0;
	}

IL_00b7:
	{
		// int count=0;
		V_4 = 0;
		goto IL_00f3;
	}

IL_00bc:
	{
		// int rand=Random.Range(1, totalUnitCount);
		int32_t L_36 = V_3;
		int32_t L_37;
		L_37 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, L_36, NULL);
		V_7 = L_37;
		// countList[count]+=rand;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_38 = V_2;
		V_8 = L_38;
		int32_t L_39 = V_4;
		V_9 = L_39;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_40 = V_8;
		int32_t L_41 = V_9;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_42 = V_8;
		int32_t L_43 = V_9;
		int32_t L_44;
		L_44 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_42, L_43, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		int32_t L_45 = V_7;
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(L_40, L_41, ((int32_t)il2cpp_codegen_add(L_44, L_45)), List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		// totalUnitCount-=rand;
		int32_t L_46 = V_3;
		int32_t L_47 = V_7;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_46, L_47));
		// if((count+=1)>=subWaveCount) count=0;
		int32_t L_48 = V_4;
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		V_4 = L_49;
		int32_t L_50 = V_1;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_00f3;
		}
	}
	{
		// if((count+=1)>=subWaveCount) count=0;
		V_4 = 0;
	}

IL_00f3:
	{
		// while(totalUnitCount>0){
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_00bc;
		}
	}
	{
		// List<Unit> unitList=new List<Unit>( spawnUnitList );
		List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* L_52 = __this->___spawnUnitList_12;
		List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* L_53 = (List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503*)il2cpp_codegen_object_new(List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503_il2cpp_TypeInfo_var);
		List_1__ctor_m32DAAC395D1CFF0FA67A268857C6C999BA4B6882(L_53, L_52, List_1__ctor_m32DAAC395D1CFF0FA67A268857C6C999BA4B6882_RuntimeMethod_var);
		V_5 = L_53;
		// wave.subWaveList=new List<SubWave>();
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_54 = V_0;
		List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5* L_55 = (List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5*)il2cpp_codegen_object_new(List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5_il2cpp_TypeInfo_var);
		List_1__ctor_m59E8F3A2D2D6297F07A7C8BF9812545D3E0454F6(L_55, List_1__ctor_m59E8F3A2D2D6297F07A7C8BF9812545D3E0454F6_RuntimeMethod_var);
		L_54->___subWaveList_1 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&L_54->___subWaveList_1), (void*)L_55);
		// for(int i=0; i<subWaveCount; i++){
		V_10 = 0;
		goto IL_01ad;
	}

IL_0117:
	{
		// SubWave subWave=new SubWave();
		SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* L_56 = (SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB*)il2cpp_codegen_object_new(SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB_il2cpp_TypeInfo_var);
		SubWave__ctor_m1D892C7F7B1CDAF2D7CD15002674B083B591231A(L_56, NULL);
		V_11 = L_56;
		// subWave.count=countList[i];
		SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* L_57 = V_11;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_58 = V_2;
		int32_t L_59 = V_10;
		int32_t L_60;
		L_60 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_58, L_59, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		L_57->___count_0 = L_60;
		// int rand=Random.Range(0, unitList.Count);
		List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* L_61 = V_5;
		int32_t L_62;
		L_62 = List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_inline(L_61, List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_RuntimeMethod_var);
		int32_t L_63;
		L_63 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_62, NULL);
		V_12 = L_63;
		// subWave.unitPrefab=unitList[rand];
		SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* L_64 = V_11;
		List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* L_65 = V_5;
		int32_t L_66 = V_12;
		Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* L_67;
		L_67 = List_1_get_Item_m1DC2EDDA2684D3FE9DAB38AA40DC371409C03130(L_65, L_66, List_1_get_Item_m1DC2EDDA2684D3FE9DAB38AA40DC371409C03130_RuntimeMethod_var);
		L_64->___unitPrefab_1 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&L_64->___unitPrefab_1), (void*)L_67);
		// unitList.RemoveAt(rand);
		List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* L_68 = V_5;
		int32_t L_69 = V_12;
		List_1_RemoveAt_m722E5A7E24C6F7853217A20B61BB798841BD44A7(L_68, L_69, List_1_RemoveAt_m722E5A7E24C6F7853217A20B61BB798841BD44A7_RuntimeMethod_var);
		// subWave.startDelay=0.5f;
		SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* L_70 = V_11;
		L_70->___startDelay_2 = (0.5f);
		// subWave.interval=Random.Range(1f, 2f);
		SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* L_71 = V_11;
		float L_72;
		L_72 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((1.0f), (2.0f), NULL);
		L_71->___interval_3 = L_72;
		// subWave.spawnArea=spawnAreaList[Random.Range(0, spawnAreaList.Count)];
		SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* L_73 = V_11;
		List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* L_74 = __this->___spawnAreaList_8;
		List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* L_75 = __this->___spawnAreaList_8;
		int32_t L_76;
		L_76 = List_1_get_Count_m610F3504AA5B2BEB809F8E2E9A658C13E78EA565_inline(L_75, List_1_get_Count_m610F3504AA5B2BEB809F8E2E9A658C13E78EA565_RuntimeMethod_var);
		int32_t L_77;
		L_77 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_76, NULL);
		TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* L_78;
		L_78 = List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874(L_74, L_77, List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874_RuntimeMethod_var);
		L_73->___spawnArea_4 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&L_73->___spawnArea_4), (void*)L_78);
		// wave.subWaveList.Add(subWave);
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_79 = V_0;
		List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5* L_80 = L_79->___subWaveList_1;
		SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* L_81 = V_11;
		List_1_Add_m20FB1BFA8A85AA8026124052610DB0A1E7138548_inline(L_80, L_81, List_1_Add_m20FB1BFA8A85AA8026124052610DB0A1E7138548_RuntimeMethod_var);
		// for(int i=0; i<subWaveCount; i++){
		int32_t L_82 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ad:
	{
		// for(int i=0; i<subWaveCount; i++){
		int32_t L_83 = V_10;
		int32_t L_84 = V_1;
		if ((((int32_t)L_83) < ((int32_t)L_84)))
		{
			goto IL_0117;
		}
	}
	{
		// return wave;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_85 = V_0;
		return L_85;
	}
}
// System.Void TDSTK.UnitSpawner::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner_OnDrawGizmos_mD280AA9D164208C7A8ABBAFC699648BC743058ED (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m610F3504AA5B2BEB809F8E2E9A658C13E78EA565_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral818FB4490EA1A78D9BA71206962E1F3AE3469D70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Gizmos.DrawIcon(transform.position+new Vector3(0, 0.1f, 0), "SpawnUnit.png", TDS.scaleGizmos);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.100000001f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_2, NULL);
		Gizmos_DrawIcon_m676C6510EFA7C3A425A7B42BD2745B1731A261CE(L_3, _stringLiteral818FB4490EA1A78D9BA71206962E1F3AE3469D70, (bool)1, NULL);
		// for(int i=0; i<spawnAreaList.Count; i++){
		V_0 = 0;
		goto IL_0096;
	}

IL_0033:
	{
		// if(spawnAreaList[i]==null) continue;
		List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* L_4 = __this->___spawnAreaList_8;
		int32_t L_5 = V_0;
		TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* L_6;
		L_6 = List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874(L_4, L_5, List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_7)
		{
			goto IL_0092;
		}
	}
	{
		// Gizmos.DrawLine(transform.position, spawnAreaList[i].GetPos());
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* L_10 = __this->___spawnAreaList_8;
		int32_t L_11 = V_0;
		TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* L_12;
		L_12 = List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874(L_10, L_11, List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = TDSArea_GetPos_m680FBDC0F0EFB2A199DAD37183B61F5C3213D5E6(L_12, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_9, L_13, NULL);
		// spawnAreaList[i].gizmoColor=new Color(1, 0, 0.5f, 1);
		List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* L_14 = __this->___spawnAreaList_8;
		int32_t L_15 = V_0;
		TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* L_16;
		L_16 = List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874(L_14, L_15, List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_17), (1.0f), (0.0f), (0.5f), (1.0f), /*hidden argument*/NULL);
		L_16->___gizmoColor_6 = L_17;
	}

IL_0092:
	{
		// for(int i=0; i<spawnAreaList.Count; i++){
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0096:
	{
		// for(int i=0; i<spawnAreaList.Count; i++){
		int32_t L_19 = V_0;
		List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* L_20 = __this->___spawnAreaList_8;
		int32_t L_21;
		L_21 = List_1_get_Count_m610F3504AA5B2BEB809F8E2E9A658C13E78EA565_inline(L_20, List_1_get_Count_m610F3504AA5B2BEB809F8E2E9A658C13E78EA565_RuntimeMethod_var);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0033;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TDSTK.UnitSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawner__ctor_m56F1DD28AAD40101E0FAF3ADA98FAFD9271C5FF1 (UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m839FAABC816FAFDEC32B5270F736E90938BEDBFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE66BA4DF881E19595251A20BA0B1FB5F6D1B9D70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF03DFC6E86A660ECD1175DE14A893E663974275B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool spawnUponStart=true;
		__this->___spawnUponStart_5 = (bool)1;
		// public float startDelay=1;
		__this->___startDelay_7 = (1.0f);
		// public List<TDSArea> spawnAreaList=new List<TDSArea>(); //first element is used as the default
		List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* L_0 = (List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C*)il2cpp_codegen_object_new(List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C_il2cpp_TypeInfo_var);
		List_1__ctor_m839FAABC816FAFDEC32B5270F736E90938BEDBFE(L_0, List_1__ctor_m839FAABC816FAFDEC32B5270F736E90938BEDBFE_RuntimeMethod_var);
		__this->___spawnAreaList_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnAreaList_8), (void*)L_0);
		// public bool randomRotation=true;
		__this->___randomRotation_9 = (bool)1;
		// public float anchorRadius=3;
		__this->___anchorRadius_11 = (3.0f);
		// public List<Unit> spawnUnitList=new List<Unit>();
		List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* L_1 = (List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503*)il2cpp_codegen_object_new(List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503_il2cpp_TypeInfo_var);
		List_1__ctor_mF03DFC6E86A660ECD1175DE14A893E663974275B(L_1, List_1__ctor_mF03DFC6E86A660ECD1175DE14A893E663974275B_RuntimeMethod_var);
		__this->___spawnUnitList_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnUnitList_12), (void*)L_1);
		// public _OverrideMode overrideHPMode=_OverrideMode.Multiply;
		__this->___overrideHPMode_14 = 2;
		// public float startingHitPoint=25;
		__this->___startingHitPoint_15 = (25.0f);
		// public float hitPointIncrement=5;
		__this->___hitPointIncrement_16 = (5.0f);
		// public float hitPointTimeStep=30;
		__this->___hitPointTimeStep_17 = (30.0f);
		// private int currentWaveIDX=-1;
		__this->___currentWaveIDX_19 = (-1);
		// public List<Wave> waveList=new List<Wave>();
		List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449* L_2 = (List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449*)il2cpp_codegen_object_new(List_1_tF6E9757A96FB5EB81CFEB9A924D9CE62CAB62449_il2cpp_TypeInfo_var);
		List_1__ctor_mE66BA4DF881E19595251A20BA0B1FB5F6D1B9D70(L_2, List_1__ctor_mE66BA4DF881E19595251A20BA0B1FB5F6D1B9D70_RuntimeMethod_var);
		__this->___waveList_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waveList_21), (void*)L_2);
		// public float delayBetweenWave=3;
		__this->___delayBetweenWave_22 = (3.0f);
		// public int maxSubWaveCount=3;
		__this->___maxSubWaveCount_23 = 3;
		// public int unitCount=8;
		__this->___unitCount_24 = 8;
		// public int unitCountInc=4;
		__this->___unitCountInc_25 = 4;
		// public int startingCredit=10;
		__this->___startingCredit_27 = ((int32_t)10);
		// public int creditIncrement=10;
		__this->___creditIncrement_28 = ((int32_t)10);
		// public int startingScore=10;
		__this->___startingScore_29 = ((int32_t)10);
		// public int scoreIncrement=10;
		__this->___scoreIncrement_30 = ((int32_t)10);
		// public float spawnCD=1.5f;
		__this->___spawnCD_31 = (1.5f);
		// public int activeLimit=10;
		__this->___activeLimit_32 = ((int32_t)10);
		// public int limitSpawnCount=20;
		__this->___limitSpawnCount_33 = ((int32_t)20);
		// public int limitSpawnTime=20;
		__this->___limitSpawnTime_34 = ((int32_t)20);
		// public _SpawnLimitType limitType=_SpawnLimitType.Timed;
		__this->___limitType_35 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TDSTK.UnitSpawner/<SpawnWave>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnWaveU3Ed__43__ctor_m391215B43A69F346C44D1A7B43A19E617779D562 (U3CSpawnWaveU3Ed__43_tE26381FD24D84D23EBC5CD47D796C4525D9B5656* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TDSTK.UnitSpawner/<SpawnWave>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnWaveU3Ed__43_System_IDisposable_Dispose_m1345CE378386F4EFEEBCA395911804349ED09A43 (U3CSpawnWaveU3Ed__43_tE26381FD24D84D23EBC5CD47D796C4525D9B5656* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TDSTK.UnitSpawner/<SpawnWave>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnWaveU3Ed__43_MoveNext_mEFF8D14FDA94C6CD0AA191FE568508A1B994906A (U3CSpawnWaveU3Ed__43_tE26381FD24D84D23EBC5CD47D796C4525D9B5656* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE0EB1D4F388BFDF9840E5E2DD984741C39FF4080_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BCEBD18C2DC79D05DA1C5CC1CF92EDA9DFC118D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB881BEBBD4CC50D8D9874B06344138D33BF7D36F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC6ACC219413F8E5E3F24200BDC34C6A3C8E5BB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDBF05439B6366F0C5522BC8D41C495733A86ED9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_00fa;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->___delay_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0043:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log(gameObject.name+" - start spawning wave "+currentWaveIDX);
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_5 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_8 = V_1;
		int32_t* L_9 = (int32_t*)(&L_8->___currentWaveIDX_19);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_7, _stringLiteral2BCEBD18C2DC79D05DA1C5CC1CF92EDA9DFC118D, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// if(currentWaveIDX>0) spawnHP+=hitPointIncrement;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_12 = V_1;
		int32_t L_13 = L_12->___currentWaveIDX_19;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_008b;
		}
	}
	{
		// if(currentWaveIDX>0) spawnHP+=hitPointIncrement;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_14 = V_1;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_15 = V_1;
		float L_16 = L_15->___spawnHP_18;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_17 = V_1;
		float L_18 = L_17->___hitPointIncrement_16;
		L_14->___spawnHP_18 = ((float)il2cpp_codegen_add(L_16, L_18));
	}

IL_008b:
	{
		// if(wave.subWaveList.Count==0) Debug.LogWarning("Trying to spawn an empty wave", thisT);
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_19 = __this->___wave_4;
		List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5* L_20 = L_19->___subWaveList_1;
		int32_t L_21;
		L_21 = List_1_get_Count_mE0EB1D4F388BFDF9840E5E2DD984741C39FF4080_inline(L_20, List_1_get_Count_mE0EB1D4F388BFDF9840E5E2DD984741C39FF4080_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_00ad;
		}
	}
	{
		// if(wave.subWaveList.Count==0) Debug.LogWarning("Trying to spawn an empty wave", thisT);
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_22 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = L_22->___thisT_39;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteralFDBF05439B6366F0C5522BC8D41C495733A86ED9, L_23, NULL);
	}

IL_00ad:
	{
		// wave.subWaveSpawned=0;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_24 = __this->___wave_4;
		L_24->___subWaveSpawned_6 = 0;
		// for(int i=0; i<wave.subWaveList.Count; i++) StartCoroutine(SpawnSubWave(wave, i));
		V_2 = 0;
		goto IL_00d5;
	}

IL_00bd:
	{
		// for(int i=0; i<wave.subWaveList.Count; i++) StartCoroutine(SpawnSubWave(wave, i));
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_25 = V_1;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_26 = V_1;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_27 = __this->___wave_4;
		int32_t L_28 = V_2;
		RuntimeObject* L_29;
		L_29 = UnitSpawner_SpawnSubWave_mBB958D0E72B733D2AE9AE8F314FBDB903BE9F0C1(L_26, L_27, L_28, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_30;
		L_30 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_25, L_29, NULL);
		// for(int i=0; i<wave.subWaveList.Count; i++) StartCoroutine(SpawnSubWave(wave, i));
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00d5:
	{
		// for(int i=0; i<wave.subWaveList.Count; i++) StartCoroutine(SpawnSubWave(wave, i));
		int32_t L_32 = V_2;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_33 = __this->___wave_4;
		List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5* L_34 = L_33->___subWaveList_1;
		int32_t L_35;
		L_35 = List_1_get_Count_mE0EB1D4F388BFDF9840E5E2DD984741C39FF4080_inline(L_34, List_1_get_Count_mE0EB1D4F388BFDF9840E5E2DD984741C39FF4080_RuntimeMethod_var);
		if ((((int32_t)L_32) < ((int32_t)L_35)))
		{
			goto IL_00bd;
		}
	}
	{
		goto IL_0101;
	}

IL_00ea:
	{
		// while(wave.subWaveSpawned<wave.subWaveList.Count) yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00fa:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0101:
	{
		// while(wave.subWaveSpawned<wave.subWaveList.Count) yield return null;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_36 = __this->___wave_4;
		int32_t L_37 = L_36->___subWaveSpawned_6;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_38 = __this->___wave_4;
		List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5* L_39 = L_38->___subWaveList_1;
		int32_t L_40;
		L_40 = List_1_get_Count_mE0EB1D4F388BFDF9840E5E2DD984741C39FF4080_inline(L_39, List_1_get_Count_mE0EB1D4F388BFDF9840E5E2DD984741C39FF4080_RuntimeMethod_var);
		if ((((int32_t)L_37) < ((int32_t)L_40)))
		{
			goto IL_00ea;
		}
	}
	{
		// wave.spawned=true;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_41 = __this->___wave_4;
		L_41->___spawned_7 = (bool)1;
		// Debug.Log(gameObject.name+" - wave "+currentWaveIDX+" spawned complete");
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_42 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_42, NULL);
		String_t* L_44;
		L_44 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_43, NULL);
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_45 = V_1;
		int32_t* L_46 = (int32_t*)(&L_45->___currentWaveIDX_19);
		String_t* L_47;
		L_47 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_46, NULL);
		String_t* L_48;
		L_48 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_44, _stringLiteralB881BEBBD4CC50D8D9874B06344138D33BF7D36F, L_47, _stringLiteralCC6ACC219413F8E5E3F24200BDC34C6A3C8E5BB6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_48, NULL);
		// }
		return (bool)0;
	}
}
// System.Object TDSTK.UnitSpawner/<SpawnWave>d__43::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnWaveU3Ed__43_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7FEDC76C40F119A45415E47E23B300F9393C022C (U3CSpawnWaveU3Ed__43_tE26381FD24D84D23EBC5CD47D796C4525D9B5656* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TDSTK.UnitSpawner/<SpawnWave>d__43::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnWaveU3Ed__43_System_Collections_IEnumerator_Reset_m591F08613634F08F93B9178A87111B6507162F14 (U3CSpawnWaveU3Ed__43_tE26381FD24D84D23EBC5CD47D796C4525D9B5656* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnWaveU3Ed__43_System_Collections_IEnumerator_Reset_m591F08613634F08F93B9178A87111B6507162F14_RuntimeMethod_var)));
	}
}
// System.Object TDSTK.UnitSpawner/<SpawnWave>d__43::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnWaveU3Ed__43_System_Collections_IEnumerator_get_Current_mF01542207713A987CF9769296C18745DCC3D11B0 (U3CSpawnWaveU3Ed__43_tE26381FD24D84D23EBC5CD47D796C4525D9B5656* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void TDSTK.UnitSpawner/<SpawnSubWave>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnSubWaveU3Ed__44__ctor_mBEDF673CD216CFE84EE08BAA5400ECA551368DA4 (U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TDSTK.UnitSpawner/<SpawnSubWave>d__44::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnSubWaveU3Ed__44_System_IDisposable_Dispose_m7514F5CE74A775A806B23AF7C37005A5F4BF6717 (U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TDSTK.UnitSpawner/<SpawnSubWave>d__44::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnSubWaveU3Ed__44_MoveNext_m3755DAAC4B2C8EEABC24ABC781BB41F9B9D2FBF9 (U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEB2192FA1C5AA2AD75983DFFA7FF4336FE96AF2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* V_1 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E* G_B4_0 = NULL;
	U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E* G_B3_0 = NULL;
	TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* G_B5_0 = NULL;
	U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E* G_B5_1 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_1 = __this->___U3CU3E4__this_4;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_009a;
			}
			case 2:
			{
				goto IL_00eb;
			}
			case 3:
			{
				goto IL_01dc;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SubWave subWave=wave.subWaveList[subWaveIdx];
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_3 = __this->___wave_2;
		List_1_tD82DCA0DC16A0B9AEF5EF984C0D7BEC8EB3013A5* L_4 = L_3->___subWaveList_1;
		int32_t L_5 = __this->___subWaveIdx_3;
		SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* L_6;
		L_6 = List_1_get_Item_mEB2192FA1C5AA2AD75983DFFA7FF4336FE96AF2D(L_4, L_5, List_1_get_Item_mEB2192FA1C5AA2AD75983DFFA7FF4336FE96AF2D_RuntimeMethod_var);
		__this->___U3CsubWaveU3E5__2_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubWaveU3E5__2_5), (void*)L_6);
		// TDSArea sArea=subWave.spawnArea!=null ? subWave.spawnArea : spawnAreaList[0];    //use the default spawn area if nothing has been assigned for the subwave
		SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* L_7 = __this->___U3CsubWaveU3E5__2_5;
		TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* L_8 = L_7->___spawnArea_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = __this;
		if (L_9)
		{
			G_B4_0 = __this;
			goto IL_006b;
		}
	}
	{
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_10 = V_1;
		List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* L_11 = L_10->___spawnAreaList_8;
		TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* L_12;
		L_12 = List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874(L_11, 0, List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874_RuntimeMethod_var);
		G_B5_0 = L_12;
		G_B5_1 = G_B3_0;
		goto IL_0076;
	}

IL_006b:
	{
		SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* L_13 = __this->___U3CsubWaveU3E5__2_5;
		TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* L_14 = L_13->___spawnArea_4;
		G_B5_0 = L_14;
		G_B5_1 = G_B4_0;
	}

IL_0076:
	{
		G_B5_1->___U3CsAreaU3E5__3_6 = G_B5_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B5_1->___U3CsAreaU3E5__3_6), (void*)G_B5_0);
		// yield return new WaitForSeconds(subWave.startDelay);
		SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* L_15 = __this->___U3CsubWaveU3E5__2_5;
		float L_16 = L_15->___startDelay_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_17 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_17, L_16, NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(subWave.unitPrefab!=null){
		SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* L_18 = __this->___U3CsubWaveU3E5__2_5;
		Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* L_19 = L_18->___unitPrefab_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_01b9;
		}
	}
	{
		// for(int i=0; i<subWave.count; i++){
		__this->___U3CiU3E5__4_7 = 0;
		goto IL_01a3;
	}

IL_00c3:
	{
		// if(i>0) yield return new WaitForSeconds(subWave.interval);
		int32_t L_21 = __this->___U3CiU3E5__4_7;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00f2;
		}
	}
	{
		// if(i>0) yield return new WaitForSeconds(subWave.interval);
		SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* L_22 = __this->___U3CsubWaveU3E5__2_5;
		float L_23 = L_22->___interval_3;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_24 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_24, L_23, NULL);
		__this->___U3CU3E2__current_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_24);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00eb:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00f2:
	{
		// Quaternion rot=!randomRotation ? sArea.GetRotation() : Quaternion.Euler(0, Random.Range(0, 360), 0);
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_25 = V_1;
		bool L_26 = L_25->___randomRotation_9;
		if (!L_26)
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_27;
		L_27 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)360), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), ((float)L_27), (0.0f), NULL);
		G_B14_0 = L_28;
		goto IL_0122;
	}

IL_0117:
	{
		TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* L_29 = __this->___U3CsAreaU3E5__3_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = TDSArea_GetRotation_mA9CBCD5700A144A463850CE63437A5D87E606C2A(L_29, NULL);
		G_B14_0 = L_30;
	}

IL_0122:
	{
		V_2 = G_B14_0;
		// UnitAI unitInstance=SpawnUnit(subWave.unitPrefab.gameObject, sArea.GetPosition(), rot, subWave.unitPrefab.gameObject.name+"_"+spawnCount);
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_31 = V_1;
		SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* L_32 = __this->___U3CsubWaveU3E5__2_5;
		Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* L_33 = L_32->___unitPrefab_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_33, NULL);
		TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* L_35 = __this->___U3CsAreaU3E5__3_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = TDSArea_GetPosition_mDA0A103EA588293E1FCA56EF7DC8DA3D1076B04E(L_35, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37 = V_2;
		SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* L_38 = __this->___U3CsubWaveU3E5__2_5;
		Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* L_39 = L_38->___unitPrefab_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_39, NULL);
		String_t* L_41;
		L_41 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_40, NULL);
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_42 = V_1;
		int32_t* L_43 = (int32_t*)(&L_42->___spawnCount_37);
		String_t* L_44;
		L_44 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_43, NULL);
		String_t* L_45;
		L_45 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_41, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_44, NULL);
		UnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029* L_46;
		L_46 = UnitSpawner_SpawnUnit_mD449168E2D4F3BF63A6436F419F8633AD5B51D42(L_31, L_34, L_36, L_37, L_45, NULL);
		// unitInstance.SetWaveID(this, wave.waveID);    //assign the unit with the waveID so they know they belong to a wave (unit with valid waveID will call UnitCleared() callback)
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_47 = V_1;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_48 = __this->___wave_2;
		int32_t L_49 = L_48->___waveID_0;
		Unit_SetWaveID_m796720260340F6D875E577EBF562B8795395104E(L_46, L_47, L_49, NULL);
		// wave.activeUnitCount+=1;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_50 = __this->___wave_2;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_51 = L_50;
		int32_t L_52 = L_51->___activeUnitCount_5;
		L_51->___activeUnitCount_5 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		// for(int i=0; i<subWave.count; i++){
		int32_t L_53 = __this->___U3CiU3E5__4_7;
		V_3 = L_53;
		int32_t L_54 = V_3;
		__this->___U3CiU3E5__4_7 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_01a3:
	{
		// for(int i=0; i<subWave.count; i++){
		int32_t L_55 = __this->___U3CiU3E5__4_7;
		SubWave_t3309BD64BFEFA04063F5AC4CE5758A70065E75BB* L_56 = __this->___U3CsubWaveU3E5__2_5;
		int32_t L_57 = L_56->___count_0;
		if ((((int32_t)L_55) < ((int32_t)L_57)))
		{
			goto IL_00c3;
		}
	}

IL_01b9:
	{
		// wave.subWaveSpawned+=1;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_58 = __this->___wave_2;
		Wave_t65332B65BB35E2A0A549B5074493644DE6159233* L_59 = L_58;
		int32_t L_60 = L_59->___subWaveSpawned_6;
		L_59->___subWaveSpawned_6 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_01dc:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object TDSTK.UnitSpawner/<SpawnSubWave>d__44::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnSubWaveU3Ed__44_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4B31CD5618028769F2F8E2090AF341A460C3EDA6 (U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TDSTK.UnitSpawner/<SpawnSubWave>d__44::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnSubWaveU3Ed__44_System_Collections_IEnumerator_Reset_mC48CFC419176745B39A6764FE22ADEB624F8A459 (U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnSubWaveU3Ed__44_System_Collections_IEnumerator_Reset_mC48CFC419176745B39A6764FE22ADEB624F8A459_RuntimeMethod_var)));
	}
}
// System.Object TDSTK.UnitSpawner/<SpawnSubWave>d__44::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnSubWaveU3Ed__44_System_Collections_IEnumerator_get_Current_mF158945EC4361F9B326CE3DA7E8A1BACEE23CD11 (U3CSpawnSubWaveU3Ed__44_t5C9A9BEE340DB7DEC6A3A79DCF46D6F7270AC01E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void TDSTK.UnitSpawner/<SpawnFreeForm>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnFreeFormU3Ed__47__ctor_m923DA683E3B2E7F50D9420458FBB727583703191 (U3CSpawnFreeFormU3Ed__47_tD77592873DD7214CC46E7B46C7A14963D98F9E39* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TDSTK.UnitSpawner/<SpawnFreeForm>d__47::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnFreeFormU3Ed__47_System_IDisposable_Dispose_mC112D5C6A3A91C3EBD2BBE701266C1146222B63A (U3CSpawnFreeFormU3Ed__47_tD77592873DD7214CC46E7B46C7A14963D98F9E39* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TDSTK.UnitSpawner/<SpawnFreeForm>d__47::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnFreeFormU3Ed__47_MoveNext_mC3BD15203C4EEBFA769A83A21D7E68501DA0F9A8 (U3CSpawnFreeFormU3Ed__47_tD77592873DD7214CC46E7B46C7A14963D98F9E39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m610F3504AA5B2BEB809F8E2E9A658C13E78EA565_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1DC2EDDA2684D3FE9DAB38AA40DC371409C03130_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AA9A9BBFE964CECB50647DA5B9FB7E29EDFAC91);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* V_1 = NULL;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_004f;
			}
			case 2:
			{
				goto IL_0093;
			}
			case 3:
			{
				goto IL_00b9;
			}
			case 4:
			{
				goto IL_01c9;
			}
			case 5:
			{
				goto IL_01e5;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(startDelay);
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_3 = V_1;
		float L_4 = L_3->___startDelay_7;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(limitType==_SpawnLimitType.Timed) StartCoroutine(SpawnLimitTimerRoutine());
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_6 = V_1;
		int32_t L_7 = L_6->___limitType_35;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_006c;
		}
	}
	{
		// if(limitType==_SpawnLimitType.Timed) StartCoroutine(SpawnLimitTimerRoutine());
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_8 = V_1;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_9 = V_1;
		RuntimeObject* L_10;
		L_10 = UnitSpawner_SpawnLimitTimerRoutine_m699B6F77CA283F2BF3BE67775671461755B1A609(L_9, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_8, L_10, NULL);
	}

IL_006c:
	{
		// if(overrideHitPoint) StartCoroutine(OverridingHitPointRoutine());
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_12 = V_1;
		bool L_13 = L_12->___overrideHitPoint_13;
		if (!L_13)
		{
			goto IL_009a;
		}
	}
	{
		// if(overrideHitPoint) StartCoroutine(OverridingHitPointRoutine());
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_14 = V_1;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_15 = V_1;
		RuntimeObject* L_16;
		L_16 = UnitSpawner_OverridingHitPointRoutine_mB923B27907B41F10B6CC74DCDF941876AAD04A68(L_15, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_17;
		L_17 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_14, L_16, NULL);
		goto IL_009a;
	}

IL_0083:
	{
		// while(spawnUnitList.Count==0) yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0093:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_009a:
	{
		// while(spawnUnitList.Count==0) yield return null;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_18 = V_1;
		List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* L_19 = L_18->___spawnUnitList_12;
		int32_t L_20;
		L_20 = List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_inline(L_19, List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_RuntimeMethod_var);
		if (!L_20)
		{
			goto IL_0083;
		}
	}
	{
		goto IL_00c0;
	}

IL_00a9:
	{
		// while(activeCount==activeLimit) yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00b9:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00c0:
	{
		// while(activeCount==activeLimit) yield return null;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_21 = V_1;
		int32_t L_22 = L_21->___activeCount_36;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_23 = V_1;
		int32_t L_24 = L_23->___activeLimit_32;
		if ((((int32_t)L_22) == ((int32_t)L_24)))
		{
			goto IL_00a9;
		}
	}
	{
		// if(limitType==_SpawnLimitType.Timed && freeformTimeOut) break;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_25 = V_1;
		int32_t L_26 = L_25->___limitType_35;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_00e2;
		}
	}
	{
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_27 = V_1;
		bool L_28 = L_27->___freeformTimeOut_40;
		if (L_28)
		{
			goto IL_01ec;
		}
	}

IL_00e2:
	{
		// int rand=Random.Range(0, spawnAreaList.Count);
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_29 = V_1;
		List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* L_30 = L_29->___spawnAreaList_8;
		int32_t L_31;
		L_31 = List_1_get_Count_m610F3504AA5B2BEB809F8E2E9A658C13E78EA565_inline(L_30, List_1_get_Count_m610F3504AA5B2BEB809F8E2E9A658C13E78EA565_RuntimeMethod_var);
		int32_t L_32;
		L_32 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_31, NULL);
		V_2 = L_32;
		// Vector3 pos=spawnAreaList[rand].GetPosition();
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_33 = V_1;
		List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* L_34 = L_33->___spawnAreaList_8;
		int32_t L_35 = V_2;
		TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* L_36;
		L_36 = List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874(L_34, L_35, List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = TDSArea_GetPosition_mDA0A103EA588293E1FCA56EF7DC8DA3D1076B04E(L_36, NULL);
		V_3 = L_37;
		// Quaternion rot=!randomRotation ? spawnAreaList[rand].GetRotation() : Quaternion.Euler(0, Random.Range(0, 360), 0);
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_38 = V_1;
		bool L_39 = L_38->___randomRotation_9;
		if (!L_39)
		{
			goto IL_012b;
		}
	}
	{
		int32_t L_40;
		L_40 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)360), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41;
		L_41 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), ((float)L_40), (0.0f), NULL);
		G_B19_0 = L_41;
		goto IL_013c;
	}

IL_012b:
	{
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_42 = V_1;
		List_1_tD939E750607E4F06E23F7785B4E7C69D7A1C0A8C* L_43 = L_42->___spawnAreaList_8;
		int32_t L_44 = V_2;
		TDSArea_t21575648F95D2DF99593F0CD5091634A39179B0C* L_45;
		L_45 = List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874(L_43, L_44, List_1_get_Item_m00A79A9570317AA65174B7C97030EFC395BD6874_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46;
		L_46 = TDSArea_GetRotation_mA9CBCD5700A144A463850CE63437A5D87E606C2A(L_45, NULL);
		G_B19_0 = L_46;
	}

IL_013c:
	{
		V_4 = G_B19_0;
		// int randU=Random.Range(0, spawnUnitList.Count);
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_47 = V_1;
		List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* L_48 = L_47->___spawnUnitList_12;
		int32_t L_49;
		L_49 = List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_inline(L_48, List_1_get_Count_m5C2B4076D171034FC8B21A838276802FE9658F83_RuntimeMethod_var);
		int32_t L_50;
		L_50 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_49, NULL);
		V_5 = L_50;
		// SpawnUnit(spawnUnitList[randU].gameObject, pos, rot, spawnUnitList[randU].gameObject.name+"_"+spawnCount);
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_51 = V_1;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_52 = V_1;
		List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* L_53 = L_52->___spawnUnitList_12;
		int32_t L_54 = V_5;
		Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* L_55;
		L_55 = List_1_get_Item_m1DC2EDDA2684D3FE9DAB38AA40DC371409C03130(L_53, L_54, List_1_get_Item_m1DC2EDDA2684D3FE9DAB38AA40DC371409C03130_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
		L_56 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_55, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = V_4;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_59 = V_1;
		List_1_t4AF8D02B480F778EF236E8328364EBB7D2006503* L_60 = L_59->___spawnUnitList_12;
		int32_t L_61 = V_5;
		Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* L_62;
		L_62 = List_1_get_Item_m1DC2EDDA2684D3FE9DAB38AA40DC371409C03130(L_60, L_61, List_1_get_Item_m1DC2EDDA2684D3FE9DAB38AA40DC371409C03130_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63;
		L_63 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_62, NULL);
		String_t* L_64;
		L_64 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_63, NULL);
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_65 = V_1;
		int32_t* L_66 = (int32_t*)(&L_65->___spawnCount_37);
		String_t* L_67;
		L_67 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_66, NULL);
		String_t* L_68;
		L_68 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_64, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_67, NULL);
		UnitAI_t5DAEE58F2F75613CBF55C0C30914564DDAC89029* L_69;
		L_69 = UnitSpawner_SpawnUnit_mD449168E2D4F3BF63A6436F419F8633AD5B51D42(L_51, L_56, L_57, L_58, L_68, NULL);
		// if(limitType==_SpawnLimitType.Count && spawnCount==limitSpawnCount) break;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_70 = V_1;
		int32_t L_71 = L_70->___limitType_35;
		if (L_71)
		{
			goto IL_01af;
		}
	}
	{
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_72 = V_1;
		int32_t L_73 = L_72->___spawnCount_37;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_74 = V_1;
		int32_t L_75 = L_74->___limitSpawnCount_33;
		if ((((int32_t)L_73) == ((int32_t)L_75)))
		{
			goto IL_01ec;
		}
	}

IL_01af:
	{
		// yield return new WaitForSeconds(spawnCD);
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_76 = V_1;
		float L_77 = L_76->___spawnCD_31;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_78 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_78, L_77, NULL);
		__this->___U3CU3E2__current_1 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_78);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_01c9:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while(true){
		goto IL_009a;
	}

IL_01d5:
	{
		// while(activeCount>0) yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_01e5:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_01ec:
	{
		// while(activeCount>0) yield return null;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_79 = V_1;
		int32_t L_80 = L_79->___activeCount_36;
		if ((((int32_t)L_80) > ((int32_t)0)))
		{
			goto IL_01d5;
		}
	}
	{
		// Debug.Log(gameObject.name+" (UnitSpawner) is cleared");
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_81 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82;
		L_82 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_81, NULL);
		String_t* L_83;
		L_83 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_82, NULL);
		String_t* L_84;
		L_84 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_83, _stringLiteral6AA9A9BBFE964CECB50647DA5B9FB7E29EDFAC91, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_84, NULL);
		// Cleared();
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_85 = V_1;
		UnitSpawner_Cleared_m31FA0F295194D1BE1708943CF9AD32DDF415B9CE(L_85, NULL);
		// }
		return (bool)0;
	}
}
// System.Object TDSTK.UnitSpawner/<SpawnFreeForm>d__47::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnFreeFormU3Ed__47_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1BD50862BBF935D8FD3722D313BC2DDC27DCDD95 (U3CSpawnFreeFormU3Ed__47_tD77592873DD7214CC46E7B46C7A14963D98F9E39* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TDSTK.UnitSpawner/<SpawnFreeForm>d__47::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnFreeFormU3Ed__47_System_Collections_IEnumerator_Reset_m7C74B2FA0D52DF637D6BE68CEB869913F87A1F3F (U3CSpawnFreeFormU3Ed__47_tD77592873DD7214CC46E7B46C7A14963D98F9E39* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnFreeFormU3Ed__47_System_Collections_IEnumerator_Reset_m7C74B2FA0D52DF637D6BE68CEB869913F87A1F3F_RuntimeMethod_var)));
	}
}
// System.Object TDSTK.UnitSpawner/<SpawnFreeForm>d__47::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnFreeFormU3Ed__47_System_Collections_IEnumerator_get_Current_mC790BDE01B92C076F61D43EA496EDF85D62AC0AE (U3CSpawnFreeFormU3Ed__47_tD77592873DD7214CC46E7B46C7A14963D98F9E39* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void TDSTK.UnitSpawner/<SpawnLimitTimerRoutine>d__49::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnLimitTimerRoutineU3Ed__49__ctor_m08FBA2A6A247EBCE2F65D26B678DB8C58C193A1B (U3CSpawnLimitTimerRoutineU3Ed__49_t135813F7125DBB6F562B5F1F399FE96E87C7D61F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TDSTK.UnitSpawner/<SpawnLimitTimerRoutine>d__49::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnLimitTimerRoutineU3Ed__49_System_IDisposable_Dispose_mA07FE05034ADEBD40BCCC072EC5FDA0B0088C4D8 (U3CSpawnLimitTimerRoutineU3Ed__49_t135813F7125DBB6F562B5F1F399FE96E87C7D61F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TDSTK.UnitSpawner/<SpawnLimitTimerRoutine>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnLimitTimerRoutineU3Ed__49_MoveNext_mEA3213858A484DDADB4873DFC360FE3965EB1516 (U3CSpawnLimitTimerRoutineU3Ed__49_t135813F7125DBB6F562B5F1F399FE96E87C7D61F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(limitSpawnTime);
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_4 = V_1;
		int32_t L_5 = L_4->___limitSpawnTime_34;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, ((float)L_5), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// freeformTimeOut=true;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_7 = V_1;
		L_7->___freeformTimeOut_40 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object TDSTK.UnitSpawner/<SpawnLimitTimerRoutine>d__49::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnLimitTimerRoutineU3Ed__49_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD6B6732083CC669A2A2E07A23118BFCFBBF01A2B (U3CSpawnLimitTimerRoutineU3Ed__49_t135813F7125DBB6F562B5F1F399FE96E87C7D61F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TDSTK.UnitSpawner/<SpawnLimitTimerRoutine>d__49::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnLimitTimerRoutineU3Ed__49_System_Collections_IEnumerator_Reset_m88F6A4D8657234F76E0539C5A308F3C99E6579B3 (U3CSpawnLimitTimerRoutineU3Ed__49_t135813F7125DBB6F562B5F1F399FE96E87C7D61F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnLimitTimerRoutineU3Ed__49_System_Collections_IEnumerator_Reset_m88F6A4D8657234F76E0539C5A308F3C99E6579B3_RuntimeMethod_var)));
	}
}
// System.Object TDSTK.UnitSpawner/<SpawnLimitTimerRoutine>d__49::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnLimitTimerRoutineU3Ed__49_System_Collections_IEnumerator_get_Current_mB1048B5BE908B64883B0F7188B5ECCD14630DF96 (U3CSpawnLimitTimerRoutineU3Ed__49_t135813F7125DBB6F562B5F1F399FE96E87C7D61F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void TDSTK.UnitSpawner/<OverridingHitPointRoutine>d__50::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COverridingHitPointRoutineU3Ed__50__ctor_mBE4883E1E34F8F5EE642F995C5B2418702007C6D (U3COverridingHitPointRoutineU3Ed__50_tCC1895F1EEB71BDEEBAD5A8E33804A9D2B770F24* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TDSTK.UnitSpawner/<OverridingHitPointRoutine>d__50::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COverridingHitPointRoutineU3Ed__50_System_IDisposable_Dispose_m1044A374B3E5C03EE1922918191FA974DEE3776A (U3COverridingHitPointRoutineU3Ed__50_tCC1895F1EEB71BDEEBAD5A8E33804A9D2B770F24* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TDSTK.UnitSpawner/<OverridingHitPointRoutine>d__50::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COverridingHitPointRoutineU3Ed__50_MoveNext_m5B989A7F2674778705CE4CE6D137E63325C020D9 (U3COverridingHitPointRoutineU3Ed__50_tCC1895F1EEB71BDEEBAD5A8E33804A9D2B770F24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForSeconds(hitPointTimeStep);
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_4 = V_1;
		float L_5 = L_4->___hitPointTimeStep_17;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// spawnHP+=hitPointIncrement;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_7 = V_1;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_8 = V_1;
		float L_9 = L_8->___spawnHP_18;
		UnitSpawner_t05E6EFD5BBBF8D7B41CBA4FA19096FE699035231* L_10 = V_1;
		float L_11 = L_10->___hitPointIncrement_16;
		L_7->___spawnHP_18 = ((float)il2cpp_codegen_add(L_9, L_11));
		// while(true){
		goto IL_001e;
	}
}
// System.Object TDSTK.UnitSpawner/<OverridingHitPointRoutine>d__50::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COverridingHitPointRoutineU3Ed__50_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF518927F0AB71DC7FD35A5891C52018599AF8169 (U3COverridingHitPointRoutineU3Ed__50_tCC1895F1EEB71BDEEBAD5A8E33804A9D2B770F24* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TDSTK.UnitSpawner/<OverridingHitPointRoutine>d__50::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COverridingHitPointRoutineU3Ed__50_System_Collections_IEnumerator_Reset_m496523080ED479850347A5AA268C3CF3A3C01499 (U3COverridingHitPointRoutineU3Ed__50_tCC1895F1EEB71BDEEBAD5A8E33804A9D2B770F24* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COverridingHitPointRoutineU3Ed__50_System_Collections_IEnumerator_Reset_m496523080ED479850347A5AA268C3CF3A3C01499_RuntimeMethod_var)));
	}
}
// System.Object TDSTK.UnitSpawner/<OverridingHitPointRoutine>d__50::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COverridingHitPointRoutineU3Ed__50_System_Collections_IEnumerator_get_Current_mE19239C5B392F40DFFEBC3A2AA90E4CD03D66BC6 (U3COverridingHitPointRoutineU3Ed__50_tCC1895F1EEB71BDEEBAD5A8E33804A9D2B770F24* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void TDSTK.Weapon::SetFireCallback(TDSTK.Weapon/FireCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_SetFireCallback_m16913047662750D11568E33A799CBDE5AD24DB3C (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9B56FCA69D7CF9126307924715FAA659B199ACB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetFireCallback(FireCallback callback){ fireCallbackList.Add(callback); }    //not in used atm
		List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A* L_0 = __this->___fireCallbackList_4;
		FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* L_1 = ___0_callback;
		List_1_Add_m9B56FCA69D7CF9126307924715FAA659B199ACB9_inline(L_0, L_1, List_1_Add_m9B56FCA69D7CF9126307924715FAA659B199ACB9_RuntimeMethod_var);
		// public void SetFireCallback(FireCallback callback){ fireCallbackList.Add(callback); }    //not in used atm
		return;
	}
}
// TDSTK.AttackStats TDSTK.Weapon::CloneAttackStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* Weapon_CloneAttackStats_m65C114C9FEC91A2155A81A107647AD29A74E2F22 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	{
		// public AttackStats CloneAttackStats(){ return aStats.Clone(); }
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_0 = __this->___aStats_29;
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_1;
		L_1 = AttackStats_Clone_mCA046086E98E78AB6309460138DBB95FB7ADB622(L_0, NULL);
		return L_1;
	}
}
// TDSTK.AttackStats TDSTK.Weapon::GetRuntimeAttackStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* Weapon_GetRuntimeAttackStats_m40F2F2859E15A608B4464EA5EFCC08414F1B726C (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	{
		// public AttackStats GetRuntimeAttackStats(){ return ModifyAttackStatsToPerk(aStats.Clone()); }
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_0 = __this->___aStats_29;
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_1;
		L_1 = AttackStats_Clone_mCA046086E98E78AB6309460138DBB95FB7ADB622(L_0, NULL);
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_2;
		L_2 = Weapon_ModifyAttackStatsToPerk_m80CE3AB5F086A09F0CB3A60F4F135F09A43A5B38(__this, L_1, NULL);
		return L_2;
	}
}
// System.Void TDSTK.Weapon::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Awake_m8AD3F1E3A439062020D374FFB88A1019DC5D26EA (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE966D359311D146731C61B7CC8E9235F6FBE8F32);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i=0; i<shootPointList.Count; i++){
		V_0 = 0;
		goto IL_002c;
	}

IL_0004:
	{
		// if(shootPointList[i]==null){
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___shootPointList_10;
		int32_t L_1 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_0, L_1, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// shootPointList.RemoveAt(i);    i-=1;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_4 = __this->___shootPointList_10;
		int32_t L_5 = V_0;
		List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437(L_4, L_5, List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var);
		// shootPointList.RemoveAt(i);    i-=1;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}

IL_0028:
	{
		// for(int i=0; i<shootPointList.Count; i++){
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002c:
	{
		// for(int i=0; i<shootPointList.Count; i++){
		int32_t L_8 = V_0;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_9 = __this->___shootPointList_10;
		int32_t L_10;
		L_10 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_9, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// if(shootPointList.Count==0) shootPointList.Add(transform);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_11 = __this->___shootPointList_10;
		int32_t L_12;
		L_12 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_11, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0058;
		}
	}
	{
		// if(shootPointList.Count==0) shootPointList.Add(transform);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_13 = __this->___shootPointList_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_13, L_14, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
	}

IL_0058:
	{
		// if(shootObject!=null) InitShootObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___shootObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_006c;
		}
	}
	{
		// if(shootObject!=null) InitShootObject();
		Weapon_InitShootObject_mD23824925B89F8E3E14743CFE6D63B59F0141369(__this, NULL);
	}

IL_006c:
	{
		// aStats.Init();    //initiate the attack stats
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_17 = __this->___aStats_29;
		AttackStats_Init_m8FE3FBF0E1671D32C1E041A4993D8E484A0347B7(L_17, NULL);
		// ability=Ability_DB.CloneItem(abilityID);
		int32_t L_18 = __this->___abilityID_34;
		Ability_t16A59DB906BC6E3C6E8F6641165B52AA1D738927* L_19;
		L_19 = Ability_DB_CloneItem_mEF5AD2DA79219240FE48D257ECC5002B18F57F63(L_18, NULL);
		__this->___ability_35 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ability_35), (void*)L_19);
		// if(ability!=null) ability.Init();
		Ability_t16A59DB906BC6E3C6E8F6641165B52AA1D738927* L_20 = __this->___ability_35;
		if (!L_20)
		{
			goto IL_009b;
		}
	}
	{
		// if(ability!=null) ability.Init();
		Ability_t16A59DB906BC6E3C6E8F6641165B52AA1D738927* L_21 = __this->___ability_35;
		Ability_Init_m5CD39429FA798BB245FB84DB96459F11B72C205B(L_21, NULL);
	}

IL_009b:
	{
		// if(shootObject!=null) ObjectPoolManager.New(shootObject, 3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___shootObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00b8;
		}
	}
	{
		// if(shootObject!=null) ObjectPoolManager.New(shootObject, 3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___shootObject_9;
		int32_t L_25;
		L_25 = ObjectPoolManager_New_mFAED796027F2216E14F003173F63A1670B4AE020(L_24, 3, NULL);
		goto IL_00c3;
	}

IL_00b8:
	{
		// else Debug.LogWarning("shoot object for weapon unassigned", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteralE966D359311D146731C61B7CC8E9235F6FBE8F32, __this, NULL);
	}

IL_00c3:
	{
		// Reset();
		Weapon_Reset_m2B356C8D5D95A8C381E6CD574A004F1A6C6D411B(__this, NULL);
		// }
		return;
	}
}
// System.Void TDSTK.Weapon::InitShootObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_InitShootObject_mD23824925B89F8E3E14743CFE6D63B59F0141369 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05_m50591508D518473D54B5E5155C8BE461AA359AC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05* V_0 = NULL;
	Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* G_B2_0 = NULL;
	Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* G_B3_1 = NULL;
	{
		// ShootObject so=shootObject.GetComponent<ShootObject>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___shootObject_9;
		ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05* L_1;
		L_1 = GameObject_GetComponent_TisShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05_m50591508D518473D54B5E5155C8BE461AA359AC7(L_0, GameObject_GetComponent_TisShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05_m50591508D518473D54B5E5155C8BE461AA359AC7_RuntimeMethod_var);
		V_0 = L_1;
		// requireAiming=(so.type==_SOType.Homing || so.type==_SOType.Point);
		ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05* L_2 = V_0;
		int32_t L_3 = L_2->___type_4;
		G_B1_0 = __this;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			G_B2_0 = __this;
			goto IL_0021;
		}
	}
	{
		ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05* L_4 = V_0;
		int32_t L_5 = L_4->___type_4;
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)3))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0022:
	{
		G_B3_1->___requireAiming_36 = (bool)G_B3_0;
		// randCursorForRecoil=so.type==_SOType.Point;
		ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05* L_6 = V_0;
		int32_t L_7 = L_6->___type_4;
		__this->___randCursorForRecoil_37 = (bool)((((int32_t)L_7) == ((int32_t)3))? 1 : 0);
		// }
		return;
	}
}
// System.Void TDSTK.Weapon::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_OnDisable_m16DA7678ABB0845EF3D4B42108242B2F13D1CDFF (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	{
		// void OnDisable(){ reloading=false; }
		__this->___reloading_33 = (bool)0;
		// void OnDisable(){ reloading=false; }
		return;
	}
}
// System.Void TDSTK.Weapon::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Reset_m2B356C8D5D95A8C381E6CD574A004F1A6C6D411B (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	{
		// currentClip=GetClipSize();
		int32_t L_0;
		L_0 = Weapon_GetClipSize_m18C1C8AA3B9534DB2C7970F323B9C8A3966512A9(__this, NULL);
		__this->___currentClip_19 = L_0;
		// ammo=GetAmmoCap();
		int32_t L_1;
		L_1 = Weapon_GetAmmoCap_mED787005D16694216447338A25703F104AD0C645(__this, NULL);
		__this->___ammo_21 = L_1;
		// currentCD=0;
		__this->___currentCD_15 = (0.0f);
		// }
		return;
	}
}
// System.Void TDSTK.Weapon::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Fire_m8247F11432E55238EB1898F95C5541C6FF4BD666 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_tE498B75E6C6D1E531A7C6BFBF7FDEAD605AB9B0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA3E1B6A1F509C442C9EFB5EABC7A6585FDEBA5B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m83332FE97EF978E0EEDEFF62B442F13018B039F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i=0; i<fireCallbackList.Count; i++) fireCallbackList[i]();
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// for(int i=0; i<fireCallbackList.Count; i++) fireCallbackList[i]();
		List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A* L_0 = __this->___fireCallbackList_4;
		int32_t L_1 = V_0;
		FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* L_2;
		L_2 = List_1_get_Item_m83332FE97EF978E0EEDEFF62B442F13018B039F3(L_0, L_1, List_1_get_Item_m83332FE97EF978E0EEDEFF62B442F13018B039F3_RuntimeMethod_var);
		FireCallback_Invoke_m1257F7AF01A5FE88C4BACFDBA1D16DE1DA162DA6_inline(L_2, NULL);
		// for(int i=0; i<fireCallbackList.Count; i++) fireCallbackList[i]();
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0019:
	{
		// for(int i=0; i<fireCallbackList.Count; i++) fireCallbackList[i]();
		int32_t L_4 = V_0;
		List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A* L_5 = __this->___fireCallbackList_4;
		int32_t L_6;
		L_6 = List_1_get_Count_mA3E1B6A1F509C442C9EFB5EABC7A6585FDEBA5B4_inline(L_5, List_1_get_Count_mA3E1B6A1F509C442C9EFB5EABC7A6585FDEBA5B4_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// currentCD=GetCoolDown();
		float L_7;
		L_7 = Weapon_GetCoolDown_m13935333970402AA242531E1F7AFBFC21873E64B(__this, NULL);
		__this->___currentCD_15 = L_7;
		// recoil+=GetRecoilMagnitude()*2;
		float L_8 = __this->___recoil_25;
		float L_9;
		L_9 = Weapon_GetRecoilMagnitude_mC4EA0231E78DC952DCD9D794F09E23D724F6B401(__this, NULL);
		__this->___recoil_25 = ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(L_9, (2.0f)))));
		// AudioManager.PlaySound(shootSFX);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_10 = __this->___shootSFX_30;
		il2cpp_codegen_runtime_class_init_inline(AudioManager_tE498B75E6C6D1E531A7C6BFBF7FDEAD605AB9B0E_il2cpp_TypeInfo_var);
		AudioManager_PlaySound_m938384111E21E81FEAE6B70EB3BCC7E35A11130C(L_10, (bool)0, NULL);
		// if(!useEnergyAsAmmo || currentClip>0){
		bool L_11 = __this->___useEnergyAsAmmo_16;
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_12 = __this->___currentClip_19;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}

IL_0069:
	{
		// currentClip-=1;
		int32_t L_13 = __this->___currentClip_19;
		__this->___currentClip_19 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		// if(currentClip<=0){    //if out of ammo
		int32_t L_14 = __this->___currentClip_19;
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		// if(temporary){
		bool L_15 = __this->___temporary_32;
		if (!L_15)
		{
			goto IL_0093;
		}
	}
	{
		// GameControl.GetPlayer().RemoveWeapon();
		UnitPlayer_tCD37F324595628107ADB4102FB87A8AE45B18215* L_16;
		L_16 = GameControl_GetPlayer_mDF5E018D7B5501B285B859C824DBF36C983D6078(NULL);
		UnitPlayer_RemoveWeapon_mF79877A582C5578B195C1550286A10B99356F911(L_16, NULL);
		// return;
		return;
	}

IL_0093:
	{
		// if(GameControl.EnableAutoReload()) Reload();
		bool L_17;
		L_17 = GameControl_EnableAutoReload_m16D1079D6ECE7CA5CEE73ED60EC69B8912598DB8(NULL);
		if (!L_17)
		{
			goto IL_00a1;
		}
	}
	{
		// if(GameControl.EnableAutoReload()) Reload();
		bool L_18;
		L_18 = Weapon_Reload_mB45F8A38737F19AF51C9A2F05322ECB9EC34B432(__this, NULL);
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Boolean TDSTK.Weapon::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Weapon_Reload_mB45F8A38737F19AF51C9A2F05322ECB9EC34B432 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_tE498B75E6C6D1E531A7C6BFBF7FDEAD605AB9B0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(ammo==0) return false;                    //if out of ammo, dont continue
		int32_t L_0 = __this->___ammo_21;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if(ammo==0) return false;                    //if out of ammo, dont continue
		return (bool)0;
	}

IL_000a:
	{
		// if(reloading) return false;                        //if reloading is in process, dont continue
		bool L_1 = __this->___reloading_33;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if(reloading) return false;                        //if reloading is in process, dont continue
		return (bool)0;
	}

IL_0014:
	{
		// if(currentClip==GetClipSize()) return false;    //if clip is full, dont continue
		int32_t L_2 = __this->___currentClip_19;
		int32_t L_3;
		L_3 = Weapon_GetClipSize_m18C1C8AA3B9534DB2C7970F323B9C8A3966512A9(__this, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0024;
		}
	}
	{
		// if(currentClip==GetClipSize()) return false;    //if clip is full, dont continue
		return (bool)0;
	}

IL_0024:
	{
		// StartCoroutine(ReloadRoutine());            //start reloading coroutine
		RuntimeObject* L_4;
		L_4 = Weapon_ReloadRoutine_mC54E380F0D1ACDC00BB9C6586F6C69DFF8B9A695(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// TDS.Reloading();                                    //fire the reload event
		TDS_Reloading_mDD8AA0FE24827814565779478AF40693BF7F9531(NULL);
		// AudioManager.PlaySound(reloadSFX);        //play the sound
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = __this->___reloadSFX_31;
		il2cpp_codegen_runtime_class_init_inline(AudioManager_tE498B75E6C6D1E531A7C6BFBF7FDEAD605AB9B0E_il2cpp_TypeInfo_var);
		AudioManager_PlaySound_m938384111E21E81FEAE6B70EB3BCC7E35A11130C(L_6, (bool)0, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Collections.IEnumerator TDSTK.Weapon::ReloadRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Weapon_ReloadRoutine_mC54E380F0D1ACDC00BB9C6586F6C69DFF8B9A695 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReloadRoutineU3Ed__40_tCFE0588688ACD9641C5F7F0A6C3000F543CA966C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReloadRoutineU3Ed__40_tCFE0588688ACD9641C5F7F0A6C3000F543CA966C* L_0 = (U3CReloadRoutineU3Ed__40_tCFE0588688ACD9641C5F7F0A6C3000F543CA966C*)il2cpp_codegen_object_new(U3CReloadRoutineU3Ed__40_tCFE0588688ACD9641C5F7F0A6C3000F543CA966C_il2cpp_TypeInfo_var);
		U3CReloadRoutineU3Ed__40__ctor_m1DDD90729BF4090FC195BFB822DAD5250ECA18AA(L_0, 0, NULL);
		U3CReloadRoutineU3Ed__40_tCFE0588688ACD9641C5F7F0A6C3000F543CA966C* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Boolean TDSTK.Weapon::Reloading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Weapon_Reloading_m0F8C54B3C89FF373B1E819A183D00CA568645C7F (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	{
		// public bool Reloading(){ return reloading; }
		bool L_0 = __this->___reloading_33;
		return L_0;
	}
}
// System.Boolean TDSTK.Weapon::OnCoolDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Weapon_OnCoolDown_m2A71DE5E08E71AAD6F930B4A3E953805F4D4B811 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	{
		// public bool OnCoolDown(){ return currentCD>0 ? true : false ; }
		float L_0 = __this->___currentCD_15;
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		return (bool)1;
	}
}
// System.Boolean TDSTK.Weapon::OutOfAmmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Weapon_OutOfAmmo_mA0BDA803393B1F5AC207100DA9C82E5A9B8D8810 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	{
		// public bool OutOfAmmo(){ return currentClip==0 ? true: false ; }
		int32_t L_0 = __this->___currentClip_19;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		return (bool)1;
	}
}
// System.Void TDSTK.Weapon::FullAmmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_FullAmmo_mF55289BD59B3AE7A9C1F520408680C9ADECAC862 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	{
		// ammo=GetAmmoCap();
		int32_t L_0;
		L_0 = Weapon_GetAmmoCap_mED787005D16694216447338A25703F104AD0C645(__this, NULL);
		__this->___ammo_21 = L_0;
		// }
		return;
	}
}
// System.Int32 TDSTK.Weapon::GainAmmo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Weapon_GainAmmo_m317EB328635F9CD75C083959B6B9D01F92D35F0A (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int limit=GetAmmoCap()-ammo;
		int32_t L_0;
		L_0 = Weapon_GetAmmoCap_mED787005D16694216447338A25703F104AD0C645(__this, NULL);
		int32_t L_1 = __this->___ammo_21;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// ammo+=(int)Mathf.Min(value, limit);
		int32_t L_2 = __this->___ammo_21;
		int32_t L_3 = ___0_value;
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_3, L_4, NULL);
		__this->___ammo_21 = ((int32_t)il2cpp_codegen_add(L_2, L_5));
		// return limit;
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void TDSTK.Weapon::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Update_m35ECC5FBE4D2C86A89E3A1D091827F33ED97DAD6 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	{
		// currentCD-=Time.deltaTime;                //reduce the cooldown (weapon can only be fired when currentCD<0)
		float L_0 = __this->___currentCD_15;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___currentCD_15 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// recoil=recoil*(1-Time.deltaTime*3);    //reduce the recoil
		float L_2 = __this->___recoil_25;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___recoil_25 = ((float)il2cpp_codegen_multiply(L_2, ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_3, (3.0f)))))));
		// if(ability!=null) ability.currentCD-=Time.deltaTime;    //reduce the ability cooldown
		Ability_t16A59DB906BC6E3C6E8F6641165B52AA1D738927* L_4 = __this->___ability_35;
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		// if(ability!=null) ability.currentCD-=Time.deltaTime;    //reduce the ability cooldown
		Ability_t16A59DB906BC6E3C6E8F6641165B52AA1D738927* L_5 = __this->___ability_35;
		Ability_t16A59DB906BC6E3C6E8F6641165B52AA1D738927* L_6 = L_5;
		float L_7 = L_6->___currentCD_9;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		L_6->___currentCD_9 = ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void TDSTK.Weapon::FireAlt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_FireAlt_mC7D0BE17ABFED9A0FEAB66EF33DEE4FA6AB1BEE6 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if(ability==null || abilityID<0) return;
		Ability_t16A59DB906BC6E3C6E8F6641165B52AA1D738927* L_0 = __this->___ability_35;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->___abilityID_34;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_0011:
	{
		// if(ability==null || abilityID<0) return;
		return;
	}

IL_0012:
	{
		// string status=ability.IsReady();
		Ability_t16A59DB906BC6E3C6E8F6641165B52AA1D738927* L_2 = __this->___ability_35;
		String_t* L_3;
		L_3 = Ability_IsReady_m1B70D65EEB667798AF1122FC2D7EFAEFAF9CB6CD(L_2, NULL);
		V_0 = L_3;
		// if(status!=""){
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// TDS.FireAltFail(status);
		String_t* L_6 = V_0;
		TDS_FireAltFail_m3F3E985575B2A29532E8A04D67DB20F844B1C119(L_6, NULL);
		// return;
		return;
	}

IL_0032:
	{
		// AbilityManager.LaunchAbility(ability);
		Ability_t16A59DB906BC6E3C6E8F6641165B52AA1D738927* L_7 = __this->___ability_35;
		AbilityManager_LaunchAbility_m716FC37D3416F00229718E68676379EA6687A21F(L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Boolean TDSTK.Weapon::RequireAiming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Weapon_RequireAiming_m0577A07302F63DAC1DB7B194530E1EC5995BB61C (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	{
		// public bool RequireAiming(){ return requireAiming; }
		bool L_0 = __this->___requireAiming_36;
		return L_0;
	}
}
// System.Boolean TDSTK.Weapon::RandCursorForRecoil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Weapon_RandCursorForRecoil_m5D8CED74231BE3B937677DC4EE2026C229390133 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	{
		// public bool RandCursorForRecoil(){ return randCursorForRecoil; }
		bool L_0 = __this->___randCursorForRecoil_37;
		return L_0;
	}
}
// System.Void TDSTK.Weapon::SetPlayerPerk(TDSTK.PlayerPerk)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_SetPlayerPerk_m1F366252560309A99E094608EA5F701830CEDA48 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* ___0_pPerk, const RuntimeMethod* method) 
{
	{
		// public void SetPlayerPerk(PlayerPerk pPerk){ perk=pPerk; }
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_0 = ___0_pPerk;
		__this->___perk_38 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___perk_38), (void*)L_0);
		// public void SetPlayerPerk(PlayerPerk pPerk){ perk=pPerk; }
		return;
	}
}
// System.Single TDSTK.Weapon::GetRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Weapon_GetRange_mD85B6CEBA9E8079C2805F91630FC5F3132724663 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B1_1 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	{
		// public float GetRange(){ return range*(1+(perk!=null ? perk.GetWeaponRangeMul(ID) : 0)); }
		float L_0 = __this->___range_13;
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_1 = __this->___perk_38;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = (1.0f);
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = (1.0f);
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0031;
	}

IL_0020:
	{
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_3 = __this->___perk_38;
		int32_t L_4 = __this->___ID_5;
		float L_5;
		L_5 = PlayerPerk_GetWeaponRangeMul_m31691C104B38FA67160FE34559F8E148887A623B(L_3, L_4, NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0031:
	{
		return ((float)il2cpp_codegen_multiply(G_B3_2, ((float)il2cpp_codegen_add(G_B3_1, G_B3_0))));
	}
}
// System.Single TDSTK.Weapon::GetCoolDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Weapon_GetCoolDown_m13935333970402AA242531E1F7AFBFC21873E64B (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B1_1 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	{
		// public float GetCoolDown(){ return cooldown*(1+(perk!=null ? perk.GetWeaponCDMul(ID) : 0)); }
		float L_0 = __this->___cooldown_14;
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_1 = __this->___perk_38;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = (1.0f);
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = (1.0f);
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0031;
	}

IL_0020:
	{
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_3 = __this->___perk_38;
		int32_t L_4 = __this->___ID_5;
		float L_5;
		L_5 = PlayerPerk_GetWeaponCDMul_m7760A8F823E7A2D73BC5529A718D6AE099AE495E(L_3, L_4, NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0031:
	{
		return ((float)il2cpp_codegen_multiply(G_B3_2, ((float)il2cpp_codegen_add(G_B3_1, G_B3_0))));
	}
}
// System.Int32 TDSTK.Weapon::GetClipSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Weapon_GetClipSize_m18C1C8AA3B9534DB2C7970F323B9C8A3966512A9 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B1_1 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	{
		// public int GetClipSize(){ return (int)(clipSize*(1+(perk!=null ? perk.GetWeaponClipSizeMul(ID) : 0))); }
		int32_t L_0 = __this->___clipSize_18;
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_1 = __this->___perk_38;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = (1.0f);
		G_B1_1 = ((float)L_0);
		if (L_2)
		{
			G_B2_0 = (1.0f);
			G_B2_1 = ((float)L_0);
			goto IL_0021;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0032;
	}

IL_0021:
	{
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_3 = __this->___perk_38;
		int32_t L_4 = __this->___ID_5;
		float L_5;
		L_5 = PlayerPerk_GetWeaponClipSizeMul_mB4D0201AA21AFBEE6E612D39D304C4E8BC954378(L_3, L_4, NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0032:
	{
		return il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(G_B3_2, ((float)il2cpp_codegen_add(G_B3_1, G_B3_0)))));
	}
}
// System.Int32 TDSTK.Weapon::GetAmmoCap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Weapon_GetAmmoCap_mED787005D16694216447338A25703F104AD0C645 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B1_1 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	{
		// public int GetAmmoCap(){ return (int)(ammoCap*(1+(perk!=null ? perk.GetWeaponAmmoCapMul(ID) : 0))); }
		int32_t L_0 = __this->___ammoCap_20;
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_1 = __this->___perk_38;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = (1.0f);
		G_B1_1 = ((float)L_0);
		if (L_2)
		{
			G_B2_0 = (1.0f);
			G_B2_1 = ((float)L_0);
			goto IL_0021;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0032;
	}

IL_0021:
	{
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_3 = __this->___perk_38;
		int32_t L_4 = __this->___ID_5;
		float L_5;
		L_5 = PlayerPerk_GetWeaponAmmoCapMul_m5D3D1B73B7EF6E89FDF21D9FFE7A86AB5D7CACFE(L_3, L_4, NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0032:
	{
		return il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(G_B3_2, ((float)il2cpp_codegen_add(G_B3_1, G_B3_0)))));
	}
}
// System.Single TDSTK.Weapon::GetReloadDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Weapon_GetReloadDuration_mEB97BF4849FACEF4E1E05CC364C9AA9F01F08E35 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B1_1 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	{
		// public float GetReloadDuration(){ return reloadDuration*(1+(perk!=null ? perk.GetWeaponReloadDurMul(ID) : 0)); }
		float L_0 = __this->___reloadDuration_22;
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_1 = __this->___perk_38;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = (1.0f);
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = (1.0f);
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0031;
	}

IL_0020:
	{
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_3 = __this->___perk_38;
		int32_t L_4 = __this->___ID_5;
		float L_5;
		L_5 = PlayerPerk_GetWeaponReloadDurMul_m561444D7DBB72F9FDD3F8B6FF6C16BC694C09DB8(L_3, L_4, NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0031:
	{
		return ((float)il2cpp_codegen_multiply(G_B3_2, ((float)il2cpp_codegen_add(G_B3_1, G_B3_0))));
	}
}
// System.Single TDSTK.Weapon::GetRecoilMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Weapon_GetRecoilMagnitude_mC4EA0231E78DC952DCD9D794F09E23D724F6B401 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B1_1 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	{
		// public float GetRecoilMagnitude(){ return recoilMagnitude*(1+(perk!=null ? perk.GetWeaponRecoilMagMul(ID) : 0)); }
		float L_0 = __this->___recoilMagnitude_24;
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_1 = __this->___perk_38;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = (1.0f);
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = (1.0f);
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0031;
	}

IL_0020:
	{
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_3 = __this->___perk_38;
		int32_t L_4 = __this->___ID_5;
		float L_5;
		L_5 = PlayerPerk_GetWeaponRecoilMagMul_m243381D5DD8F51254978FD9CD4E35525B579F505(L_3, L_4, NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0031:
	{
		return ((float)il2cpp_codegen_multiply(G_B3_2, ((float)il2cpp_codegen_add(G_B3_1, G_B3_0))));
	}
}
// TDSTK.AttackStats TDSTK.Weapon::ModifyAttackStatsToPerk(TDSTK.AttackStats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* Weapon_ModifyAttackStatsToPerk_m80CE3AB5F086A09F0CB3A60F4F135F09A43A5B38 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* ___0_aStats, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(perk==null) return aStats;
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_0 = __this->___perk_38;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if(perk==null) return aStats;
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_2 = ___0_aStats;
		return L_2;
	}

IL_0010:
	{
		// aStats.damageMin*=(1+perk.GetWeaponDamageMul(ID));
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_3 = ___0_aStats;
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_4 = L_3;
		float L_5 = L_4->___damageMin_1;
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_6 = __this->___perk_38;
		int32_t L_7 = __this->___ID_5;
		float L_8;
		L_8 = PlayerPerk_GetWeaponDamageMul_mDA5F708A0DD46B058826FEEEA51C072A41692A4C(L_6, L_7, NULL);
		L_4->___damageMin_1 = ((float)il2cpp_codegen_multiply(L_5, ((float)il2cpp_codegen_add((1.0f), L_8))));
		// aStats.damageMax*=(1+perk.GetWeaponDamageMul(ID));
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_9 = ___0_aStats;
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_10 = L_9;
		float L_11 = L_10->___damageMax_2;
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_12 = __this->___perk_38;
		int32_t L_13 = __this->___ID_5;
		float L_14;
		L_14 = PlayerPerk_GetWeaponDamageMul_mDA5F708A0DD46B058826FEEEA51C072A41692A4C(L_12, L_13, NULL);
		L_10->___damageMax_2 = ((float)il2cpp_codegen_multiply(L_11, ((float)il2cpp_codegen_add((1.0f), L_14))));
		// aStats.critChance*=(1+perk.GetWeaponCritMul(ID));
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_15 = ___0_aStats;
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_16 = L_15;
		float L_17 = L_16->___critChance_5;
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_18 = __this->___perk_38;
		int32_t L_19 = __this->___ID_5;
		float L_20;
		L_20 = PlayerPerk_GetWeaponCritMul_m915F69BCF4941A28644F85AF1BC5A14D3EAAE84F(L_18, L_19, NULL);
		L_16->___critChance_5 = ((float)il2cpp_codegen_multiply(L_17, ((float)il2cpp_codegen_add((1.0f), L_20))));
		// aStats.critMultiplier*=(1+perk.GetWeaponCritMulMul(ID));
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_21 = ___0_aStats;
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_22 = L_21;
		float L_23 = L_22->___critMultiplier_6;
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_24 = __this->___perk_38;
		int32_t L_25 = __this->___ID_5;
		float L_26;
		L_26 = PlayerPerk_GetWeaponCritMulMul_mB5AF6194564C0D8314AF90CD80D95F3EB381A427(L_24, L_25, NULL);
		L_22->___critMultiplier_6 = ((float)il2cpp_codegen_multiply(L_23, ((float)il2cpp_codegen_add((1.0f), L_26))));
		// aStats.aoeRadius*=(1+perk.GetWeaponAOEMul(ID));
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_27 = ___0_aStats;
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_28 = L_27;
		float L_29 = L_28->___aoeRadius_3;
		PlayerPerk_tA793C0CAC00B8A675751B692B56EDFF41A755FD3* L_30 = __this->___perk_38;
		int32_t L_31 = __this->___ID_5;
		float L_32;
		L_32 = PlayerPerk_GetWeaponAOEMul_mC2A1416F5EAF3C21F4120E5E96F5ACFDB213D6A0(L_30, L_31, NULL);
		L_28->___aoeRadius_3 = ((float)il2cpp_codegen_multiply(L_29, ((float)il2cpp_codegen_add((1.0f), L_32))));
		// return aStats;
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_33 = ___0_aStats;
		return L_33;
	}
}
// System.Void TDSTK.Weapon::ChangeEffect(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_ChangeEffect_mDF86505384CF36D1683538020EBC9DBE4B73949E (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, int32_t ___0_newID, int32_t ___1_newIdx, const RuntimeMethod* method) 
{
	{
		// aStats.effectID=newID;
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_0 = __this->___aStats_29;
		int32_t L_1 = ___0_newID;
		L_0->___effectID_10 = L_1;
		// aStats.effectIdx=newIdx;
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_2 = __this->___aStats_29;
		int32_t L_3 = ___1_newIdx;
		L_2->___effectIdx_11 = L_3;
		// }
		return;
	}
}
// System.Void TDSTK.Weapon::ChangeAbility(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_ChangeAbility_mD903865BD9A1A8515DD6EBA6378A06DFC18FFA09 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, int32_t ___0_newID, const RuntimeMethod* method) 
{
	{
		// ability=Ability_DB.CloneItem(abilityID);
		int32_t L_0 = __this->___abilityID_34;
		Ability_t16A59DB906BC6E3C6E8F6641165B52AA1D738927* L_1;
		L_1 = Ability_DB_CloneItem_mEF5AD2DA79219240FE48D257ECC5002B18F57F63(L_0, NULL);
		__this->___ability_35 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ability_35), (void*)L_1);
		// }
		return;
	}
}
// System.Void TDSTK.Weapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon__ctor_mAB66A48752B9FE978C75AB712534A38DEE2AFB74 (Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD7581AA5E18EE2F72654084B85C8B6AB22034304_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<FireCallback> fireCallbackList=new List<FireCallback>();
		List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A* L_0 = (List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A*)il2cpp_codegen_object_new(List_1_t832F0E7AF54C9F9AB76254CBD25570A1E518F87A_il2cpp_TypeInfo_var);
		List_1__ctor_mD7581AA5E18EE2F72654084B85C8B6AB22034304(L_0, List_1__ctor_mD7581AA5E18EE2F72654084B85C8B6AB22034304_RuntimeMethod_var);
		__this->___fireCallbackList_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fireCallbackList_4), (void*)L_0);
		// public string weaponName="Weapon";
		__this->___weaponName_7 = _stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___weaponName_7), (void*)_stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076);
		// public string desp="";
		__this->___desp_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___desp_8), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public List<Transform> shootPointList=new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_1, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___shootPointList_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shootPointList_10), (void*)L_1);
		// public float shootPointDelay=0.05f;
		__this->___shootPointDelay_11 = (0.0500000007f);
		// public bool continousFire=true;
		__this->___continousFire_12 = (bool)1;
		// public float range=20;
		__this->___range_13 = (20.0f);
		// public float cooldown=0.15f;
		__this->___cooldown_14 = (0.150000006f);
		// [HideInInspector] public float currentCD=0.25f;
		__this->___currentCD_15 = (0.25f);
		// public float energyCost=1;
		__this->___energyCost_17 = (1.0f);
		// public int clipSize=30;
		__this->___clipSize_18 = ((int32_t)30);
		// public int currentClip=30;
		__this->___currentClip_19 = ((int32_t)30);
		// public int ammoCap=300;
		__this->___ammoCap_20 = ((int32_t)300);
		// public int ammo=300;
		__this->___ammo_21 = ((int32_t)300);
		// public float reloadDuration=2;
		__this->___reloadDuration_22 = (2.0f);
		// public float recoilMagnitude=.2f;
		__this->___recoilMagnitude_24 = (0.200000003f);
		// [HideInInspector] public float recoil=1;
		__this->___recoil_25 = (1.0f);
		// public float spreadAngle=15;
		__this->___spreadAngle_28 = (15.0f);
		// public AttackStats aStats=new AttackStats();
		AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A* L_2 = (AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A*)il2cpp_codegen_object_new(AttackStats_t4C3EC92A73CDA847BECCA9965EBC46FCBEDF233A_il2cpp_TypeInfo_var);
		AttackStats__ctor_m77D35670607EE93434F62E36FAC6C2B48EB53BEB(L_2, NULL);
		__this->___aStats_29 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aStats_29), (void*)L_2);
		// public int abilityID=-1;        //the ability ID, used in editor and correspoding to the ID of the abilities in DB
		__this->___abilityID_34 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void FireCallback_Invoke_m1257F7AF01A5FE88C4BACFDBA1D16DE1DA162DA6_Multicast(FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* currentDelegate = reinterpret_cast<FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FireCallback_Invoke_m1257F7AF01A5FE88C4BACFDBA1D16DE1DA162DA6_OpenInst(FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void FireCallback_Invoke_m1257F7AF01A5FE88C4BACFDBA1D16DE1DA162DA6_OpenStatic(FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void FireCallback_Invoke_m1257F7AF01A5FE88C4BACFDBA1D16DE1DA162DA6_OpenStaticInvoker(FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
void FireCallback_Invoke_m1257F7AF01A5FE88C4BACFDBA1D16DE1DA162DA6_ClosedStaticInvoker(FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC (FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void TDSTK.Weapon/FireCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireCallback__ctor_mACEF5A45262483375635BE5345E569E78CD55F36 (FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FireCallback_Invoke_m1257F7AF01A5FE88C4BACFDBA1D16DE1DA162DA6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FireCallback_Invoke_m1257F7AF01A5FE88C4BACFDBA1D16DE1DA162DA6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FireCallback_Invoke_m1257F7AF01A5FE88C4BACFDBA1D16DE1DA162DA6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&FireCallback_Invoke_m1257F7AF01A5FE88C4BACFDBA1D16DE1DA162DA6_Multicast;
}
// System.Void TDSTK.Weapon/FireCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireCallback_Invoke_m1257F7AF01A5FE88C4BACFDBA1D16DE1DA162DA6 (FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TDSTK.Weapon/FireCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FireCallback_BeginInvoke_mDF867D862D31AB2E9B9ABB5876EF87F64E60A010 (FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void TDSTK.Weapon/FireCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireCallback_EndInvoke_m548818CA2D7E2874509BB911365C2FD016A0F8D3 (FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TDSTK.Weapon/<ReloadRoutine>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReloadRoutineU3Ed__40__ctor_m1DDD90729BF4090FC195BFB822DAD5250ECA18AA (U3CReloadRoutineU3Ed__40_tCFE0588688ACD9641C5F7F0A6C3000F543CA966C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TDSTK.Weapon/<ReloadRoutine>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReloadRoutineU3Ed__40_System_IDisposable_Dispose_mC2621649627BABE19B9C50707282BA60E1E5B490 (U3CReloadRoutineU3Ed__40_tCFE0588688ACD9641C5F7F0A6C3000F543CA966C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TDSTK.Weapon/<ReloadRoutine>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReloadRoutineU3Ed__40_MoveNext_m619AF88F023E8765676A6628C6FD6A7B6462080D (U3CReloadRoutineU3Ed__40_tCFE0588688ACD9641C5F7F0A6C3000F543CA966C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* V_1 = NULL;
	Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* G_B9_0 = NULL;
	Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* G_B10_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0054;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// reloading=true;    //to mark the we are reloading
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_4 = V_1;
		L_4->___reloading_33 = (bool)1;
		// currentReload=0;    //time counter for reloading
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_5 = V_1;
		L_5->___currentReload_23 = (0.0f);
		goto IL_005b;
	}

IL_0032:
	{
		// currentReload+=Time.deltaTime;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_6 = V_1;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_7 = V_1;
		float L_8 = L_7->___currentReload_23;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		L_6->___currentReload_23 = ((float)il2cpp_codegen_add(L_8, L_9));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0054:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_005b:
	{
		// while(currentReload<GetReloadDuration()){
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_10 = V_1;
		float L_11 = L_10->___currentReload_23;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_12 = V_1;
		float L_13;
		L_13 = Weapon_GetReloadDuration_mEB97BF4849FACEF4E1E05CC364C9AA9F01F08E35(L_12, NULL);
		if ((((float)L_11) < ((float)L_13)))
		{
			goto IL_0032;
		}
	}
	{
		// currentClip=ammo==-1 ? GetClipSize() : Mathf.Min(GetClipSize(), ammo);
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_14 = V_1;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_15 = V_1;
		int32_t L_16 = L_15->___ammo_21;
		G_B8_0 = L_14;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			G_B9_0 = L_14;
			goto IL_0086;
		}
	}
	{
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_17 = V_1;
		int32_t L_18;
		L_18 = Weapon_GetClipSize_m18C1C8AA3B9534DB2C7970F323B9C8A3966512A9(L_17, NULL);
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_19 = V_1;
		int32_t L_20 = L_19->___ammo_21;
		int32_t L_21;
		L_21 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_18, L_20, NULL);
		G_B10_0 = L_21;
		G_B10_1 = G_B8_0;
		goto IL_008c;
	}

IL_0086:
	{
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_22 = V_1;
		int32_t L_23;
		L_23 = Weapon_GetClipSize_m18C1C8AA3B9534DB2C7970F323B9C8A3966512A9(L_22, NULL);
		G_B10_0 = L_23;
		G_B10_1 = G_B9_0;
	}

IL_008c:
	{
		G_B10_1->___currentClip_19 = G_B10_0;
		// if(ammo>0) ammo=Mathf.Max(ammo-GetClipSize(), 0);
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_24 = V_1;
		int32_t L_25 = L_24->___ammo_21;
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}
	{
		// if(ammo>0) ammo=Mathf.Max(ammo-GetClipSize(), 0);
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_26 = V_1;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_27 = V_1;
		int32_t L_28 = L_27->___ammo_21;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_29 = V_1;
		int32_t L_30;
		L_30 = Weapon_GetClipSize_m18C1C8AA3B9534DB2C7970F323B9C8A3966512A9(L_29, NULL);
		int32_t L_31;
		L_31 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((int32_t)il2cpp_codegen_subtract(L_28, L_30)), 0, NULL);
		L_26->___ammo_21 = L_31;
	}

IL_00b3:
	{
		// reloading=false;
		Weapon_t27810AA93FC2343A2BC5671AFAD5CC3AE7D44C0F* L_32 = V_1;
		L_32->___reloading_33 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object TDSTK.Weapon/<ReloadRoutine>d__40::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReloadRoutineU3Ed__40_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3A6C3222DD8E21EC00FD51C1613B810464F57696 (U3CReloadRoutineU3Ed__40_tCFE0588688ACD9641C5F7F0A6C3000F543CA966C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TDSTK.Weapon/<ReloadRoutine>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReloadRoutineU3Ed__40_System_Collections_IEnumerator_Reset_m365F3CD8EE4343AE8A6EC4FFD108D46940766950 (U3CReloadRoutineU3Ed__40_tCFE0588688ACD9641C5F7F0A6C3000F543CA966C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReloadRoutineU3Ed__40_System_Collections_IEnumerator_Reset_m365F3CD8EE4343AE8A6EC4FFD108D46940766950_RuntimeMethod_var)));
	}
}
// System.Object TDSTK.Weapon/<ReloadRoutine>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReloadRoutineU3Ed__40_System_Collections_IEnumerator_get_Current_m5E71B89847C327590D29BAC718B2E125A1AD15ED (U3CReloadRoutineU3Ed__40_tCFE0588688ACD9641C5F7F0A6C3000F543CA966C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Unit_GetCollider_m062EED8CAFF74E4A434637A467B81C391B2B8578_inline (Unit_t391B7D9F527082F4BABB1F9BC3592BEB700F904B* __this, const RuntimeMethod* method) 
{
	{
		// public Collider GetCollider(){ return thisCollider; }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___thisCollider_62;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ShootObject_GetCollider_m3AE22E8F5A18ABEBE2E4EC6AE9A0C33511448871_inline (ShootObject_t90530FA2ABA73E2BD35C5DDD877B55CFE5474B05* __this, const RuntimeMethod* method) 
{
	{
		// public Collider GetCollider(){ return thisCollider; }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___thisCollider_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireCallback_Invoke_m1257F7AF01A5FE88C4BACFDBA1D16DE1DA162DA6_inline (FireCallback_t9974E61709F5EBC14EB29A6071DA7F5D52328BFC* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
