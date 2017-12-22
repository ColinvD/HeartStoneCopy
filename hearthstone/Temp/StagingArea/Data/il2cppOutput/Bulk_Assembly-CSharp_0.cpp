#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// Attack
struct Attack_t3423014084;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Component
struct Component_t3819376471;
// CardData
struct CardData_t3381328046;
// BattlefieldCardList
struct BattlefieldCardList_t3744834400;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Collider
struct Collider_t3497673348;
// System.String
struct String_t;
// Health
struct Health_t2683907638;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Sprite
struct Sprite_t309593783;
// CallQueueObject
struct CallQueueObject_t354407064;
// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct Func_2_t1519307235;
// CardMove
struct CardMove_t1983516363;
// System.Collections.Generic.Queue`1<CallQueueObject>
struct Queue_1_t174063899;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2509106130;
// CardsInHand
struct CardsInHand_t2163536961;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// CardToMousePosition
struct CardToMousePosition_t1367274461;
// CreateRayCast
struct CreateRayCast_t2883297021;
// ManaAmount
struct ManaAmount_t3227947453;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.Camera
struct Camera_t189460977;
// TurnSwitch
struct TurnSwitch_t2695936653;
// DamageMessage
struct DamageMessage_t2793721680;
// GameManagement
struct GameManagement_t3727304763;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Material
struct Material_t193706927;
// CallQueueObject[]
struct CallQueueObjectU5BU5D_t2112706569;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// System.Char[]
struct CharU5BU5D_t1328083999;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.Void
struct Void_t1841601450;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1572802995;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t834278767;

extern RuntimeClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisCardData_t3381328046_m761798127_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisBattlefieldCardList_t3744834400_m2051785719_RuntimeMethod_var;
extern const uint32_t Attack_Start_m3189437679_MetadataUsageId;
extern RuntimeClass* Vector3_t2243707580_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisHealth_t2683907638_m2691065279_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1756533147_m3066053529_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral1816890106;
extern const uint32_t Attack_CheckHit_m810787838_MetadataUsageId;
extern RuntimeClass* GameObjectU5BU5D_t3057952154_il2cpp_TypeInfo_var;
extern const uint32_t BattlefieldCardList_AddToArray_m600484178_MetadataUsageId;
extern const uint32_t BattlefieldCardList_RemoveFromArray_m3223237164_MetadataUsageId;
extern const RuntimeMethod* Func_2_Invoke_m729793780_RuntimeMethod_var;
extern const uint32_t CallQueueObject_Check_m1284673283_MetadataUsageId;
extern const uint32_t CardMove_consistentMove_m2515504787_MetadataUsageId;
extern const uint32_t CardMove_speedMove_m2865995600_MetadataUsageId;
extern const uint32_t CardMove_slowMove_m3242174180_MetadataUsageId;
extern const uint32_t CardMove_move_m1619090864_MetadataUsageId;
extern RuntimeClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t CardMove_Shortest_m1396033638_MetadataUsageId;
extern RuntimeClass* Func_2_t1519307235_il2cpp_TypeInfo_var;
extern RuntimeClass* CallQueueObject_t354407064_il2cpp_TypeInfo_var;
extern const RuntimeMethod* CardMove_move_m1619090864_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m1836800602_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_m4252592219_RuntimeMethod_var;
extern const uint32_t CardMove_AddToQueue_m3536793822_MetadataUsageId;
extern RuntimeClass* List_1_t1612828712_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m347461442_RuntimeMethod_var;
extern const uint32_t CardsInHand_Start_m2642933832_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m2074971713_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m40859504_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3833859041_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1552520334_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m4260487298_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m4187614919_RuntimeMethod_var;
extern const uint32_t CardsInHand_Update_m559986533_MetadataUsageId;
extern const uint32_t CardsInHand_getCardRotations_m3281105525_MetadataUsageId;
extern const uint32_t CardsInHand_getCardPositions_m920106648_MetadataUsageId;
extern const uint32_t CardsInHand_getCardPositions_m611997348_MetadataUsageId;
extern const RuntimeMethod* List_1_Contains_m2391088647_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m59873180_RuntimeMethod_var;
extern const uint32_t CardsInHand_removeCard_m1309036012_MetadataUsageId;
extern const uint32_t CardsInHand_ContainsCard_m3590905015_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1642385972_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisManaAmount_t3227947453_m4151527298_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisCardsInHand_t2163536961_m2373433372_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral949723079;
extern Il2CppCodeGenString* _stringLiteral1214362012;
extern const uint32_t CreateRayCast_Start_m301566190_MetadataUsageId;
extern RuntimeClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisTurnSwitch_t2695936653_m3263754024_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisCardToMousePosition_t1367274461_m4288503302_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisAttack_t3423014084_m1256133895_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral988355092;
extern Il2CppCodeGenString* _stringLiteral2535243812;
extern Il2CppCodeGenString* _stringLiteral762135924;
extern const uint32_t CreateRayCast_Update_m3986874793_MetadataUsageId;
extern const uint32_t DamageMessage_Update_m2535980338_MetadataUsageId;
extern RuntimeClass* Queue_1_t174063899_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Queue_1__ctor_m1969511742_RuntimeMethod_var;
extern const uint32_t GameManagement__ctor_m383039640_MetadataUsageId;
extern const RuntimeMethod* Queue_1_get_Count_m2035996976_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Peek_m2536096417_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m3710529508_RuntimeMethod_var;
extern const uint32_t GameManagement_Update_m278449279_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t1268241104_m3528968632_RuntimeMethod_var;
extern const uint32_t TurnSwitch_ChangeTurn_m4170201191_MetadataUsageId;

struct GameObjectU5BU5D_t3057952154;
struct StringU5BU5D_t1642385972;


#ifndef U3CMODULEU3E_T3783534225_H
#define U3CMODULEU3E_T3783534225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3783534225 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3783534225_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef QUEUE_1_T174063899_H
#define QUEUE_1_T174063899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<CallQueueObject>
struct  Queue_1_t174063899  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	CallQueueObjectU5BU5D_t2112706569* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t174063899, ____array_0)); }
	inline CallQueueObjectU5BU5D_t2112706569* get__array_0() const { return ____array_0; }
	inline CallQueueObjectU5BU5D_t2112706569** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(CallQueueObjectU5BU5D_t2112706569* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t174063899, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t174063899, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t174063899, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t174063899, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T174063899_H
#ifndef LIST_1_T1612828712_H
#define LIST_1_T1612828712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t1612828712  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t1172311765* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1612828712, ____items_1)); }
	inline Vector3U5BU5D_t1172311765* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t1172311765** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t1172311765* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1612828712, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1612828712, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1612828712_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector3U5BU5D_t1172311765* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1612828712_StaticFields, ___EmptyArray_4)); }
	inline Vector3U5BU5D_t1172311765* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector3U5BU5D_t1172311765** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector3U5BU5D_t1172311765* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1612828712_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t1328083999* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t1328083999* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1328083999** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1328083999* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T1125654279_H
#define LIST_1_T1125654279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t1125654279  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3057952154* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1125654279, ____items_1)); }
	inline GameObjectU5BU5D_t3057952154* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3057952154** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3057952154* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1125654279, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1125654279, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1125654279_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t3057952154* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1125654279_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t3057952154* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t3057952154* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1125654279_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef VECTOR2_T2243707579_H
#define VECTOR2_T2243707579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2243707579 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2243707579_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2243707579  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2243707579  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2243707579  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2243707579  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2243707579  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2243707579  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2243707579  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2243707579  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2243707579  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2243707579 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2243707579  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___oneVector_3)); }
	inline Vector2_t2243707579  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2243707579 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2243707579  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___upVector_4)); }
	inline Vector2_t2243707579  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2243707579 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2243707579  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___downVector_5)); }
	inline Vector2_t2243707579  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2243707579 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2243707579  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___leftVector_6)); }
	inline Vector2_t2243707579  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2243707579 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2243707579  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___rightVector_7)); }
	inline Vector2_t2243707579  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2243707579 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2243707579  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2243707579  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2243707579 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2243707579  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2243707579  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2243707579 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2243707579  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2243707579_H
#ifndef INT16_T4041245914_H
#define INT16_T4041245914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t4041245914 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int16_t4041245914, ___m_value_2)); }
	inline int16_t get_m_value_2() const { return ___m_value_2; }
	inline int16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T4041245914_H
#ifndef INT32_T2071877448_H
#define INT32_T2071877448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2071877448 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2071877448, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2071877448_H
#ifndef BOOLEAN_T3825574718_H
#define BOOLEAN_T3825574718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3825574718 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3825574718, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3825574718_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3825574718_H
#ifndef COLOR_T2020392075_H
#define COLOR_T2020392075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2020392075 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2020392075_H
#ifndef SINGLE_T2076509932_H
#define SINGLE_T2076509932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2076509932 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2076509932, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2076509932_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VECTOR3_T2243707580_H
#define VECTOR3_T2243707580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2243707580 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2243707580_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2243707580  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2243707580  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2243707580  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2243707580  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2243707580  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2243707580  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2243707580  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2243707580  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2243707580  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2243707580  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2243707580  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2243707580 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2243707580  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___oneVector_5)); }
	inline Vector3_t2243707580  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2243707580 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2243707580  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___upVector_6)); }
	inline Vector3_t2243707580  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2243707580 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2243707580  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___downVector_7)); }
	inline Vector3_t2243707580  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2243707580 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2243707580  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___leftVector_8)); }
	inline Vector3_t2243707580  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2243707580 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2243707580  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___rightVector_9)); }
	inline Vector3_t2243707580  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2243707580 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2243707580  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2243707580  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2243707580 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2243707580  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___backVector_11)); }
	inline Vector3_t2243707580  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2243707580 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2243707580  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2243707580  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2243707580 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2243707580  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2243707580  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2243707580 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2243707580  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2243707580_H
#ifndef CALLQUEUEOBJECT_T354407064_H
#define CALLQUEUEOBJECT_T354407064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CallQueueObject
struct  CallQueueObject_t354407064  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 CallQueueObject::targetPos
	Vector3_t2243707580  ___targetPos_0;
	// System.Func`2<UnityEngine.Vector3,System.Boolean> CallQueueObject::function
	Func_2_t1519307235 * ___function_1;

public:
	inline static int32_t get_offset_of_targetPos_0() { return static_cast<int32_t>(offsetof(CallQueueObject_t354407064, ___targetPos_0)); }
	inline Vector3_t2243707580  get_targetPos_0() const { return ___targetPos_0; }
	inline Vector3_t2243707580 * get_address_of_targetPos_0() { return &___targetPos_0; }
	inline void set_targetPos_0(Vector3_t2243707580  value)
	{
		___targetPos_0 = value;
	}

	inline static int32_t get_offset_of_function_1() { return static_cast<int32_t>(offsetof(CallQueueObject_t354407064, ___function_1)); }
	inline Func_2_t1519307235 * get_function_1() const { return ___function_1; }
	inline Func_2_t1519307235 ** get_address_of_function_1() { return &___function_1; }
	inline void set_function_1(Func_2_t1519307235 * value)
	{
		___function_1 = value;
		Il2CppCodeGenWriteBarrier((&___function_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLQUEUEOBJECT_T354407064_H
#ifndef DELEGATE_T3022476291_H
#define DELEGATE_T3022476291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3022476291  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1572802995 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___data_8)); }
	inline DelegateData_t1572802995 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1572802995 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1572802995 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3022476291_H
#ifndef RAY_T2469606224_H
#define RAY_T2469606224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t2469606224 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t2243707580  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t2243707580  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2469606224, ___m_Origin_0)); }
	inline Vector3_t2243707580  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t2243707580 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t2243707580  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2469606224, ___m_Direction_1)); }
	inline Vector3_t2243707580  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t2243707580 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t2243707580  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T2469606224_H
#ifndef OBJECT_T1021602117_H
#define OBJECT_T1021602117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1021602117  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1021602117, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1021602117_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1021602117_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1021602117_H
#ifndef RAYCASTHIT_T87180320_H
#define RAYCASTHIT_T87180320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t87180320 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t2243707580  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t2243707580  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2243707579  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t3497673348 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Point_0)); }
	inline Vector3_t2243707580  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t2243707580 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t2243707580  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Normal_1)); }
	inline Vector3_t2243707580  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t2243707580 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t2243707580  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_UV_4)); }
	inline Vector2_t2243707579  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2243707579 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2243707579  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Collider_5)); }
	inline Collider_t3497673348 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t3497673348 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t3497673348 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t87180320_marshaled_pinvoke
{
	Vector3_t2243707580  ___m_Point_0;
	Vector3_t2243707580  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2243707579  ___m_UV_4;
	Collider_t3497673348 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t87180320_marshaled_com
{
	Vector3_t2243707580  ___m_Point_0;
	Vector3_t2243707580  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2243707579  ___m_UV_4;
	Collider_t3497673348 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T87180320_H
#ifndef SPRITE_T309593783_H
#define SPRITE_T309593783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t309593783  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T309593783_H
#ifndef GAMEOBJECT_T1756533147_H
#define GAMEOBJECT_T1756533147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1756533147  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1756533147_H
#ifndef MATERIAL_T193706927_H
#define MATERIAL_T193706927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t193706927  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T193706927_H
#ifndef COMPONENT_T3819376471_H
#define COMPONENT_T3819376471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3819376471  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3819376471_H
#ifndef MULTICASTDELEGATE_T3201952435_H
#define MULTICASTDELEGATE_T3201952435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3201952435  : public Delegate_t3022476291
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3201952435 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3201952435 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___prev_9)); }
	inline MulticastDelegate_t3201952435 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3201952435 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3201952435 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___kpm_next_10)); }
	inline MulticastDelegate_t3201952435 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3201952435 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3201952435 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3201952435_H
#ifndef RENDERER_T257310565_H
#define RENDERER_T257310565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t257310565  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T257310565_H
#ifndef COLLIDER_T3497673348_H
#define COLLIDER_T3497673348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t3497673348  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T3497673348_H
#ifndef TRANSFORM_T3275118058_H
#define TRANSFORM_T3275118058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3275118058  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3275118058_H
#ifndef FUNC_2_T1519307235_H
#define FUNC_2_T1519307235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct  Func_2_t1519307235  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T1519307235_H
#ifndef BEHAVIOUR_T955675639_H
#define BEHAVIOUR_T955675639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t955675639  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T955675639_H
#ifndef CAMERA_T189460977_H
#define CAMERA_T189460977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t189460977  : public Behaviour_t955675639
{
public:

public:
};

