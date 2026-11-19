// Lean compiler output
// Module: CJson.Api
// Imports: public import Init public meta import Init public import CJson.Basic public import CJson.Number
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_uint8_add(uint8_t, uint8_t);
uint8_t lp_leancjson_List_beq___at___00CJson_JSON_beq_spec__0(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lp_leancjson_CJson_instDecidableEqNum_decEq(lean_object*, lean_object*);
lean_object* lp_leancjson_CJson_JSON_depth(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_eraseIdxTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_leancjson_CJson_Num_ofInt(lean_object*);
lean_object* lp_leancjson_CJson_bytes(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_setTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_toLower(uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_toLower___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_mapTR_loop___at___00CJson_keyEq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_keyEq(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_keyEq___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_replaceFirst___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_replaceFirst(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_eraseFirst___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_eraseFirst(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_isNull(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_isNull___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_isBool(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_isBool___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_isTrue(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_isTrue___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_isFalse(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_isFalse___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_isNumber(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_isNumber___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_isString(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_isString___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_isArray(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_isArray___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_isObject(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_isObject___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_ofInt(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_ofInt___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_str(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_getStringValue(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_getNumberValue(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_arraySize(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_arraySize___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_getArrayItem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_getArrayItem___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_find_x3f___at___00CJson_JSON_getObjectItem_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_find_x3f___at___00CJson_JSON_getObjectItem_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_getObjectItem(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_getObjectItem___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_hasObjectItem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_hasObjectItem___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_addItemToArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_addItemToObject(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_leancjson_CJson_JSON_detachItemFromArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_leancjson_CJson_JSON_detachItemFromArray___closed__0 = (const lean_object*)&lp_leancjson_CJson_JSON_detachItemFromArray___closed__0_value;
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_detachItemFromArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_deleteItemFromArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_insertItemInArray(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_replaceItemInArray(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_detachItemFromObject___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_detachItemFromObject___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_detachItemFromObject(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_detachItemFromObject___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_deleteItemFromObject(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_deleteItemFromObject___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_replaceItemInObject(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_replaceItemInObject___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_leancjson_CJson_JSON_duplicate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_JSON_duplicate___closed__0 = (const lean_object*)&lp_leancjson_CJson_JSON_duplicate___closed__0_value;
static const lean_ctor_object lp_leancjson_CJson_JSON_duplicate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_JSON_duplicate___closed__1 = (const lean_object*)&lp_leancjson_CJson_JSON_duplicate___closed__1_value;
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_duplicate(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_duplicate___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_all2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_all2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_all2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_all2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_lookup(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_lookup___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_compareF___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_compareF(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_List_all___at___00CJson_JSON_compareF_spec__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_all___at___00CJson_JSON_compareF_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_compare(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_compare___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_toLower(uint8_t v_c_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; uint8_t v___x_4_; 
v___x_2_ = lean_unsigned_to_nat(65u);
v___x_3_ = lean_uint8_to_nat(v_c_1_);
v___x_4_ = lean_nat_dec_le(v___x_2_, v___x_3_);
if (v___x_4_ == 0)
{
return v_c_1_;
}
else
{
lean_object* v___x_5_; uint8_t v___x_6_; 
v___x_5_ = lean_unsigned_to_nat(90u);
v___x_6_ = lean_nat_dec_le(v___x_3_, v___x_5_);
if (v___x_6_ == 0)
{
return v_c_1_;
}
else
{
uint8_t v___x_7_; uint8_t v___x_8_; 
v___x_7_ = 32;
v___x_8_ = lean_uint8_add(v_c_1_, v___x_7_);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_toLower___boxed(lean_object* v_c_9_){
_start:
{
uint8_t v_c_boxed_10_; uint8_t v_res_11_; lean_object* v_r_12_; 
v_c_boxed_10_ = lean_unbox(v_c_9_);
v_res_11_ = lp_leancjson_CJson_toLower(v_c_boxed_10_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_mapTR_loop___at___00CJson_keyEq_spec__0(lean_object* v_a_13_, lean_object* v_a_14_){
_start:
{
if (lean_obj_tag(v_a_13_) == 0)
{
lean_object* v___x_15_; 
v___x_15_ = l_List_reverse___redArg(v_a_14_);
return v___x_15_;
}
else
{
lean_object* v_head_16_; lean_object* v_tail_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_28_; 
v_head_16_ = lean_ctor_get(v_a_13_, 0);
v_tail_17_ = lean_ctor_get(v_a_13_, 1);
v_isSharedCheck_28_ = !lean_is_exclusive(v_a_13_);
if (v_isSharedCheck_28_ == 0)
{
v___x_19_ = v_a_13_;
v_isShared_20_ = v_isSharedCheck_28_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_tail_17_);
lean_inc(v_head_16_);
lean_dec(v_a_13_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_28_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
uint8_t v___x_21_; uint8_t v___x_22_; lean_object* v___x_23_; lean_object* v___x_25_; 
v___x_21_ = lean_unbox(v_head_16_);
lean_dec(v_head_16_);
v___x_22_ = lp_leancjson_CJson_toLower(v___x_21_);
v___x_23_ = lean_box(v___x_22_);
if (v_isShared_20_ == 0)
{
lean_ctor_set(v___x_19_, 1, v_a_14_);
lean_ctor_set(v___x_19_, 0, v___x_23_);
v___x_25_ = v___x_19_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v___x_23_);
lean_ctor_set(v_reuseFailAlloc_27_, 1, v_a_14_);
v___x_25_ = v_reuseFailAlloc_27_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
v_a_13_ = v_tail_17_;
v_a_14_ = v___x_25_;
goto _start;
}
}
}
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_keyEq(uint8_t v_cs_29_, lean_object* v_a_30_, lean_object* v_b_31_){
_start:
{
if (v_cs_29_ == 0)
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; uint8_t v___x_35_; 
v___x_32_ = lean_box(0);
v___x_33_ = lp_leancjson_List_mapTR_loop___at___00CJson_keyEq_spec__0(v_a_30_, v___x_32_);
v___x_34_ = lp_leancjson_List_mapTR_loop___at___00CJson_keyEq_spec__0(v_b_31_, v___x_32_);
v___x_35_ = lp_leancjson_List_beq___at___00CJson_JSON_beq_spec__0(v___x_33_, v___x_34_);
lean_dec(v___x_34_);
lean_dec(v___x_33_);
return v___x_35_;
}
else
{
uint8_t v___x_36_; 
v___x_36_ = lp_leancjson_List_beq___at___00CJson_JSON_beq_spec__0(v_a_30_, v_b_31_);
lean_dec(v_b_31_);
lean_dec(v_a_30_);
return v___x_36_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_keyEq___boxed(lean_object* v_cs_37_, lean_object* v_a_38_, lean_object* v_b_39_){
_start:
{
uint8_t v_cs_boxed_40_; uint8_t v_res_41_; lean_object* v_r_42_; 
v_cs_boxed_40_ = lean_unbox(v_cs_37_);
v_res_41_ = lp_leancjson_CJson_keyEq(v_cs_boxed_40_, v_a_38_, v_b_39_);
v_r_42_ = lean_box(v_res_41_);
return v_r_42_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_replaceFirst___redArg(lean_object* v_p_43_, lean_object* v_y_44_, lean_object* v_x_45_){
_start:
{
if (lean_obj_tag(v_x_45_) == 0)
{
lean_object* v___x_46_; 
lean_dec(v_y_44_);
lean_dec_ref(v_p_43_);
v___x_46_ = lean_box(0);
return v___x_46_;
}
else
{
lean_object* v_head_47_; lean_object* v_tail_48_; lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_70_; 
v_head_47_ = lean_ctor_get(v_x_45_, 0);
v_tail_48_ = lean_ctor_get(v_x_45_, 1);
v_isSharedCheck_70_ = !lean_is_exclusive(v_x_45_);
if (v_isSharedCheck_70_ == 0)
{
v___x_50_ = v_x_45_;
v_isShared_51_ = v_isSharedCheck_70_;
goto v_resetjp_49_;
}
else
{
lean_inc(v_tail_48_);
lean_inc(v_head_47_);
lean_dec(v_x_45_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_70_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
lean_object* v___x_52_; uint8_t v___x_53_; 
lean_inc_ref(v_p_43_);
lean_inc(v_head_47_);
v___x_52_ = lean_apply_1(v_p_43_, v_head_47_);
v___x_53_ = lean_unbox(v___x_52_);
if (v___x_53_ == 0)
{
lean_object* v___x_54_; 
v___x_54_ = lp_leancjson_CJson_replaceFirst___redArg(v_p_43_, v_y_44_, v_tail_48_);
if (lean_obj_tag(v___x_54_) == 0)
{
lean_del_object(v___x_50_);
lean_dec(v_head_47_);
return v___x_54_;
}
else
{
lean_object* v_val_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_65_; 
v_val_55_ = lean_ctor_get(v___x_54_, 0);
v_isSharedCheck_65_ = !lean_is_exclusive(v___x_54_);
if (v_isSharedCheck_65_ == 0)
{
v___x_57_ = v___x_54_;
v_isShared_58_ = v_isSharedCheck_65_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_val_55_);
lean_dec(v___x_54_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_65_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_60_; 
if (v_isShared_51_ == 0)
{
lean_ctor_set(v___x_50_, 1, v_val_55_);
v___x_60_ = v___x_50_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v_head_47_);
lean_ctor_set(v_reuseFailAlloc_64_, 1, v_val_55_);
v___x_60_ = v_reuseFailAlloc_64_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
lean_object* v___x_62_; 
if (v_isShared_58_ == 0)
{
lean_ctor_set(v___x_57_, 0, v___x_60_);
v___x_62_ = v___x_57_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v___x_60_);
v___x_62_ = v_reuseFailAlloc_63_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
return v___x_62_;
}
}
}
}
}
else
{
lean_object* v___x_67_; 
lean_dec(v_head_47_);
lean_dec_ref(v_p_43_);
if (v_isShared_51_ == 0)
{
lean_ctor_set(v___x_50_, 0, v_y_44_);
v___x_67_ = v___x_50_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_69_, 0, v_y_44_);
lean_ctor_set(v_reuseFailAlloc_69_, 1, v_tail_48_);
v___x_67_ = v_reuseFailAlloc_69_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
lean_object* v___x_68_; 
v___x_68_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
return v___x_68_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_replaceFirst(lean_object* v_00_u03b1_71_, lean_object* v_p_72_, lean_object* v_y_73_, lean_object* v_x_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = lp_leancjson_CJson_replaceFirst___redArg(v_p_72_, v_y_73_, v_x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_eraseFirst___redArg(lean_object* v_p_76_, lean_object* v_x_77_){
_start:
{
if (lean_obj_tag(v_x_77_) == 0)
{
lean_object* v___x_78_; 
lean_dec_ref(v_p_76_);
v___x_78_ = lean_box(0);
return v___x_78_;
}
else
{
lean_object* v_head_79_; lean_object* v_tail_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_109_; 
v_head_79_ = lean_ctor_get(v_x_77_, 0);
v_tail_80_ = lean_ctor_get(v_x_77_, 1);
v_isSharedCheck_109_ = !lean_is_exclusive(v_x_77_);
if (v_isSharedCheck_109_ == 0)
{
v___x_82_ = v_x_77_;
v_isShared_83_ = v_isSharedCheck_109_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_tail_80_);
lean_inc(v_head_79_);
lean_dec(v_x_77_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_109_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_84_; uint8_t v___x_85_; 
lean_inc_ref(v_p_76_);
lean_inc(v_head_79_);
v___x_84_ = lean_apply_1(v_p_76_, v_head_79_);
v___x_85_ = lean_unbox(v___x_84_);
if (v___x_85_ == 0)
{
lean_object* v___x_86_; 
v___x_86_ = lp_leancjson_CJson_eraseFirst___redArg(v_p_76_, v_tail_80_);
if (lean_obj_tag(v___x_86_) == 0)
{
lean_del_object(v___x_82_);
lean_dec(v_head_79_);
return v___x_86_;
}
else
{
lean_object* v_val_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_106_; 
v_val_87_ = lean_ctor_get(v___x_86_, 0);
v_isSharedCheck_106_ = !lean_is_exclusive(v___x_86_);
if (v_isSharedCheck_106_ == 0)
{
v___x_89_ = v___x_86_;
v_isShared_90_ = v_isSharedCheck_106_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_val_87_);
lean_dec(v___x_86_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_106_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v_fst_91_; lean_object* v_snd_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_105_; 
v_fst_91_ = lean_ctor_get(v_val_87_, 0);
v_snd_92_ = lean_ctor_get(v_val_87_, 1);
v_isSharedCheck_105_ = !lean_is_exclusive(v_val_87_);
if (v_isSharedCheck_105_ == 0)
{
v___x_94_ = v_val_87_;
v_isShared_95_ = v_isSharedCheck_105_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_snd_92_);
lean_inc(v_fst_91_);
lean_dec(v_val_87_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_105_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 1, v_snd_92_);
v___x_97_ = v___x_82_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v_head_79_);
lean_ctor_set(v_reuseFailAlloc_104_, 1, v_snd_92_);
v___x_97_ = v_reuseFailAlloc_104_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
lean_object* v___x_99_; 
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 1, v___x_97_);
v___x_99_ = v___x_94_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v_fst_91_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v___x_97_);
v___x_99_ = v_reuseFailAlloc_103_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
lean_object* v___x_101_; 
if (v_isShared_90_ == 0)
{
lean_ctor_set(v___x_89_, 0, v___x_99_);
v___x_101_ = v___x_89_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v___x_99_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_107_; lean_object* v___x_108_; 
lean_del_object(v___x_82_);
lean_dec_ref(v_p_76_);
v___x_107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_107_, 0, v_head_79_);
lean_ctor_set(v___x_107_, 1, v_tail_80_);
v___x_108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
return v___x_108_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_eraseFirst(lean_object* v_00_u03b1_110_, lean_object* v_p_111_, lean_object* v_x_112_){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = lp_leancjson_CJson_eraseFirst___redArg(v_p_111_, v_x_112_);
return v___x_113_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_isNull(lean_object* v_x_114_){
_start:
{
if (lean_obj_tag(v_x_114_) == 0)
{
uint8_t v___x_115_; 
v___x_115_ = 1;
return v___x_115_;
}
else
{
uint8_t v___x_116_; 
v___x_116_ = 0;
return v___x_116_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_isNull___boxed(lean_object* v_x_117_){
_start:
{
uint8_t v_res_118_; lean_object* v_r_119_; 
v_res_118_ = lp_leancjson_CJson_JSON_isNull(v_x_117_);
lean_dec(v_x_117_);
v_r_119_ = lean_box(v_res_118_);
return v_r_119_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_isBool(lean_object* v_x_120_){
_start:
{
if (lean_obj_tag(v_x_120_) == 1)
{
uint8_t v___x_121_; 
v___x_121_ = 1;
return v___x_121_;
}
else
{
uint8_t v___x_122_; 
v___x_122_ = 0;
return v___x_122_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_isBool___boxed(lean_object* v_x_123_){
_start:
{
uint8_t v_res_124_; lean_object* v_r_125_; 
v_res_124_ = lp_leancjson_CJson_JSON_isBool(v_x_123_);
lean_dec(v_x_123_);
v_r_125_ = lean_box(v_res_124_);
return v_r_125_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_isTrue(lean_object* v_x_126_){
_start:
{
if (lean_obj_tag(v_x_126_) == 1)
{
uint8_t v_b_127_; 
v_b_127_ = lean_ctor_get_uint8(v_x_126_, 0);
if (v_b_127_ == 1)
{
return v_b_127_;
}
else
{
uint8_t v___x_128_; 
v___x_128_ = 0;
return v___x_128_;
}
}
else
{
uint8_t v___x_129_; 
v___x_129_ = 0;
return v___x_129_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_isTrue___boxed(lean_object* v_x_130_){
_start:
{
uint8_t v_res_131_; lean_object* v_r_132_; 
v_res_131_ = lp_leancjson_CJson_JSON_isTrue(v_x_130_);
lean_dec(v_x_130_);
v_r_132_ = lean_box(v_res_131_);
return v_r_132_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_isFalse(lean_object* v_x_133_){
_start:
{
if (lean_obj_tag(v_x_133_) == 1)
{
uint8_t v_b_134_; 
v_b_134_ = lean_ctor_get_uint8(v_x_133_, 0);
if (v_b_134_ == 0)
{
uint8_t v___x_135_; 
v___x_135_ = 1;
return v___x_135_;
}
else
{
uint8_t v___x_136_; 
v___x_136_ = 0;
return v___x_136_;
}
}
else
{
uint8_t v___x_137_; 
v___x_137_ = 0;
return v___x_137_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_isFalse___boxed(lean_object* v_x_138_){
_start:
{
uint8_t v_res_139_; lean_object* v_r_140_; 
v_res_139_ = lp_leancjson_CJson_JSON_isFalse(v_x_138_);
lean_dec(v_x_138_);
v_r_140_ = lean_box(v_res_139_);
return v_r_140_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_isNumber(lean_object* v_x_141_){
_start:
{
if (lean_obj_tag(v_x_141_) == 2)
{
uint8_t v___x_142_; 
v___x_142_ = 1;
return v___x_142_;
}
else
{
uint8_t v___x_143_; 
v___x_143_ = 0;
return v___x_143_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_isNumber___boxed(lean_object* v_x_144_){
_start:
{
uint8_t v_res_145_; lean_object* v_r_146_; 
v_res_145_ = lp_leancjson_CJson_JSON_isNumber(v_x_144_);
lean_dec(v_x_144_);
v_r_146_ = lean_box(v_res_145_);
return v_r_146_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_isString(lean_object* v_x_147_){
_start:
{
if (lean_obj_tag(v_x_147_) == 3)
{
uint8_t v___x_148_; 
v___x_148_ = 1;
return v___x_148_;
}
else
{
uint8_t v___x_149_; 
v___x_149_ = 0;
return v___x_149_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_isString___boxed(lean_object* v_x_150_){
_start:
{
uint8_t v_res_151_; lean_object* v_r_152_; 
v_res_151_ = lp_leancjson_CJson_JSON_isString(v_x_150_);
lean_dec(v_x_150_);
v_r_152_ = lean_box(v_res_151_);
return v_r_152_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_isArray(lean_object* v_x_153_){
_start:
{
if (lean_obj_tag(v_x_153_) == 4)
{
uint8_t v___x_154_; 
v___x_154_ = 1;
return v___x_154_;
}
else
{
uint8_t v___x_155_; 
v___x_155_ = 0;
return v___x_155_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_isArray___boxed(lean_object* v_x_156_){
_start:
{
uint8_t v_res_157_; lean_object* v_r_158_; 
v_res_157_ = lp_leancjson_CJson_JSON_isArray(v_x_156_);
lean_dec(v_x_156_);
v_r_158_ = lean_box(v_res_157_);
return v_r_158_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_isObject(lean_object* v_x_159_){
_start:
{
if (lean_obj_tag(v_x_159_) == 5)
{
uint8_t v___x_160_; 
v___x_160_ = 1;
return v___x_160_;
}
else
{
uint8_t v___x_161_; 
v___x_161_ = 0;
return v___x_161_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_isObject___boxed(lean_object* v_x_162_){
_start:
{
uint8_t v_res_163_; lean_object* v_r_164_; 
v_res_163_ = lp_leancjson_CJson_JSON_isObject(v_x_162_);
lean_dec(v_x_162_);
v_r_164_ = lean_box(v_res_163_);
return v_r_164_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_ofInt(lean_object* v_i_165_){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = lp_leancjson_CJson_Num_ofInt(v_i_165_);
v___x_167_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_ofInt___boxed(lean_object* v_i_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = lp_leancjson_CJson_JSON_ofInt(v_i_168_);
lean_dec(v_i_168_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_str(lean_object* v_s_170_){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = lp_leancjson_CJson_bytes(v_s_170_);
v___x_172_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_getStringValue(lean_object* v_x_173_){
_start:
{
if (lean_obj_tag(v_x_173_) == 3)
{
lean_object* v_s_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_181_; 
v_s_174_ = lean_ctor_get(v_x_173_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v_x_173_);
if (v_isSharedCheck_181_ == 0)
{
v___x_176_ = v_x_173_;
v_isShared_177_ = v_isSharedCheck_181_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_s_174_);
lean_dec(v_x_173_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_181_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___x_179_; 
if (v_isShared_177_ == 0)
{
lean_ctor_set_tag(v___x_176_, 1);
v___x_179_ = v___x_176_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v_s_174_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
return v___x_179_;
}
}
}
else
{
lean_object* v___x_182_; 
lean_dec(v_x_173_);
v___x_182_ = lean_box(0);
return v___x_182_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_getNumberValue(lean_object* v_x_183_){
_start:
{
if (lean_obj_tag(v_x_183_) == 2)
{
lean_object* v_n_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
v_n_184_ = lean_ctor_get(v_x_183_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v_x_183_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v_x_183_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_n_184_);
lean_dec(v_x_183_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
lean_ctor_set_tag(v___x_186_, 1);
v___x_189_ = v___x_186_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_n_184_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
else
{
lean_object* v___x_192_; 
lean_dec(v_x_183_);
v___x_192_ = lean_box(0);
return v___x_192_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_arraySize(lean_object* v_x_193_){
_start:
{
switch(lean_obj_tag(v_x_193_))
{
case 4:
{
lean_object* v_xs_194_; lean_object* v___x_195_; 
v_xs_194_ = lean_ctor_get(v_x_193_, 0);
v___x_195_ = l_List_lengthTR___redArg(v_xs_194_);
return v___x_195_;
}
case 5:
{
lean_object* v_kvs_196_; lean_object* v___x_197_; 
v_kvs_196_ = lean_ctor_get(v_x_193_, 0);
v___x_197_ = l_List_lengthTR___redArg(v_kvs_196_);
return v___x_197_;
}
default: 
{
lean_object* v___x_198_; 
v___x_198_ = lean_unsigned_to_nat(0u);
return v___x_198_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_arraySize___boxed(lean_object* v_x_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = lp_leancjson_CJson_JSON_arraySize(v_x_199_);
lean_dec(v_x_199_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_getArrayItem(lean_object* v_x_201_, lean_object* v_x_202_){
_start:
{
switch(lean_obj_tag(v_x_201_))
{
case 4:
{
lean_object* v_xs_203_; lean_object* v___x_204_; 
v_xs_203_ = lean_ctor_get(v_x_201_, 0);
v___x_204_ = l_List_get_x3fInternal___redArg(v_xs_203_, v_x_202_);
return v___x_204_;
}
case 5:
{
lean_object* v_kvs_205_; lean_object* v___x_206_; 
v_kvs_205_ = lean_ctor_get(v_x_201_, 0);
v___x_206_ = l_List_get_x3fInternal___redArg(v_kvs_205_, v_x_202_);
if (lean_obj_tag(v___x_206_) == 0)
{
lean_object* v___x_207_; 
v___x_207_ = lean_box(0);
return v___x_207_;
}
else
{
lean_object* v_val_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_216_; 
v_val_208_ = lean_ctor_get(v___x_206_, 0);
v_isSharedCheck_216_ = !lean_is_exclusive(v___x_206_);
if (v_isSharedCheck_216_ == 0)
{
v___x_210_ = v___x_206_;
v_isShared_211_ = v_isSharedCheck_216_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_val_208_);
lean_dec(v___x_206_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_216_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v_snd_212_; lean_object* v___x_214_; 
v_snd_212_ = lean_ctor_get(v_val_208_, 1);
lean_inc(v_snd_212_);
lean_dec(v_val_208_);
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 0, v_snd_212_);
v___x_214_ = v___x_210_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v_snd_212_);
v___x_214_ = v_reuseFailAlloc_215_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
return v___x_214_;
}
}
}
}
default: 
{
lean_object* v___x_217_; 
lean_dec(v_x_202_);
v___x_217_ = lean_box(0);
return v___x_217_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_getArrayItem___boxed(lean_object* v_x_218_, lean_object* v_x_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = lp_leancjson_CJson_JSON_getArrayItem(v_x_218_, v_x_219_);
lean_dec(v_x_218_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_find_x3f___at___00CJson_JSON_getObjectItem_spec__0(uint8_t v_cs_221_, lean_object* v_key_222_, lean_object* v_x_223_){
_start:
{
if (lean_obj_tag(v_x_223_) == 0)
{
lean_object* v___x_224_; 
lean_dec(v_key_222_);
v___x_224_ = lean_box(0);
return v___x_224_;
}
else
{
lean_object* v_head_225_; lean_object* v_tail_226_; lean_object* v_fst_227_; uint8_t v___x_228_; 
v_head_225_ = lean_ctor_get(v_x_223_, 0);
lean_inc(v_head_225_);
v_tail_226_ = lean_ctor_get(v_x_223_, 1);
lean_inc(v_tail_226_);
lean_dec_ref_known(v_x_223_, 2);
v_fst_227_ = lean_ctor_get(v_head_225_, 0);
lean_inc(v_key_222_);
lean_inc(v_fst_227_);
v___x_228_ = lp_leancjson_CJson_keyEq(v_cs_221_, v_fst_227_, v_key_222_);
if (v___x_228_ == 0)
{
lean_dec(v_head_225_);
v_x_223_ = v_tail_226_;
goto _start;
}
else
{
lean_object* v___x_230_; 
lean_dec(v_tail_226_);
lean_dec(v_key_222_);
v___x_230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_230_, 0, v_head_225_);
return v___x_230_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_find_x3f___at___00CJson_JSON_getObjectItem_spec__0___boxed(lean_object* v_cs_231_, lean_object* v_key_232_, lean_object* v_x_233_){
_start:
{
uint8_t v_cs_boxed_234_; lean_object* v_res_235_; 
v_cs_boxed_234_ = lean_unbox(v_cs_231_);
v_res_235_ = lp_leancjson_List_find_x3f___at___00CJson_JSON_getObjectItem_spec__0(v_cs_boxed_234_, v_key_232_, v_x_233_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_getObjectItem(lean_object* v_v_236_, lean_object* v_key_237_, uint8_t v_cs_238_){
_start:
{
if (lean_obj_tag(v_v_236_) == 5)
{
lean_object* v_kvs_239_; lean_object* v___x_240_; 
v_kvs_239_ = lean_ctor_get(v_v_236_, 0);
lean_inc(v_kvs_239_);
lean_dec_ref_known(v_v_236_, 1);
v___x_240_ = lp_leancjson_List_find_x3f___at___00CJson_JSON_getObjectItem_spec__0(v_cs_238_, v_key_237_, v_kvs_239_);
if (lean_obj_tag(v___x_240_) == 0)
{
lean_object* v___x_241_; 
v___x_241_ = lean_box(0);
return v___x_241_;
}
else
{
lean_object* v_val_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_250_; 
v_val_242_ = lean_ctor_get(v___x_240_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_240_);
if (v_isSharedCheck_250_ == 0)
{
v___x_244_ = v___x_240_;
v_isShared_245_ = v_isSharedCheck_250_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_val_242_);
lean_dec(v___x_240_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_250_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v_snd_246_; lean_object* v___x_248_; 
v_snd_246_ = lean_ctor_get(v_val_242_, 1);
lean_inc(v_snd_246_);
lean_dec(v_val_242_);
if (v_isShared_245_ == 0)
{
lean_ctor_set(v___x_244_, 0, v_snd_246_);
v___x_248_ = v___x_244_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_snd_246_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
else
{
lean_object* v___x_251_; 
lean_dec(v_key_237_);
lean_dec(v_v_236_);
v___x_251_ = lean_box(0);
return v___x_251_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_getObjectItem___boxed(lean_object* v_v_252_, lean_object* v_key_253_, lean_object* v_cs_254_){
_start:
{
uint8_t v_cs_boxed_255_; lean_object* v_res_256_; 
v_cs_boxed_255_ = lean_unbox(v_cs_254_);
v_res_256_ = lp_leancjson_CJson_JSON_getObjectItem(v_v_252_, v_key_253_, v_cs_boxed_255_);
return v_res_256_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_hasObjectItem(lean_object* v_v_257_, lean_object* v_key_258_){
_start:
{
uint8_t v___x_259_; lean_object* v___x_260_; 
v___x_259_ = 0;
v___x_260_ = lp_leancjson_CJson_JSON_getObjectItem(v_v_257_, v_key_258_, v___x_259_);
if (lean_obj_tag(v___x_260_) == 0)
{
return v___x_259_;
}
else
{
uint8_t v___x_261_; 
lean_dec_ref_known(v___x_260_, 1);
v___x_261_ = 1;
return v___x_261_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_hasObjectItem___boxed(lean_object* v_v_262_, lean_object* v_key_263_){
_start:
{
uint8_t v_res_264_; lean_object* v_r_265_; 
v_res_264_ = lp_leancjson_CJson_JSON_hasObjectItem(v_v_262_, v_key_263_);
v_r_265_ = lean_box(v_res_264_);
return v_r_265_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_addItemToArray(lean_object* v_x_266_, lean_object* v_x_267_){
_start:
{
if (lean_obj_tag(v_x_266_) == 4)
{
lean_object* v_xs_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_279_; 
v_xs_268_ = lean_ctor_get(v_x_266_, 0);
v_isSharedCheck_279_ = !lean_is_exclusive(v_x_266_);
if (v_isSharedCheck_279_ == 0)
{
v___x_270_ = v_x_266_;
v_isShared_271_ = v_isSharedCheck_279_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_xs_268_);
lean_dec(v_x_266_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_279_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_276_; 
v___x_272_ = lean_box(0);
v___x_273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_273_, 0, v_x_267_);
lean_ctor_set(v___x_273_, 1, v___x_272_);
v___x_274_ = l_List_appendTR___redArg(v_xs_268_, v___x_273_);
if (v_isShared_271_ == 0)
{
lean_ctor_set(v___x_270_, 0, v___x_274_);
v___x_276_ = v___x_270_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v___x_274_);
v___x_276_ = v_reuseFailAlloc_278_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
lean_object* v___x_277_; 
v___x_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
return v___x_277_;
}
}
}
else
{
lean_object* v___x_280_; 
lean_dec(v_x_267_);
lean_dec(v_x_266_);
v___x_280_ = lean_box(0);
return v___x_280_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_addItemToObject(lean_object* v_x_281_, lean_object* v_x_282_, lean_object* v_x_283_){
_start:
{
if (lean_obj_tag(v_x_281_) == 5)
{
lean_object* v_kvs_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_296_; 
v_kvs_284_ = lean_ctor_get(v_x_281_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v_x_281_);
if (v_isSharedCheck_296_ == 0)
{
v___x_286_ = v_x_281_;
v_isShared_287_ = v_isSharedCheck_296_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_kvs_284_);
lean_dec(v_x_281_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_296_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_293_; 
v___x_288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_288_, 0, v_x_282_);
lean_ctor_set(v___x_288_, 1, v_x_283_);
v___x_289_ = lean_box(0);
v___x_290_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_288_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
v___x_291_ = l_List_appendTR___redArg(v_kvs_284_, v___x_290_);
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 0, v___x_291_);
v___x_293_ = v___x_286_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v___x_291_);
v___x_293_ = v_reuseFailAlloc_295_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
lean_object* v___x_294_; 
v___x_294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
return v___x_294_;
}
}
}
else
{
lean_object* v___x_297_; 
lean_dec(v_x_283_);
lean_dec(v_x_282_);
lean_dec(v_x_281_);
v___x_297_ = lean_box(0);
return v___x_297_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_detachItemFromArray(lean_object* v_x_300_, lean_object* v_x_301_){
_start:
{
if (lean_obj_tag(v_x_300_) == 4)
{
lean_object* v_xs_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_322_; 
v_xs_302_ = lean_ctor_get(v_x_300_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v_x_300_);
if (v_isSharedCheck_322_ == 0)
{
v___x_304_ = v_x_300_;
v_isShared_305_ = v_isSharedCheck_322_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_xs_302_);
lean_dec(v_x_300_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_322_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_306_; 
lean_inc(v_x_301_);
v___x_306_ = l_List_get_x3fInternal___redArg(v_xs_302_, v_x_301_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v___x_307_; 
lean_del_object(v___x_304_);
lean_dec(v_xs_302_);
lean_dec(v_x_301_);
v___x_307_ = lean_box(0);
return v___x_307_;
}
else
{
lean_object* v_val_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_321_; 
v_val_308_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_321_ == 0)
{
v___x_310_ = v___x_306_;
v_isShared_311_ = v_isSharedCheck_321_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_val_308_);
lean_dec(v___x_306_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_321_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_315_; 
v___x_312_ = ((lean_object*)(lp_leancjson_CJson_JSON_detachItemFromArray___closed__0));
lean_inc(v_xs_302_);
v___x_313_ = l___private_Init_Data_List_Impl_0__List_eraseIdxTR_go___redArg(v_xs_302_, v_xs_302_, v_x_301_, v___x_312_);
lean_dec(v_xs_302_);
if (v_isShared_305_ == 0)
{
lean_ctor_set(v___x_304_, 0, v___x_313_);
v___x_315_ = v___x_304_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_313_);
v___x_315_ = v_reuseFailAlloc_320_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
lean_object* v___x_316_; lean_object* v___x_318_; 
v___x_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_316_, 0, v_val_308_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 0, v___x_316_);
v___x_318_ = v___x_310_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v___x_316_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
}
}
else
{
lean_object* v___x_323_; 
lean_dec(v_x_301_);
lean_dec(v_x_300_);
v___x_323_ = lean_box(0);
return v___x_323_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_deleteItemFromArray(lean_object* v_v_324_, lean_object* v_i_325_){
_start:
{
lean_object* v___x_326_; 
lean_inc(v_v_324_);
v___x_326_ = lp_leancjson_CJson_JSON_detachItemFromArray(v_v_324_, v_i_325_);
if (lean_obj_tag(v___x_326_) == 0)
{
return v_v_324_;
}
else
{
lean_object* v_val_327_; lean_object* v_snd_328_; 
lean_dec(v_v_324_);
v_val_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc(v_val_327_);
lean_dec_ref_known(v___x_326_, 1);
v_snd_328_ = lean_ctor_get(v_val_327_, 1);
lean_inc(v_snd_328_);
lean_dec(v_val_327_);
return v_snd_328_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_insertItemInArray(lean_object* v_x_329_, lean_object* v_x_330_, lean_object* v_x_331_){
_start:
{
if (lean_obj_tag(v_x_329_) == 4)
{
lean_object* v_xs_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_345_; 
v_xs_332_ = lean_ctor_get(v_x_329_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v_x_329_);
if (v_isSharedCheck_345_ == 0)
{
v___x_334_ = v_x_329_;
v_isShared_335_ = v_isSharedCheck_345_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_xs_332_);
lean_dec(v_x_329_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_345_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_342_; 
v___x_336_ = ((lean_object*)(lp_leancjson_CJson_JSON_detachItemFromArray___closed__0));
lean_inc(v_x_330_);
lean_inc(v_xs_332_);
v___x_337_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_xs_332_, v_xs_332_, v_x_330_, v___x_336_);
v___x_338_ = l_List_drop___redArg(v_x_330_, v_xs_332_);
lean_dec(v_xs_332_);
v___x_339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_339_, 0, v_x_331_);
lean_ctor_set(v___x_339_, 1, v___x_338_);
v___x_340_ = l_List_appendTR___redArg(v___x_337_, v___x_339_);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 0, v___x_340_);
v___x_342_ = v___x_334_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v___x_340_);
v___x_342_ = v_reuseFailAlloc_344_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
lean_object* v___x_343_; 
v___x_343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
return v___x_343_;
}
}
}
else
{
lean_object* v___x_346_; 
lean_dec(v_x_331_);
lean_dec(v_x_330_);
lean_dec(v_x_329_);
v___x_346_ = lean_box(0);
return v___x_346_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_replaceItemInArray(lean_object* v_x_347_, lean_object* v_x_348_, lean_object* v_x_349_){
_start:
{
if (lean_obj_tag(v_x_347_) == 4)
{
lean_object* v_xs_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_363_; 
v_xs_350_ = lean_ctor_get(v_x_347_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v_x_347_);
if (v_isSharedCheck_363_ == 0)
{
v___x_352_ = v_x_347_;
v_isShared_353_ = v_isSharedCheck_363_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_xs_350_);
lean_dec(v_x_347_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_363_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_354_; uint8_t v___x_355_; 
v___x_354_ = l_List_lengthTR___redArg(v_xs_350_);
v___x_355_ = lean_nat_dec_lt(v_x_348_, v___x_354_);
lean_dec(v___x_354_);
if (v___x_355_ == 0)
{
lean_object* v___x_356_; 
lean_del_object(v___x_352_);
lean_dec(v_xs_350_);
lean_dec(v_x_349_);
lean_dec(v_x_348_);
v___x_356_ = lean_box(0);
return v___x_356_;
}
else
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_360_; 
v___x_357_ = ((lean_object*)(lp_leancjson_CJson_JSON_detachItemFromArray___closed__0));
lean_inc(v_xs_350_);
v___x_358_ = l___private_Init_Data_List_Impl_0__List_setTR_go___redArg(v_xs_350_, v_x_349_, v_xs_350_, v_x_348_, v___x_357_);
lean_dec(v_xs_350_);
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 0, v___x_358_);
v___x_360_ = v___x_352_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v___x_358_);
v___x_360_ = v_reuseFailAlloc_362_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
lean_object* v___x_361_; 
v___x_361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
return v___x_361_;
}
}
}
}
else
{
lean_object* v___x_364_; 
lean_dec(v_x_349_);
lean_dec(v_x_348_);
lean_dec(v_x_347_);
v___x_364_ = lean_box(0);
return v___x_364_;
}
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_detachItemFromObject___lam__0(uint8_t v_cs_365_, lean_object* v_key_366_, lean_object* v_m_367_){
_start:
{
lean_object* v_fst_368_; uint8_t v___x_369_; 
v_fst_368_ = lean_ctor_get(v_m_367_, 0);
lean_inc(v_fst_368_);
lean_dec_ref(v_m_367_);
v___x_369_ = lp_leancjson_CJson_keyEq(v_cs_365_, v_fst_368_, v_key_366_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_detachItemFromObject___lam__0___boxed(lean_object* v_cs_370_, lean_object* v_key_371_, lean_object* v_m_372_){
_start:
{
uint8_t v_cs_boxed_373_; uint8_t v_res_374_; lean_object* v_r_375_; 
v_cs_boxed_373_ = lean_unbox(v_cs_370_);
v_res_374_ = lp_leancjson_CJson_JSON_detachItemFromObject___lam__0(v_cs_boxed_373_, v_key_371_, v_m_372_);
v_r_375_ = lean_box(v_res_374_);
return v_r_375_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_detachItemFromObject(lean_object* v_v_376_, lean_object* v_key_377_, uint8_t v_cs_378_){
_start:
{
if (lean_obj_tag(v_v_376_) == 5)
{
lean_object* v_kvs_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_409_; 
v_kvs_379_ = lean_ctor_get(v_v_376_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v_v_376_);
if (v_isSharedCheck_409_ == 0)
{
v___x_381_ = v_v_376_;
v_isShared_382_ = v_isSharedCheck_409_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_kvs_379_);
lean_dec(v_v_376_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_409_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v___x_383_; lean_object* v___f_384_; lean_object* v___x_385_; 
v___x_383_ = lean_box(v_cs_378_);
v___f_384_ = lean_alloc_closure((void*)(lp_leancjson_CJson_JSON_detachItemFromObject___lam__0___boxed), 3, 2);
lean_closure_set(v___f_384_, 0, v___x_383_);
lean_closure_set(v___f_384_, 1, v_key_377_);
v___x_385_ = lp_leancjson_CJson_eraseFirst___redArg(v___f_384_, v_kvs_379_);
if (lean_obj_tag(v___x_385_) == 0)
{
lean_object* v___x_386_; 
lean_del_object(v___x_381_);
v___x_386_ = lean_box(0);
return v___x_386_;
}
else
{
lean_object* v_val_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_408_; 
v_val_387_ = lean_ctor_get(v___x_385_, 0);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_408_ == 0)
{
v___x_389_ = v___x_385_;
v_isShared_390_ = v_isSharedCheck_408_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_val_387_);
lean_dec(v___x_385_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_408_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v_fst_391_; lean_object* v_snd_392_; lean_object* v_snd_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_406_; 
v_fst_391_ = lean_ctor_get(v_val_387_, 0);
lean_inc(v_fst_391_);
v_snd_392_ = lean_ctor_get(v_val_387_, 1);
lean_inc(v_snd_392_);
lean_dec(v_val_387_);
v_snd_393_ = lean_ctor_get(v_fst_391_, 1);
v_isSharedCheck_406_ = !lean_is_exclusive(v_fst_391_);
if (v_isSharedCheck_406_ == 0)
{
lean_object* v_unused_407_; 
v_unused_407_ = lean_ctor_get(v_fst_391_, 0);
lean_dec(v_unused_407_);
v___x_395_ = v_fst_391_;
v_isShared_396_ = v_isSharedCheck_406_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_snd_393_);
lean_dec(v_fst_391_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_406_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v___x_398_; 
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 0, v_snd_392_);
v___x_398_ = v___x_381_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_snd_392_);
v___x_398_ = v_reuseFailAlloc_405_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
lean_object* v___x_400_; 
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 1, v___x_398_);
lean_ctor_set(v___x_395_, 0, v_snd_393_);
v___x_400_ = v___x_395_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_snd_393_);
lean_ctor_set(v_reuseFailAlloc_404_, 1, v___x_398_);
v___x_400_ = v_reuseFailAlloc_404_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
lean_object* v___x_402_; 
if (v_isShared_390_ == 0)
{
lean_ctor_set(v___x_389_, 0, v___x_400_);
v___x_402_ = v___x_389_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v___x_400_);
v___x_402_ = v_reuseFailAlloc_403_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
return v___x_402_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_410_; 
lean_dec(v_key_377_);
lean_dec(v_v_376_);
v___x_410_ = lean_box(0);
return v___x_410_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_detachItemFromObject___boxed(lean_object* v_v_411_, lean_object* v_key_412_, lean_object* v_cs_413_){
_start:
{
uint8_t v_cs_boxed_414_; lean_object* v_res_415_; 
v_cs_boxed_414_ = lean_unbox(v_cs_413_);
v_res_415_ = lp_leancjson_CJson_JSON_detachItemFromObject(v_v_411_, v_key_412_, v_cs_boxed_414_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_deleteItemFromObject(lean_object* v_v_416_, lean_object* v_key_417_, uint8_t v_cs_418_){
_start:
{
lean_object* v___x_419_; 
lean_inc(v_v_416_);
v___x_419_ = lp_leancjson_CJson_JSON_detachItemFromObject(v_v_416_, v_key_417_, v_cs_418_);
if (lean_obj_tag(v___x_419_) == 0)
{
return v_v_416_;
}
else
{
lean_object* v_val_420_; lean_object* v_snd_421_; 
lean_dec(v_v_416_);
v_val_420_ = lean_ctor_get(v___x_419_, 0);
lean_inc(v_val_420_);
lean_dec_ref_known(v___x_419_, 1);
v_snd_421_ = lean_ctor_get(v_val_420_, 1);
lean_inc(v_snd_421_);
lean_dec(v_val_420_);
return v_snd_421_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_deleteItemFromObject___boxed(lean_object* v_v_422_, lean_object* v_key_423_, lean_object* v_cs_424_){
_start:
{
uint8_t v_cs_boxed_425_; lean_object* v_res_426_; 
v_cs_boxed_425_ = lean_unbox(v_cs_424_);
v_res_426_ = lp_leancjson_CJson_JSON_deleteItemFromObject(v_v_422_, v_key_423_, v_cs_boxed_425_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_replaceItemInObject(lean_object* v_v_427_, lean_object* v_key_428_, lean_object* v_x_429_, uint8_t v_cs_430_){
_start:
{
if (lean_obj_tag(v_v_427_) == 5)
{
lean_object* v_kvs_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_451_; 
v_kvs_431_ = lean_ctor_get(v_v_427_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v_v_427_);
if (v_isSharedCheck_451_ == 0)
{
v___x_433_ = v_v_427_;
v_isShared_434_ = v_isSharedCheck_451_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_kvs_431_);
lean_dec(v_v_427_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_451_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_435_; lean_object* v___f_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_435_ = lean_box(v_cs_430_);
lean_inc(v_key_428_);
v___f_436_ = lean_alloc_closure((void*)(lp_leancjson_CJson_JSON_detachItemFromObject___lam__0___boxed), 3, 2);
lean_closure_set(v___f_436_, 0, v___x_435_);
lean_closure_set(v___f_436_, 1, v_key_428_);
v___x_437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_437_, 0, v_key_428_);
lean_ctor_set(v___x_437_, 1, v_x_429_);
v___x_438_ = lp_leancjson_CJson_replaceFirst___redArg(v___f_436_, v___x_437_, v_kvs_431_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v___x_439_; 
lean_del_object(v___x_433_);
v___x_439_ = lean_box(0);
return v___x_439_;
}
else
{
lean_object* v_val_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_450_; 
v_val_440_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_450_ == 0)
{
v___x_442_ = v___x_438_;
v_isShared_443_ = v_isSharedCheck_450_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_val_440_);
lean_dec(v___x_438_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_450_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_445_; 
if (v_isShared_434_ == 0)
{
lean_ctor_set(v___x_433_, 0, v_val_440_);
v___x_445_ = v___x_433_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_val_440_);
v___x_445_ = v_reuseFailAlloc_449_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
lean_object* v___x_447_; 
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 0, v___x_445_);
v___x_447_ = v___x_442_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v___x_445_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
}
}
}
}
else
{
lean_object* v___x_452_; 
lean_dec(v_x_429_);
lean_dec(v_key_428_);
lean_dec(v_v_427_);
v___x_452_ = lean_box(0);
return v___x_452_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_replaceItemInObject___boxed(lean_object* v_v_453_, lean_object* v_key_454_, lean_object* v_x_455_, lean_object* v_cs_456_){
_start:
{
uint8_t v_cs_boxed_457_; lean_object* v_res_458_; 
v_cs_boxed_457_ = lean_unbox(v_cs_456_);
v_res_458_ = lp_leancjson_CJson_JSON_replaceItemInObject(v_v_453_, v_key_454_, v_x_455_, v_cs_boxed_457_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_duplicate(lean_object* v_v_463_, uint8_t v_recurse_464_){
_start:
{
if (v_recurse_464_ == 0)
{
switch(lean_obj_tag(v_v_463_))
{
case 4:
{
lean_object* v___x_465_; 
v___x_465_ = ((lean_object*)(lp_leancjson_CJson_JSON_duplicate___closed__0));
return v___x_465_;
}
case 5:
{
lean_object* v___x_466_; 
v___x_466_ = ((lean_object*)(lp_leancjson_CJson_JSON_duplicate___closed__1));
return v___x_466_;
}
default: 
{
lean_inc(v_v_463_);
return v_v_463_;
}
}
}
else
{
lean_inc(v_v_463_);
return v_v_463_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_duplicate___boxed(lean_object* v_v_467_, lean_object* v_recurse_468_){
_start:
{
uint8_t v_recurse_boxed_469_; lean_object* v_res_470_; 
v_recurse_boxed_469_ = lean_unbox(v_recurse_468_);
v_res_470_ = lp_leancjson_CJson_JSON_duplicate(v_v_467_, v_recurse_boxed_469_);
lean_dec(v_v_467_);
return v_res_470_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_all2___redArg(lean_object* v_f_471_, lean_object* v_x_472_, lean_object* v_x_473_){
_start:
{
if (lean_obj_tag(v_x_472_) == 0)
{
lean_dec_ref(v_f_471_);
if (lean_obj_tag(v_x_473_) == 0)
{
uint8_t v___x_474_; 
v___x_474_ = 1;
return v___x_474_;
}
else
{
uint8_t v___x_475_; 
lean_dec(v_x_473_);
v___x_475_ = 0;
return v___x_475_;
}
}
else
{
if (lean_obj_tag(v_x_473_) == 1)
{
lean_object* v_head_476_; lean_object* v_tail_477_; lean_object* v_head_478_; lean_object* v_tail_479_; lean_object* v___x_480_; uint8_t v___x_481_; 
v_head_476_ = lean_ctor_get(v_x_472_, 0);
lean_inc(v_head_476_);
v_tail_477_ = lean_ctor_get(v_x_472_, 1);
lean_inc(v_tail_477_);
lean_dec_ref_known(v_x_472_, 2);
v_head_478_ = lean_ctor_get(v_x_473_, 0);
lean_inc(v_head_478_);
v_tail_479_ = lean_ctor_get(v_x_473_, 1);
lean_inc(v_tail_479_);
lean_dec_ref_known(v_x_473_, 2);
lean_inc_ref(v_f_471_);
v___x_480_ = lean_apply_2(v_f_471_, v_head_476_, v_head_478_);
v___x_481_ = lean_unbox(v___x_480_);
if (v___x_481_ == 0)
{
uint8_t v___x_482_; 
lean_dec(v_tail_479_);
lean_dec(v_tail_477_);
lean_dec_ref(v_f_471_);
v___x_482_ = lean_unbox(v___x_480_);
return v___x_482_;
}
else
{
v_x_472_ = v_tail_477_;
v_x_473_ = v_tail_479_;
goto _start;
}
}
else
{
uint8_t v___x_484_; 
lean_dec_ref_known(v_x_472_, 2);
lean_dec(v_x_473_);
lean_dec_ref(v_f_471_);
v___x_484_ = 0;
return v___x_484_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_all2___redArg___boxed(lean_object* v_f_485_, lean_object* v_x_486_, lean_object* v_x_487_){
_start:
{
uint8_t v_res_488_; lean_object* v_r_489_; 
v_res_488_ = lp_leancjson_CJson_JSON_all2___redArg(v_f_485_, v_x_486_, v_x_487_);
v_r_489_ = lean_box(v_res_488_);
return v_r_489_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_all2(lean_object* v_00_u03b1_490_, lean_object* v_f_491_, lean_object* v_x_492_, lean_object* v_x_493_){
_start:
{
uint8_t v___x_494_; 
v___x_494_ = lp_leancjson_CJson_JSON_all2___redArg(v_f_491_, v_x_492_, v_x_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_all2___boxed(lean_object* v_00_u03b1_495_, lean_object* v_f_496_, lean_object* v_x_497_, lean_object* v_x_498_){
_start:
{
uint8_t v_res_499_; lean_object* v_r_500_; 
v_res_499_ = lp_leancjson_CJson_JSON_all2(v_00_u03b1_495_, v_f_496_, v_x_497_, v_x_498_);
v_r_500_ = lean_box(v_res_499_);
return v_r_500_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_lookup(uint8_t v_cs_501_, lean_object* v_ms_502_, lean_object* v_key_503_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = lp_leancjson_List_find_x3f___at___00CJson_JSON_getObjectItem_spec__0(v_cs_501_, v_key_503_, v_ms_502_);
if (lean_obj_tag(v___x_504_) == 0)
{
lean_object* v___x_505_; 
v___x_505_ = lean_box(0);
return v___x_505_;
}
else
{
lean_object* v_val_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_514_; 
v_val_506_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_514_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_514_ == 0)
{
v___x_508_ = v___x_504_;
v_isShared_509_ = v_isSharedCheck_514_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_val_506_);
lean_dec(v___x_504_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_514_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v_snd_510_; lean_object* v___x_512_; 
v_snd_510_ = lean_ctor_get(v_val_506_, 1);
lean_inc(v_snd_510_);
lean_dec(v_val_506_);
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 0, v_snd_510_);
v___x_512_ = v___x_508_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_snd_510_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_lookup___boxed(lean_object* v_cs_515_, lean_object* v_ms_516_, lean_object* v_key_517_){
_start:
{
uint8_t v_cs_boxed_518_; lean_object* v_res_519_; 
v_cs_boxed_518_ = lean_unbox(v_cs_515_);
v_res_519_ = lp_leancjson_CJson_JSON_lookup(v_cs_boxed_518_, v_ms_516_, v_key_517_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_compareF___boxed(lean_object* v_cs_520_, lean_object* v_x_521_, lean_object* v_x_522_, lean_object* v_x_523_){
_start:
{
uint8_t v_cs_boxed_524_; uint8_t v_res_525_; lean_object* v_r_526_; 
v_cs_boxed_524_ = lean_unbox(v_cs_520_);
v_res_525_ = lp_leancjson_CJson_JSON_compareF(v_cs_boxed_524_, v_x_521_, v_x_522_, v_x_523_);
lean_dec(v_x_521_);
v_r_526_ = lean_box(v_res_525_);
return v_r_526_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_compareF(uint8_t v_cs_527_, lean_object* v_x_528_, lean_object* v_x_529_, lean_object* v_x_530_){
_start:
{
lean_object* v_zero_531_; uint8_t v_isZero_532_; 
v_zero_531_ = lean_unsigned_to_nat(0u);
v_isZero_532_ = lean_nat_dec_eq(v_x_528_, v_zero_531_);
if (v_isZero_532_ == 1)
{
uint8_t v___x_533_; 
lean_dec(v_x_530_);
lean_dec(v_x_529_);
v___x_533_ = 0;
return v___x_533_;
}
else
{
lean_object* v_one_534_; lean_object* v_n_535_; 
v_one_534_ = lean_unsigned_to_nat(1u);
v_n_535_ = lean_nat_sub(v_x_528_, v_one_534_);
switch(lean_obj_tag(v_x_529_))
{
case 0:
{
lean_dec(v_n_535_);
if (lean_obj_tag(v_x_530_) == 0)
{
uint8_t v___x_536_; 
v___x_536_ = 1;
return v___x_536_;
}
else
{
lean_dec(v_x_530_);
return v_isZero_532_;
}
}
case 1:
{
lean_dec(v_n_535_);
if (lean_obj_tag(v_x_530_) == 1)
{
uint8_t v_b_537_; 
v_b_537_ = lean_ctor_get_uint8(v_x_530_, 0);
lean_dec_ref_known(v_x_530_, 0);
if (v_b_537_ == 0)
{
uint8_t v_b_538_; 
v_b_538_ = lean_ctor_get_uint8(v_x_529_, 0);
lean_dec_ref_known(v_x_529_, 0);
if (v_b_538_ == 0)
{
uint8_t v___x_539_; 
v___x_539_ = 1;
return v___x_539_;
}
else
{
return v_b_537_;
}
}
else
{
uint8_t v_b_540_; 
v_b_540_ = lean_ctor_get_uint8(v_x_529_, 0);
lean_dec_ref_known(v_x_529_, 0);
return v_b_540_;
}
}
else
{
lean_dec_ref_known(v_x_529_, 0);
lean_dec(v_x_530_);
return v_isZero_532_;
}
}
case 2:
{
lean_dec(v_n_535_);
if (lean_obj_tag(v_x_530_) == 2)
{
lean_object* v_n_541_; lean_object* v_n_542_; uint8_t v___x_543_; 
v_n_541_ = lean_ctor_get(v_x_529_, 0);
lean_inc_ref(v_n_541_);
lean_dec_ref_known(v_x_529_, 1);
v_n_542_ = lean_ctor_get(v_x_530_, 0);
lean_inc_ref(v_n_542_);
lean_dec_ref_known(v_x_530_, 1);
v___x_543_ = lp_leancjson_CJson_instDecidableEqNum_decEq(v_n_541_, v_n_542_);
lean_dec_ref(v_n_542_);
lean_dec_ref(v_n_541_);
return v___x_543_;
}
else
{
lean_dec_ref_known(v_x_529_, 1);
lean_dec(v_x_530_);
return v_isZero_532_;
}
}
case 3:
{
lean_dec(v_n_535_);
if (lean_obj_tag(v_x_530_) == 3)
{
lean_object* v_s_544_; lean_object* v_s_545_; uint8_t v___x_546_; 
v_s_544_ = lean_ctor_get(v_x_529_, 0);
lean_inc(v_s_544_);
lean_dec_ref_known(v_x_529_, 1);
v_s_545_ = lean_ctor_get(v_x_530_, 0);
lean_inc(v_s_545_);
lean_dec_ref_known(v_x_530_, 1);
v___x_546_ = lp_leancjson_List_beq___at___00CJson_JSON_beq_spec__0(v_s_544_, v_s_545_);
lean_dec(v_s_545_);
lean_dec(v_s_544_);
return v___x_546_;
}
else
{
lean_dec_ref_known(v_x_529_, 1);
lean_dec(v_x_530_);
return v_isZero_532_;
}
}
case 4:
{
if (lean_obj_tag(v_x_530_) == 4)
{
lean_object* v_xs_547_; lean_object* v_xs_548_; lean_object* v___x_549_; lean_object* v___x_550_; uint8_t v___x_551_; 
v_xs_547_ = lean_ctor_get(v_x_529_, 0);
lean_inc(v_xs_547_);
lean_dec_ref_known(v_x_529_, 1);
v_xs_548_ = lean_ctor_get(v_x_530_, 0);
lean_inc(v_xs_548_);
lean_dec_ref_known(v_x_530_, 1);
v___x_549_ = lean_box(v_cs_527_);
v___x_550_ = lean_alloc_closure((void*)(lp_leancjson_CJson_JSON_compareF___boxed), 4, 2);
lean_closure_set(v___x_550_, 0, v___x_549_);
lean_closure_set(v___x_550_, 1, v_n_535_);
v___x_551_ = lp_leancjson_CJson_JSON_all2___redArg(v___x_550_, v_xs_547_, v_xs_548_);
return v___x_551_;
}
else
{
lean_dec_ref_known(v_x_529_, 1);
lean_dec(v_n_535_);
lean_dec(v_x_530_);
return v_isZero_532_;
}
}
default: 
{
if (lean_obj_tag(v_x_530_) == 5)
{
lean_object* v_kvs_552_; lean_object* v_kvs_553_; uint8_t v___x_554_; 
v_kvs_552_ = lean_ctor_get(v_x_529_, 0);
lean_inc_n(v_kvs_552_, 2);
lean_dec_ref_known(v_x_529_, 1);
v_kvs_553_ = lean_ctor_get(v_x_530_, 0);
lean_inc_n(v_kvs_553_, 2);
lean_dec_ref_known(v_x_530_, 1);
v___x_554_ = lp_leancjson_List_all___at___00CJson_JSON_compareF_spec__0(v_cs_527_, v_kvs_553_, v_n_535_, v_kvs_552_);
if (v___x_554_ == 0)
{
lean_dec(v_kvs_553_);
lean_dec(v_kvs_552_);
lean_dec(v_n_535_);
return v___x_554_;
}
else
{
uint8_t v___x_555_; 
v___x_555_ = lp_leancjson_List_all___at___00CJson_JSON_compareF_spec__0(v_cs_527_, v_kvs_552_, v_n_535_, v_kvs_553_);
lean_dec(v_n_535_);
return v___x_555_;
}
}
else
{
lean_dec_ref_known(v_x_529_, 1);
lean_dec(v_n_535_);
lean_dec(v_x_530_);
return v_isZero_532_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_leancjson_List_all___at___00CJson_JSON_compareF_spec__0(uint8_t v_cs_556_, lean_object* v_kvs_557_, lean_object* v_n_558_, lean_object* v_x_559_){
_start:
{
if (lean_obj_tag(v_x_559_) == 0)
{
uint8_t v___x_560_; 
lean_dec(v_kvs_557_);
v___x_560_ = 1;
return v___x_560_;
}
else
{
lean_object* v_head_561_; lean_object* v_tail_562_; lean_object* v_fst_563_; lean_object* v_snd_564_; lean_object* v___x_565_; 
v_head_561_ = lean_ctor_get(v_x_559_, 0);
lean_inc(v_head_561_);
v_tail_562_ = lean_ctor_get(v_x_559_, 1);
lean_inc(v_tail_562_);
lean_dec_ref_known(v_x_559_, 2);
v_fst_563_ = lean_ctor_get(v_head_561_, 0);
lean_inc(v_fst_563_);
v_snd_564_ = lean_ctor_get(v_head_561_, 1);
lean_inc(v_snd_564_);
lean_dec(v_head_561_);
lean_inc(v_kvs_557_);
v___x_565_ = lp_leancjson_CJson_JSON_lookup(v_cs_556_, v_kvs_557_, v_fst_563_);
if (lean_obj_tag(v___x_565_) == 0)
{
uint8_t v___x_566_; 
lean_dec(v_snd_564_);
lean_dec(v_tail_562_);
lean_dec(v_kvs_557_);
v___x_566_ = 0;
return v___x_566_;
}
else
{
lean_object* v_val_567_; uint8_t v___x_568_; 
v_val_567_ = lean_ctor_get(v___x_565_, 0);
lean_inc(v_val_567_);
lean_dec_ref_known(v___x_565_, 1);
v___x_568_ = lp_leancjson_CJson_JSON_compareF(v_cs_556_, v_n_558_, v_snd_564_, v_val_567_);
if (v___x_568_ == 0)
{
lean_dec(v_tail_562_);
lean_dec(v_kvs_557_);
return v___x_568_;
}
else
{
v_x_559_ = v_tail_562_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_all___at___00CJson_JSON_compareF_spec__0___boxed(lean_object* v_cs_570_, lean_object* v_kvs_571_, lean_object* v_n_572_, lean_object* v_x_573_){
_start:
{
uint8_t v_cs_boxed_574_; uint8_t v_res_575_; lean_object* v_r_576_; 
v_cs_boxed_574_ = lean_unbox(v_cs_570_);
v_res_575_ = lp_leancjson_List_all___at___00CJson_JSON_compareF_spec__0(v_cs_boxed_574_, v_kvs_571_, v_n_572_, v_x_573_);
lean_dec(v_n_572_);
v_r_576_ = lean_box(v_res_575_);
return v_r_576_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_compare(lean_object* v_a_577_, lean_object* v_b_578_, uint8_t v_cs_579_){
_start:
{
lean_object* v___y_581_; lean_object* v___x_585_; lean_object* v___x_586_; uint8_t v___x_587_; 
v___x_585_ = lp_leancjson_CJson_JSON_depth(v_a_577_);
v___x_586_ = lp_leancjson_CJson_JSON_depth(v_b_578_);
v___x_587_ = lean_nat_dec_le(v___x_585_, v___x_586_);
if (v___x_587_ == 0)
{
lean_dec(v___x_586_);
v___y_581_ = v___x_585_;
goto v___jp_580_;
}
else
{
lean_dec(v___x_585_);
v___y_581_ = v___x_586_;
goto v___jp_580_;
}
v___jp_580_:
{
lean_object* v___x_582_; lean_object* v___x_583_; uint8_t v___x_584_; 
v___x_582_ = lean_unsigned_to_nat(1u);
v___x_583_ = lean_nat_add(v___y_581_, v___x_582_);
lean_dec(v___y_581_);
v___x_584_ = lp_leancjson_CJson_JSON_compareF(v_cs_579_, v___x_583_, v_a_577_, v_b_578_);
lean_dec(v___x_583_);
return v___x_584_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_compare___boxed(lean_object* v_a_588_, lean_object* v_b_589_, lean_object* v_cs_590_){
_start:
{
uint8_t v_cs_boxed_591_; uint8_t v_res_592_; lean_object* v_r_593_; 
v_cs_boxed_591_ = lean_unbox(v_cs_590_);
v_res_592_ = lp_leancjson_CJson_JSON_compare(v_a_588_, v_b_589_, v_cs_boxed_591_);
v_r_593_ = lean_box(v_res_592_);
return v_r_593_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Basic(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Number(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_leancjson_CJson_Api(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Number(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
