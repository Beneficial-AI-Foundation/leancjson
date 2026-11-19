// Lean compiler output
// Module: CJson.Number
// Imports: public import Init public meta import Init public import CJson.Basic
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_uint8_of_nat(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_List_instDecidableEqNil___redArg(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_instDecidableEqUInt8___boxed(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
LEAN_EXPORT uint8_t lp_leancjson_CJson_isDigit(uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_isDigit___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_digitByte(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_digitByte___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_foldl___at___00CJson_natOf_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_foldl___at___00CJson_natOf_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_natOf(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_natOf___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_digitsAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_natDigits(lean_object*);
static lean_once_cell_t lp_leancjson_CJson_normAux___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson_normAux___closed__0;
LEAN_EXPORT lean_object* lp_leancjson_CJson_normAux(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_leancjson_CJson_normalize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson_normalize___closed__0;
static lean_once_cell_t lp_leancjson_CJson_normalize___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson_normalize___closed__1;
LEAN_EXPORT lean_object* lp_leancjson_CJson_normalize(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_Num_ofScientific(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_Num_ofScientific___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_Num_ofInt(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_Num_ofInt___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00CJson_parseExp_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00CJson_parseExp_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_dropWhile___at___00CJson_parseExp_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_dropWhile___at___00CJson_parseExp_spec__0___boxed(lean_object*);
static const lean_array_object lp_leancjson_CJson_parseExp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_leancjson_CJson_parseExp___closed__0 = (const lean_object*)&lp_leancjson_CJson_parseExp___closed__0_value;
static const lean_ctor_object lp_leancjson_CJson_parseExp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_parseExp___closed__1 = (const lean_object*)&lp_leancjson_CJson_parseExp___closed__1_value;
static const lean_ctor_object lp_leancjson_CJson_parseExp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_parseExp___closed__2 = (const lean_object*)&lp_leancjson_CJson_parseExp___closed__2_value;
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseExp(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseFrac(lean_object*);
static const lean_ctor_object lp_leancjson_CJson_parseInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_parseInt___closed__0 = (const lean_object*)&lp_leancjson_CJson_parseInt___closed__0_value;
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseInt(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseUnsigned(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseNumber(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_pad2(lean_object*);
static lean_once_cell_t lp_leancjson_CJson_printUnsigned___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson_printUnsigned___closed__0;
static lean_once_cell_t lp_leancjson_CJson_printUnsigned___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson_printUnsigned___closed__1;
static lean_once_cell_t lp_leancjson_CJson_printUnsigned___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson_printUnsigned___closed__2;
LEAN_EXPORT lean_object* lp_leancjson_CJson_printUnsigned(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_printUnsigned___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_leancjson_CJson_printNum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_printNum___closed__0 = (const lean_object*)&lp_leancjson_CJson_printNum___closed__0_value;
LEAN_EXPORT lean_object* lp_leancjson_CJson_printNum(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_printNum___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_isDigit(uint8_t v_c_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; uint8_t v___x_4_; 
v___x_2_ = lean_unsigned_to_nat(48u);
v___x_3_ = lean_uint8_to_nat(v_c_1_);
v___x_4_ = lean_nat_dec_le(v___x_2_, v___x_3_);
if (v___x_4_ == 0)
{
return v___x_4_;
}
else
{
lean_object* v___x_5_; uint8_t v___x_6_; 
v___x_5_ = lean_unsigned_to_nat(57u);
v___x_6_ = lean_nat_dec_le(v___x_3_, v___x_5_);
return v___x_6_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_isDigit___boxed(lean_object* v_c_7_){
_start:
{
uint8_t v_c_boxed_8_; uint8_t v_res_9_; lean_object* v_r_10_; 
v_c_boxed_8_ = lean_unbox(v_c_7_);
v_res_9_ = lp_leancjson_CJson_isDigit(v_c_boxed_8_);
v_r_10_ = lean_box(v_res_9_);
return v_r_10_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_digitByte(lean_object* v_d_11_){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; uint8_t v___x_14_; 
v___x_12_ = lean_unsigned_to_nat(48u);
v___x_13_ = lean_nat_add(v___x_12_, v_d_11_);
v___x_14_ = lean_uint8_of_nat(v___x_13_);
lean_dec(v___x_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_digitByte___boxed(lean_object* v_d_15_){
_start:
{
uint8_t v_res_16_; lean_object* v_r_17_; 
v_res_16_ = lp_leancjson_CJson_digitByte(v_d_15_);
lean_dec(v_d_15_);
v_r_17_ = lean_box(v_res_16_);
return v_r_17_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_foldl___at___00CJson_natOf_spec__0(lean_object* v_x_18_, lean_object* v_x_19_){
_start:
{
if (lean_obj_tag(v_x_19_) == 0)
{
return v_x_18_;
}
else
{
lean_object* v_head_20_; lean_object* v_tail_21_; lean_object* v___x_22_; lean_object* v___x_23_; uint8_t v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v_head_20_ = lean_ctor_get(v_x_19_, 0);
v_tail_21_ = lean_ctor_get(v_x_19_, 1);
v___x_22_ = lean_unsigned_to_nat(10u);
v___x_23_ = lean_nat_mul(v_x_18_, v___x_22_);
lean_dec(v_x_18_);
v___x_24_ = lean_unbox(v_head_20_);
v___x_25_ = lean_uint8_to_nat(v___x_24_);
v___x_26_ = lean_unsigned_to_nat(48u);
v___x_27_ = lean_nat_sub(v___x_25_, v___x_26_);
v___x_28_ = lean_nat_add(v___x_23_, v___x_27_);
lean_dec(v___x_27_);
lean_dec(v___x_23_);
v_x_18_ = v___x_28_;
v_x_19_ = v_tail_21_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_foldl___at___00CJson_natOf_spec__0___boxed(lean_object* v_x_30_, lean_object* v_x_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = lp_leancjson_List_foldl___at___00CJson_natOf_spec__0(v_x_30_, v_x_31_);
lean_dec(v_x_31_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_natOf(lean_object* v_ds_33_){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = lean_unsigned_to_nat(0u);
v___x_35_ = lp_leancjson_List_foldl___at___00CJson_natOf_spec__0(v___x_34_, v_ds_33_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_natOf___boxed(lean_object* v_ds_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = lp_leancjson_CJson_natOf(v_ds_36_);
lean_dec(v_ds_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_digitsAux(lean_object* v_x_38_, lean_object* v_x_39_, lean_object* v_x_40_){
_start:
{
lean_object* v_zero_41_; uint8_t v_isZero_42_; 
v_zero_41_ = lean_unsigned_to_nat(0u);
v_isZero_42_ = lean_nat_dec_eq(v_x_38_, v_zero_41_);
if (v_isZero_42_ == 1)
{
lean_dec(v_x_39_);
lean_dec(v_x_38_);
return v_x_40_;
}
else
{
lean_object* v___x_43_; uint8_t v___x_44_; 
v___x_43_ = lean_unsigned_to_nat(10u);
v___x_44_ = lean_nat_dec_lt(v_x_39_, v___x_43_);
if (v___x_44_ == 0)
{
lean_object* v_one_45_; lean_object* v_n_46_; lean_object* v___x_47_; lean_object* v___x_48_; uint8_t v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v_one_45_ = lean_unsigned_to_nat(1u);
v_n_46_ = lean_nat_sub(v_x_38_, v_one_45_);
lean_dec(v_x_38_);
v___x_47_ = lean_nat_div(v_x_39_, v___x_43_);
v___x_48_ = lean_nat_mod(v_x_39_, v___x_43_);
lean_dec(v_x_39_);
v___x_49_ = lp_leancjson_CJson_digitByte(v___x_48_);
lean_dec(v___x_48_);
v___x_50_ = lean_box(v___x_49_);
v___x_51_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
lean_ctor_set(v___x_51_, 1, v_x_40_);
v_x_38_ = v_n_46_;
v_x_39_ = v___x_47_;
v_x_40_ = v___x_51_;
goto _start;
}
else
{
uint8_t v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
lean_dec(v_x_38_);
v___x_53_ = lp_leancjson_CJson_digitByte(v_x_39_);
lean_dec(v_x_39_);
v___x_54_ = lean_box(v___x_53_);
v___x_55_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
lean_ctor_set(v___x_55_, 1, v_x_40_);
return v___x_55_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_natDigits(lean_object* v_n_56_){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_57_ = lean_unsigned_to_nat(1u);
v___x_58_ = lean_nat_add(v_n_56_, v___x_57_);
v___x_59_ = lean_box(0);
v___x_60_ = lp_leancjson_CJson_digitsAux(v___x_58_, v_n_56_, v___x_59_);
return v___x_60_;
}
}
static lean_object* _init_lp_leancjson_CJson_normAux___closed__0(void){
_start:
{
lean_object* v_one_61_; lean_object* v___x_62_; 
v_one_61_ = lean_unsigned_to_nat(1u);
v___x_62_ = lean_nat_to_int(v_one_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_normAux(lean_object* v_x_63_, lean_object* v_x_64_, lean_object* v_x_65_){
_start:
{
lean_object* v_zero_66_; uint8_t v_isZero_67_; 
v_zero_66_ = lean_unsigned_to_nat(0u);
v_isZero_67_ = lean_nat_dec_eq(v_x_63_, v_zero_66_);
if (v_isZero_67_ == 1)
{
lean_object* v___x_68_; 
lean_dec(v_x_63_);
v___x_68_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_68_, 0, v_x_64_);
lean_ctor_set(v___x_68_, 1, v_x_65_);
return v___x_68_;
}
else
{
lean_object* v___x_69_; lean_object* v___x_70_; uint8_t v___x_71_; 
v___x_69_ = lean_unsigned_to_nat(10u);
v___x_70_ = lean_nat_mod(v_x_64_, v___x_69_);
v___x_71_ = lean_nat_dec_eq(v___x_70_, v_zero_66_);
lean_dec(v___x_70_);
if (v___x_71_ == 0)
{
lean_object* v___x_72_; 
lean_dec(v_x_63_);
v___x_72_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_72_, 0, v_x_64_);
lean_ctor_set(v___x_72_, 1, v_x_65_);
return v___x_72_;
}
else
{
lean_object* v_one_73_; lean_object* v_n_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v_one_73_ = lean_unsigned_to_nat(1u);
v_n_74_ = lean_nat_sub(v_x_63_, v_one_73_);
lean_dec(v_x_63_);
v___x_75_ = lean_nat_div(v_x_64_, v___x_69_);
lean_dec(v_x_64_);
v___x_76_ = lean_obj_once(&lp_leancjson_CJson_normAux___closed__0, &lp_leancjson_CJson_normAux___closed__0_once, _init_lp_leancjson_CJson_normAux___closed__0);
v___x_77_ = lean_int_add(v_x_65_, v___x_76_);
lean_dec(v_x_65_);
v_x_63_ = v_n_74_;
v_x_64_ = v___x_75_;
v_x_65_ = v___x_77_;
goto _start;
}
}
}
}
static lean_object* _init_lp_leancjson_CJson_normalize___closed__0(void){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_79_ = lean_unsigned_to_nat(0u);
v___x_80_ = lean_nat_to_int(v___x_79_);
return v___x_80_;
}
}
static lean_object* _init_lp_leancjson_CJson_normalize___closed__1(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_81_ = lean_obj_once(&lp_leancjson_CJson_normalize___closed__0, &lp_leancjson_CJson_normalize___closed__0_once, _init_lp_leancjson_CJson_normalize___closed__0);
v___x_82_ = lean_unsigned_to_nat(0u);
v___x_83_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
lean_ctor_set(v___x_83_, 1, v___x_81_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_normalize(lean_object* v_m_84_, lean_object* v_e_85_){
_start:
{
lean_object* v___x_86_; uint8_t v___x_87_; 
v___x_86_ = lean_unsigned_to_nat(0u);
v___x_87_ = lean_nat_dec_eq(v_m_84_, v___x_86_);
if (v___x_87_ == 0)
{
lean_object* v___x_88_; 
lean_inc(v_m_84_);
v___x_88_ = lp_leancjson_CJson_normAux(v_m_84_, v_m_84_, v_e_85_);
return v___x_88_;
}
else
{
lean_object* v___x_89_; 
lean_dec(v_e_85_);
lean_dec(v_m_84_);
v___x_89_ = lean_obj_once(&lp_leancjson_CJson_normalize___closed__1, &lp_leancjson_CJson_normalize___closed__1_once, _init_lp_leancjson_CJson_normalize___closed__1);
return v___x_89_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_Num_ofScientific(lean_object* v_m_90_, lean_object* v_e_91_){
_start:
{
lean_object* v___x_92_; lean_object* v_p_93_; lean_object* v___y_95_; lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_92_ = lean_nat_abs(v_m_90_);
v_p_93_ = lp_leancjson_CJson_normalize(v___x_92_, v_e_91_);
v___x_105_ = lean_obj_once(&lp_leancjson_CJson_normalize___closed__0, &lp_leancjson_CJson_normalize___closed__0_once, _init_lp_leancjson_CJson_normalize___closed__0);
v___x_106_ = lean_int_dec_lt(v_m_90_, v___x_105_);
if (v___x_106_ == 0)
{
lean_object* v_fst_107_; lean_object* v___x_108_; 
v_fst_107_ = lean_ctor_get(v_p_93_, 0);
lean_inc(v_fst_107_);
v___x_108_ = lean_nat_to_int(v_fst_107_);
v___y_95_ = v___x_108_;
goto v___jp_94_;
}
else
{
lean_object* v_fst_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v_fst_109_ = lean_ctor_get(v_p_93_, 0);
lean_inc(v_fst_109_);
v___x_110_ = lean_nat_to_int(v_fst_109_);
v___x_111_ = lean_int_neg(v___x_110_);
lean_dec(v___x_110_);
v___y_95_ = v___x_111_;
goto v___jp_94_;
}
v___jp_94_:
{
lean_object* v_snd_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_103_; 
v_snd_96_ = lean_ctor_get(v_p_93_, 1);
v_isSharedCheck_103_ = !lean_is_exclusive(v_p_93_);
if (v_isSharedCheck_103_ == 0)
{
lean_object* v_unused_104_; 
v_unused_104_ = lean_ctor_get(v_p_93_, 0);
lean_dec(v_unused_104_);
v___x_98_ = v_p_93_;
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_snd_96_);
lean_dec(v_p_93_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_101_; 
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 0, v___y_95_);
v___x_101_ = v___x_98_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v___y_95_);
lean_ctor_set(v_reuseFailAlloc_102_, 1, v_snd_96_);
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
LEAN_EXPORT lean_object* lp_leancjson_CJson_Num_ofScientific___boxed(lean_object* v_m_112_, lean_object* v_e_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = lp_leancjson_CJson_Num_ofScientific(v_m_112_, v_e_113_);
lean_dec(v_m_112_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_Num_ofInt(lean_object* v_m_115_){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_116_ = lean_obj_once(&lp_leancjson_CJson_normalize___closed__0, &lp_leancjson_CJson_normalize___closed__0_once, _init_lp_leancjson_CJson_normalize___closed__0);
v___x_117_ = lp_leancjson_CJson_Num_ofScientific(v_m_115_, v___x_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_Num_ofInt___boxed(lean_object* v_m_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = lp_leancjson_CJson_Num_ofInt(v_m_118_);
lean_dec(v_m_118_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00CJson_parseExp_spec__1(lean_object* v_l_120_, lean_object* v_a_121_, lean_object* v_a_122_){
_start:
{
if (lean_obj_tag(v_a_121_) == 0)
{
lean_dec_ref(v_a_122_);
lean_inc(v_l_120_);
return v_l_120_;
}
else
{
lean_object* v_head_123_; lean_object* v_tail_124_; uint8_t v___x_125_; uint8_t v___x_126_; 
v_head_123_ = lean_ctor_get(v_a_121_, 0);
lean_inc(v_head_123_);
v_tail_124_ = lean_ctor_get(v_a_121_, 1);
lean_inc(v_tail_124_);
lean_dec_ref_known(v_a_121_, 2);
v___x_125_ = lean_unbox(v_head_123_);
v___x_126_ = lp_leancjson_CJson_isDigit(v___x_125_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; 
lean_dec(v_tail_124_);
lean_dec(v_head_123_);
v___x_127_ = lean_array_to_list(v_a_122_);
return v___x_127_;
}
else
{
lean_object* v___x_128_; 
v___x_128_ = lean_array_push(v_a_122_, v_head_123_);
v_a_121_ = v_tail_124_;
v_a_122_ = v___x_128_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00CJson_parseExp_spec__1___boxed(lean_object* v_l_130_, lean_object* v_a_131_, lean_object* v_a_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = lp_leancjson___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00CJson_parseExp_spec__1(v_l_130_, v_a_131_, v_a_132_);
lean_dec(v_l_130_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_dropWhile___at___00CJson_parseExp_spec__0(lean_object* v_x_134_){
_start:
{
if (lean_obj_tag(v_x_134_) == 0)
{
return v_x_134_;
}
else
{
lean_object* v_head_135_; lean_object* v_tail_136_; uint8_t v___x_137_; uint8_t v___x_138_; 
v_head_135_ = lean_ctor_get(v_x_134_, 0);
v_tail_136_ = lean_ctor_get(v_x_134_, 1);
v___x_137_ = lean_unbox(v_head_135_);
v___x_138_ = lp_leancjson_CJson_isDigit(v___x_137_);
if (v___x_138_ == 0)
{
lean_inc_ref(v_x_134_);
return v_x_134_;
}
else
{
v_x_134_ = v_tail_136_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_dropWhile___at___00CJson_parseExp_spec__0___boxed(lean_object* v_x_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = lp_leancjson_List_dropWhile___at___00CJson_parseExp_spec__0(v_x_140_);
lean_dec(v_x_140_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseExp(lean_object* v_s_150_){
_start:
{
lean_object* v___y_152_; lean_object* v___y_153_; uint8_t v___y_157_; lean_object* v___y_158_; 
if (lean_obj_tag(v_s_150_) == 0)
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_obj_once(&lp_leancjson_CJson_normalize___closed__0, &lp_leancjson_CJson_normalize___closed__0_once, _init_lp_leancjson_CJson_normalize___closed__0);
v___x_170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
lean_ctor_set(v___x_170_, 1, v_s_150_);
return v___x_170_;
}
else
{
lean_object* v_head_171_; lean_object* v_tail_172_; uint8_t v___y_174_; uint8_t v___x_183_; uint8_t v___x_184_; uint8_t v___x_185_; 
v_head_171_ = lean_ctor_get(v_s_150_, 0);
v_tail_172_ = lean_ctor_get(v_s_150_, 1);
v___x_183_ = 101;
v___x_184_ = lean_unbox(v_head_171_);
v___x_185_ = lean_uint8_dec_eq(v___x_184_, v___x_183_);
if (v___x_185_ == 0)
{
uint8_t v___x_186_; uint8_t v___x_187_; uint8_t v___x_188_; 
v___x_186_ = 69;
v___x_187_ = lean_unbox(v_head_171_);
v___x_188_ = lean_uint8_dec_eq(v___x_187_, v___x_186_);
if (v___x_188_ == 0)
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = lean_obj_once(&lp_leancjson_CJson_normalize___closed__0, &lp_leancjson_CJson_normalize___closed__0_once, _init_lp_leancjson_CJson_normalize___closed__0);
v___x_190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_190_, 0, v___x_189_);
lean_ctor_set(v___x_190_, 1, v_s_150_);
return v___x_190_;
}
else
{
goto v___jp_176_;
}
}
else
{
goto v___jp_176_;
}
v___jp_173_:
{
if (lean_obj_tag(v_tail_172_) == 0)
{
v___y_157_ = v___y_174_;
v___y_158_ = v_tail_172_;
goto v___jp_156_;
}
else
{
lean_object* v_tail_175_; 
v_tail_175_ = lean_ctor_get(v_tail_172_, 1);
lean_inc(v_tail_175_);
v___y_157_ = v___y_174_;
v___y_158_ = v_tail_175_;
goto v___jp_156_;
}
}
v___jp_176_:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_177_ = lean_alloc_closure((void*)(l_instDecidableEqUInt8___boxed), 2, 0);
v___x_178_ = l_List_head_x3f___redArg(v_tail_172_);
v___x_179_ = ((lean_object*)(lp_leancjson_CJson_parseExp___closed__1));
lean_inc(v___x_178_);
lean_inc_ref(v___x_177_);
v___x_180_ = l_Option_instDecidableEq___redArg(v___x_177_, v___x_178_, v___x_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_181_ = ((lean_object*)(lp_leancjson_CJson_parseExp___closed__2));
v___x_182_ = l_Option_instDecidableEq___redArg(v___x_177_, v___x_178_, v___x_181_);
if (v___x_182_ == 0)
{
lean_inc(v_tail_172_);
v___y_157_ = v___x_180_;
v___y_158_ = v_tail_172_;
goto v___jp_156_;
}
else
{
v___y_174_ = v___x_180_;
goto v___jp_173_;
}
}
else
{
lean_dec(v___x_178_);
lean_dec_ref(v___x_177_);
v___y_174_ = v___x_180_;
goto v___jp_173_;
}
}
}
v___jp_151_:
{
lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_154_ = lp_leancjson_List_dropWhile___at___00CJson_parseExp_spec__0(v___y_152_);
lean_dec(v___y_152_);
v___x_155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_155_, 0, v___y_153_);
lean_ctor_set(v___x_155_, 1, v___x_154_);
return v___x_155_;
}
v___jp_156_:
{
lean_object* v___x_159_; lean_object* v_d_160_; uint8_t v___x_161_; 
v___x_159_ = ((lean_object*)(lp_leancjson_CJson_parseExp___closed__0));
lean_inc(v___y_158_);
v_d_160_ = lp_leancjson___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00CJson_parseExp_spec__1(v___y_158_, v___y_158_, v___x_159_);
v___x_161_ = l_List_instDecidableEqNil___redArg(v_d_160_);
if (v___x_161_ == 0)
{
lean_dec(v_s_150_);
if (v___y_157_ == 0)
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = lp_leancjson_CJson_natOf(v_d_160_);
lean_dec(v_d_160_);
v___x_163_ = lean_nat_to_int(v___x_162_);
v___y_152_ = v___y_158_;
v___y_153_ = v___x_163_;
goto v___jp_151_;
}
else
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_164_ = lp_leancjson_CJson_natOf(v_d_160_);
lean_dec(v_d_160_);
v___x_165_ = lean_nat_to_int(v___x_164_);
v___x_166_ = lean_int_neg(v___x_165_);
lean_dec(v___x_165_);
v___y_152_ = v___y_158_;
v___y_153_ = v___x_166_;
goto v___jp_151_;
}
}
else
{
lean_object* v___x_167_; lean_object* v___x_168_; 
lean_dec(v_d_160_);
lean_dec(v___y_158_);
v___x_167_ = lean_obj_once(&lp_leancjson_CJson_normalize___closed__0, &lp_leancjson_CJson_normalize___closed__0_once, _init_lp_leancjson_CJson_normalize___closed__0);
v___x_168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
lean_ctor_set(v___x_168_, 1, v_s_150_);
return v___x_168_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseFrac(lean_object* v_s_191_){
_start:
{
if (lean_obj_tag(v_s_191_) == 0)
{
lean_object* v___x_192_; 
v___x_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_192_, 0, v_s_191_);
lean_ctor_set(v___x_192_, 1, v_s_191_);
return v___x_192_;
}
else
{
lean_object* v_head_193_; lean_object* v_tail_194_; uint8_t v___x_195_; uint8_t v___x_196_; uint8_t v___x_197_; 
v_head_193_ = lean_ctor_get(v_s_191_, 0);
v_tail_194_ = lean_ctor_get(v_s_191_, 1);
v___x_195_ = 46;
v___x_196_ = lean_unbox(v_head_193_);
v___x_197_ = lean_uint8_dec_eq(v___x_196_, v___x_195_);
if (v___x_197_ == 0)
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_box(0);
v___x_199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_199_, 0, v___x_198_);
lean_ctor_set(v___x_199_, 1, v_s_191_);
return v___x_199_;
}
else
{
lean_object* v___x_200_; lean_object* v_f_201_; uint8_t v___x_202_; 
v___x_200_ = ((lean_object*)(lp_leancjson_CJson_parseExp___closed__0));
lean_inc(v_tail_194_);
v_f_201_ = lp_leancjson___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00CJson_parseExp_spec__1(v_tail_194_, v_tail_194_, v___x_200_);
v___x_202_ = l_List_instDecidableEqNil___redArg(v_f_201_);
if (v___x_202_ == 0)
{
lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_210_; 
lean_inc(v_tail_194_);
v_isSharedCheck_210_ = !lean_is_exclusive(v_s_191_);
if (v_isSharedCheck_210_ == 0)
{
lean_object* v_unused_211_; lean_object* v_unused_212_; 
v_unused_211_ = lean_ctor_get(v_s_191_, 1);
lean_dec(v_unused_211_);
v_unused_212_ = lean_ctor_get(v_s_191_, 0);
lean_dec(v_unused_212_);
v___x_204_ = v_s_191_;
v_isShared_205_ = v_isSharedCheck_210_;
goto v_resetjp_203_;
}
else
{
lean_dec(v_s_191_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_210_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_206_; lean_object* v___x_208_; 
v___x_206_ = lp_leancjson_List_dropWhile___at___00CJson_parseExp_spec__0(v_tail_194_);
lean_dec(v_tail_194_);
if (v_isShared_205_ == 0)
{
lean_ctor_set_tag(v___x_204_, 0);
lean_ctor_set(v___x_204_, 1, v___x_206_);
lean_ctor_set(v___x_204_, 0, v_f_201_);
v___x_208_ = v___x_204_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_f_201_);
lean_ctor_set(v_reuseFailAlloc_209_, 1, v___x_206_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
}
else
{
lean_object* v___x_213_; lean_object* v___x_214_; 
lean_dec(v_f_201_);
v___x_213_ = lean_box(0);
v___x_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
lean_ctor_set(v___x_214_, 1, v_s_191_);
return v___x_214_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseInt(lean_object* v_s_219_){
_start:
{
if (lean_obj_tag(v_s_219_) == 0)
{
lean_object* v___x_220_; 
v___x_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_220_, 0, v_s_219_);
lean_ctor_set(v___x_220_, 1, v_s_219_);
return v___x_220_;
}
else
{
lean_object* v_head_221_; lean_object* v_tail_222_; uint8_t v___x_223_; uint8_t v___x_224_; uint8_t v___x_225_; 
v_head_221_ = lean_ctor_get(v_s_219_, 0);
v_tail_222_ = lean_ctor_get(v_s_219_, 1);
v___x_223_ = 48;
v___x_224_ = lean_unbox(v_head_221_);
v___x_225_ = lean_uint8_dec_eq(v___x_224_, v___x_223_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_235_; 
v___x_226_ = ((lean_object*)(lp_leancjson_CJson_parseExp___closed__0));
lean_inc_ref(v_s_219_);
v___x_227_ = lp_leancjson___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00CJson_parseExp_spec__1(v_s_219_, v_s_219_, v___x_226_);
v___x_228_ = lp_leancjson_List_dropWhile___at___00CJson_parseExp_spec__0(v_s_219_);
v_isSharedCheck_235_ = !lean_is_exclusive(v_s_219_);
if (v_isSharedCheck_235_ == 0)
{
lean_object* v_unused_236_; lean_object* v_unused_237_; 
v_unused_236_ = lean_ctor_get(v_s_219_, 1);
lean_dec(v_unused_236_);
v_unused_237_ = lean_ctor_get(v_s_219_, 0);
lean_dec(v_unused_237_);
v___x_230_ = v_s_219_;
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
else
{
lean_dec(v_s_219_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___x_233_; 
if (v_isShared_231_ == 0)
{
lean_ctor_set_tag(v___x_230_, 0);
lean_ctor_set(v___x_230_, 1, v___x_228_);
lean_ctor_set(v___x_230_, 0, v___x_227_);
v___x_233_ = v___x_230_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_227_);
lean_ctor_set(v_reuseFailAlloc_234_, 1, v___x_228_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
else
{
lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_245_; 
lean_inc(v_tail_222_);
v_isSharedCheck_245_ = !lean_is_exclusive(v_s_219_);
if (v_isSharedCheck_245_ == 0)
{
lean_object* v_unused_246_; lean_object* v_unused_247_; 
v_unused_246_ = lean_ctor_get(v_s_219_, 1);
lean_dec(v_unused_246_);
v_unused_247_ = lean_ctor_get(v_s_219_, 0);
lean_dec(v_unused_247_);
v___x_239_ = v_s_219_;
v_isShared_240_ = v_isSharedCheck_245_;
goto v_resetjp_238_;
}
else
{
lean_dec(v_s_219_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_245_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_241_; lean_object* v___x_243_; 
v___x_241_ = ((lean_object*)(lp_leancjson_CJson_parseInt___closed__0));
if (v_isShared_240_ == 0)
{
lean_ctor_set_tag(v___x_239_, 0);
lean_ctor_set(v___x_239_, 0, v___x_241_);
v___x_243_ = v___x_239_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v___x_241_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v_tail_222_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseUnsigned(lean_object* v_s_248_){
_start:
{
lean_object* v_i_249_; lean_object* v_fst_250_; lean_object* v_snd_251_; uint8_t v___x_252_; 
v_i_249_ = lp_leancjson_CJson_parseInt(v_s_248_);
v_fst_250_ = lean_ctor_get(v_i_249_, 0);
lean_inc(v_fst_250_);
v_snd_251_ = lean_ctor_get(v_i_249_, 1);
lean_inc(v_snd_251_);
lean_dec_ref(v_i_249_);
v___x_252_ = l_List_instDecidableEqNil___redArg(v_fst_250_);
if (v___x_252_ == 0)
{
lean_object* v_f_253_; lean_object* v_fst_254_; lean_object* v_snd_255_; lean_object* v_x_256_; lean_object* v_fst_257_; lean_object* v_snd_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_272_; 
v_f_253_ = lp_leancjson_CJson_parseFrac(v_snd_251_);
v_fst_254_ = lean_ctor_get(v_f_253_, 0);
lean_inc(v_fst_254_);
v_snd_255_ = lean_ctor_get(v_f_253_, 1);
lean_inc(v_snd_255_);
lean_dec_ref(v_f_253_);
v_x_256_ = lp_leancjson_CJson_parseExp(v_snd_255_);
v_fst_257_ = lean_ctor_get(v_x_256_, 0);
v_snd_258_ = lean_ctor_get(v_x_256_, 1);
v_isSharedCheck_272_ = !lean_is_exclusive(v_x_256_);
if (v_isSharedCheck_272_ == 0)
{
v___x_260_ = v_x_256_;
v_isShared_261_ = v_isSharedCheck_272_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_snd_258_);
lean_inc(v_fst_257_);
lean_dec(v_x_256_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_272_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_269_; 
lean_inc(v_fst_254_);
v___x_262_ = l_List_appendTR___redArg(v_fst_250_, v_fst_254_);
v___x_263_ = lp_leancjson_CJson_natOf(v___x_262_);
lean_dec(v___x_262_);
v___x_264_ = l_List_lengthTR___redArg(v_fst_254_);
lean_dec(v_fst_254_);
v___x_265_ = lean_nat_to_int(v___x_264_);
v___x_266_ = lean_int_sub(v_fst_257_, v___x_265_);
lean_dec(v___x_265_);
lean_dec(v_fst_257_);
v___x_267_ = lp_leancjson_CJson_normalize(v___x_263_, v___x_266_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 0, v___x_267_);
v___x_269_ = v___x_260_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v___x_267_);
lean_ctor_set(v_reuseFailAlloc_271_, 1, v_snd_258_);
v___x_269_ = v_reuseFailAlloc_271_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
lean_object* v___x_270_; 
v___x_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
return v___x_270_;
}
}
}
else
{
lean_object* v___x_273_; 
lean_dec(v_snd_251_);
lean_dec(v_fst_250_);
v___x_273_ = lean_box(0);
return v___x_273_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseNumber(lean_object* v_s_274_){
_start:
{
lean_object* v___y_276_; lean_object* v_snd_277_; lean_object* v___y_278_; lean_object* v___y_283_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; uint8_t v___x_303_; 
v___x_300_ = lean_alloc_closure((void*)(l_instDecidableEqUInt8___boxed), 2, 0);
v___x_301_ = l_List_head_x3f___redArg(v_s_274_);
v___x_302_ = ((lean_object*)(lp_leancjson_CJson_parseExp___closed__1));
v___x_303_ = l_Option_instDecidableEq___redArg(v___x_300_, v___x_301_, v___x_302_);
if (v___x_303_ == 0)
{
lean_inc(v_s_274_);
v___y_283_ = v_s_274_;
goto v___jp_282_;
}
else
{
if (lean_obj_tag(v_s_274_) == 0)
{
v___y_283_ = v_s_274_;
goto v___jp_282_;
}
else
{
lean_object* v_tail_304_; 
v_tail_304_ = lean_ctor_get(v_s_274_, 1);
lean_inc(v_tail_304_);
v___y_283_ = v_tail_304_;
goto v___jp_282_;
}
}
v___jp_275_:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_279_, 0, v___y_278_);
lean_ctor_set(v___x_279_, 1, v_snd_277_);
v___x_280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
lean_ctor_set(v___x_280_, 1, v___y_276_);
v___x_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
return v___x_281_;
}
v___jp_282_:
{
lean_object* v___x_284_; 
v___x_284_ = lp_leancjson_CJson_parseUnsigned(v___y_283_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v___x_285_; 
lean_dec(v_s_274_);
v___x_285_ = lean_box(0);
return v___x_285_;
}
else
{
lean_object* v_val_286_; lean_object* v_fst_287_; lean_object* v_snd_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; uint8_t v___x_292_; 
v_val_286_ = lean_ctor_get(v___x_284_, 0);
lean_inc(v_val_286_);
lean_dec_ref_known(v___x_284_, 1);
v_fst_287_ = lean_ctor_get(v_val_286_, 0);
lean_inc(v_fst_287_);
v_snd_288_ = lean_ctor_get(v_val_286_, 1);
lean_inc(v_snd_288_);
lean_dec(v_val_286_);
v___x_289_ = lean_alloc_closure((void*)(l_instDecidableEqUInt8___boxed), 2, 0);
v___x_290_ = l_List_head_x3f___redArg(v_s_274_);
lean_dec(v_s_274_);
v___x_291_ = ((lean_object*)(lp_leancjson_CJson_parseExp___closed__1));
v___x_292_ = l_Option_instDecidableEq___redArg(v___x_289_, v___x_290_, v___x_291_);
if (v___x_292_ == 0)
{
lean_object* v_fst_293_; lean_object* v_snd_294_; lean_object* v___x_295_; 
v_fst_293_ = lean_ctor_get(v_fst_287_, 0);
lean_inc(v_fst_293_);
v_snd_294_ = lean_ctor_get(v_fst_287_, 1);
lean_inc(v_snd_294_);
lean_dec(v_fst_287_);
v___x_295_ = lean_nat_to_int(v_fst_293_);
v___y_276_ = v_snd_288_;
v_snd_277_ = v_snd_294_;
v___y_278_ = v___x_295_;
goto v___jp_275_;
}
else
{
lean_object* v_fst_296_; lean_object* v_snd_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v_fst_296_ = lean_ctor_get(v_fst_287_, 0);
lean_inc(v_fst_296_);
v_snd_297_ = lean_ctor_get(v_fst_287_, 1);
lean_inc(v_snd_297_);
lean_dec(v_fst_287_);
v___x_298_ = lean_nat_to_int(v_fst_296_);
v___x_299_ = lean_int_neg(v___x_298_);
lean_dec(v___x_298_);
v___y_276_ = v_snd_288_;
v_snd_277_ = v_snd_297_;
v___y_278_ = v___x_299_;
goto v___jp_275_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_pad2(lean_object* v_ds_305_){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; uint8_t v___x_308_; 
v___x_306_ = l_List_lengthTR___redArg(v_ds_305_);
v___x_307_ = lean_unsigned_to_nat(2u);
v___x_308_ = lean_nat_dec_lt(v___x_306_, v___x_307_);
lean_dec(v___x_306_);
if (v___x_308_ == 0)
{
return v_ds_305_;
}
else
{
uint8_t v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_309_ = 48;
v___x_310_ = lean_box(v___x_309_);
v___x_311_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
lean_ctor_set(v___x_311_, 1, v_ds_305_);
return v___x_311_;
}
}
}
static lean_object* _init_lp_leancjson_CJson_printUnsigned___closed__0(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = lean_unsigned_to_nat(4u);
v___x_313_ = lean_nat_to_int(v___x_312_);
return v___x_313_;
}
}
static lean_object* _init_lp_leancjson_CJson_printUnsigned___closed__1(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_obj_once(&lp_leancjson_CJson_printUnsigned___closed__0, &lp_leancjson_CJson_printUnsigned___closed__0_once, _init_lp_leancjson_CJson_printUnsigned___closed__0);
v___x_315_ = lean_int_neg(v___x_314_);
return v___x_315_;
}
}
static lean_object* _init_lp_leancjson_CJson_printUnsigned___closed__2(void){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_316_ = lean_unsigned_to_nat(21u);
v___x_317_ = lean_nat_to_int(v___x_316_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_printUnsigned(lean_object* v_m_318_, lean_object* v_e_319_){
_start:
{
lean_object* v_ds_320_; lean_object* v___x_321_; lean_object* v_k_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v_x_326_; lean_object* v___y_328_; uint8_t v___y_329_; lean_object* v___y_330_; uint8_t v___y_331_; lean_object* v___x_341_; lean_object* v___y_343_; lean_object* v___y_344_; uint8_t v___x_384_; 
v_ds_320_ = lp_leancjson_CJson_natDigits(v_m_318_);
v___x_321_ = l_List_lengthTR___redArg(v_ds_320_);
lean_inc(v___x_321_);
v_k_322_ = lean_nat_to_int(v___x_321_);
v___x_323_ = lean_int_add(v_e_319_, v_k_322_);
v___x_324_ = lean_unsigned_to_nat(1u);
v___x_325_ = lean_obj_once(&lp_leancjson_CJson_normAux___closed__0, &lp_leancjson_CJson_normAux___closed__0_once, _init_lp_leancjson_CJson_normAux___closed__0);
v_x_326_ = lean_int_sub(v___x_323_, v___x_325_);
lean_dec(v___x_323_);
v___x_341_ = lean_obj_once(&lp_leancjson_CJson_normalize___closed__0, &lp_leancjson_CJson_normalize___closed__0_once, _init_lp_leancjson_CJson_normalize___closed__0);
v___x_384_ = lean_int_dec_le(v___x_341_, v_e_319_);
if (v___x_384_ == 0)
{
goto v___jp_358_;
}
else
{
lean_object* v___x_385_; uint8_t v___x_386_; 
v___x_385_ = lean_obj_once(&lp_leancjson_CJson_printUnsigned___closed__2, &lp_leancjson_CJson_printUnsigned___closed__2_once, _init_lp_leancjson_CJson_printUnsigned___closed__2);
v___x_386_ = lean_int_dec_lt(v_x_326_, v___x_385_);
if (v___x_386_ == 0)
{
goto v___jp_358_;
}
else
{
lean_object* v___x_387_; uint8_t v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
lean_dec(v_x_326_);
lean_dec(v_k_322_);
lean_dec(v___x_321_);
v___x_387_ = l_Int_toNat(v_e_319_);
v___x_388_ = 48;
v___x_389_ = lean_box(v___x_388_);
v___x_390_ = l_List_replicateTR___redArg(v___x_387_, v___x_389_);
v___x_391_ = l_List_appendTR___redArg(v_ds_320_, v___x_390_);
return v___x_391_;
}
}
v___jp_327_:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_332_ = lean_nat_abs(v_x_326_);
lean_dec(v_x_326_);
v___x_333_ = lp_leancjson_CJson_natDigits(v___x_332_);
v___x_334_ = lp_leancjson_CJson_pad2(v___x_333_);
v___x_335_ = lean_box(v___y_331_);
v___x_336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
lean_ctor_set(v___x_336_, 1, v___x_334_);
v___x_337_ = lean_box(v___y_329_);
v___x_338_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
lean_ctor_set(v___x_338_, 1, v___x_336_);
v___x_339_ = l_List_appendTR___redArg(v___y_330_, v___x_338_);
v___x_340_ = l_List_appendTR___redArg(v___y_328_, v___x_339_);
return v___x_340_;
}
v___jp_342_:
{
uint8_t v___x_345_; uint8_t v___x_346_; 
v___x_345_ = 101;
v___x_346_ = lean_int_dec_lt(v_x_326_, v___x_341_);
if (v___x_346_ == 0)
{
uint8_t v___x_347_; 
v___x_347_ = 43;
v___y_328_ = v___y_343_;
v___y_329_ = v___x_345_;
v___y_330_ = v___y_344_;
v___y_331_ = v___x_347_;
goto v___jp_327_;
}
else
{
uint8_t v___x_348_; 
v___x_348_ = 45;
v___y_328_ = v___y_343_;
v___y_329_ = v___x_345_;
v___y_330_ = v___y_344_;
v___y_331_ = v___x_348_;
goto v___jp_327_;
}
}
v___jp_349_:
{
lean_object* v___x_350_; lean_object* v___x_351_; uint8_t v___x_352_; 
v___x_350_ = ((lean_object*)(lp_leancjson_CJson_parseExp___closed__0));
lean_inc(v_ds_320_);
v___x_351_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_ds_320_, v_ds_320_, v___x_324_, v___x_350_);
v___x_352_ = lean_nat_dec_lt(v___x_324_, v___x_321_);
lean_dec(v___x_321_);
if (v___x_352_ == 0)
{
lean_object* v___x_353_; 
lean_dec(v_ds_320_);
v___x_353_ = lean_box(0);
v___y_343_ = v___x_351_;
v___y_344_ = v___x_353_;
goto v___jp_342_;
}
else
{
uint8_t v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_354_ = 46;
v___x_355_ = l_List_drop___redArg(v___x_324_, v_ds_320_);
lean_dec(v_ds_320_);
v___x_356_ = lean_box(v___x_354_);
v___x_357_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
lean_ctor_set(v___x_357_, 1, v___x_355_);
v___y_343_ = v___x_351_;
v___y_344_ = v___x_357_;
goto v___jp_342_;
}
}
v___jp_358_:
{
uint8_t v___x_359_; 
v___x_359_ = lean_int_dec_lt(v_e_319_, v___x_341_);
if (v___x_359_ == 0)
{
lean_dec(v_k_322_);
goto v___jp_349_;
}
else
{
lean_object* v___x_360_; uint8_t v___x_361_; 
v___x_360_ = lean_obj_once(&lp_leancjson_CJson_printUnsigned___closed__1, &lp_leancjson_CJson_printUnsigned___closed__1_once, _init_lp_leancjson_CJson_printUnsigned___closed__1);
v___x_361_ = lean_int_dec_le(v___x_360_, v_x_326_);
if (v___x_361_ == 0)
{
lean_dec(v_k_322_);
goto v___jp_349_;
}
else
{
lean_object* v___x_362_; uint8_t v___x_363_; 
lean_dec(v_x_326_);
lean_dec(v___x_321_);
v___x_362_ = lean_int_neg(v_e_319_);
v___x_363_ = lean_int_dec_lt(v___x_362_, v_k_322_);
if (v___x_363_ == 0)
{
uint8_t v___x_364_; uint8_t v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_364_ = 48;
v___x_365_ = 46;
v___x_366_ = lean_int_sub(v___x_362_, v_k_322_);
lean_dec(v_k_322_);
lean_dec(v___x_362_);
v___x_367_ = l_Int_toNat(v___x_366_);
lean_dec(v___x_366_);
v___x_368_ = lean_box(v___x_364_);
v___x_369_ = l_List_replicateTR___redArg(v___x_367_, v___x_368_);
v___x_370_ = l_List_appendTR___redArg(v___x_369_, v_ds_320_);
v___x_371_ = lean_box(v___x_365_);
v___x_372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
lean_ctor_set(v___x_372_, 1, v___x_370_);
v___x_373_ = lean_box(v___x_364_);
v___x_374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
lean_ctor_set(v___x_374_, 1, v___x_372_);
return v___x_374_;
}
else
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; uint8_t v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
lean_dec(v___x_362_);
v___x_375_ = lean_int_add(v_k_322_, v_e_319_);
lean_dec(v_k_322_);
v___x_376_ = l_Int_toNat(v___x_375_);
lean_dec(v___x_375_);
v___x_377_ = ((lean_object*)(lp_leancjson_CJson_parseExp___closed__0));
lean_inc(v___x_376_);
lean_inc(v_ds_320_);
v___x_378_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_ds_320_, v_ds_320_, v___x_376_, v___x_377_);
v___x_379_ = 46;
v___x_380_ = l_List_drop___redArg(v___x_376_, v_ds_320_);
lean_dec(v_ds_320_);
v___x_381_ = lean_box(v___x_379_);
v___x_382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
lean_ctor_set(v___x_382_, 1, v___x_380_);
v___x_383_ = l_List_appendTR___redArg(v___x_378_, v___x_382_);
return v___x_383_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_printUnsigned___boxed(lean_object* v_m_392_, lean_object* v_e_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = lp_leancjson_CJson_printUnsigned(v_m_392_, v_e_393_);
lean_dec(v_e_393_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_printNum(lean_object* v_n_399_){
_start:
{
lean_object* v_mant_400_; lean_object* v_exp_401_; lean_object* v___y_403_; lean_object* v___x_407_; uint8_t v___x_408_; 
v_mant_400_ = lean_ctor_get(v_n_399_, 0);
v_exp_401_ = lean_ctor_get(v_n_399_, 1);
v___x_407_ = lean_obj_once(&lp_leancjson_CJson_normalize___closed__0, &lp_leancjson_CJson_normalize___closed__0_once, _init_lp_leancjson_CJson_normalize___closed__0);
v___x_408_ = lean_int_dec_lt(v_mant_400_, v___x_407_);
if (v___x_408_ == 0)
{
lean_object* v___x_409_; 
v___x_409_ = lean_box(0);
v___y_403_ = v___x_409_;
goto v___jp_402_;
}
else
{
lean_object* v___x_410_; 
v___x_410_ = ((lean_object*)(lp_leancjson_CJson_printNum___closed__0));
v___y_403_ = v___x_410_;
goto v___jp_402_;
}
v___jp_402_:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_404_ = lean_nat_abs(v_mant_400_);
v___x_405_ = lp_leancjson_CJson_printUnsigned(v___x_404_, v_exp_401_);
lean_inc(v___y_403_);
v___x_406_ = l_List_appendTR___redArg(v___y_403_, v___x_405_);
return v___x_406_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_printNum___boxed(lean_object* v_n_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = lp_leancjson_CJson_printNum(v_n_411_);
lean_dec_ref(v_n_411_);
return v_res_412_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_leancjson_CJson_Number(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