struct Camera_t189460977_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t834278767 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t834278767 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t834278767 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t189460977_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t834278767 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t834278767 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t834278767 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t189460977_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t834278767 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t834278767 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t834278767 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t189460977_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t834278767 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t834278767 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t834278767 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T189460977_H
#ifndef MESHRENDERER_T1268241104_H
#define MESHRENDERER_T1268241104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t1268241104  : public Renderer_t257310565
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T1268241104_H
#ifndef MONOBEHAVIOUR_T1158329972_H
#define MONOBEHAVIOUR_T1158329972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1158329972  : public Behaviour_t955675639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1158329972_H
#ifndef SPRITERENDERER_T1209076198_H
#define SPRITERENDERER_T1209076198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t1209076198  : public Renderer_t257310565
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T1209076198_H
#ifndef GAMEMANAGEMENT_T3727304763_H
#define GAMEMANAGEMENT_T3727304763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManagement
struct  GameManagement_t3727304763  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.Queue`1<CallQueueObject> GameManagement::funcQueue
	Queue_1_t174063899 * ___funcQueue_2;

public:
	inline static int32_t get_offset_of_funcQueue_2() { return static_cast<int32_t>(offsetof(GameManagement_t3727304763, ___funcQueue_2)); }
	inline Queue_1_t174063899 * get_funcQueue_2() const { return ___funcQueue_2; }
	inline Queue_1_t174063899 ** get_address_of_funcQueue_2() { return &___funcQueue_2; }
	inline void set_funcQueue_2(Queue_1_t174063899 * value)
	{
		___funcQueue_2 = value;
		Il2CppCodeGenWriteBarrier((&___funcQueue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEMANAGEMENT_T3727304763_H
#ifndef BATTLEFIELDCARDLIST_T3744834400_H
#define BATTLEFIELDCARDLIST_T3744834400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BattlefieldCardList
struct  BattlefieldCardList_t3744834400  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] BattlefieldCardList::battlefieldArray
	GameObjectU5BU5D_t3057952154* ___battlefieldArray_2;

public:
	inline static int32_t get_offset_of_battlefieldArray_2() { return static_cast<int32_t>(offsetof(BattlefieldCardList_t3744834400, ___battlefieldArray_2)); }
	inline GameObjectU5BU5D_t3057952154* get_battlefieldArray_2() const { return ___battlefieldArray_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_battlefieldArray_2() { return &___battlefieldArray_2; }
	inline void set_battlefieldArray_2(GameObjectU5BU5D_t3057952154* value)
	{
		___battlefieldArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___battlefieldArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BATTLEFIELDCARDLIST_T3744834400_H
#ifndef CARDMOVE_T1983516363_H
#define CARDMOVE_T1983516363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardMove
struct  CardMove_t1983516363  : public MonoBehaviour_t1158329972
{
public:
	// System.Int16 CardMove::state
	int16_t ___state_2;
	// System.Single CardMove::speed
	float ___speed_3;
	// System.Single CardMove::slowdownSpeed
	float ___slowdownSpeed_4;
	// System.Single CardMove::currentSpeed
	float ___currentSpeed_5;
	// UnityEngine.Vector3 CardMove::targetPos
	Vector3_t2243707580  ___targetPos_6;
	// GameManagement CardMove::gameManagement
	GameManagement_t3727304763 * ___gameManagement_7;

public:
	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(CardMove_t1983516363, ___state_2)); }
	inline int16_t get_state_2() const { return ___state_2; }
	inline int16_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int16_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(CardMove_t1983516363, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_slowdownSpeed_4() { return static_cast<int32_t>(offsetof(CardMove_t1983516363, ___slowdownSpeed_4)); }
	inline float get_slowdownSpeed_4() const { return ___slowdownSpeed_4; }
	inline float* get_address_of_slowdownSpeed_4() { return &___slowdownSpeed_4; }
	inline void set_slowdownSpeed_4(float value)
	{
		___slowdownSpeed_4 = value;
	}

	inline static int32_t get_offset_of_currentSpeed_5() { return static_cast<int32_t>(offsetof(CardMove_t1983516363, ___currentSpeed_5)); }
	inline float get_currentSpeed_5() const { return ___currentSpeed_5; }
	inline float* get_address_of_currentSpeed_5() { return &___currentSpeed_5; }
	inline void set_currentSpeed_5(float value)
	{
		___currentSpeed_5 = value;
	}

	inline static int32_t get_offset_of_targetPos_6() { return static_cast<int32_t>(offsetof(CardMove_t1983516363, ___targetPos_6)); }
	inline Vector3_t2243707580  get_targetPos_6() const { return ___targetPos_6; }
	inline Vector3_t2243707580 * get_address_of_targetPos_6() { return &___targetPos_6; }
	inline void set_targetPos_6(Vector3_t2243707580  value)
	{
		___targetPos_6 = value;
	}

	inline static int32_t get_offset_of_gameManagement_7() { return static_cast<int32_t>(offsetof(CardMove_t1983516363, ___gameManagement_7)); }
	inline GameManagement_t3727304763 * get_gameManagement_7() const { return ___gameManagement_7; }
	inline GameManagement_t3727304763 ** get_address_of_gameManagement_7() { return &___gameManagement_7; }
	inline void set_gameManagement_7(GameManagement_t3727304763 * value)
	{
		___gameManagement_7 = value;
		Il2CppCodeGenWriteBarrier((&___gameManagement_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CARDMOVE_T1983516363_H
#ifndef CARDDATA_T3381328046_H
#define CARDDATA_T3381328046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardData
struct  CardData_t3381328046  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean CardData::attackCharge
	bool ___attackCharge_2;
	// System.Int32 CardData::manaCost
	int32_t ___manaCost_3;
	// System.Int32 CardData::damage
	int32_t ___damage_4;
	// System.Int32 CardData::health
	int32_t ___health_5;
	// System.Boolean CardData::attacked
	bool ___attacked_6;

public:
	inline static int32_t get_offset_of_attackCharge_2() { return static_cast<int32_t>(offsetof(CardData_t3381328046, ___attackCharge_2)); }
	inline bool get_attackCharge_2() const { return ___attackCharge_2; }
	inline bool* get_address_of_attackCharge_2() { return &___attackCharge_2; }
	inline void set_attackCharge_2(bool value)
	{
		___attackCharge_2 = value;
	}

	inline static int32_t get_offset_of_manaCost_3() { return static_cast<int32_t>(offsetof(CardData_t3381328046, ___manaCost_3)); }
	inline int32_t get_manaCost_3() const { return ___manaCost_3; }
	inline int32_t* get_address_of_manaCost_3() { return &___manaCost_3; }
	inline void set_manaCost_3(int32_t value)
	{
		___manaCost_3 = value;
	}

	inline static int32_t get_offset_of_damage_4() { return static_cast<int32_t>(offsetof(CardData_t3381328046, ___damage_4)); }
	inline int32_t get_damage_4() const { return ___damage_4; }
	inline int32_t* get_address_of_damage_4() { return &___damage_4; }
	inline void set_damage_4(int32_t value)
	{
		___damage_4 = value;
	}

	inline static int32_t get_offset_of_health_5() { return static_cast<int32_t>(offsetof(CardData_t3381328046, ___health_5)); }
	inline int32_t get_health_5() const { return ___health_5; }
	inline int32_t* get_address_of_health_5() { return &___health_5; }
	inline void set_health_5(int32_t value)
	{
		___health_5 = value;
	}

	inline static int32_t get_offset_of_attacked_6() { return static_cast<int32_t>(offsetof(CardData_t3381328046, ___attacked_6)); }
	inline bool get_attacked_6() const { return ___attacked_6; }
	inline bool* get_address_of_attacked_6() { return &___attacked_6; }
	inline void set_attacked_6(bool value)
	{
		___attacked_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CARDDATA_T3381328046_H
#ifndef HEALTH_T2683907638_H
#define HEALTH_T2683907638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Health
struct  Health_t2683907638  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Health::health
	int32_t ___health_2;

public:
	inline static int32_t get_offset_of_health_2() { return static_cast<int32_t>(offsetof(Health_t2683907638, ___health_2)); }
	inline int32_t get_health_2() const { return ___health_2; }
	inline int32_t* get_address_of_health_2() { return &___health_2; }
	inline void set_health_2(int32_t value)
	{
		___health_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEALTH_T2683907638_H
#ifndef ATTACK_T3423014084_H
#define ATTACK_T3423014084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Attack
struct  Attack_t3423014084  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Attack::damagePopup
	GameObject_t1756533147 * ___damagePopup_2;
	// UnityEngine.SpriteRenderer Attack::healthSprite
	SpriteRenderer_t1209076198 * ___healthSprite_3;
	// UnityEngine.Sprite Attack::health29Sprite
	Sprite_t309593783 * ___health29Sprite_4;
	// Health Attack::enemyHealth
	Health_t2683907638 * ___enemyHealth_5;
	// BattlefieldCardList Attack::battlefieldCardList
	BattlefieldCardList_t3744834400 * ___battlefieldCardList_6;
	// CardData Attack::data
	CardData_t3381328046 * ___data_7;
	// System.Int32 Attack::damage
	int32_t ___damage_8;
	// System.Single Attack::maxRayDistance
	float ___maxRayDistance_9;

public:
	inline static int32_t get_offset_of_damagePopup_2() { return static_cast<int32_t>(offsetof(Attack_t3423014084, ___damagePopup_2)); }
	inline GameObject_t1756533147 * get_damagePopup_2() const { return ___damagePopup_2; }
	inline GameObject_t1756533147 ** get_address_of_damagePopup_2() { return &___damagePopup_2; }
	inline void set_damagePopup_2(GameObject_t1756533147 * value)
	{
		___damagePopup_2 = value;
		Il2CppCodeGenWriteBarrier((&___damagePopup_2), value);
	}

	inline static int32_t get_offset_of_healthSprite_3() { return static_cast<int32_t>(offsetof(Attack_t3423014084, ___healthSprite_3)); }
	inline SpriteRenderer_t1209076198 * get_healthSprite_3() const { return ___healthSprite_3; }
	inline SpriteRenderer_t1209076198 ** get_address_of_healthSprite_3() { return &___healthSprite_3; }
	inline void set_healthSprite_3(SpriteRenderer_t1209076198 * value)
	{
		___healthSprite_3 = value;
		Il2CppCodeGenWriteBarrier((&___healthSprite_3), value);
	}

	inline static int32_t get_offset_of_health29Sprite_4() { return static_cast<int32_t>(offsetof(Attack_t3423014084, ___health29Sprite_4)); }
	inline Sprite_t309593783 * get_health29Sprite_4() const { return ___health29Sprite_4; }
	inline Sprite_t309593783 ** get_address_of_health29Sprite_4() { return &___health29Sprite_4; }
	inline void set_health29Sprite_4(Sprite_t309593783 * value)
	{
		___health29Sprite_4 = value;
		Il2CppCodeGenWriteBarrier((&___health29Sprite_4), value);
	}

	inline static int32_t get_offset_of_enemyHealth_5() { return static_cast<int32_t>(offsetof(Attack_t3423014084, ___enemyHealth_5)); }
	inline Health_t2683907638 * get_enemyHealth_5() const { return ___enemyHealth_5; }
	inline Health_t2683907638 ** get_address_of_enemyHealth_5() { return &___enemyHealth_5; }
	inline void set_enemyHealth_5(Health_t2683907638 * value)
	{
		___enemyHealth_5 = value;
		Il2CppCodeGenWriteBarrier((&___enemyHealth_5), value);
	}

	inline static int32_t get_offset_of_battlefieldCardList_6() { return static_cast<int32_t>(offsetof(Attack_t3423014084, ___battlefieldCardList_6)); }
	inline BattlefieldCardList_t3744834400 * get_battlefieldCardList_6() const { return ___battlefieldCardList_6; }
	inline BattlefieldCardList_t3744834400 ** get_address_of_battlefieldCardList_6() { return &___battlefieldCardList_6; }
	inline void set_battlefieldCardList_6(BattlefieldCardList_t3744834400 * value)
	{
		___battlefieldCardList_6 = value;
		Il2CppCodeGenWriteBarrier((&___battlefieldCardList_6), value);
	}

	inline static int32_t get_offset_of_data_7() { return static_cast<int32_t>(offsetof(Attack_t3423014084, ___data_7)); }
	inline CardData_t3381328046 * get_data_7() const { return ___data_7; }
	inline CardData_t3381328046 ** get_address_of_data_7() { return &___data_7; }
	inline void set_data_7(CardData_t3381328046 * value)
	{
		___data_7 = value;
		Il2CppCodeGenWriteBarrier((&___data_7), value);
	}

	inline static int32_t get_offset_of_damage_8() { return static_cast<int32_t>(offsetof(Attack_t3423014084, ___damage_8)); }
	inline int32_t get_damage_8() const { return ___damage_8; }
	inline int32_t* get_address_of_damage_8() { return &___damage_8; }
	inline void set_damage_8(int32_t value)
	{
		___damage_8 = value;
	}

	inline static int32_t get_offset_of_maxRayDistance_9() { return static_cast<int32_t>(offsetof(Attack_t3423014084, ___maxRayDistance_9)); }
	inline float get_maxRayDistance_9() const { return ___maxRayDistance_9; }
	inline float* get_address_of_maxRayDistance_9() { return &___maxRayDistance_9; }
	inline void set_maxRayDistance_9(float value)
	{
		___maxRayDistance_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTACK_T3423014084_H
#ifndef CARDTOMOUSEPOSITION_T1367274461_H
#define CARDTOMOUSEPOSITION_T1367274461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardToMousePosition
struct  CardToMousePosition_t1367274461  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean CardToMousePosition::follow
	bool ___follow_2;
	// UnityEngine.Transform CardToMousePosition::cardPosition
	Transform_t3275118058 * ___cardPosition_3;

public:
	inline static int32_t get_offset_of_follow_2() { return static_cast<int32_t>(offsetof(CardToMousePosition_t1367274461, ___follow_2)); }
	inline bool get_follow_2() const { return ___follow_2; }
	inline bool* get_address_of_follow_2() { return &___follow_2; }
	inline void set_follow_2(bool value)
	{
		___follow_2 = value;
	}

	inline static int32_t get_offset_of_cardPosition_3() { return static_cast<int32_t>(offsetof(CardToMousePosition_t1367274461, ___cardPosition_3)); }
	inline Transform_t3275118058 * get_cardPosition_3() const { return ___cardPosition_3; }
	inline Transform_t3275118058 ** get_address_of_cardPosition_3() { return &___cardPosition_3; }
	inline void set_cardPosition_3(Transform_t3275118058 * value)
	{
		___cardPosition_3 = value;
		Il2CppCodeGenWriteBarrier((&___cardPosition_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CARDTOMOUSEPOSITION_T1367274461_H
#ifndef MANAAMOUNT_T3227947453_H
#define MANAAMOUNT_T3227947453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManaAmount
struct  ManaAmount_t3227947453  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ManaAmount::currentMana
	int32_t ___currentMana_2;

public:
	inline static int32_t get_offset_of_currentMana_2() { return static_cast<int32_t>(offsetof(ManaAmount_t3227947453, ___currentMana_2)); }
	inline int32_t get_currentMana_2() const { return ___currentMana_2; }
	inline int32_t* get_address_of_currentMana_2() { return &___currentMana_2; }
	inline void set_currentMana_2(int32_t value)
	{
		___currentMana_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANAAMOUNT_T3227947453_H
#ifndef CREATERAYCAST_T2883297021_H
#define CREATERAYCAST_T2883297021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreateRayCast
struct  CreateRayCast_t2883297021  : public MonoBehaviour_t1158329972
{
public:
	// CardToMousePosition CreateRayCast::moveActions
	CardToMousePosition_t1367274461 * ___moveActions_2;
	// CardsInHand CreateRayCast::cardsHand
	CardsInHand_t2163536961 * ___cardsHand_3;
	// ManaAmount CreateRayCast::manaAmount
	ManaAmount_t3227947453 * ___manaAmount_4;
	// CardData CreateRayCast::cardData
	CardData_t3381328046 * ___cardData_5;
	// BattlefieldCardList CreateRayCast::battlefieldList
	BattlefieldCardList_t3744834400 * ___battlefieldList_6;
	// Attack CreateRayCast::attack
	Attack_t3423014084 * ___attack_7;
	// System.Int32 CreateRayCast::cardMask
	int32_t ___cardMask_8;
	// System.Int32 CreateRayCast::playfieldMask
	int32_t ___playfieldMask_9;
	// System.Int32 CreateRayCast::defaultMask
	int32_t ___defaultMask_10;
	// System.Single CreateRayCast::maxRayDistance
	float ___maxRayDistance_11;

public:
	inline static int32_t get_offset_of_moveActions_2() { return static_cast<int32_t>(offsetof(CreateRayCast_t2883297021, ___moveActions_2)); }
	inline CardToMousePosition_t1367274461 * get_moveActions_2() const { return ___moveActions_2; }
	inline CardToMousePosition_t1367274461 ** get_address_of_moveActions_2() { return &___moveActions_2; }
	inline void set_moveActions_2(CardToMousePosition_t1367274461 * value)
	{
		___moveActions_2 = value;
		Il2CppCodeGenWriteBarrier((&___moveActions_2), value);
	}

	inline static int32_t get_offset_of_cardsHand_3() { return static_cast<int32_t>(offsetof(CreateRayCast_t2883297021, ___cardsHand_3)); }
	inline CardsInHand_t2163536961 * get_cardsHand_3() const { return ___cardsHand_3; }
	inline CardsInHand_t2163536961 ** get_address_of_cardsHand_3() { return &___cardsHand_3; }
	inline void set_cardsHand_3(CardsInHand_t2163536961 * value)
	{
		___cardsHand_3 = value;
		Il2CppCodeGenWriteBarrier((&___cardsHand_3), value);
	}

	inline static int32_t get_offset_of_manaAmount_4() { return static_cast<int32_t>(offsetof(CreateRayCast_t2883297021, ___manaAmount_4)); }
	inline ManaAmount_t3227947453 * get_manaAmount_4() const { return ___manaAmount_4; }
	inline ManaAmount_t3227947453 ** get_address_of_manaAmount_4() { return &___manaAmount_4; }
	inline void set_manaAmount_4(ManaAmount_t3227947453 * value)
	{
		___manaAmount_4 = value;
		Il2CppCodeGenWriteBarrier((&___manaAmount_4), value);
	}

	inline static int32_t get_offset_of_cardData_5() { return static_cast<int32_t>(offsetof(CreateRayCast_t2883297021, ___cardData_5)); }
	inline CardData_t3381328046 * get_cardData_5() const { return ___cardData_5; }
	inline CardData_t3381328046 ** get_address_of_cardData_5() { return &___cardData_5; }
	inline void set_cardData_5(CardData_t3381328046 * value)
	{
		___cardData_5 = value;
		Il2CppCodeGenWriteBarrier((&___cardData_5), value);
	}

	inline static int32_t get_offset_of_battlefieldList_6() { return static_cast<int32_t>(offsetof(CreateRayCast_t2883297021, ___battlefieldList_6)); }
	inline BattlefieldCardList_t3744834400 * get_battlefieldList_6() const { return ___battlefieldList_6; }
	inline BattlefieldCardList_t3744834400 ** get_address_of_battlefieldList_6() { return &___battlefieldList_6; }
	inline void set_battlefieldList_6(BattlefieldCardList_t3744834400 * value)
	{
		___battlefieldList_6 = value;
		Il2CppCodeGenWriteBarrier((&___battlefieldList_6), value);
	}

	inline static int32_t get_offset_of_attack_7() { return static_cast<int32_t>(offsetof(CreateRayCast_t2883297021, ___attack_7)); }
	inline Attack_t3423014084 * get_attack_7() const { return ___attack_7; }
	inline Attack_t3423014084 ** get_address_of_attack_7() { return &___attack_7; }
	inline void set_attack_7(Attack_t3423014084 * value)
	{
		___attack_7 = value;
		Il2CppCodeGenWriteBarrier((&___attack_7), value);
	}

	inline static int32_t get_offset_of_cardMask_8() { return static_cast<int32_t>(offsetof(CreateRayCast_t2883297021, ___cardMask_8)); }
	inline int32_t get_cardMask_8() const { return ___cardMask_8; }
	inline int32_t* get_address_of_cardMask_8() { return &___cardMask_8; }
	inline void set_cardMask_8(int32_t value)
	{
		___cardMask_8 = value;
	}

	inline static int32_t get_offset_of_playfieldMask_9() { return static_cast<int32_t>(offsetof(CreateRayCast_t2883297021, ___playfieldMask_9)); }
	inline int32_t get_playfieldMask_9() const { return ___playfieldMask_9; }
	inline int32_t* get_address_of_playfieldMask_9() { return &___playfieldMask_9; }
	inline void set_playfieldMask_9(int32_t value)
	{
		___playfieldMask_9 = value;
	}

	inline static int32_t get_offset_of_defaultMask_10() { return static_cast<int32_t>(offsetof(CreateRayCast_t2883297021, ___defaultMask_10)); }
	inline int32_t get_defaultMask_10() const { return ___defaultMask_10; }
	inline int32_t* get_address_of_defaultMask_10() { return &___defaultMask_10; }
	inline void set_defaultMask_10(int32_t value)
	{
		___defaultMask_10 = value;
	}

	inline static int32_t get_offset_of_maxRayDistance_11() { return static_cast<int32_t>(offsetof(CreateRayCast_t2883297021, ___maxRayDistance_11)); }
	inline float get_maxRayDistance_11() const { return ___maxRayDistance_11; }
	inline float* get_address_of_maxRayDistance_11() { return &___maxRayDistance_11; }
	inline void set_maxRayDistance_11(float value)
	{
		___maxRayDistance_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATERAYCAST_T2883297021_H
#ifndef CARDSINHAND_T2163536961_H
#define CARDSINHAND_T2163536961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardsInHand
struct  CardsInHand_t2163536961  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CardsInHand::Cards
	List_1_t1125654279 * ___Cards_2;
	// UnityEngine.Transform CardsInHand::rotationPoint
	Transform_t3275118058 * ___rotationPoint_3;
	// System.Int32 CardsInHand::oldCardsCount
	int32_t ___oldCardsCount_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> CardsInHand::cardRotations
	List_1_t1612828712 * ___cardRotations_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> CardsInHand::cardPositions
	List_1_t1612828712 * ___cardPositions_6;

public:
	inline static int32_t get_offset_of_Cards_2() { return static_cast<int32_t>(offsetof(CardsInHand_t2163536961, ___Cards_2)); }
	inline List_1_t1125654279 * get_Cards_2() const { return ___Cards_2; }
	inline List_1_t1125654279 ** get_address_of_Cards_2() { return &___Cards_2; }
	inline void set_Cards_2(List_1_t1125654279 * value)
	{
		___Cards_2 = value;
		Il2CppCodeGenWriteBarrier((&___Cards_2), value);
	}

	inline static int32_t get_offset_of_rotationPoint_3() { return static_cast<int32_t>(offsetof(CardsInHand_t2163536961, ___rotationPoint_3)); }
	inline Transform_t3275118058 * get_rotationPoint_3() const { return ___rotationPoint_3; }
	inline Transform_t3275118058 ** get_address_of_rotationPoint_3() { return &___rotationPoint_3; }
	inline void set_rotationPoint_3(Transform_t3275118058 * value)
	{
		___rotationPoint_3 = value;
		Il2CppCodeGenWriteBarrier((&___rotationPoint_3), value);
	}

	inline static int32_t get_offset_of_oldCardsCount_4() { return static_cast<int32_t>(offsetof(CardsInHand_t2163536961, ___oldCardsCount_4)); }
	inline int32_t get_oldCardsCount_4() const { return ___oldCardsCount_4; }
	inline int32_t* get_address_of_oldCardsCount_4() { return &___oldCardsCount_4; }
	inline void set_oldCardsCount_4(int32_t value)
	{
		___oldCardsCount_4 = value;
	}

	inline static int32_t get_offset_of_cardRotations_5() { return static_cast<int32_t>(offsetof(CardsInHand_t2163536961, ___cardRotations_5)); }
	inline List_1_t1612828712 * get_cardRotations_5() const { return ___cardRotations_5; }
	inline List_1_t1612828712 ** get_address_of_cardRotations_5() { return &___cardRotations_5; }
	inline void set_cardRotations_5(List_1_t1612828712 * value)
	{
		___cardRotations_5 = value;
		Il2CppCodeGenWriteBarrier((&___cardRotations_5), value);
	}

	inline static int32_t get_offset_of_cardPositions_6() { return static_cast<int32_t>(offsetof(CardsInHand_t2163536961, ___cardPositions_6)); }
	inline List_1_t1612828712 * get_cardPositions_6() const { return ___cardPositions_6; }
	inline List_1_t1612828712 ** get_address_of_cardPositions_6() { return &___cardPositions_6; }
	inline void set_cardPositions_6(List_1_t1612828712 * value)
	{
		___cardPositions_6 = value;
		Il2CppCodeGenWriteBarrier((&___cardPositions_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CARDSINHAND_T2163536961_H
#ifndef DAMAGEMESSAGE_T2793721680_H
#define DAMAGEMESSAGE_T2793721680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DamageMessage
struct  DamageMessage_t2793721680  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 DamageMessage::life
	int32_t ___life_2;
	// System.Int32 DamageMessage::lifeSpan
	int32_t ___lifeSpan_3;

public:
	inline static int32_t get_offset_of_life_2() { return static_cast<int32_t>(offsetof(DamageMessage_t2793721680, ___life_2)); }
	inline int32_t get_life_2() const { return ___life_2; }
	inline int32_t* get_address_of_life_2() { return &___life_2; }
	inline void set_life_2(int32_t value)
	{
		___life_2 = value;
	}

	inline static int32_t get_offset_of_lifeSpan_3() { return static_cast<int32_t>(offsetof(DamageMessage_t2793721680, ___lifeSpan_3)); }
	inline int32_t get_lifeSpan_3() const { return ___lifeSpan_3; }
	inline int32_t* get_address_of_lifeSpan_3() { return &___lifeSpan_3; }
	inline void set_lifeSpan_3(int32_t value)
	{
		___lifeSpan_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DAMAGEMESSAGE_T2793721680_H
#ifndef TURNSWITCH_T2695936653_H
#define TURNSWITCH_T2695936653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TurnSwitch
struct  TurnSwitch_t2695936653  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean TurnSwitch::myTurn
	bool ___myTurn_2;

public:
	inline static int32_t get_offset_of_myTurn_2() { return static_cast<int32_t>(offsetof(TurnSwitch_t2695936653, ___myTurn_2)); }
	inline bool get_myTurn_2() const { return ___myTurn_2; }
	inline bool* get_address_of_myTurn_2() { return &___myTurn_2; }
	inline void set_myTurn_2(bool value)
	{
		___myTurn_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TURNSWITCH_T2695936653_H
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1756533147 * m_Items[1];

public:
	inline GameObject_t1756533147 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1756533147 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1756533147 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1756533147 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1642385972  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2724124387_gshared (Component_t3819376471 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m483057723_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m681991875_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Transform_t3275118058 * p1, const RuntimeMethod* method);
// !1 System.Func`2<UnityEngine.Vector3,System.Boolean>::Invoke(!0)
extern "C"  bool Func_2_Invoke_m729793780_gshared (Func_2_t1519307235 * __this, Vector3_t2243707580  p0, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.Vector3,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1836800602_gshared (Func_2_t1519307235 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C"  void Queue_1_Enqueue_m4123136646_gshared (Queue_1_t2509106130 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
extern "C"  void List_1__ctor_m347461442_gshared (List_1_t1612828712 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2375293942_gshared (List_1_t2058570427 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
extern "C"  int32_t List_1_get_Count_m40859504_gshared (List_1_t1612828712 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
extern "C"  void List_1_Clear_m3833859041_gshared (List_1_t1612828712 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
extern "C"  void List_1_Add_m1552520334_gshared (List_1_t1612828712 * __this, Vector3_t2243707580  p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2062981835_gshared (List_1_t2058570427 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C"  Vector3_t2243707580  List_1_get_Item_m4187614919_gshared (List_1_t1612828712 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C"  bool List_1_Contains_m1658838094_gshared (List_1_t2058570427 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C"  bool List_1_Remove_m3164383811_gshared (List_1_t2058570427 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C"  void Queue_1__ctor_m1845245813_gshared (Queue_1_t2509106130 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C"  int32_t Queue_1_get_Count_m3795587777_gshared (Queue_1_t2509106130 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Peek()
extern "C"  RuntimeObject * Queue_1_Peek_m1435793310_gshared (Queue_1_t2509106130 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C"  RuntimeObject * Queue_1_Dequeue_m3320287779_gshared (Queue_1_t2509106130 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m3347661153_gshared (GameObject_t1756533147 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1825328214 (MonoBehaviour_t1158329972 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<CardData>()
#define Component_GetComponent_TisCardData_t3381328046_m761798127(__this, method) ((  CardData_t3381328046 * (*) (Component_t3819376471 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2724124387_gshared)(__this, method)
// !!0 UnityEngine.Object::FindObjectOfType<BattlefieldCardList>()
#define Object_FindObjectOfType_TisBattlefieldCardList_t3744834400_m2051785719(__this /* static, unused */, method) ((  BattlefieldCardList_t3744834400 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m483057723_gshared)(__this /* static, unused */, method)
// System.Int32 CardData::GetDamage()
extern "C"  int32_t CardData_GetDamage_m1533731806 (CardData_t3381328046 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m3374354972 (Component_t3819376471 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m2304215762 (Transform_t3275118058 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C"  Vector3_t2243707580  Vector3_get_down_m2270176769 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Ray__ctor_m2480021746 (Ray_t2469606224 * __this, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C"  Vector3_t2243707580  Ray_get_origin_m1676163607 (Ray_t2469606224 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C"  Vector3_t2243707580  Ray_get_direction_m4136268940 (Ray_t2469606224 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  Vector3_op_Multiply_m2498445460 (RuntimeObject * __this /* static, unused */, Vector3_t2243707580  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C"  Color_t2020392075  Color_get_green_m3094897666 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
extern "C"  void Debug_DrawRay_m999504727 (RuntimeObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, Color_t2020392075  p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Physics_Raycast_m240935337 (RuntimeObject * __this /* static, unused */, Ray_t2469606224  p0, RaycastHit_t87180320 * p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C"  Collider_t3497673348 * RaycastHit_get_collider_m907576213 (RaycastHit_t87180320 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Component::get_tag()
extern "C"  String_t* Component_get_tag_m124558427 (Component_t3819376471 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<Health>()
#define Component_GetComponent_TisHealth_t2683907638_m2691065279(__this, method) ((  Health_t2683907638 * (*) (Component_t3819376471 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2724124387_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m3768854296 (RuntimeObject * __this /* static, unused */, Object_t1021602117 * p0, Object_t1021602117 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardData::GetAttacked()
extern "C"  bool CardData_GetAttacked_m1568297294 (CardData_t3381328046 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Health::LoseHealth(System.Int32)
extern "C"  void Health_LoseHealth_m2753088799 (Health_t2683907638 * __this, int32_t ___damage0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CardData::ChangeAttacked()
extern "C"  void CardData_ChangeAttacked_m2550221536 (CardData_t3381328046 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C"  Transform_t3275118058 * RaycastHit_get_transform_m2333455049 (RaycastHit_t87180320 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
#define Object_Instantiate_TisGameObject_t1756533147_m3066053529(__this /* static, unused */, p0, p1, method) ((  GameObject_t1756533147 * (*) (RuntimeObject * /* static, unused */, GameObject_t1756533147 *, Transform_t3275118058 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m681991875_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C"  void SpriteRenderer_set_sprite_m3307887080 (SpriteRenderer_t1209076198 * __this, Sprite_t309593783 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BattlefieldCardList::CardOrderner()
extern "C"  void BattlefieldCardList_CardOrderner_m2537663836 (BattlefieldCardList_t3744834400 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 BattlefieldCardList::LocationCalculator(UnityEngine.GameObject)
extern "C"  int32_t BattlefieldCardList_LocationCalculator_m3216716540 (BattlefieldCardList_t3744834400 * __this, GameObject_t1756533147 * ___card0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m2516226135 (RuntimeObject * __this /* static, unused */, Object_t1021602117 * p0, Object_t1021602117 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m3490276752 (GameObject_t1756533147 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m1555724485 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
extern "C"  void Transform_set_eulerAngles_m1566259983 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2942701431 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Func`2<UnityEngine.Vector3,System.Boolean>::Invoke(!0)
#define Func_2_Invoke_m729793780(__this, p0, method) ((  bool (*) (Func_2_t1519307235 *, Vector3_t2243707580 , const RuntimeMethod*))Func_2_Invoke_m729793780_gshared)(__this, p0, method)
// System.Void CardMove::goTo(UnityEngine.Vector3)
extern "C"  void CardMove_goTo_m2465868400 (CardMove_t1983516363 * __this, Vector3_t2243707580  ___targetPosition0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CardMove::stayStill()
extern "C"  void CardMove_stayStill_m3004011379 (CardMove_t1983516363 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Vector3_op_Subtraction_m4046047256 (RuntimeObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t2243707580  Vector3_get_normalized_m1057036856 (Vector3_t2243707580 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Vector3_Min_m1795126856 (RuntimeObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Vector3_op_Addition_m394909128 (RuntimeObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CardMove::Shortest(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  CardMove_Shortest_m1396033638 (CardMove_t1983516363 * __this, Vector3_t2243707580  ___VectorA0, Vector3_t2243707580  ___VectorB1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Equality_m3786211684 (RuntimeObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<UnityEngine.Vector3,System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m1836800602(__this, p0, p1, method) ((  void (*) (Func_2_t1519307235 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1836800602_gshared)(__this, p0, p1, method)
// System.Void CallQueueObject::.ctor(UnityEngine.Vector3,System.Func`2<UnityEngine.Vector3,System.Boolean>)
extern "C"  void CallQueueObject__ctor_m302175443 (CallQueueObject_t354407064 * __this, Vector3_t2243707580  ___inputVector30, Func_2_t1519307235 * ___inputFunc1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Queue`1<CallQueueObject>::Enqueue(!0)
#define Queue_1_Enqueue_m4252592219(__this, p0, method) ((  void (*) (Queue_1_t174063899 *, CallQueueObject_t354407064 *, const RuntimeMethod*))Queue_1_Enqueue_m4123136646_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
#define List_1__ctor_m347461442(__this, method) ((  void (*) (List_1_t1612828712 *, const RuntimeMethod*))List_1__ctor_m347461442_gshared)(__this, method)
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m2159020946 (Component_t3819376471 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
#define List_1_get_Count_m2074971713(__this, method) ((  int32_t (*) (List_1_t1125654279 *, const RuntimeMethod*))List_1_get_Count_m2375293942_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
#define List_1_get_Count_m40859504(__this, method) ((  int32_t (*) (List_1_t1612828712 *, const RuntimeMethod*))List_1_get_Count_m40859504_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
#define List_1_Clear_m3833859041(__this, method) ((  void (*) (List_1_t1612828712 *, const RuntimeMethod*))List_1_Clear_m3833859041_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
#define List_1_Add_m1552520334(__this, p0, method) ((  void (*) (List_1_t1612828712 *, Vector3_t2243707580 , const RuntimeMethod*))List_1_Add_m1552520334_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m4260487298(__this, p0, method) ((  GameObject_t1756533147 * (*) (List_1_t1125654279 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2062981835_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
#define List_1_get_Item_m4187614919(__this, p0, method) ((  Vector3_t2243707580  (*) (List_1_t1612828712 *, int32_t, const RuntimeMethod*))List_1_get_Item_m4187614919_gshared)(__this, p0, method)
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m3369637820 (Object_t1021602117 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(!0)
#define List_1_Contains_m2391088647(__this, p0, method) ((  bool (*) (List_1_t1125654279 *, GameObject_t1756533147 *, const RuntimeMethod*))List_1_Contains_m1658838094_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(!0)
#define List_1_Remove_m59873180(__this, p0, method) ((  bool (*) (List_1_t1125654279 *, GameObject_t1756533147 *, const RuntimeMethod*))List_1_Remove_m3164383811_gshared)(__this, p0, method)
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C"  Vector3_t2243707580  RaycastHit_get_point_m3350410423 (RaycastHit_t87180320 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<ManaAmount>()
#define Object_FindObjectOfType_TisManaAmount_t3227947453_m4151527298(__this /* static, unused */, method) ((  ManaAmount_t3227947453 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m483057723_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<CardsInHand>()
#define Object_FindObjectOfType_TisCardsInHand_t2163536961_m2373433372(__this /* static, unused */, method) ((  CardsInHand_t2163536961 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m483057723_gshared)(__this /* static, unused */, method)
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
extern "C"  int32_t LayerMask_GetMask_m4167990913 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1642385972* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t189460977 * Camera_get_main_m881971336 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t2243707580  Input_get_mousePosition_m2069200279 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C"  Ray_t2469606224  Camera_ScreenPointToRay_m3033403101 (Camera_t189460977 * __this, Vector3_t2243707580  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C"  Color_t2020392075  Color_get_red_m3374418718 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m2251823624 (RuntimeObject * __this /* static, unused */, Ray_t2469606224  p0, RaycastHit_t87180320 * p1, float p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m2313448302 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<TurnSwitch>()
#define Component_GetComponent_TisTurnSwitch_t2695936653_m3263754024(__this, method) ((  TurnSwitch_t2695936653 * (*) (Component_t3819376471 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2724124387_gshared)(__this, method)
// System.Void TurnSwitch::ChangeTurn()
extern "C"  void TurnSwitch_ChangeTurn_m4170201191 (TurnSwitch_t2695936653 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C"  bool Input_GetMouseButtonUp_m1218626729 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m304203149 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardsInHand::ContainsCard(UnityEngine.GameObject)
extern "C"  bool CardsInHand_ContainsCard_m3590905015 (CardsInHand_t2163536961 * __this, GameObject_t1756533147 * ___card0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CardsInHand::getCardPositions(System.String)
extern "C"  Vector3_t2243707580  CardsInHand_getCardPositions_m920106648 (CardsInHand_t2163536961 * __this, String_t* ___cardName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CardsInHand::getCardRotations(System.String)
extern "C"  Vector3_t2243707580  CardsInHand_getCardRotations_m3281105525 (CardsInHand_t2163536961 * __this, String_t* ___cardName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<CardToMousePosition>()
#define Component_GetComponent_TisCardToMousePosition_t1367274461_m4288503302(__this, method) ((  CardToMousePosition_t1367274461 * (*) (Component_t3819376471 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2724124387_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<Attack>()
#define Component_GetComponent_TisAttack_t3423014084_m1256133895(__this, method) ((  Attack_t3423014084 * (*) (Component_t3819376471 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2724124387_gshared)(__this, method)
// System.Int32 CardData::GetManaCost()
extern "C"  int32_t CardData_GetManaCost_m304119075 (CardData_t3381328046 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ManaAmount::GetCurrentMana()
extern "C"  int32_t ManaAmount_GetCurrentMana_m2330157972 (ManaAmount_t3227947453 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CardToMousePosition::FollowChange()
extern "C"  void CardToMousePosition_FollowChange_m2544732727 (CardToMousePosition_t1367274461 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardsInHand::removeCard(UnityEngine.GameObject)
extern "C"  bool CardsInHand_removeCard_m1309036012 (CardsInHand_t2163536961 * __this, GameObject_t1756533147 * ___card0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BattlefieldCardList::AddToArray(UnityEngine.GameObject)
extern "C"  void BattlefieldCardList_AddToArray_m600484178 (BattlefieldCardList_t3744834400 * __this, GameObject_t1756533147 * ___card0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Attack::CheckHit()
extern "C"  void Attack_CheckHit_m810787838 (Attack_t3423014084 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C"  bool Input_GetMouseButton_m1307856634 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CardToMousePosition::ChangePosition(UnityEngine.RaycastHit)
extern "C"  void CardToMousePosition_ChangePosition_m1390422380 (CardToMousePosition_t1367274461 * __this, RaycastHit_t87180320  ___hit0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C"  Vector3_t2243707580  Transform_get_localScale_m46214814 (Transform_t3275118058 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m1442831667 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m3959286051 (RuntimeObject * __this /* static, unused */, Object_t1021602117 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Queue`1<CallQueueObject>::.ctor()
#define Queue_1__ctor_m1969511742(__this, method) ((  void (*) (Queue_1_t174063899 *, const RuntimeMethod*))Queue_1__ctor_m1845245813_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Queue`1<CallQueueObject>::get_Count()
#define Queue_1_get_Count_m2035996976(__this, method) ((  int32_t (*) (Queue_1_t174063899 *, const RuntimeMethod*))Queue_1_get_Count_m3795587777_gshared)(__this, method)
// !0 System.Collections.Generic.Queue`1<CallQueueObject>::Peek()
#define Queue_1_Peek_m2536096417(__this, method) ((  CallQueueObject_t354407064 * (*) (Queue_1_t174063899 *, const RuntimeMethod*))Queue_1_Peek_m1435793310_gshared)(__this, method)
// System.Boolean CallQueueObject::Check()
extern "C"  bool CallQueueObject_Check_m1284673283 (CallQueueObject_t354407064 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.Queue`1<CallQueueObject>::Dequeue()
#define Queue_1_Dequeue_m3710529508(__this, method) ((  CallQueueObject_t354407064 * (*) (Queue_1_t174063899 *, const RuntimeMethod*))Queue_1_Dequeue_m3320287779_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
#define GameObject_GetComponent_TisMeshRenderer_t1268241104_m3528968632(__this, method) ((  MeshRenderer_t1268241104 * (*) (GameObject_t1756533147 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3347661153_gshared)(__this, method)
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C"  Material_t193706927 * Renderer_get_material_m3944461198 (Renderer_t257310565 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C"  void Material_set_color_m1702887239 (Material_t193706927 * __this, Color_t2020392075  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_blue()
extern "C"  Color_t2020392075  Color_get_blue_m2634563453 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Attack::.ctor()
extern "C"  void Attack__ctor_m2905938363 (Attack_t3423014084 * __this, const RuntimeMethod* method)
{
	{
		__this->set_maxRayDistance_9((200.0f));
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Attack::Start()
extern "C"  void Attack_Start_m3189437679 (Attack_t3423014084 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Attack_Start_m3189437679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CardData_t3381328046 * L_0 = Component_GetComponent_TisCardData_t3381328046_m761798127(__this, /*hidden argument*/Component_GetComponent_TisCardData_t3381328046_m761798127_RuntimeMethod_var);
		__this->set_data_7(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		BattlefieldCardList_t3744834400 * L_1 = Object_FindObjectOfType_TisBattlefieldCardList_t3744834400_m2051785719(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisBattlefieldCardList_t3744834400_m2051785719_RuntimeMethod_var);
		__this->set_battlefieldCardList_6(L_1);
		CardData_t3381328046 * L_2 = __this->get_data_7();
		int32_t L_3 = CardData_GetDamage_m1533731806(L_2, /*hidden argument*/NULL);
		__this->set_damage_8(L_3);
		return;
	}
}
// System.Void Attack::CheckHit()
extern "C"  void Attack_CheckHit_m810787838 (Attack_t3423014084 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Attack_CheckHit_m810787838_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2469606224  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RaycastHit_t87180320  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m2304215762(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_2 = Vector3_get_down_m2270176769(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray__ctor_m2480021746((&V_0), L_1, L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Ray_get_origin_m1676163607((&V_0), /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Ray_get_direction_m4136268940((&V_0), /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = Vector3_op_Multiply_m2498445460(NULL /*static, unused*/, L_4, (100.0f), /*hidden argument*/NULL);
		Color_t2020392075  L_6 = Color_get_green_m3094897666(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_DrawRay_m999504727(NULL /*static, unused*/, L_3, L_5, L_6, /*hidden argument*/NULL);
		Ray_t2469606224  L_7 = V_0;
		float L_8 = __this->get_maxRayDistance_9();
		bool L_9 = Physics_Raycast_m240935337(NULL /*static, unused*/, L_7, (&V_1), L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00f7;
		}
	}
	{
		Collider_t3497673348 * L_10 = RaycastHit_get_collider_m907576213((&V_1), /*hidden argument*/NULL);
		String_t* L_11 = Component_get_tag_m124558427(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_11, _stringLiteral1816890106, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00f7;
		}
	}
	{
		Collider_t3497673348 * L_13 = RaycastHit_get_collider_m907576213((&V_1), /*hidden argument*/NULL);
		Health_t2683907638 * L_14 = Component_GetComponent_TisHealth_t2683907638_m2691065279(L_13, /*hidden argument*/Component_GetComponent_TisHealth_t2683907638_m2691065279_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Inequality_m3768854296(NULL /*static, unused*/, L_14, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00f7;
		}
	}
	{
		Collider_t3497673348 * L_16 = RaycastHit_get_collider_m907576213((&V_1), /*hidden argument*/NULL);
		Health_t2683907638 * L_17 = Component_GetComponent_TisHealth_t2683907638_m2691065279(L_16, /*hidden argument*/Component_GetComponent_TisHealth_t2683907638_m2691065279_RuntimeMethod_var);
		__this->set_enemyHealth_5(L_17);
		CardData_t3381328046 * L_18 = __this->get_data_7();
		bool L_19 = CardData_GetAttacked_m1568297294(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00e5;
		}
	}
	{
		Health_t2683907638 * L_20 = __this->get_enemyHealth_5();
		CardData_t3381328046 * L_21 = __this->get_data_7();
		int32_t L_22 = CardData_GetDamage_m1533731806(L_21, /*hidden argument*/NULL);
		Health_LoseHealth_m2753088799(L_20, L_22, /*hidden argument*/NULL);
		CardData_t3381328046 * L_23 = __this->get_data_7();
		CardData_ChangeAttacked_m2550221536(L_23, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_24 = __this->get_damagePopup_2();
		Transform_t3275118058 * L_25 = RaycastHit_get_transform_m2333455049((&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3066053529(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3066053529_RuntimeMethod_var);
		SpriteRenderer_t1209076198 * L_26 = __this->get_healthSprite_3();
		Sprite_t309593783 * L_27 = __this->get_health29Sprite_4();
		SpriteRenderer_set_sprite_m3307887080(L_26, L_27, /*hidden argument*/NULL);
	}

IL_00e5:
	{
		__this->set_enemyHealth_5((Health_t2683907638 *)NULL);
		BattlefieldCardList_t3744834400 * L_28 = __this->get_battlefieldCardList_6();
		BattlefieldCardList_CardOrderner_m2537663836(L_28, /*hidden argument*/NULL);
	}

IL_00f7:
	{
		return;
	}
}
// System.Void BattlefieldCardList::.ctor()
extern "C"  void BattlefieldCardList__ctor_m431430921 (BattlefieldCardList_t3744834400 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BattlefieldCardList::AddToArray(UnityEngine.GameObject)
extern "C"  void BattlefieldCardList_AddToArray_m600484178 (BattlefieldCardList_t3744834400 * __this, GameObject_t1756533147 * ___card0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BattlefieldCardList_AddToArray_m600484178_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObjectU5BU5D_t3057952154* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		GameObject_t1756533147 * L_0 = ___card0;
		int32_t L_1 = BattlefieldCardList_LocationCalculator_m3216716540(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObjectU5BU5D_t3057952154* L_2 = __this->get_battlefieldArray_2();
		V_1 = ((GameObjectU5BU5D_t3057952154*)SZArrayNew(GameObjectU5BU5D_t3057952154_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))+(int32_t)1))));
		V_2 = 0;
		goto IL_002e;
	}

IL_001f:
	{
		GameObjectU5BU5D_t3057952154* L_3 = V_1;
		int32_t L_4 = V_2;
		GameObjectU5BU5D_t3057952154* L_5 = __this->get_battlefieldArray_2();
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		GameObject_t1756533147 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		ArrayElementTypeCheck (L_3, L_8);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (GameObject_t1756533147 *)L_8);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_10 = V_2;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		GameObjectU5BU5D_t3057952154* L_12 = __this->get_battlefieldArray_2();
		V_3 = (((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length))));
		goto IL_0054;
	}

IL_0043:
	{
		GameObjectU5BU5D_t3057952154* L_13 = V_1;
		int32_t L_14 = V_3;
		GameObjectU5BU5D_t3057952154* L_15 = __this->get_battlefieldArray_2();
		int32_t L_16 = V_3;
		int32_t L_17 = L_16;
		GameObject_t1756533147 * L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		ArrayElementTypeCheck (L_13, L_18);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_14+(int32_t)1))), (GameObject_t1756533147 *)L_18);
		int32_t L_19 = V_3;
		V_3 = ((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_0054:
	{
		int32_t L_20 = V_3;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) > ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		GameObjectU5BU5D_t3057952154* L_22 = V_1;
		int32_t L_23 = V_0;
		GameObject_t1756533147 * L_24 = ___card0;
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23), (GameObject_t1756533147 *)L_24);
		GameObjectU5BU5D_t3057952154* L_25 = V_1;
		__this->set_battlefieldArray_2(L_25);
		BattlefieldCardList_CardOrderner_m2537663836(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BattlefieldCardList::RemoveFromArray(UnityEngine.GameObject)
extern "C"  void BattlefieldCardList_RemoveFromArray_m3223237164 (BattlefieldCardList_t3744834400 * __this, GameObject_t1756533147 * ___card0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BattlefieldCardList_RemoveFromArray_m3223237164_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObjectU5BU5D_t3057952154* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = ((int32_t)22);
		V_1 = 0;
		goto IL_0023;
	}

IL_000a:
	{
		GameObjectU5BU5D_t3057952154* L_0 = __this->get_battlefieldArray_2();
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		GameObject_t1756533147 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_t1756533147 * L_4 = ___card0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m2516226135(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_6 = V_1;
		V_0 = L_6;
	}

IL_001f:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		GameObjectU5BU5D_t3057952154* L_9 = __this->get_battlefieldArray_2();
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)22))))
		{
			goto IL_009f;
		}
	}
	{
		GameObjectU5BU5D_t3057952154* L_11 = __this->get_battlefieldArray_2();
		V_2 = ((GameObjectU5BU5D_t3057952154*)SZArrayNew(GameObjectU5BU5D_t3057952154_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length))))-(int32_t)1))));
		V_3 = 0;
		goto IL_005f;
	}

IL_0050:
	{
		GameObjectU5BU5D_t3057952154* L_12 = V_2;
		int32_t L_13 = V_3;
		GameObjectU5BU5D_t3057952154* L_14 = __this->get_battlefieldArray_2();
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		GameObject_t1756533147 * L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		ArrayElementTypeCheck (L_12, L_17);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (GameObject_t1756533147 *)L_17);
		int32_t L_18 = V_3;
		V_3 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_19 = V_3;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0050;
		}
	}
	{
		GameObjectU5BU5D_t3057952154* L_21 = __this->get_battlefieldArray_2();
		V_4 = (((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length))));
		goto IL_008a;
	}

IL_0075:
	{
		GameObjectU5BU5D_t3057952154* L_22 = V_2;
		int32_t L_23 = V_4;
		GameObjectU5BU5D_t3057952154* L_24 = __this->get_battlefieldArray_2();
		int32_t L_25 = V_4;
		int32_t L_26 = L_25;
		GameObject_t1756533147 * L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		ArrayElementTypeCheck (L_22, L_27);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_23-(int32_t)1))), (GameObject_t1756533147 *)L_27);
		int32_t L_28 = V_4;
		V_4 = ((int32_t)((int32_t)L_28-(int32_t)1));
	}

IL_008a:
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) > ((int32_t)L_30)))
		{
			goto IL_0075;
		}
	}
	{
		GameObjectU5BU5D_t3057952154* L_31 = V_2;
		__this->set_battlefieldArray_2(L_31);
		BattlefieldCardList_CardOrderner_m2537663836(__this, /*hidden argument*/NULL);
	}

IL_009f:
	{
		return;
	}
}
// System.Void BattlefieldCardList::CardOrderner()
extern "C"  void BattlefieldCardList_CardOrderner_m2537663836 (BattlefieldCardList_t3744834400 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0070;
	}

IL_0007:
	{
		GameObjectU5BU5D_t3057952154* L_0 = __this->get_battlefieldArray_2();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		GameObject_t1756533147 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Transform_t3275118058 * L_4 = GameObject_get_transform_m3490276752(L_3, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m1555724485((&L_5), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_eulerAngles_m1566259983(L_4, L_5, /*hidden argument*/NULL);
		GameObjectU5BU5D_t3057952154* L_6 = __this->get_battlefieldArray_2();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		GameObject_t1756533147 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Transform_t3275118058 * L_10 = GameObject_get_transform_m3490276752(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		GameObjectU5BU5D_t3057952154* L_12 = __this->get_battlefieldArray_2();
		Vector3_t2243707580  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m1555724485((&L_13), ((float)((float)((float)((float)((float)((float)(((float)((float)L_11)))+(float)((float)((float)(((float)((float)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))/(float)(2.0f)))))-(float)(0.5f)))*(float)(6.0f))), (0.0f), (-2.2f), /*hidden argument*/NULL);
		Transform_set_position_m2942701431(L_10, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0070:
	{
		int32_t L_15 = V_0;
		GameObjectU5BU5D_t3057952154* L_16 = __this->get_battlefieldArray_2();
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Int32 BattlefieldCardList::LocationCalculator(UnityEngine.GameObject)
extern "C"  int32_t BattlefieldCardList_LocationCalculator_m3216716540 (BattlefieldCardList_t3744834400 * __this, GameObject_t1756533147 * ___card0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		GameObjectU5BU5D_t3057952154* L_0 = __this->get_battlefieldArray_2();
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))));
		V_1 = 0;
		goto IL_004d;
	}

IL_0010:
	{
		GameObject_t1756533147 * L_1 = ___card0;
		Transform_t3275118058 * L_2 = GameObject_get_transform_m3490276752(L_1, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Transform_get_position_m2304215762(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		float L_4 = (&V_2)->get_x_1();
		GameObjectU5BU5D_t3057952154* L_5 = __this->get_battlefieldArray_2();
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		GameObject_t1756533147 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Transform_t3275118058 * L_9 = GameObject_get_transform_m3490276752(L_8, /*hidden argument*/NULL);
		Vector3_t2243707580  L_10 = Transform_get_position_m2304215762(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		float L_11 = (&V_3)->get_x_1();
		if ((!(((float)L_4) < ((float)L_11))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_12 = V_1;
		V_0 = L_12;
		goto IL_005b;
	}

IL_0049:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_004d:
	{
		int32_t L_14 = V_1;
		GameObjectU5BU5D_t3057952154* L_15 = __this->get_battlefieldArray_2();
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0010;
		}
	}

IL_005b:
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Void CallQueueObject::.ctor(UnityEngine.Vector3,System.Func`2<UnityEngine.Vector3,System.Boolean>)
extern "C"  void CallQueueObject__ctor_m302175443 (CallQueueObject_t354407064 * __this, Vector3_t2243707580  ___inputVector30, Func_2_t1519307235 * ___inputFunc1, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_0 = ___inputVector30;
		__this->set_targetPos_0(L_0);
		Func_2_t1519307235 * L_1 = ___inputFunc1;
		__this->set_function_1(L_1);
		return;
	}
}
// System.Boolean CallQueueObject::Check()
extern "C"  bool CallQueueObject_Check_m1284673283 (CallQueueObject_t354407064 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallQueueObject_Check_m1284673283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_2_t1519307235 * L_0 = __this->get_function_1();
		Vector3_t2243707580  L_1 = __this->get_targetPos_0();
		bool L_2 = Func_2_Invoke_m729793780(L_0, L_1, /*hidden argument*/Func_2_Invoke_m729793780_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void CardData::.ctor()
extern "C"  void CardData__ctor_m3309886675 (CardData_t3381328046 * __this, const RuntimeMethod* method)
{
	{
		__this->set_manaCost_3(1);
		__this->set_damage_4(1);
		__this->set_health_5(1);
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CardData::GetAttackCharge()
extern "C"  bool CardData_GetAttackCharge_m2481335979 (CardData_t3381328046 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_attackCharge_2();
		return L_0;
	}
}
// System.Int32 CardData::GetManaCost()
extern "C"  int32_t CardData_GetManaCost_m304119075 (CardData_t3381328046 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_manaCost_3();
		return L_0;
	}
}
// System.Int32 CardData::GetDamage()
extern "C"  int32_t CardData_GetDamage_m1533731806 (CardData_t3381328046 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_damage_4();
		return L_0;
	}
}
// System.Int32 CardData::GetHealth()
extern "C"  int32_t CardData_GetHealth_m1533105527 (CardData_t3381328046 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_health_5();
		return L_0;
	}
}
// System.Boolean CardData::GetAttacked()
extern "C"  bool CardData_GetAttacked_m1568297294 (CardData_t3381328046 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_attacked_6();
		return L_0;
	}
}
// System.Void CardData::ChangeAttackCharge()
extern "C"  void CardData_ChangeAttackCharge_m2685629623 (CardData_t3381328046 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_attackCharge_2();
		__this->set_attackCharge_2((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		return;
	}
}
// System.Void CardData::ChangeManaCost(System.Int32)
extern "C"  void CardData_ChangeManaCost_m61423570 (CardData_t3381328046 * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_manaCost_3();
		int32_t L_1 = ___amount0;
		__this->set_manaCost_3(((int32_t)((int32_t)L_0+(int32_t)L_1)));
		return;
	}
}
// System.Void CardData::ChangeDamage(System.Int32)
extern "C"  void CardData_ChangeDamage_m485026543 (CardData_t3381328046 * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_damage_4();
		int32_t L_1 = ___amount0;
		__this->set_damage_4(((int32_t)((int32_t)L_0+(int32_t)L_1)));
		return;
	}
}
// System.Void CardData::ChangeHealth(System.Int32)
extern "C"  void CardData_ChangeHealth_m1269198762 (CardData_t3381328046 * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_health_5();
		int32_t L_1 = ___amount0;
		__this->set_health_5(((int32_t)((int32_t)L_0+(int32_t)L_1)));
		return;
	}
}
// System.Void CardData::ChangeAttacked()
extern "C"  void CardData_ChangeAttacked_m2550221536 (CardData_t3381328046 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_attacked_6();
		__this->set_attacked_6((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		return;
	}
}
// System.Void CardMove::.ctor()
extern "C"  void CardMove__ctor_m4068185194 (CardMove_t1983516363 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardMove::Start()
extern "C"  void CardMove_Start_m2947224758 (CardMove_t1983516363 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_3((0.1f));
		__this->set_currentSpeed_5((1.0f));
		Transform_t3275118058 * L_0 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m2304215762(L_0, /*hidden argument*/NULL);
		__this->set_targetPos_6(L_1);
		return;
	}
}
// System.Void CardMove::stayStill()
extern "C"  void CardMove_stayStill_m3004011379 (CardMove_t1983516363 * __this, const RuntimeMethod* method)
{
	{
		__this->set_state_2((int16_t)0);
		return;
	}
}
// System.Void CardMove::stayStill(UnityEngine.Vector3)
extern "C"  void CardMove_stayStill_m2910682552 (CardMove_t1983516363 * __this, Vector3_t2243707580  ___targetPosition0, const RuntimeMethod* method)
{
	{
		__this->set_state_2((int16_t)0);
		Vector3_t2243707580  L_0 = ___targetPosition0;
		CardMove_goTo_m2465868400(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardMove::moveConsistent(UnityEngine.Vector3)
extern "C"  void CardMove_moveConsistent_m1498517290 (CardMove_t1983516363 * __this, Vector3_t2243707580  ___targetPosition0, const RuntimeMethod* method)
{
	{
		__this->set_state_2((int16_t)1);
		Vector3_t2243707580  L_0 = ___targetPosition0;
		__this->set_targetPos_6(L_0);
		return;
	}
}
// System.Void CardMove::moveSpeeding(UnityEngine.Vector3)
extern "C"  void CardMove_moveSpeeding_m1060139065 (CardMove_t1983516363 * __this, Vector3_t2243707580  ___targetPosition0, const RuntimeMethod* method)
{
	{
		__this->set_state_2((int16_t)2);
		Vector3_t2243707580  L_0 = ___targetPosition0;
		__this->set_targetPos_6(L_0);
		__this->set_currentSpeed_5((1.0f));
		return;
	}
}
// System.Void CardMove::moveSlowing(UnityEngine.Vector3)
extern "C"  void CardMove_moveSlowing_m3914299349 (CardMove_t1983516363 * __this, Vector3_t2243707580  ___targetPosition0, const RuntimeMethod* method)
{
	{
		__this->set_state_2((int16_t)3);
		Vector3_t2243707580  L_0 = ___targetPosition0;
		__this->set_targetPos_6(L_0);
		return;
	}
}
// System.Void CardMove::goTo(UnityEngine.Vector3)
extern "C"  void CardMove_goTo_m2465868400 (CardMove_t1983516363 * __this, Vector3_t2243707580  ___targetPosition0, const RuntimeMethod* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = ___targetPosition0;
		Transform_set_position_m2942701431(L_0, L_1, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = ___targetPosition0;
		__this->set_targetPos_6(L_2);
		CardMove_stayStill_m3004011379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardMove::consistentMove()
extern "C"  void CardMove_consistentMove_m2515504787 (CardMove_t1983516363 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CardMove_consistentMove_m2515504787_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m2304215762(L_0, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = __this->get_targetPos_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_3 = Vector3_op_Subtraction_m4046047256(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Vector3_t2243707580  L_4 = Vector3_get_normalized_m1057036856((&V_1), /*hidden argument*/NULL);
		Transform_t3275118058 * L_5 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = Transform_get_position_m2304215762(L_5, /*hidden argument*/NULL);
		Vector3_t2243707580  L_7 = __this->get_targetPos_6();
		Vector3_t2243707580  L_8 = Vector3_op_Subtraction_m4046047256(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t2243707580  L_9 = Vector3_Min_m1795126856(NULL /*static, unused*/, L_4, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		Transform_t3275118058 * L_10 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_11 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_12 = Transform_get_position_m2304215762(L_11, /*hidden argument*/NULL);
		Vector3_t2243707580  L_13 = V_0;
		Vector3_t2243707580  L_14 = Vector3_op_Addition_m394909128(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Transform_set_position_m2942701431(L_10, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardMove::speedMove()
extern "C"  void CardMove_speedMove_m2865995600 (CardMove_t1983516363 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CardMove_speedMove_m2865995600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m2304215762(L_0, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = __this->get_targetPos_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_3 = Vector3_op_Subtraction_m4046047256(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Vector3_t2243707580  L_4 = Vector3_get_normalized_m1057036856((&V_1), /*hidden argument*/NULL);
		Transform_t3275118058 * L_5 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = Transform_get_position_m2304215762(L_5, /*hidden argument*/NULL);
		Vector3_t2243707580  L_7 = __this->get_targetPos_6();
		Vector3_t2243707580  L_8 = Vector3_op_Subtraction_m4046047256(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t2243707580  L_9 = Vector3_Min_m1795126856(NULL /*static, unused*/, L_4, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		return;
	}
}
// System.Void CardMove::slowMove()
extern "C"  void CardMove_slowMove_m3242174180 (CardMove_t1983516363 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CardMove_slowMove_m3242174180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m2304215762(L_0, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = __this->get_targetPos_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_3 = Vector3_op_Subtraction_m4046047256(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Vector3_t2243707580  L_4 = Vector3_get_normalized_m1057036856((&V_1), /*hidden argument*/NULL);
		Transform_t3275118058 * L_5 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = Transform_get_position_m2304215762(L_5, /*hidden argument*/NULL);
		Vector3_t2243707580  L_7 = __this->get_targetPos_6();
		Vector3_t2243707580  L_8 = Vector3_op_Subtraction_m4046047256(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t2243707580  L_9 = Vector3_Min_m1795126856(NULL /*static, unused*/, L_4, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		return;
	}
}
// System.Boolean CardMove::move(UnityEngine.Vector3)
extern "C"  bool CardMove_move_m1619090864 (CardMove_t1983516363 * __this, Vector3_t2243707580  ___targetPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CardMove_move_m1619090864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector3_t2243707580  L_0 = ___targetPosition0;
		__this->set_targetPos_6(L_0);
		Vector3_t2243707580  L_1 = __this->get_targetPos_6();
		Transform_t3275118058 * L_2 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Transform_get_position_m2304215762(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_4 = Vector3_op_Subtraction_m4046047256(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector3_t2243707580  L_5 = Vector3_get_normalized_m1057036856((&V_0), /*hidden argument*/NULL);
		V_1 = L_5;
		Transform_t3275118058 * L_6 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_7 = L_6;
		Vector3_t2243707580  L_8 = Transform_get_position_m2304215762(L_7, /*hidden argument*/NULL);
		Vector3_t2243707580  L_9 = V_1;
		float L_10 = __this->get_speed_3();
		Vector3_t2243707580  L_11 = Vector3_op_Multiply_m2498445460(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		Vector3_t2243707580  L_12 = V_0;
		Vector3_t2243707580  L_13 = CardMove_Shortest_m1396033638(__this, L_11, L_12, /*hidden argument*/NULL);
		Vector3_t2243707580  L_14 = Vector3_op_Addition_m394909128(NULL /*static, unused*/, L_8, L_13, /*hidden argument*/NULL);
		Transform_set_position_m2942701431(L_7, L_14, /*hidden argument*/NULL);
		Transform_t3275118058 * L_15 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_16 = Transform_get_position_m2304215762(L_15, /*hidden argument*/NULL);
		Vector3_t2243707580  L_17 = __this->get_targetPos_6();
		bool L_18 = Vector3_op_Equality_m3786211684(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0073;
		}
	}
	{
		__this->set_state_2((int16_t)0);
		return (bool)1;
	}

IL_0073:
	{
		return (bool)0;
	}
}
// UnityEngine.Vector3 CardMove::Shortest(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  CardMove_Shortest_m1396033638 (CardMove_t1983516363 * __this, Vector3_t2243707580  ___VectorA0, Vector3_t2243707580  ___VectorB1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CardMove_Shortest_m1396033638_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = (&___VectorA0)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_1 = powf(L_0, (2.0f));
		float L_2 = (&___VectorA0)->get_y_2();
		float L_3 = powf(L_2, (2.0f));
		float L_4 = (&___VectorA0)->get_z_3();
		float L_5 = powf(L_4, (2.0f));
		V_0 = ((float)((float)((float)((float)L_1+(float)L_3))+(float)L_5));
		float L_6 = (&___VectorB1)->get_x_1();
		float L_7 = powf(L_6, (2.0f));
		float L_8 = (&___VectorB1)->get_y_2();
		float L_9 = powf(L_8, (2.0f));
		float L_10 = (&___VectorB1)->get_z_3();
		float L_11 = powf(L_10, (2.0f));
		V_1 = ((float)((float)((float)((float)L_7+(float)L_9))+(float)L_11));
		float L_12 = V_0;
		float L_13 = V_1;
		if ((!(((float)L_12) < ((float)L_13))))
		{
			goto IL_0075;
		}
	}
	{
		Vector3_t2243707580  L_14 = ___VectorA0;
		return L_14;
	}

IL_0075:
	{
		Vector3_t2243707580  L_15 = ___VectorB1;
		return L_15;
	}
}
// System.Void CardMove::AddToQueue(UnityEngine.Vector3)
extern "C"  void CardMove_AddToQueue_m3536793822 (CardMove_t1983516363 * __this, Vector3_t2243707580  ___targetPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CardMove_AddToQueue_m3536793822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameManagement_t3727304763 * L_0 = __this->get_gameManagement_7();
		Queue_1_t174063899 * L_1 = L_0->get_funcQueue_2();
		Vector3_t2243707580  L_2 = ___targetPosition0;
		intptr_t L_3 = (intptr_t)CardMove_move_m1619090864_RuntimeMethod_var;
		Func_2_t1519307235 * L_4 = (Func_2_t1519307235 *)il2cpp_codegen_object_new(Func_2_t1519307235_il2cpp_TypeInfo_var);
		Func_2__ctor_m1836800602(L_4, __this, L_3, /*hidden argument*/Func_2__ctor_m1836800602_RuntimeMethod_var);
		CallQueueObject_t354407064 * L_5 = (CallQueueObject_t354407064 *)il2cpp_codegen_object_new(CallQueueObject_t354407064_il2cpp_TypeInfo_var);
		CallQueueObject__ctor_m302175443(L_5, L_2, L_4, /*hidden argument*/NULL);
		Queue_1_Enqueue_m4252592219(L_1, L_5, /*hidden argument*/Queue_1_Enqueue_m4252592219_RuntimeMethod_var);
		return;
	}
}
// System.Void CardsInHand::.ctor()
extern "C"  void CardsInHand__ctor_m4271301872 (CardsInHand_t2163536961 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardsInHand::Start()
extern "C"  void CardsInHand_Start_m2642933832 (CardsInHand_t2163536961 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CardsInHand_Start_m2642933832_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1612828712 * L_0 = (List_1_t1612828712 *)il2cpp_codegen_object_new(List_1_t1612828712_il2cpp_TypeInfo_var);
		List_1__ctor_m347461442(L_0, /*hidden argument*/List_1__ctor_m347461442_RuntimeMethod_var);
		__this->set_cardRotations_5(L_0);
		List_1_t1612828712 * L_1 = (List_1_t1612828712 *)il2cpp_codegen_object_new(List_1_t1612828712_il2cpp_TypeInfo_var);
		List_1__ctor_m347461442(L_1, /*hidden argument*/List_1__ctor_m347461442_RuntimeMethod_var);
		__this->set_cardPositions_6(L_1);
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m2159020946(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_3 = GameObject_get_transform_m3490276752(L_2, /*hidden argument*/NULL);
		__this->set_rotationPoint_3(L_3);
		return;
	}
}
// System.Void CardsInHand::Update()
extern "C"  void CardsInHand_Update_m559986533 (CardsInHand_t2163536961 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CardsInHand_Update_m559986533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t2243707580  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		List_1_t1125654279 * L_0 = __this->get_Cards_2();
		int32_t L_1 = List_1_get_Count_m2074971713(L_0, /*hidden argument*/List_1_get_Count_m2074971713_RuntimeMethod_var);
		int32_t L_2 = __this->get_oldCardsCount_4();
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0183;
		}
	}
	{
		List_1_t1612828712 * L_3 = __this->get_cardRotations_5();
		int32_t L_4 = List_1_get_Count_m40859504(L_3, /*hidden argument*/List_1_get_Count_m40859504_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		List_1_t1612828712 * L_5 = __this->get_cardRotations_5();
		List_1_Clear_m3833859041(L_5, /*hidden argument*/List_1_Clear_m3833859041_RuntimeMethod_var);
	}

IL_0032:
	{
		List_1_t1612828712 * L_6 = __this->get_cardRotations_5();
		int32_t L_7 = List_1_get_Count_m40859504(L_6, /*hidden argument*/List_1_get_Count_m40859504_RuntimeMethod_var);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		List_1_t1612828712 * L_8 = __this->get_cardPositions_6();
		List_1_Clear_m3833859041(L_8, /*hidden argument*/List_1_Clear_m3833859041_RuntimeMethod_var);
	}

IL_004e:
	{
		V_0 = 0;
		goto IL_0161;
	}

IL_0055:
	{
		List_1_t1125654279 * L_9 = __this->get_Cards_2();
		int32_t L_10 = List_1_get_Count_m2074971713(L_9, /*hidden argument*/List_1_get_Count_m2074971713_RuntimeMethod_var);
		if ((((int32_t)L_10) <= ((int32_t)3)))
		{
			goto IL_008e;
		}
	}
	{
		List_1_t1125654279 * L_11 = __this->get_Cards_2();
		int32_t L_12 = List_1_get_Count_m2074971713(L_11, /*hidden argument*/List_1_get_Count_m2074971713_RuntimeMethod_var);
		int32_t L_13 = V_0;
		V_1 = ((float)((float)((float)((float)((float)((float)((-((float)((float)(((float)((float)L_12)))-(float)(1.0f)))))/(float)(2.0f)))+(float)(((float)((float)L_13)))))*(float)(20.0f)));
		goto IL_0094;
	}

IL_008e:
	{
		V_1 = (0.0f);
	}

IL_0094:
	{
		List_1_t1125654279 * L_14 = __this->get_Cards_2();
		int32_t L_15 = List_1_get_Count_m2074971713(L_14, /*hidden argument*/List_1_get_Count_m2074971713_RuntimeMethod_var);
		int32_t L_16 = V_0;
		V_2 = ((float)((float)((float)((float)((float)((float)((-((float)((float)(((float)((float)L_15)))-(float)(1.0f)))))/(float)(2.0f)))+(float)(((float)((float)L_16)))))*(float)(2.1f)));
		V_3 = (0.0f);
		List_1_t1612828712 * L_17 = __this->get_cardRotations_5();
		float L_18 = V_1;
		Vector3_t2243707580  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector3__ctor_m1555724485((&L_19), (0.0f), L_18, (0.0f), /*hidden argument*/NULL);
		List_1_Add_m1552520334(L_17, L_19, /*hidden argument*/List_1_Add_m1552520334_RuntimeMethod_var);
		List_1_t1612828712 * L_20 = __this->get_cardPositions_6();
		Transform_t3275118058 * L_21 = __this->get_rotationPoint_3();
		Vector3_t2243707580  L_22 = Transform_get_position_m2304215762(L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		float L_23 = (&V_4)->get_x_1();
		float L_24 = V_2;
		Transform_t3275118058 * L_25 = __this->get_rotationPoint_3();
		Vector3_t2243707580  L_26 = Transform_get_position_m2304215762(L_25, /*hidden argument*/NULL);
		V_5 = L_26;
		float L_27 = (&V_5)->get_z_3();
		float L_28 = V_3;
		Vector3_t2243707580  L_29;
		memset(&L_29, 0, sizeof(L_29));
		Vector3__ctor_m1555724485((&L_29), ((float)((float)L_23+(float)L_24)), (3.0f), ((float)((float)L_27+(float)L_28)), /*hidden argument*/NULL);
		List_1_Add_m1552520334(L_20, L_29, /*hidden argument*/List_1_Add_m1552520334_RuntimeMethod_var);
		List_1_t1125654279 * L_30 = __this->get_Cards_2();
		int32_t L_31 = V_0;
		GameObject_t1756533147 * L_32 = List_1_get_Item_m4260487298(L_30, L_31, /*hidden argument*/List_1_get_Item_m4260487298_RuntimeMethod_var);
		Transform_t3275118058 * L_33 = GameObject_get_transform_m3490276752(L_32, /*hidden argument*/NULL);
		List_1_t1612828712 * L_34 = __this->get_cardRotations_5();
		int32_t L_35 = V_0;
		Vector3_t2243707580  L_36 = List_1_get_Item_m4187614919(L_34, L_35, /*hidden argument*/List_1_get_Item_m4187614919_RuntimeMethod_var);
		Transform_set_eulerAngles_m1566259983(L_33, L_36, /*hidden argument*/NULL);
		List_1_t1125654279 * L_37 = __this->get_Cards_2();
		int32_t L_38 = V_0;
		GameObject_t1756533147 * L_39 = List_1_get_Item_m4260487298(L_37, L_38, /*hidden argument*/List_1_get_Item_m4260487298_RuntimeMethod_var);
		Transform_t3275118058 * L_40 = GameObject_get_transform_m3490276752(L_39, /*hidden argument*/NULL);
		List_1_t1612828712 * L_41 = __this->get_cardPositions_6();
		int32_t L_42 = V_0;
		Vector3_t2243707580  L_43 = List_1_get_Item_m4187614919(L_41, L_42, /*hidden argument*/List_1_get_Item_m4187614919_RuntimeMethod_var);
		Transform_set_position_m2942701431(L_40, L_43, /*hidden argument*/NULL);
		int32_t L_44 = V_0;
		V_0 = ((int32_t)((int32_t)L_44+(int32_t)1));
	}

IL_0161:
	{
		int32_t L_45 = V_0;
		List_1_t1125654279 * L_46 = __this->get_Cards_2();
		int32_t L_47 = List_1_get_Count_m2074971713(L_46, /*hidden argument*/List_1_get_Count_m2074971713_RuntimeMethod_var);
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_0055;
		}
	}
	{
		List_1_t1125654279 * L_48 = __this->get_Cards_2();
		int32_t L_49 = List_1_get_Count_m2074971713(L_48, /*hidden argument*/List_1_get_Count_m2074971713_RuntimeMethod_var);
		__this->set_oldCardsCount_4(L_49);
	}

IL_0183:
	{
		return;
	}
}
// UnityEngine.Vector3 CardsInHand::getCardRotations(System.String)
extern "C"  Vector3_t2243707580  CardsInHand_getCardRotations_m3281105525 (CardsInHand_t2163536961 * __this, String_t* ___cardName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CardsInHand_getCardRotations_m3281105525_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_002b;
	}

IL_0009:
	{
		String_t* L_0 = ___cardName0;
		List_1_t1125654279 * L_1 = __this->get_Cards_2();
		int32_t L_2 = V_1;
		GameObject_t1756533147 * L_3 = List_1_get_Item_m4260487298(L_1, L_2, /*hidden argument*/List_1_get_Item_m4260487298_RuntimeMethod_var);
		String_t* L_4 = Object_get_name_m3369637820(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_0, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_6 = V_1;
		V_0 = L_6;
	}

IL_0027:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002b:
	{
		int32_t L_8 = V_1;
		List_1_t1125654279 * L_9 = __this->get_Cards_2();
		int32_t L_10 = List_1_get_Count_m2074971713(L_9, /*hidden argument*/List_1_get_Count_m2074971713_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0009;
		}
	}
	{
		List_1_t1612828712 * L_11 = __this->get_cardRotations_5();
		int32_t L_12 = V_0;
		Vector3_t2243707580  L_13 = List_1_get_Item_m4187614919(L_11, L_12, /*hidden argument*/List_1_get_Item_m4187614919_RuntimeMethod_var);
		return L_13;
	}
}
// UnityEngine.Vector3 CardsInHand::getCardPositions(System.String)
extern "C"  Vector3_t2243707580  CardsInHand_getCardPositions_m920106648 (CardsInHand_t2163536961 * __this, String_t* ___cardName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CardsInHand_getCardPositions_m920106648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_002b;
	}

IL_0009:
	{
		String_t* L_0 = ___cardName0;
		List_1_t1125654279 * L_1 = __this->get_Cards_2();
		int32_t L_2 = V_1;
		GameObject_t1756533147 * L_3 = List_1_get_Item_m4260487298(L_1, L_2, /*hidden argument*/List_1_get_Item_m4260487298_RuntimeMethod_var);
		String_t* L_4 = Object_get_name_m3369637820(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_0, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_6 = V_1;
		V_0 = L_6;
	}

IL_0027:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002b:
	{
		int32_t L_8 = V_1;
		List_1_t1125654279 * L_9 = __this->get_Cards_2();
		int32_t L_10 = List_1_get_Count_m2074971713(L_9, /*hidden argument*/List_1_get_Count_m2074971713_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0009;
		}
	}
	{
		List_1_t1612828712 * L_11 = __this->get_cardPositions_6();
		int32_t L_12 = V_0;
		Vector3_t2243707580  L_13 = List_1_get_Item_m4187614919(L_11, L_12, /*hidden argument*/List_1_get_Item_m4187614919_RuntimeMethod_var);
		return L_13;
	}
}
// UnityEngine.Vector3 CardsInHand::getCardPositions(UnityEngine.GameObject)
extern "C"  Vector3_t2243707580  CardsInHand_getCardPositions_m611997348 (CardsInHand_t2163536961 * __this, GameObject_t1756533147 * ___card0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CardsInHand_getCardPositions_m611997348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0026;
	}

IL_0009:
	{
		GameObject_t1756533147 * L_0 = ___card0;
		List_1_t1125654279 * L_1 = __this->get_Cards_2();
		int32_t L_2 = V_1;
		GameObject_t1756533147 * L_3 = List_1_get_Item_m4260487298(L_1, L_2, /*hidden argument*/List_1_get_Item_m4260487298_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m2516226135(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_5 = V_1;
		V_0 = L_5;
	}

IL_0022:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_7 = V_1;
		List_1_t1125654279 * L_8 = __this->get_Cards_2();
		int32_t L_9 = List_1_get_Count_m2074971713(L_8, /*hidden argument*/List_1_get_Count_m2074971713_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0009;
		}
	}
	{
		List_1_t1612828712 * L_10 = __this->get_cardPositions_6();
		int32_t L_11 = V_0;
		Vector3_t2243707580  L_12 = List_1_get_Item_m4187614919(L_10, L_11, /*hidden argument*/List_1_get_Item_m4187614919_RuntimeMethod_var);
		return L_12;
	}
}
// System.Boolean CardsInHand::removeCard(UnityEngine.GameObject)
extern "C"  bool CardsInHand_removeCard_m1309036012 (CardsInHand_t2163536961 * __this, GameObject_t1756533147 * ___card0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CardsInHand_removeCard_m1309036012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1125654279 * L_0 = __this->get_Cards_2();
		GameObject_t1756533147 * L_1 = ___card0;
		bool L_2 = List_1_Contains_m2391088647(L_0, L_1, /*hidden argument*/List_1_Contains_m2391088647_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		List_1_t1125654279 * L_3 = __this->get_Cards_2();
		GameObject_t1756533147 * L_4 = ___card0;
		List_1_Remove_m59873180(L_3, L_4, /*hidden argument*/List_1_Remove_m59873180_RuntimeMethod_var);
		return (bool)1;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Boolean CardsInHand::ContainsCard(UnityEngine.GameObject)
extern "C"  bool CardsInHand_ContainsCard_m3590905015 (CardsInHand_t2163536961 * __this, GameObject_t1756533147 * ___card0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CardsInHand_ContainsCard_m3590905015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1125654279 * L_0 = __this->get_Cards_2();
		GameObject_t1756533147 * L_1 = ___card0;
		bool L_2 = List_1_Contains_m2391088647(L_0, L_1, /*hidden argument*/List_1_Contains_m2391088647_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void CardToMousePosition::.ctor()
extern "C"  void CardToMousePosition__ctor_m1741284916 (CardToMousePosition_t1367274461 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardToMousePosition::Start()
extern "C"  void CardToMousePosition_Start_m2439601508 (CardToMousePosition_t1367274461 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		__this->set_cardPosition_3(L_0);
		return;
	}
}
// System.Void CardToMousePosition::ChangePosition(UnityEngine.RaycastHit)
extern "C"  void CardToMousePosition_ChangePosition_m1390422380 (CardToMousePosition_t1367274461 * __this, RaycastHit_t87180320  ___hit0, const RuntimeMethod* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_follow_2();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		Vector3_t2243707580  L_1 = RaycastHit_get_point_m3350410423((&___hit0), /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t2243707580 * L_2 = (&V_0);
		float L_3 = L_2->get_y_2();
		L_2->set_y_2(((float)((float)L_3+(float)(3.0f))));
		Transform_t3275118058 * L_4 = __this->get_cardPosition_3();
		Vector3_t2243707580  L_5 = V_0;
		Transform_set_position_m2942701431(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void CardToMousePosition::FollowChange()
extern "C"  void CardToMousePosition_FollowChange_m2544732727 (CardToMousePosition_t1367274461 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_follow_2();
		__this->set_follow_2((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		return;
	}
}
// System.Void CreateRayCast::.ctor()
extern "C"  void CreateRayCast__ctor_m783242958 (CreateRayCast_t2883297021 * __this, const RuntimeMethod* method)
{
	{
		__this->set_maxRayDistance_11((200.0f));
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CreateRayCast::Start()
extern "C"  void CreateRayCast_Start_m301566190 (CreateRayCast_t2883297021 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CreateRayCast_Start_m301566190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		ManaAmount_t3227947453 * L_0 = Object_FindObjectOfType_TisManaAmount_t3227947453_m4151527298(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisManaAmount_t3227947453_m4151527298_RuntimeMethod_var);
		__this->set_manaAmount_4(L_0);
		CardsInHand_t2163536961 * L_1 = Object_FindObjectOfType_TisCardsInHand_t2163536961_m2373433372(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisCardsInHand_t2163536961_m2373433372_RuntimeMethod_var);
		__this->set_cardsHand_3(L_1);
		BattlefieldCardList_t3744834400 * L_2 = Object_FindObjectOfType_TisBattlefieldCardList_t3744834400_m2051785719(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisBattlefieldCardList_t3744834400_m2051785719_RuntimeMethod_var);
		__this->set_battlefieldList_6(L_2);
		StringU5BU5D_t1642385972* L_3 = ((StringU5BU5D_t1642385972*)SZArrayNew(StringU5BU5D_t1642385972_il2cpp_TypeInfo_var, (uint32_t)1));
		ArrayElementTypeCheck (L_3, _stringLiteral949723079);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral949723079);
		int32_t L_4 = LayerMask_GetMask_m4167990913(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->set_cardMask_8(L_4);
		StringU5BU5D_t1642385972* L_5 = ((StringU5BU5D_t1642385972*)SZArrayNew(StringU5BU5D_t1642385972_il2cpp_TypeInfo_var, (uint32_t)1));
		ArrayElementTypeCheck (L_5, _stringLiteral1214362012);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1214362012);
		int32_t L_6 = LayerMask_GetMask_m4167990913(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_playfieldMask_9(L_6);
		int32_t L_7 = __this->get_cardMask_8();
		__this->set_defaultMask_10(((~L_7)));
		return;
	}
}
// System.Void CreateRayCast::Update()
extern "C"  void CreateRayCast_Update_m3986874793 (CreateRayCast_t2883297021 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CreateRayCast_Update_m3986874793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2469606224  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RaycastHit_t87180320  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Camera_t189460977 * L_0 = Camera_get_main_m881971336(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_1 = Input_get_mousePosition_m2069200279(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t2469606224  L_2 = Camera_ScreenPointToRay_m3033403101(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t2243707580  L_3 = Ray_get_origin_m1676163607((&V_0), /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Ray_get_direction_m4136268940((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_5 = Vector3_op_Multiply_m2498445460(NULL /*static, unused*/, L_4, (100.0f), /*hidden argument*/NULL);
		Color_t2020392075  L_6 = Color_get_red_m3374418718(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_DrawRay_m999504727(NULL /*static, unused*/, L_3, L_5, L_6, /*hidden argument*/NULL);
		Ray_t2469606224  L_7 = V_0;
		float L_8 = __this->get_maxRayDistance_11();
		int32_t L_9 = __this->get_defaultMask_10();
		bool L_10 = Physics_Raycast_m2251823624(NULL /*static, unused*/, L_7, (&V_1), L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0134;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetMouseButtonDown_m2313448302(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0082;
		}
	}
	{
		Collider_t3497673348 * L_12 = RaycastHit_get_collider_m907576213((&V_1), /*hidden argument*/NULL);
		String_t* L_13 = Component_get_tag_m124558427(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_13, _stringLiteral988355092, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0082;
		}
	}
	{
		Collider_t3497673348 * L_15 = RaycastHit_get_collider_m907576213((&V_1), /*hidden argument*/NULL);
		TurnSwitch_t2695936653 * L_16 = Component_GetComponent_TisTurnSwitch_t2695936653_m3263754024(L_15, /*hidden argument*/Component_GetComponent_TisTurnSwitch_t2695936653_m3263754024_RuntimeMethod_var);
		TurnSwitch_ChangeTurn_m4170201191(L_16, /*hidden argument*/NULL);
	}

IL_0082:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_17 = Input_GetMouseButtonUp_m1218626729(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0134;
		}
	}
	{
		Collider_t3497673348 * L_18 = RaycastHit_get_collider_m907576213((&V_1), /*hidden argument*/NULL);
		String_t* L_19 = Object_get_name_m3369637820(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_op_Inequality_m304203149(NULL /*static, unused*/, L_19, _stringLiteral2535243812, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0134;
		}
	}
	{
		CardToMousePosition_t1367274461 * L_21 = __this->get_moveActions_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Inequality_m3768854296(NULL /*static, unused*/, L_21, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0134;
		}
	}
	{
		CardsInHand_t2163536961 * L_23 = __this->get_cardsHand_3();
		CardToMousePosition_t1367274461 * L_24 = __this->get_moveActions_2();
		GameObject_t1756533147 * L_25 = Component_get_gameObject_m2159020946(L_24, /*hidden argument*/NULL);
		bool L_26 = CardsInHand_ContainsCard_m3590905015(L_23, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0134;
		}
	}
	{
		CardToMousePosition_t1367274461 * L_27 = __this->get_moveActions_2();
		GameObject_t1756533147 * L_28 = Component_get_gameObject_m2159020946(L_27, /*hidden argument*/NULL);
		Transform_t3275118058 * L_29 = GameObject_get_transform_m3490276752(L_28, /*hidden argument*/NULL);
		CardsInHand_t2163536961 * L_30 = __this->get_cardsHand_3();
		CardToMousePosition_t1367274461 * L_31 = __this->get_moveActions_2();
		GameObject_t1756533147 * L_32 = Component_get_gameObject_m2159020946(L_31, /*hidden argument*/NULL);
		String_t* L_33 = Object_get_name_m3369637820(L_32, /*hidden argument*/NULL);
		Vector3_t2243707580  L_34 = CardsInHand_getCardPositions_m920106648(L_30, L_33, /*hidden argument*/NULL);
		Transform_set_position_m2942701431(L_29, L_34, /*hidden argument*/NULL);
		CardToMousePosition_t1367274461 * L_35 = __this->get_moveActions_2();
		GameObject_t1756533147 * L_36 = Component_get_gameObject_m2159020946(L_35, /*hidden argument*/NULL);
		Transform_t3275118058 * L_37 = GameObject_get_transform_m3490276752(L_36, /*hidden argument*/NULL);
		CardsInHand_t2163536961 * L_38 = __this->get_cardsHand_3();
		CardToMousePosition_t1367274461 * L_39 = __this->get_moveActions_2();
		GameObject_t1756533147 * L_40 = Component_get_gameObject_m2159020946(L_39, /*hidden argument*/NULL);
		String_t* L_41 = Object_get_name_m3369637820(L_40, /*hidden argument*/NULL);
		Vector3_t2243707580  L_42 = CardsInHand_getCardRotations_m3281105525(L_38, L_41, /*hidden argument*/NULL);
		Transform_set_eulerAngles_m1566259983(L_37, L_42, /*hidden argument*/NULL);
	}

IL_0134:
	{
		Ray_t2469606224  L_43 = V_0;
		float L_44 = __this->get_maxRayDistance_11();
		int32_t L_45 = __this->get_cardMask_8();
		bool L_46 = Physics_Raycast_m2251823624(NULL /*static, unused*/, L_43, (&V_1), L_44, L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_01cc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_47 = Input_GetMouseButtonDown_m2313448302(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_01cc;
		}
	}
	{
		Collider_t3497673348 * L_48 = RaycastHit_get_collider_m907576213((&V_1), /*hidden argument*/NULL);
		String_t* L_49 = Component_get_tag_m124558427(L_48, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_50 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_49, _stringLiteral762135924, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_01cc;
		}
	}
	{
		Collider_t3497673348 * L_51 = RaycastHit_get_collider_m907576213((&V_1), /*hidden argument*/NULL);
		CardToMousePosition_t1367274461 * L_52 = Component_GetComponent_TisCardToMousePosition_t1367274461_m4288503302(L_51, /*hidden argument*/Component_GetComponent_TisCardToMousePosition_t1367274461_m4288503302_RuntimeMethod_var);
		__this->set_moveActions_2(L_52);
		Collider_t3497673348 * L_53 = RaycastHit_get_collider_m907576213((&V_1), /*hidden argument*/NULL);
		CardData_t3381328046 * L_54 = Component_GetComponent_TisCardData_t3381328046_m761798127(L_53, /*hidden argument*/Component_GetComponent_TisCardData_t3381328046_m761798127_RuntimeMethod_var);
		__this->set_cardData_5(L_54);
		Collider_t3497673348 * L_55 = RaycastHit_get_collider_m907576213((&V_1), /*hidden argument*/NULL);
		Attack_t3423014084 * L_56 = Component_GetComponent_TisAttack_t3423014084_m1256133895(L_55, /*hidden argument*/Component_GetComponent_TisAttack_t3423014084_m1256133895_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_57 = Object_op_Inequality_m3768854296(NULL /*static, unused*/, L_56, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_01c5;
		}
	}
	{
		Collider_t3497673348 * L_58 = RaycastHit_get_collider_m907576213((&V_1), /*hidden argument*/NULL);
		Attack_t3423014084 * L_59 = Component_GetComponent_TisAttack_t3423014084_m1256133895(L_58, /*hidden argument*/Component_GetComponent_TisAttack_t3423014084_m1256133895_RuntimeMethod_var);
		__this->set_attack_7(L_59);
		goto IL_01cc;
	}

IL_01c5:
	{
		__this->set_attack_7((Attack_t3423014084 *)NULL);
	}

IL_01cc:
	{
		Ray_t2469606224  L_60 = V_0;
		float L_61 = __this->get_maxRayDistance_11();
		int32_t L_62 = __this->get_playfieldMask_9();
		bool L_63 = Physics_Raycast_m2251823624(NULL /*static, unused*/, L_60, (&V_1), L_61, L_62, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_02c9;
		}
	}
	{
		CardToMousePosition_t1367274461 * L_64 = __this->get_moveActions_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_65 = Object_op_Inequality_m3768854296(NULL /*static, unused*/, L_64, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_02c9;
		}
	}
	{
		CardData_t3381328046 * L_66 = __this->get_cardData_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_67 = Object_op_Inequality_m3768854296(NULL /*static, unused*/, L_66, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_02c9;
		}
	}
	{
		CardData_t3381328046 * L_68 = __this->get_cardData_5();
		int32_t L_69 = CardData_GetManaCost_m304119075(L_68, /*hidden argument*/NULL);
		ManaAmount_t3227947453 * L_70 = __this->get_manaAmount_4();
		int32_t L_71 = ManaAmount_GetCurrentMana_m2330157972(L_70, /*hidden argument*/NULL);
		if ((((int32_t)L_69) > ((int32_t)L_71)))
		{
			goto IL_02c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_72 = Input_GetMouseButtonDown_m2313448302(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_023d;
		}
	}
	{
		CardToMousePosition_t1367274461 * L_73 = __this->get_moveActions_2();
		CardToMousePosition_FollowChange_m2544732727(L_73, /*hidden argument*/NULL);
		goto IL_02c9;
	}

IL_023d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_74 = Input_GetMouseButtonUp_m1218626729(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_74)
		{
			goto IL_02b2;
		}
	}
	{
		CardToMousePosition_t1367274461 * L_75 = __this->get_moveActions_2();
		CardToMousePosition_FollowChange_m2544732727(L_75, /*hidden argument*/NULL);
		CardsInHand_t2163536961 * L_76 = __this->get_cardsHand_3();
		CardToMousePosition_t1367274461 * L_77 = __this->get_moveActions_2();
		GameObject_t1756533147 * L_78 = Component_get_gameObject_m2159020946(L_77, /*hidden argument*/NULL);
		bool L_79 = CardsInHand_removeCard_m1309036012(L_76, L_78, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_0289;
		}
	}
	{
		BattlefieldCardList_t3744834400 * L_80 = __this->get_battlefieldList_6();
		CardToMousePosition_t1367274461 * L_81 = __this->get_moveActions_2();
		GameObject_t1756533147 * L_82 = Component_get_gameObject_m2159020946(L_81, /*hidden argument*/NULL);
		BattlefieldCardList_AddToArray_m600484178(L_80, L_82, /*hidden argument*/NULL);
		goto IL_029f;
	}

IL_0289:
	{
		Attack_t3423014084 * L_83 = __this->get_attack_7();
		Attack_CheckHit_m810787838(L_83, /*hidden argument*/NULL);
		BattlefieldCardList_t3744834400 * L_84 = __this->get_battlefieldList_6();
		BattlefieldCardList_CardOrderner_m2537663836(L_84, /*hidden argument*/NULL);
	}

IL_029f:
	{
		__this->set_moveActions_2((CardToMousePosition_t1367274461 *)NULL);
		__this->set_cardData_5((CardData_t3381328046 *)NULL);
		goto IL_02c9;
	}

IL_02b2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_85 = Input_GetMouseButton_m1307856634(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_85)
		{
			goto IL_02c9;
		}
	}
	{
		CardToMousePosition_t1367274461 * L_86 = __this->get_moveActions_2();
		RaycastHit_t87180320  L_87 = V_1;
		CardToMousePosition_ChangePosition_m1390422380(L_86, L_87, /*hidden argument*/NULL);
	}

IL_02c9:
	{
		return;
	}
}
// System.Void DamageMessage::.ctor()
extern "C"  void DamageMessage__ctor_m1555520775 (DamageMessage_t2793721680 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DamageMessage::Start()
extern "C"  void DamageMessage_Start_m4077420651 (DamageMessage_t2793721680 * __this, const RuntimeMethod* method)
{
	{
		__this->set_life_2(0);
		__this->set_lifeSpan_3(((int32_t)20));
		return;
	}
}
// System.Void DamageMessage::Update()
extern "C"  void DamageMessage_Update_m2535980338 (DamageMessage_t2793721680 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DamageMessage_Update_m2535980338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = __this->get_lifeSpan_3();
		V_0 = ((float)((float)(1.0f)/(float)(((float)((float)L_0)))));
		int32_t L_1 = __this->get_life_2();
		__this->set_life_2(((int32_t)((int32_t)L_1+(int32_t)1)));
		Transform_t3275118058 * L_2 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_3 = L_2;
		Vector3_t2243707580  L_4 = Transform_get_localScale_m46214814(L_3, /*hidden argument*/NULL);
		float L_5 = V_0;
		float L_6 = V_0;
		float L_7 = V_0;
		Vector3_t2243707580  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m1555724485((&L_8), L_5, L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_9 = Vector3_op_Addition_m394909128(NULL /*static, unused*/, L_4, L_8, /*hidden argument*/NULL);
		Transform_set_localScale_m1442831667(L_3, L_9, /*hidden argument*/NULL);
		int32_t L_10 = __this->get_life_2();
		int32_t L_11 = __this->get_lifeSpan_3();
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_0056;
		}
	}
	{
		GameObject_t1756533147 * L_12 = Component_get_gameObject_m2159020946(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m3959286051(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void GameManagement::.ctor()
extern "C"  void GameManagement__ctor_m383039640 (GameManagement_t3727304763 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManagement__ctor_m383039640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t174063899 * L_0 = (Queue_1_t174063899 *)il2cpp_codegen_object_new(Queue_1_t174063899_il2cpp_TypeInfo_var);
		Queue_1__ctor_m1969511742(L_0, /*hidden argument*/Queue_1__ctor_m1969511742_RuntimeMethod_var);
		__this->set_funcQueue_2(L_0);
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManagement::Start()
extern "C"  void GameManagement_Start_m1511583772 (GameManagement_t3727304763 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void GameManagement::Update()
extern "C"  void GameManagement_Update_m278449279 (GameManagement_t3727304763 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManagement_Update_m278449279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t174063899 * L_0 = __this->get_funcQueue_2();
		int32_t L_1 = Queue_1_get_Count_m2035996976(L_0, /*hidden argument*/Queue_1_get_Count_m2035996976_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		Queue_1_t174063899 * L_2 = __this->get_funcQueue_2();
		CallQueueObject_t354407064 * L_3 = Queue_1_Peek_m2536096417(L_2, /*hidden argument*/Queue_1_Peek_m2536096417_RuntimeMethod_var);
		bool L_4 = CallQueueObject_Check_m1284673283(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		Queue_1_t174063899 * L_5 = __this->get_funcQueue_2();
		Queue_1_Dequeue_m3710529508(L_5, /*hidden argument*/Queue_1_Dequeue_m3710529508_RuntimeMethod_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Void Health::.ctor()
extern "C"  void Health__ctor_m651162963 (Health_t2683907638 * __this, const RuntimeMethod* method)
{
	{
		__this->set_health_2(((int32_t)30));
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Health::LoseHealth(System.Int32)
extern "C"  void Health_LoseHealth_m2753088799 (Health_t2683907638 * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_health_2();
		int32_t L_1 = ___damage0;
		__this->set_health_2(((int32_t)((int32_t)L_0-(int32_t)L_1)));
		return;
	}
}
// System.Void ManaAmount::.ctor()
extern "C"  void ManaAmount__ctor_m1297631438 (ManaAmount_t3227947453 * __this, const RuntimeMethod* method)
{
	{
		__this->set_currentMana_2(1);
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ManaAmount::GetCurrentMana()
extern "C"  int32_t ManaAmount_GetCurrentMana_m2330157972 (ManaAmount_t3227947453 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_currentMana_2();
		return L_0;
	}
}
// System.Void ManaAmount::ChangeCurrentMana(System.Int32)
extern "C"  void ManaAmount_ChangeCurrentMana_m3278525705 (ManaAmount_t3227947453 * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_currentMana_2();
		int32_t L_1 = ___amount0;
		__this->set_currentMana_2(((int32_t)((int32_t)L_0+(int32_t)L_1)));
		return;
	}
}
// System.Void TurnSwitch::.ctor()
extern "C"  void TurnSwitch__ctor_m665759206 (TurnSwitch_t2695936653 * __this, const RuntimeMethod* method)
{
	{
		__this->set_myTurn_2((bool)1);
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TurnSwitch::ChangeTurn()
extern "C"  void TurnSwitch_ChangeTurn_m4170201191 (TurnSwitch_t2695936653 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnSwitch_ChangeTurn_m4170201191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_myTurn_2();
		__this->set_myTurn_2((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		bool L_1 = __this->get_myTurn_2();
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m2159020946(__this, /*hidden argument*/NULL);
		MeshRenderer_t1268241104 * L_3 = GameObject_GetComponent_TisMeshRenderer_t1268241104_m3528968632(L_2, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t1268241104_m3528968632_RuntimeMethod_var);
		Material_t193706927 * L_4 = Renderer_get_material_m3944461198(L_3, /*hidden argument*/NULL);
		Color_t2020392075  L_5 = Color_get_red_m3374418718(NULL /*static, unused*/, /*hidden argument*/NULL);
		Material_set_color_m1702887239(L_4, L_5, /*hidden argument*/NULL);
		goto IL_0053;
	}

IL_0039:
	{
		GameObject_t1756533147 * L_6 = Component_get_gameObject_m2159020946(__this, /*hidden argument*/NULL);
		MeshRenderer_t1268241104 * L_7 = GameObject_GetComponent_TisMeshRenderer_t1268241104_m3528968632(L_6, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t1268241104_m3528968632_RuntimeMethod_var);
		Material_t193706927 * L_8 = Renderer_get_material_m3944461198(L_7, /*hidden argument*/NULL);
		Color_t2020392075  L_9 = Color_get_blue_m2634563453(NULL /*static, unused*/, /*hidden argument*/NULL);
		Material_set_color_m1702887239(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
