// Lean compiler output
// Module: CJson.Str
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
lean_object* lean_array_to_list(lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_uint8_to_nat(uint8_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_uint8_of_nat(lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_hexDigit(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_hexDigit___boxed(lean_object*);
static const lean_ctor_object lp_leancjson_CJson_escapeByte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(116) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_escapeByte___closed__0 = (const lean_object*)&lp_leancjson_CJson_escapeByte___closed__0_value;
static const lean_ctor_object lp_leancjson_CJson_escapeByte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(92) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_escapeByte___closed__0_value)}};
static const lean_object* lp_leancjson_CJson_escapeByte___closed__1 = (const lean_object*)&lp_leancjson_CJson_escapeByte___closed__1_value;
static const lean_ctor_object lp_leancjson_CJson_escapeByte___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(114) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_escapeByte___closed__2 = (const lean_object*)&lp_leancjson_CJson_escapeByte___closed__2_value;
static const lean_ctor_object lp_leancjson_CJson_escapeByte___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(92) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_escapeByte___closed__2_value)}};
static const lean_object* lp_leancjson_CJson_escapeByte___closed__3 = (const lean_object*)&lp_leancjson_CJson_escapeByte___closed__3_value;
static const lean_ctor_object lp_leancjson_CJson_escapeByte___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(110) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_escapeByte___closed__4 = (const lean_object*)&lp_leancjson_CJson_escapeByte___closed__4_value;
static const lean_ctor_object lp_leancjson_CJson_escapeByte___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(92) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_escapeByte___closed__4_value)}};
static const lean_object* lp_leancjson_CJson_escapeByte___closed__5 = (const lean_object*)&lp_leancjson_CJson_escapeByte___closed__5_value;
static const lean_ctor_object lp_leancjson_CJson_escapeByte___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(102) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_escapeByte___closed__6 = (const lean_object*)&lp_leancjson_CJson_escapeByte___closed__6_value;
static const lean_ctor_object lp_leancjson_CJson_escapeByte___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(92) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_escapeByte___closed__6_value)}};
static const lean_object* lp_leancjson_CJson_escapeByte___closed__7 = (const lean_object*)&lp_leancjson_CJson_escapeByte___closed__7_value;
static const lean_ctor_object lp_leancjson_CJson_escapeByte___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(98) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_escapeByte___closed__8 = (const lean_object*)&lp_leancjson_CJson_escapeByte___closed__8_value;
static const lean_ctor_object lp_leancjson_CJson_escapeByte___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(92) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_escapeByte___closed__8_value)}};
static const lean_object* lp_leancjson_CJson_escapeByte___closed__9 = (const lean_object*)&lp_leancjson_CJson_escapeByte___closed__9_value;
static const lean_ctor_object lp_leancjson_CJson_escapeByte___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(92) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_escapeByte___closed__10 = (const lean_object*)&lp_leancjson_CJson_escapeByte___closed__10_value;
static const lean_ctor_object lp_leancjson_CJson_escapeByte___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(92) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_escapeByte___closed__10_value)}};
static const lean_object* lp_leancjson_CJson_escapeByte___closed__11 = (const lean_object*)&lp_leancjson_CJson_escapeByte___closed__11_value;
static const lean_ctor_object lp_leancjson_CJson_escapeByte___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(34) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_escapeByte___closed__12 = (const lean_object*)&lp_leancjson_CJson_escapeByte___closed__12_value;
static const lean_ctor_object lp_leancjson_CJson_escapeByte___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(92) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_escapeByte___closed__12_value)}};
static const lean_object* lp_leancjson_CJson_escapeByte___closed__13 = (const lean_object*)&lp_leancjson_CJson_escapeByte___closed__13_value;
LEAN_EXPORT lean_object* lp_leancjson_CJson_escapeByte(uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_escapeByte___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00CJson_printStr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00CJson_printStr_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object lp_leancjson_CJson_printStr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_leancjson_CJson_printStr___closed__0 = (const lean_object*)&lp_leancjson_CJson_printStr___closed__0_value;
LEAN_EXPORT lean_object* lp_leancjson_CJson_printStr(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_printStr___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_hexVal(uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_hexVal___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseHex4(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_utf8(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_utf8___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_utf8Decode(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_utf8Decode___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseUnicode(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseStrBody(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseStr(lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_hexDigit(lean_object* v_n_1_){
_start:
{
lean_object* v___x_2_; uint8_t v___x_3_; 
v___x_2_ = lean_unsigned_to_nat(10u);
v___x_3_ = lean_nat_dec_lt(v_n_1_, v___x_2_);
if (v___x_3_ == 0)
{
lean_object* v___x_4_; lean_object* v___x_5_; uint8_t v___x_6_; 
v___x_4_ = lean_unsigned_to_nat(87u);
v___x_5_ = lean_nat_add(v___x_4_, v_n_1_);
v___x_6_ = lean_uint8_of_nat(v___x_5_);
lean_dec(v___x_5_);
return v___x_6_;
}
else
{
lean_object* v___x_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_7_ = lean_unsigned_to_nat(48u);
v___x_8_ = lean_nat_add(v___x_7_, v_n_1_);
v___x_9_ = lean_uint8_of_nat(v___x_8_);
lean_dec(v___x_8_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_hexDigit___boxed(lean_object* v_n_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = lp_leancjson_CJson_hexDigit(v_n_10_);
lean_dec(v_n_10_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_escapeByte(uint8_t v_c_69_){
_start:
{
uint8_t v___x_70_; uint8_t v___x_71_; 
v___x_70_ = 34;
v___x_71_ = lean_uint8_dec_eq(v_c_69_, v___x_70_);
if (v___x_71_ == 0)
{
uint8_t v___x_72_; uint8_t v___x_73_; 
v___x_72_ = 92;
v___x_73_ = lean_uint8_dec_eq(v_c_69_, v___x_72_);
if (v___x_73_ == 0)
{
uint8_t v___x_74_; uint8_t v___x_75_; 
v___x_74_ = 8;
v___x_75_ = lean_uint8_dec_eq(v_c_69_, v___x_74_);
if (v___x_75_ == 0)
{
uint8_t v___x_76_; uint8_t v___x_77_; 
v___x_76_ = 12;
v___x_77_ = lean_uint8_dec_eq(v_c_69_, v___x_76_);
if (v___x_77_ == 0)
{
uint8_t v___x_78_; uint8_t v___x_79_; 
v___x_78_ = 10;
v___x_79_ = lean_uint8_dec_eq(v_c_69_, v___x_78_);
if (v___x_79_ == 0)
{
uint8_t v___x_80_; uint8_t v___x_81_; 
v___x_80_ = 13;
v___x_81_ = lean_uint8_dec_eq(v_c_69_, v___x_80_);
if (v___x_81_ == 0)
{
uint8_t v___x_82_; uint8_t v___x_83_; 
v___x_82_ = 9;
v___x_83_ = lean_uint8_dec_eq(v_c_69_, v___x_82_);
if (v___x_83_ == 0)
{
lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
v___x_84_ = lean_uint8_to_nat(v_c_69_);
v___x_85_ = lean_unsigned_to_nat(32u);
v___x_86_ = lean_nat_dec_lt(v___x_84_, v___x_85_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_87_ = lean_box(0);
v___x_88_ = lean_box(v_c_69_);
v___x_89_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
lean_ctor_set(v___x_89_, 1, v___x_87_);
return v___x_89_;
}
else
{
uint8_t v___x_90_; uint8_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; uint8_t v___x_95_; lean_object* v___x_96_; uint8_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_90_ = 117;
v___x_91_ = 48;
v___x_92_ = lean_unsigned_to_nat(16u);
v___x_93_ = lean_unsigned_to_nat(4u);
v___x_94_ = lean_nat_shiftr(v___x_84_, v___x_93_);
v___x_95_ = lp_leancjson_CJson_hexDigit(v___x_94_);
lean_dec(v___x_94_);
v___x_96_ = lean_nat_mod(v___x_84_, v___x_92_);
v___x_97_ = lp_leancjson_CJson_hexDigit(v___x_96_);
lean_dec(v___x_96_);
v___x_98_ = lean_box(0);
v___x_99_ = lean_box(v___x_97_);
v___x_100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
lean_ctor_set(v___x_100_, 1, v___x_98_);
v___x_101_ = lean_box(v___x_95_);
v___x_102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
lean_ctor_set(v___x_102_, 1, v___x_100_);
v___x_103_ = lean_box(v___x_91_);
v___x_104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_103_);
lean_ctor_set(v___x_104_, 1, v___x_102_);
v___x_105_ = lean_box(v___x_91_);
v___x_106_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
lean_ctor_set(v___x_106_, 1, v___x_104_);
v___x_107_ = lean_box(v___x_90_);
v___x_108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
lean_ctor_set(v___x_108_, 1, v___x_106_);
v___x_109_ = lean_box(v___x_72_);
v___x_110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
lean_ctor_set(v___x_110_, 1, v___x_108_);
return v___x_110_;
}
}
else
{
lean_object* v___x_111_; 
v___x_111_ = ((lean_object*)(lp_leancjson_CJson_escapeByte___closed__1));
return v___x_111_;
}
}
else
{
lean_object* v___x_112_; 
v___x_112_ = ((lean_object*)(lp_leancjson_CJson_escapeByte___closed__3));
return v___x_112_;
}
}
else
{
lean_object* v___x_113_; 
v___x_113_ = ((lean_object*)(lp_leancjson_CJson_escapeByte___closed__5));
return v___x_113_;
}
}
else
{
lean_object* v___x_114_; 
v___x_114_ = ((lean_object*)(lp_leancjson_CJson_escapeByte___closed__7));
return v___x_114_;
}
}
else
{
lean_object* v___x_115_; 
v___x_115_ = ((lean_object*)(lp_leancjson_CJson_escapeByte___closed__9));
return v___x_115_;
}
}
else
{
lean_object* v___x_116_; 
v___x_116_ = ((lean_object*)(lp_leancjson_CJson_escapeByte___closed__11));
return v___x_116_;
}
}
else
{
lean_object* v___x_117_; 
v___x_117_ = ((lean_object*)(lp_leancjson_CJson_escapeByte___closed__13));
return v___x_117_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_escapeByte___boxed(lean_object* v_c_118_){
_start:
{
uint8_t v_c_boxed_119_; lean_object* v_res_120_; 
v_c_boxed_119_ = lean_unbox(v_c_118_);
v_res_120_ = lp_leancjson_CJson_escapeByte(v_c_boxed_119_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00CJson_printStr_spec__0(lean_object* v_a_121_, lean_object* v_a_122_){
_start:
{
if (lean_obj_tag(v_a_121_) == 0)
{
lean_object* v___x_123_; 
v___x_123_ = lean_array_to_list(v_a_122_);
return v___x_123_;
}
else
{
lean_object* v_head_124_; lean_object* v_tail_125_; uint8_t v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v_head_124_ = lean_ctor_get(v_a_121_, 0);
v_tail_125_ = lean_ctor_get(v_a_121_, 1);
v___x_126_ = lean_unbox(v_head_124_);
v___x_127_ = lp_leancjson_CJson_escapeByte(v___x_126_);
v___x_128_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_122_, v___x_127_);
v_a_121_ = v_tail_125_;
v_a_122_ = v___x_128_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00CJson_printStr_spec__0___boxed(lean_object* v_a_130_, lean_object* v_a_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = lp_leancjson___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00CJson_printStr_spec__0(v_a_130_, v_a_131_);
lean_dec(v_a_130_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_printStr(lean_object* v_s_135_){
_start:
{
uint8_t v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_136_ = 34;
v___x_137_ = ((lean_object*)(lp_leancjson_CJson_printStr___closed__0));
v___x_138_ = lp_leancjson___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00CJson_printStr_spec__0(v_s_135_, v___x_137_);
v___x_139_ = ((lean_object*)(lp_leancjson_CJson_escapeByte___closed__12));
v___x_140_ = l_List_appendTR___redArg(v___x_138_, v___x_139_);
v___x_141_ = lean_box(v___x_136_);
v___x_142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
lean_ctor_set(v___x_142_, 1, v___x_140_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_printStr___boxed(lean_object* v_s_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = lp_leancjson_CJson_printStr(v_s_143_);
lean_dec(v_s_143_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_hexVal(uint8_t v_c_145_){
_start:
{
lean_object* v_n_146_; lean_object* v___x_165_; uint8_t v___x_166_; 
v_n_146_ = lean_uint8_to_nat(v_c_145_);
v___x_165_ = lean_unsigned_to_nat(48u);
v___x_166_ = lean_nat_dec_le(v___x_165_, v_n_146_);
if (v___x_166_ == 0)
{
goto v___jp_157_;
}
else
{
lean_object* v___x_167_; uint8_t v___x_168_; 
v___x_167_ = lean_unsigned_to_nat(57u);
v___x_168_ = lean_nat_dec_le(v_n_146_, v___x_167_);
if (v___x_168_ == 0)
{
goto v___jp_157_;
}
else
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_nat_sub(v_n_146_, v___x_165_);
v___x_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
return v___x_170_;
}
}
v___jp_147_:
{
lean_object* v___x_148_; uint8_t v___x_149_; 
v___x_148_ = lean_unsigned_to_nat(97u);
v___x_149_ = lean_nat_dec_le(v___x_148_, v_n_146_);
if (v___x_149_ == 0)
{
lean_object* v___x_150_; 
v___x_150_ = lean_box(0);
return v___x_150_;
}
else
{
lean_object* v___x_151_; uint8_t v___x_152_; 
v___x_151_ = lean_unsigned_to_nat(102u);
v___x_152_ = lean_nat_dec_le(v_n_146_, v___x_151_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; 
v___x_153_ = lean_box(0);
return v___x_153_;
}
else
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_154_ = lean_unsigned_to_nat(87u);
v___x_155_ = lean_nat_sub(v_n_146_, v___x_154_);
v___x_156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
return v___x_156_;
}
}
}
v___jp_157_:
{
lean_object* v___x_158_; uint8_t v___x_159_; 
v___x_158_ = lean_unsigned_to_nat(65u);
v___x_159_ = lean_nat_dec_le(v___x_158_, v_n_146_);
if (v___x_159_ == 0)
{
goto v___jp_147_;
}
else
{
lean_object* v___x_160_; uint8_t v___x_161_; 
v___x_160_ = lean_unsigned_to_nat(70u);
v___x_161_ = lean_nat_dec_le(v_n_146_, v___x_160_);
if (v___x_161_ == 0)
{
goto v___jp_147_;
}
else
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_162_ = lean_unsigned_to_nat(55u);
v___x_163_ = lean_nat_sub(v_n_146_, v___x_162_);
v___x_164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
return v___x_164_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_hexVal___boxed(lean_object* v_c_171_){
_start:
{
uint8_t v_c_boxed_172_; lean_object* v_res_173_; 
v_c_boxed_172_ = lean_unbox(v_c_171_);
v_res_173_ = lp_leancjson_CJson_hexVal(v_c_boxed_172_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseHex4(lean_object* v_s_174_){
_start:
{
if (lean_obj_tag(v_s_174_) == 1)
{
lean_object* v_tail_175_; 
v_tail_175_ = lean_ctor_get(v_s_174_, 1);
lean_inc(v_tail_175_);
if (lean_obj_tag(v_tail_175_) == 1)
{
lean_object* v_tail_176_; 
v_tail_176_ = lean_ctor_get(v_tail_175_, 1);
lean_inc(v_tail_176_);
if (lean_obj_tag(v_tail_176_) == 1)
{
lean_object* v_tail_177_; 
v_tail_177_ = lean_ctor_get(v_tail_176_, 1);
lean_inc(v_tail_177_);
if (lean_obj_tag(v_tail_177_) == 1)
{
lean_object* v_head_178_; lean_object* v_head_179_; lean_object* v_head_180_; lean_object* v_head_181_; lean_object* v_tail_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_219_; 
v_head_178_ = lean_ctor_get(v_s_174_, 0);
lean_inc(v_head_178_);
lean_dec_ref_known(v_s_174_, 2);
v_head_179_ = lean_ctor_get(v_tail_175_, 0);
lean_inc(v_head_179_);
lean_dec_ref_known(v_tail_175_, 2);
v_head_180_ = lean_ctor_get(v_tail_176_, 0);
lean_inc(v_head_180_);
lean_dec_ref_known(v_tail_176_, 2);
v_head_181_ = lean_ctor_get(v_tail_177_, 0);
v_tail_182_ = lean_ctor_get(v_tail_177_, 1);
v_isSharedCheck_219_ = !lean_is_exclusive(v_tail_177_);
if (v_isSharedCheck_219_ == 0)
{
v___x_184_ = v_tail_177_;
v_isShared_185_ = v_isSharedCheck_219_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_tail_182_);
lean_inc(v_head_181_);
lean_dec(v_tail_177_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_219_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
uint8_t v___x_186_; lean_object* v___x_187_; 
v___x_186_ = lean_unbox(v_head_178_);
lean_dec(v_head_178_);
v___x_187_ = lp_leancjson_CJson_hexVal(v___x_186_);
if (lean_obj_tag(v___x_187_) == 1)
{
lean_object* v_val_188_; uint8_t v___x_189_; lean_object* v___x_190_; 
v_val_188_ = lean_ctor_get(v___x_187_, 0);
lean_inc(v_val_188_);
lean_dec_ref_known(v___x_187_, 1);
v___x_189_ = lean_unbox(v_head_179_);
lean_dec(v_head_179_);
v___x_190_ = lp_leancjson_CJson_hexVal(v___x_189_);
if (lean_obj_tag(v___x_190_) == 1)
{
lean_object* v_val_191_; uint8_t v___x_192_; lean_object* v___x_193_; 
v_val_191_ = lean_ctor_get(v___x_190_, 0);
lean_inc(v_val_191_);
lean_dec_ref_known(v___x_190_, 1);
v___x_192_ = lean_unbox(v_head_180_);
lean_dec(v_head_180_);
v___x_193_ = lp_leancjson_CJson_hexVal(v___x_192_);
if (lean_obj_tag(v___x_193_) == 1)
{
lean_object* v_val_194_; uint8_t v___x_195_; lean_object* v___x_196_; 
v_val_194_ = lean_ctor_get(v___x_193_, 0);
lean_inc(v_val_194_);
lean_dec_ref_known(v___x_193_, 1);
v___x_195_ = lean_unbox(v_head_181_);
lean_dec(v_head_181_);
v___x_196_ = lp_leancjson_CJson_hexVal(v___x_195_);
if (lean_obj_tag(v___x_196_) == 1)
{
lean_object* v_val_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_214_; 
v_val_197_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_214_ == 0)
{
v___x_199_ = v___x_196_;
v_isShared_200_ = v_isSharedCheck_214_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_val_197_);
lean_dec(v___x_196_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_214_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_209_; 
v___x_201_ = lean_unsigned_to_nat(16u);
v___x_202_ = lean_nat_mul(v_val_188_, v___x_201_);
lean_dec(v_val_188_);
v___x_203_ = lean_nat_add(v___x_202_, v_val_191_);
lean_dec(v_val_191_);
lean_dec(v___x_202_);
v___x_204_ = lean_nat_mul(v___x_203_, v___x_201_);
lean_dec(v___x_203_);
v___x_205_ = lean_nat_add(v___x_204_, v_val_194_);
lean_dec(v_val_194_);
lean_dec(v___x_204_);
v___x_206_ = lean_nat_mul(v___x_205_, v___x_201_);
lean_dec(v___x_205_);
v___x_207_ = lean_nat_add(v___x_206_, v_val_197_);
lean_dec(v_val_197_);
lean_dec(v___x_206_);
if (v_isShared_185_ == 0)
{
lean_ctor_set_tag(v___x_184_, 0);
lean_ctor_set(v___x_184_, 0, v___x_207_);
v___x_209_ = v___x_184_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v___x_207_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v_tail_182_);
v___x_209_ = v_reuseFailAlloc_213_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
lean_object* v___x_211_; 
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 0, v___x_209_);
v___x_211_ = v___x_199_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v___x_209_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
}
else
{
lean_object* v___x_215_; 
lean_dec(v___x_196_);
lean_dec(v_val_194_);
lean_dec(v_val_191_);
lean_dec(v_val_188_);
lean_del_object(v___x_184_);
lean_dec(v_tail_182_);
v___x_215_ = lean_box(0);
return v___x_215_;
}
}
else
{
lean_object* v___x_216_; 
lean_dec(v___x_193_);
lean_dec(v_val_191_);
lean_dec(v_val_188_);
lean_del_object(v___x_184_);
lean_dec(v_tail_182_);
lean_dec(v_head_181_);
v___x_216_ = lean_box(0);
return v___x_216_;
}
}
else
{
lean_object* v___x_217_; 
lean_dec(v___x_190_);
lean_dec(v_val_188_);
lean_del_object(v___x_184_);
lean_dec(v_tail_182_);
lean_dec(v_head_181_);
lean_dec(v_head_180_);
v___x_217_ = lean_box(0);
return v___x_217_;
}
}
else
{
lean_object* v___x_218_; 
lean_dec(v___x_187_);
lean_del_object(v___x_184_);
lean_dec(v_tail_182_);
lean_dec(v_head_181_);
lean_dec(v_head_180_);
lean_dec(v_head_179_);
v___x_218_ = lean_box(0);
return v___x_218_;
}
}
}
else
{
lean_object* v___x_220_; 
lean_dec_ref_known(v_tail_176_, 2);
lean_dec(v_tail_177_);
lean_dec_ref_known(v_tail_175_, 2);
lean_dec_ref_known(v_s_174_, 2);
v___x_220_ = lean_box(0);
return v___x_220_;
}
}
else
{
lean_object* v___x_221_; 
lean_dec_ref_known(v_tail_175_, 2);
lean_dec(v_tail_176_);
lean_dec_ref_known(v_s_174_, 2);
v___x_221_ = lean_box(0);
return v___x_221_;
}
}
else
{
lean_object* v___x_222_; 
lean_dec_ref_known(v_s_174_, 2);
lean_dec(v_tail_175_);
v___x_222_ = lean_box(0);
return v___x_222_;
}
}
else
{
lean_object* v___x_223_; 
lean_dec(v_s_174_);
v___x_223_ = lean_box(0);
return v___x_223_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_utf8(lean_object* v_cp_224_){
_start:
{
lean_object* v___x_225_; uint8_t v___x_226_; 
v___x_225_ = lean_unsigned_to_nat(128u);
v___x_226_ = lean_nat_dec_lt(v_cp_224_, v___x_225_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; uint8_t v___x_228_; 
v___x_227_ = lean_unsigned_to_nat(2048u);
v___x_228_ = lean_nat_dec_lt(v_cp_224_, v___x_227_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; uint8_t v___x_230_; 
v___x_229_ = lean_unsigned_to_nat(65536u);
v___x_230_ = lean_nat_dec_lt(v_cp_224_, v___x_229_);
if (v___x_230_ == 0)
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; uint8_t v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; uint8_t v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; uint8_t v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; uint8_t v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_231_ = lean_unsigned_to_nat(240u);
v___x_232_ = lean_unsigned_to_nat(18u);
v___x_233_ = lean_nat_shiftr(v_cp_224_, v___x_232_);
v___x_234_ = lean_nat_add(v___x_231_, v___x_233_);
lean_dec(v___x_233_);
v___x_235_ = lean_uint8_of_nat(v___x_234_);
lean_dec(v___x_234_);
v___x_236_ = lean_unsigned_to_nat(12u);
v___x_237_ = lean_nat_shiftr(v_cp_224_, v___x_236_);
v___x_238_ = lean_unsigned_to_nat(64u);
v___x_239_ = lean_nat_mod(v___x_237_, v___x_238_);
lean_dec(v___x_237_);
v___x_240_ = lean_nat_add(v___x_225_, v___x_239_);
lean_dec(v___x_239_);
v___x_241_ = lean_uint8_of_nat(v___x_240_);
lean_dec(v___x_240_);
v___x_242_ = lean_unsigned_to_nat(6u);
v___x_243_ = lean_nat_shiftr(v_cp_224_, v___x_242_);
v___x_244_ = lean_nat_mod(v___x_243_, v___x_238_);
lean_dec(v___x_243_);
v___x_245_ = lean_nat_add(v___x_225_, v___x_244_);
lean_dec(v___x_244_);
v___x_246_ = lean_uint8_of_nat(v___x_245_);
lean_dec(v___x_245_);
v___x_247_ = lean_nat_mod(v_cp_224_, v___x_238_);
v___x_248_ = lean_nat_add(v___x_225_, v___x_247_);
lean_dec(v___x_247_);
v___x_249_ = lean_uint8_of_nat(v___x_248_);
lean_dec(v___x_248_);
v___x_250_ = lean_box(0);
v___x_251_ = lean_box(v___x_249_);
v___x_252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
lean_ctor_set(v___x_252_, 1, v___x_250_);
v___x_253_ = lean_box(v___x_246_);
v___x_254_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
lean_ctor_set(v___x_254_, 1, v___x_252_);
v___x_255_ = lean_box(v___x_241_);
v___x_256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
lean_ctor_set(v___x_256_, 1, v___x_254_);
v___x_257_ = lean_box(v___x_235_);
v___x_258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
lean_ctor_set(v___x_258_, 1, v___x_256_);
return v___x_258_;
}
else
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; uint8_t v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; uint8_t v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_259_ = lean_unsigned_to_nat(224u);
v___x_260_ = lean_unsigned_to_nat(12u);
v___x_261_ = lean_nat_shiftr(v_cp_224_, v___x_260_);
v___x_262_ = lean_nat_add(v___x_259_, v___x_261_);
lean_dec(v___x_261_);
v___x_263_ = lean_uint8_of_nat(v___x_262_);
lean_dec(v___x_262_);
v___x_264_ = lean_unsigned_to_nat(64u);
v___x_265_ = lean_unsigned_to_nat(6u);
v___x_266_ = lean_nat_shiftr(v_cp_224_, v___x_265_);
v___x_267_ = lean_nat_mod(v___x_266_, v___x_264_);
lean_dec(v___x_266_);
v___x_268_ = lean_nat_add(v___x_225_, v___x_267_);
lean_dec(v___x_267_);
v___x_269_ = lean_uint8_of_nat(v___x_268_);
lean_dec(v___x_268_);
v___x_270_ = lean_nat_mod(v_cp_224_, v___x_264_);
v___x_271_ = lean_nat_add(v___x_225_, v___x_270_);
lean_dec(v___x_270_);
v___x_272_ = lean_uint8_of_nat(v___x_271_);
lean_dec(v___x_271_);
v___x_273_ = lean_box(0);
v___x_274_ = lean_box(v___x_272_);
v___x_275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
lean_ctor_set(v___x_275_, 1, v___x_273_);
v___x_276_ = lean_box(v___x_269_);
v___x_277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v___x_275_);
v___x_278_ = lean_box(v___x_263_);
v___x_279_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_279_, 0, v___x_278_);
lean_ctor_set(v___x_279_, 1, v___x_277_);
return v___x_279_;
}
}
else
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; uint8_t v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; uint8_t v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_280_ = lean_unsigned_to_nat(192u);
v___x_281_ = lean_unsigned_to_nat(64u);
v___x_282_ = lean_unsigned_to_nat(6u);
v___x_283_ = lean_nat_shiftr(v_cp_224_, v___x_282_);
v___x_284_ = lean_nat_add(v___x_280_, v___x_283_);
lean_dec(v___x_283_);
v___x_285_ = lean_uint8_of_nat(v___x_284_);
lean_dec(v___x_284_);
v___x_286_ = lean_nat_mod(v_cp_224_, v___x_281_);
v___x_287_ = lean_nat_add(v___x_225_, v___x_286_);
lean_dec(v___x_286_);
v___x_288_ = lean_uint8_of_nat(v___x_287_);
lean_dec(v___x_287_);
v___x_289_ = lean_box(0);
v___x_290_ = lean_box(v___x_288_);
v___x_291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
lean_ctor_set(v___x_291_, 1, v___x_289_);
v___x_292_ = lean_box(v___x_285_);
v___x_293_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
lean_ctor_set(v___x_293_, 1, v___x_291_);
return v___x_293_;
}
}
else
{
uint8_t v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_294_ = lean_uint8_of_nat(v_cp_224_);
v___x_295_ = lean_box(0);
v___x_296_ = lean_box(v___x_294_);
v___x_297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set(v___x_297_, 1, v___x_295_);
return v___x_297_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_utf8___boxed(lean_object* v_cp_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = lp_leancjson_CJson_utf8(v_cp_298_);
lean_dec(v_cp_298_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_utf8Decode(lean_object* v_b_300_){
_start:
{
if (lean_obj_tag(v_b_300_) == 1)
{
lean_object* v_tail_301_; 
v_tail_301_ = lean_ctor_get(v_b_300_, 1);
if (lean_obj_tag(v_tail_301_) == 0)
{
lean_object* v_head_302_; uint8_t v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; uint8_t v___x_306_; 
v_head_302_ = lean_ctor_get(v_b_300_, 0);
v___x_303_ = lean_unbox(v_head_302_);
v___x_304_ = lean_uint8_to_nat(v___x_303_);
v___x_305_ = lean_unsigned_to_nat(128u);
v___x_306_ = lean_nat_dec_lt(v___x_304_, v___x_305_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; 
v___x_307_ = lean_box(0);
return v___x_307_;
}
else
{
lean_object* v___x_308_; 
v___x_308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_308_, 0, v___x_304_);
return v___x_308_;
}
}
else
{
lean_object* v_tail_309_; 
v_tail_309_ = lean_ctor_get(v_tail_301_, 1);
if (lean_obj_tag(v_tail_309_) == 0)
{
lean_object* v_head_310_; lean_object* v_head_311_; uint8_t v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; uint8_t v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v_head_310_ = lean_ctor_get(v_b_300_, 0);
v_head_311_ = lean_ctor_get(v_tail_301_, 0);
v___x_312_ = lean_unbox(v_head_310_);
v___x_313_ = lean_uint8_to_nat(v___x_312_);
v___x_314_ = lean_unsigned_to_nat(192u);
v___x_315_ = lean_nat_sub(v___x_313_, v___x_314_);
v___x_316_ = lean_unsigned_to_nat(64u);
v___x_317_ = lean_nat_mul(v___x_315_, v___x_316_);
lean_dec(v___x_315_);
v___x_318_ = lean_unbox(v_head_311_);
v___x_319_ = lean_uint8_to_nat(v___x_318_);
v___x_320_ = lean_unsigned_to_nat(128u);
v___x_321_ = lean_nat_sub(v___x_319_, v___x_320_);
v___x_322_ = lean_nat_add(v___x_317_, v___x_321_);
lean_dec(v___x_321_);
lean_dec(v___x_317_);
v___x_323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
return v___x_323_;
}
else
{
lean_object* v_tail_324_; 
v_tail_324_ = lean_ctor_get(v_tail_309_, 1);
if (lean_obj_tag(v_tail_324_) == 0)
{
lean_object* v_head_325_; lean_object* v_head_326_; lean_object* v_head_327_; uint8_t v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; uint8_t v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; uint8_t v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v_head_325_ = lean_ctor_get(v_b_300_, 0);
v_head_326_ = lean_ctor_get(v_tail_301_, 0);
v_head_327_ = lean_ctor_get(v_tail_309_, 0);
v___x_328_ = lean_unbox(v_head_325_);
v___x_329_ = lean_uint8_to_nat(v___x_328_);
v___x_330_ = lean_unsigned_to_nat(224u);
v___x_331_ = lean_nat_sub(v___x_329_, v___x_330_);
v___x_332_ = lean_unsigned_to_nat(4096u);
v___x_333_ = lean_nat_mul(v___x_331_, v___x_332_);
lean_dec(v___x_331_);
v___x_334_ = lean_unbox(v_head_326_);
v___x_335_ = lean_uint8_to_nat(v___x_334_);
v___x_336_ = lean_unsigned_to_nat(128u);
v___x_337_ = lean_nat_sub(v___x_335_, v___x_336_);
v___x_338_ = lean_unsigned_to_nat(64u);
v___x_339_ = lean_nat_mul(v___x_337_, v___x_338_);
lean_dec(v___x_337_);
v___x_340_ = lean_nat_add(v___x_333_, v___x_339_);
lean_dec(v___x_339_);
lean_dec(v___x_333_);
v___x_341_ = lean_unbox(v_head_327_);
v___x_342_ = lean_uint8_to_nat(v___x_341_);
v___x_343_ = lean_nat_sub(v___x_342_, v___x_336_);
v___x_344_ = lean_nat_add(v___x_340_, v___x_343_);
lean_dec(v___x_343_);
lean_dec(v___x_340_);
v___x_345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_345_, 0, v___x_344_);
return v___x_345_;
}
else
{
lean_object* v_tail_346_; 
v_tail_346_ = lean_ctor_get(v_tail_324_, 1);
if (lean_obj_tag(v_tail_346_) == 0)
{
lean_object* v_head_347_; lean_object* v_head_348_; lean_object* v_head_349_; lean_object* v_head_350_; uint8_t v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; uint8_t v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; uint8_t v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v_head_347_ = lean_ctor_get(v_b_300_, 0);
v_head_348_ = lean_ctor_get(v_tail_301_, 0);
v_head_349_ = lean_ctor_get(v_tail_309_, 0);
v_head_350_ = lean_ctor_get(v_tail_324_, 0);
v___x_351_ = lean_unbox(v_head_347_);
v___x_352_ = lean_uint8_to_nat(v___x_351_);
v___x_353_ = lean_unsigned_to_nat(240u);
v___x_354_ = lean_nat_sub(v___x_352_, v___x_353_);
v___x_355_ = lean_unsigned_to_nat(262144u);
v___x_356_ = lean_nat_mul(v___x_354_, v___x_355_);
lean_dec(v___x_354_);
v___x_357_ = lean_unbox(v_head_348_);
v___x_358_ = lean_uint8_to_nat(v___x_357_);
v___x_359_ = lean_unsigned_to_nat(128u);
v___x_360_ = lean_nat_sub(v___x_358_, v___x_359_);
v___x_361_ = lean_unsigned_to_nat(4096u);
v___x_362_ = lean_nat_mul(v___x_360_, v___x_361_);
lean_dec(v___x_360_);
v___x_363_ = lean_nat_add(v___x_356_, v___x_362_);
lean_dec(v___x_362_);
lean_dec(v___x_356_);
v___x_364_ = lean_unbox(v_head_349_);
v___x_365_ = lean_uint8_to_nat(v___x_364_);
v___x_366_ = lean_nat_sub(v___x_365_, v___x_359_);
v___x_367_ = lean_unsigned_to_nat(64u);
v___x_368_ = lean_nat_mul(v___x_366_, v___x_367_);
lean_dec(v___x_366_);
v___x_369_ = lean_nat_add(v___x_363_, v___x_368_);
lean_dec(v___x_368_);
lean_dec(v___x_363_);
v___x_370_ = lean_unbox(v_head_350_);
v___x_371_ = lean_uint8_to_nat(v___x_370_);
v___x_372_ = lean_nat_sub(v___x_371_, v___x_359_);
v___x_373_ = lean_nat_add(v___x_369_, v___x_372_);
lean_dec(v___x_372_);
lean_dec(v___x_369_);
v___x_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
return v___x_374_;
}
else
{
lean_object* v___x_375_; 
v___x_375_ = lean_box(0);
return v___x_375_;
}
}
}
}
}
else
{
lean_object* v___x_376_; 
v___x_376_ = lean_box(0);
return v___x_376_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_utf8Decode___boxed(lean_object* v_b_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = lp_leancjson_CJson_utf8Decode(v_b_377_);
lean_dec(v_b_377_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseUnicode(lean_object* v_s_379_){
_start:
{
lean_object* v___x_380_; 
v___x_380_ = lp_leancjson_CJson_parseHex4(v_s_379_);
if (lean_obj_tag(v___x_380_) == 0)
{
return v___x_380_;
}
else
{
lean_object* v_val_381_; lean_object* v_fst_382_; lean_object* v_snd_383_; lean_object* v___x_384_; uint8_t v___x_434_; 
v_val_381_ = lean_ctor_get(v___x_380_, 0);
v_fst_382_ = lean_ctor_get(v_val_381_, 0);
v_snd_383_ = lean_ctor_get(v_val_381_, 1);
v___x_384_ = lean_unsigned_to_nat(56320u);
v___x_434_ = lean_nat_dec_le(v___x_384_, v_fst_382_);
if (v___x_434_ == 0)
{
goto v___jp_385_;
}
else
{
lean_object* v___x_435_; uint8_t v___x_436_; 
v___x_435_ = lean_unsigned_to_nat(57343u);
v___x_436_ = lean_nat_dec_le(v_fst_382_, v___x_435_);
if (v___x_436_ == 0)
{
goto v___jp_385_;
}
else
{
lean_object* v___x_437_; 
lean_dec_ref_known(v___x_380_, 1);
v___x_437_ = lean_box(0);
return v___x_437_;
}
}
v___jp_385_:
{
lean_object* v___x_386_; uint8_t v___x_387_; 
v___x_386_ = lean_unsigned_to_nat(55296u);
v___x_387_ = lean_nat_dec_le(v___x_386_, v_fst_382_);
if (v___x_387_ == 0)
{
return v___x_380_;
}
else
{
lean_object* v___x_388_; uint8_t v___x_389_; 
v___x_388_ = lean_unsigned_to_nat(56319u);
v___x_389_ = lean_nat_dec_le(v_fst_382_, v___x_388_);
if (v___x_389_ == 0)
{
return v___x_380_;
}
else
{
lean_inc(v_snd_383_);
lean_inc(v_fst_382_);
lean_dec_ref_known(v___x_380_, 1);
if (lean_obj_tag(v_snd_383_) == 1)
{
lean_object* v_head_390_; lean_object* v_tail_391_; uint8_t v___x_392_; uint8_t v___x_393_; uint8_t v___x_394_; 
v_head_390_ = lean_ctor_get(v_snd_383_, 0);
lean_inc(v_head_390_);
v_tail_391_ = lean_ctor_get(v_snd_383_, 1);
lean_inc(v_tail_391_);
lean_dec_ref_known(v_snd_383_, 2);
v___x_392_ = 92;
v___x_393_ = lean_unbox(v_head_390_);
lean_dec(v_head_390_);
v___x_394_ = lean_uint8_dec_eq(v___x_393_, v___x_392_);
if (v___x_394_ == 0)
{
lean_object* v___x_395_; 
lean_dec(v_tail_391_);
lean_dec(v_fst_382_);
v___x_395_ = lean_box(0);
return v___x_395_;
}
else
{
if (lean_obj_tag(v_tail_391_) == 1)
{
lean_object* v_head_396_; lean_object* v_tail_397_; uint8_t v___x_398_; uint8_t v___x_399_; uint8_t v___x_400_; 
v_head_396_ = lean_ctor_get(v_tail_391_, 0);
lean_inc(v_head_396_);
v_tail_397_ = lean_ctor_get(v_tail_391_, 1);
lean_inc(v_tail_397_);
lean_dec_ref_known(v_tail_391_, 2);
v___x_398_ = 117;
v___x_399_ = lean_unbox(v_head_396_);
lean_dec(v_head_396_);
v___x_400_ = lean_uint8_dec_eq(v___x_399_, v___x_398_);
if (v___x_400_ == 0)
{
lean_object* v___x_401_; 
lean_dec(v_tail_397_);
lean_dec(v_fst_382_);
v___x_401_ = lean_box(0);
return v___x_401_;
}
else
{
lean_object* v___x_402_; 
v___x_402_ = lp_leancjson_CJson_parseHex4(v_tail_397_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_dec(v_fst_382_);
return v___x_402_;
}
else
{
lean_object* v_val_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_431_; 
v_val_403_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_431_ == 0)
{
v___x_405_ = v___x_402_;
v_isShared_406_ = v_isSharedCheck_431_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_val_403_);
lean_dec(v___x_402_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_431_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v_fst_407_; lean_object* v_snd_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_430_; 
v_fst_407_ = lean_ctor_get(v_val_403_, 0);
v_snd_408_ = lean_ctor_get(v_val_403_, 1);
v_isSharedCheck_430_ = !lean_is_exclusive(v_val_403_);
if (v_isSharedCheck_430_ == 0)
{
v___x_410_ = v_val_403_;
v_isShared_411_ = v_isSharedCheck_430_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_snd_408_);
lean_inc(v_fst_407_);
lean_dec(v_val_403_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_430_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
uint8_t v___x_412_; 
v___x_412_ = lean_nat_dec_le(v___x_384_, v_fst_407_);
if (v___x_412_ == 0)
{
lean_object* v___x_413_; 
lean_del_object(v___x_410_);
lean_dec(v_snd_408_);
lean_dec(v_fst_407_);
lean_del_object(v___x_405_);
lean_dec(v_fst_382_);
v___x_413_ = lean_box(0);
return v___x_413_;
}
else
{
lean_object* v___x_414_; uint8_t v___x_415_; 
v___x_414_ = lean_unsigned_to_nat(57343u);
v___x_415_ = lean_nat_dec_le(v_fst_407_, v___x_414_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; 
lean_del_object(v___x_410_);
lean_dec(v_snd_408_);
lean_dec(v_fst_407_);
lean_del_object(v___x_405_);
lean_dec(v_fst_382_);
v___x_416_ = lean_box(0);
return v___x_416_;
}
else
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_425_; 
v___x_417_ = lean_unsigned_to_nat(65536u);
v___x_418_ = lean_nat_sub(v_fst_382_, v___x_386_);
lean_dec(v_fst_382_);
v___x_419_ = lean_unsigned_to_nat(1024u);
v___x_420_ = lean_nat_mul(v___x_418_, v___x_419_);
lean_dec(v___x_418_);
v___x_421_ = lean_nat_add(v___x_417_, v___x_420_);
lean_dec(v___x_420_);
v___x_422_ = lean_nat_sub(v_fst_407_, v___x_384_);
lean_dec(v_fst_407_);
v___x_423_ = lean_nat_add(v___x_421_, v___x_422_);
lean_dec(v___x_422_);
lean_dec(v___x_421_);
if (v_isShared_411_ == 0)
{
lean_ctor_set(v___x_410_, 0, v___x_423_);
v___x_425_ = v___x_410_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v___x_423_);
lean_ctor_set(v_reuseFailAlloc_429_, 1, v_snd_408_);
v___x_425_ = v_reuseFailAlloc_429_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
lean_object* v___x_427_; 
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 0, v___x_425_);
v___x_427_ = v___x_405_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v___x_425_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
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
lean_object* v___x_432_; 
lean_dec(v_tail_391_);
lean_dec(v_fst_382_);
v___x_432_ = lean_box(0);
return v___x_432_;
}
}
}
else
{
lean_object* v___x_433_; 
lean_dec(v_snd_383_);
lean_dec(v_fst_382_);
v___x_433_ = lean_box(0);
return v___x_433_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseStrBody(lean_object* v_x_438_, lean_object* v_x_439_, lean_object* v_x_440_){
_start:
{
lean_object* v_zero_441_; uint8_t v_isZero_442_; 
v_zero_441_ = lean_unsigned_to_nat(0u);
v_isZero_442_ = lean_nat_dec_eq(v_x_438_, v_zero_441_);
if (v_isZero_442_ == 1)
{
lean_object* v___x_443_; 
lean_dec(v_x_440_);
lean_dec(v_x_439_);
lean_dec(v_x_438_);
v___x_443_ = lean_box(0);
return v___x_443_;
}
else
{
if (lean_obj_tag(v_x_439_) == 0)
{
lean_object* v___x_444_; 
lean_dec(v_x_440_);
lean_dec(v_x_438_);
v___x_444_ = lean_box(0);
return v___x_444_;
}
else
{
lean_object* v_head_445_; lean_object* v_tail_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_542_; 
v_head_445_ = lean_ctor_get(v_x_439_, 0);
v_tail_446_ = lean_ctor_get(v_x_439_, 1);
v_isSharedCheck_542_ = !lean_is_exclusive(v_x_439_);
if (v_isSharedCheck_542_ == 0)
{
v___x_448_ = v_x_439_;
v_isShared_449_ = v_isSharedCheck_542_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_tail_446_);
lean_inc(v_head_445_);
lean_dec(v_x_439_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_542_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
uint8_t v___x_450_; uint8_t v___x_451_; uint8_t v___x_452_; 
v___x_450_ = 34;
v___x_451_ = lean_unbox(v_head_445_);
v___x_452_ = lean_uint8_dec_eq(v___x_451_, v___x_450_);
if (v___x_452_ == 0)
{
lean_object* v_one_453_; lean_object* v_n_454_; uint8_t v___x_455_; uint8_t v___x_456_; uint8_t v___x_457_; 
v_one_453_ = lean_unsigned_to_nat(1u);
v_n_454_ = lean_nat_sub(v_x_438_, v_one_453_);
lean_dec(v_x_438_);
v___x_455_ = 92;
v___x_456_ = lean_unbox(v_head_445_);
v___x_457_ = lean_uint8_dec_eq(v___x_456_, v___x_455_);
if (v___x_457_ == 0)
{
lean_object* v___x_459_; 
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 1, v_x_440_);
v___x_459_ = v___x_448_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_head_445_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v_x_440_);
v___x_459_ = v_reuseFailAlloc_461_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
v_x_438_ = v_n_454_;
v_x_439_ = v_tail_446_;
v_x_440_ = v___x_459_;
goto _start;
}
}
else
{
lean_dec(v_head_445_);
if (lean_obj_tag(v_tail_446_) == 0)
{
lean_object* v___x_462_; 
lean_dec(v_n_454_);
lean_del_object(v___x_448_);
lean_dec(v_x_440_);
v___x_462_ = lean_box(0);
return v___x_462_;
}
else
{
lean_object* v_head_463_; lean_object* v_tail_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_538_; 
v_head_463_ = lean_ctor_get(v_tail_446_, 0);
v_tail_464_ = lean_ctor_get(v_tail_446_, 1);
v_isSharedCheck_538_ = !lean_is_exclusive(v_tail_446_);
if (v_isSharedCheck_538_ == 0)
{
v___x_466_ = v_tail_446_;
v_isShared_467_ = v_isSharedCheck_538_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_tail_464_);
lean_inc(v_head_463_);
lean_dec(v_tail_446_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_538_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
uint8_t v___x_473_; uint8_t v___x_474_; uint8_t v___x_475_; 
v___x_473_ = 98;
v___x_474_ = lean_unbox(v_head_463_);
v___x_475_ = lean_uint8_dec_eq(v___x_474_, v___x_473_);
if (v___x_475_ == 0)
{
uint8_t v___x_476_; uint8_t v___x_477_; uint8_t v___x_478_; 
v___x_476_ = 102;
v___x_477_ = lean_unbox(v_head_463_);
v___x_478_ = lean_uint8_dec_eq(v___x_477_, v___x_476_);
if (v___x_478_ == 0)
{
uint8_t v___x_479_; uint8_t v___x_480_; uint8_t v___x_481_; 
v___x_479_ = 110;
v___x_480_ = lean_unbox(v_head_463_);
v___x_481_ = lean_uint8_dec_eq(v___x_480_, v___x_479_);
if (v___x_481_ == 0)
{
uint8_t v___x_482_; uint8_t v___x_483_; uint8_t v___x_484_; 
v___x_482_ = 114;
v___x_483_ = lean_unbox(v_head_463_);
v___x_484_ = lean_uint8_dec_eq(v___x_483_, v___x_482_);
if (v___x_484_ == 0)
{
uint8_t v___x_485_; uint8_t v___x_486_; uint8_t v___x_487_; 
v___x_485_ = 116;
v___x_486_ = lean_unbox(v_head_463_);
v___x_487_ = lean_uint8_dec_eq(v___x_486_, v___x_485_);
if (v___x_487_ == 0)
{
uint8_t v___x_488_; uint8_t v___x_489_; 
lean_del_object(v___x_448_);
v___x_488_ = lean_unbox(v_head_463_);
v___x_489_ = lean_uint8_dec_eq(v___x_488_, v___x_450_);
if (v___x_489_ == 0)
{
uint8_t v___x_490_; uint8_t v___x_491_; 
v___x_490_ = lean_unbox(v_head_463_);
v___x_491_ = lean_uint8_dec_eq(v___x_490_, v___x_455_);
if (v___x_491_ == 0)
{
uint8_t v___x_492_; uint8_t v___x_493_; uint8_t v___x_494_; 
v___x_492_ = 47;
v___x_493_ = lean_unbox(v_head_463_);
v___x_494_ = lean_uint8_dec_eq(v___x_493_, v___x_492_);
if (v___x_494_ == 0)
{
uint8_t v___x_495_; uint8_t v___x_496_; uint8_t v___x_497_; 
lean_del_object(v___x_466_);
v___x_495_ = 117;
v___x_496_ = lean_unbox(v_head_463_);
lean_dec(v_head_463_);
v___x_497_ = lean_uint8_dec_eq(v___x_496_, v___x_495_);
if (v___x_497_ == 0)
{
lean_object* v___x_498_; 
lean_dec(v_tail_464_);
lean_dec(v_n_454_);
lean_dec(v_x_440_);
v___x_498_ = lean_box(0);
return v___x_498_;
}
else
{
lean_object* v___x_499_; 
v___x_499_ = lp_leancjson_CJson_parseUnicode(v_tail_464_);
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v___x_500_; 
lean_dec(v_n_454_);
lean_dec(v_x_440_);
v___x_500_ = lean_box(0);
return v___x_500_;
}
else
{
lean_object* v_val_501_; lean_object* v_fst_502_; lean_object* v_snd_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v_val_501_ = lean_ctor_get(v___x_499_, 0);
lean_inc(v_val_501_);
lean_dec_ref_known(v___x_499_, 1);
v_fst_502_ = lean_ctor_get(v_val_501_, 0);
lean_inc(v_fst_502_);
v_snd_503_ = lean_ctor_get(v_val_501_, 1);
lean_inc(v_snd_503_);
lean_dec(v_val_501_);
v___x_504_ = lp_leancjson_CJson_utf8(v_fst_502_);
lean_dec(v_fst_502_);
v___x_505_ = l_List_reverse___redArg(v___x_504_);
v___x_506_ = l_List_appendTR___redArg(v___x_505_, v_x_440_);
v_x_438_ = v_n_454_;
v_x_439_ = v_snd_503_;
v_x_440_ = v___x_506_;
goto _start;
}
}
}
else
{
goto v___jp_468_;
}
}
else
{
goto v___jp_468_;
}
}
else
{
goto v___jp_468_;
}
}
else
{
uint8_t v___x_508_; lean_object* v___x_509_; lean_object* v___x_511_; 
lean_del_object(v___x_466_);
lean_dec(v_head_463_);
v___x_508_ = 9;
v___x_509_ = lean_box(v___x_508_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 1, v_x_440_);
lean_ctor_set(v___x_448_, 0, v___x_509_);
v___x_511_ = v___x_448_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___x_509_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v_x_440_);
v___x_511_ = v_reuseFailAlloc_513_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
v_x_438_ = v_n_454_;
v_x_439_ = v_tail_464_;
v_x_440_ = v___x_511_;
goto _start;
}
}
}
else
{
uint8_t v___x_514_; lean_object* v___x_515_; lean_object* v___x_517_; 
lean_del_object(v___x_466_);
lean_dec(v_head_463_);
v___x_514_ = 13;
v___x_515_ = lean_box(v___x_514_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 1, v_x_440_);
lean_ctor_set(v___x_448_, 0, v___x_515_);
v___x_517_ = v___x_448_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v___x_515_);
lean_ctor_set(v_reuseFailAlloc_519_, 1, v_x_440_);
v___x_517_ = v_reuseFailAlloc_519_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
v_x_438_ = v_n_454_;
v_x_439_ = v_tail_464_;
v_x_440_ = v___x_517_;
goto _start;
}
}
}
else
{
uint8_t v___x_520_; lean_object* v___x_521_; lean_object* v___x_523_; 
lean_del_object(v___x_466_);
lean_dec(v_head_463_);
v___x_520_ = 10;
v___x_521_ = lean_box(v___x_520_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 1, v_x_440_);
lean_ctor_set(v___x_448_, 0, v___x_521_);
v___x_523_ = v___x_448_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_521_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v_x_440_);
v___x_523_ = v_reuseFailAlloc_525_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
v_x_438_ = v_n_454_;
v_x_439_ = v_tail_464_;
v_x_440_ = v___x_523_;
goto _start;
}
}
}
else
{
uint8_t v___x_526_; lean_object* v___x_527_; lean_object* v___x_529_; 
lean_del_object(v___x_466_);
lean_dec(v_head_463_);
v___x_526_ = 12;
v___x_527_ = lean_box(v___x_526_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 1, v_x_440_);
lean_ctor_set(v___x_448_, 0, v___x_527_);
v___x_529_ = v___x_448_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_527_);
lean_ctor_set(v_reuseFailAlloc_531_, 1, v_x_440_);
v___x_529_ = v_reuseFailAlloc_531_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
v_x_438_ = v_n_454_;
v_x_439_ = v_tail_464_;
v_x_440_ = v___x_529_;
goto _start;
}
}
}
else
{
uint8_t v___x_532_; lean_object* v___x_533_; lean_object* v___x_535_; 
lean_del_object(v___x_466_);
lean_dec(v_head_463_);
v___x_532_ = 8;
v___x_533_ = lean_box(v___x_532_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 1, v_x_440_);
lean_ctor_set(v___x_448_, 0, v___x_533_);
v___x_535_ = v___x_448_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v___x_533_);
lean_ctor_set(v_reuseFailAlloc_537_, 1, v_x_440_);
v___x_535_ = v_reuseFailAlloc_537_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
v_x_438_ = v_n_454_;
v_x_439_ = v_tail_464_;
v_x_440_ = v___x_535_;
goto _start;
}
}
v___jp_468_:
{
lean_object* v___x_470_; 
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 1, v_x_440_);
v___x_470_ = v___x_466_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_head_463_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v_x_440_);
v___x_470_ = v_reuseFailAlloc_472_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
v_x_438_ = v_n_454_;
v_x_439_ = v_tail_464_;
v_x_440_ = v___x_470_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
lean_del_object(v___x_448_);
lean_dec(v_head_445_);
lean_dec(v_x_438_);
v___x_539_ = l_List_reverse___redArg(v_x_440_);
v___x_540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_540_, 0, v___x_539_);
lean_ctor_set(v___x_540_, 1, v_tail_446_);
v___x_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
return v___x_541_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseStr(lean_object* v_s_543_){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_544_ = l_List_lengthTR___redArg(v_s_543_);
v___x_545_ = lean_box(0);
v___x_546_ = lp_leancjson_CJson_parseStrBody(v___x_544_, v_s_543_, v___x_545_);
return v___x_546_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_leancjson_CJson_Str(uint8_t builtin) {
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
