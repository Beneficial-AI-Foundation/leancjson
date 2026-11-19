// Lean compiler output
// Module: CJson.Print
// Imports: public import Init public meta import Init public import CJson.Number public import CJson.Str
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
lean_object* lp_leancjson_CJson_printNum(lean_object*);
lean_object* lp_leancjson_CJson_printStr(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_tabs(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_tabs___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_leancjson_CJson_nl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_nl___closed__0 = (const lean_object*)&lp_leancjson_CJson_nl___closed__0_value;
LEAN_EXPORT lean_object* lp_leancjson_CJson_nl(uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_nl___boxed(lean_object*);
static const lean_ctor_object lp_leancjson_CJson_tab___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_tab___closed__0 = (const lean_object*)&lp_leancjson_CJson_tab___closed__0_value;
LEAN_EXPORT lean_object* lp_leancjson_CJson_tab(uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_tab___boxed(lean_object*);
static const lean_ctor_object lp_leancjson_CJson_sp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_sp___closed__0 = (const lean_object*)&lp_leancjson_CJson_sp___closed__0_value;
LEAN_EXPORT lean_object* lp_leancjson_CJson_sp(uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_sp___boxed(lean_object*);
static const lean_ctor_object lp_leancjson_CJson_printTail___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(93) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_printTail___closed__0 = (const lean_object*)&lp_leancjson_CJson_printTail___closed__0_value;
static const lean_ctor_object lp_leancjson_CJson_printValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(108) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_printValue___closed__0 = (const lean_object*)&lp_leancjson_CJson_printValue___closed__0_value;
static const lean_ctor_object lp_leancjson_CJson_printValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(108) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_printValue___closed__0_value)}};
static const lean_object* lp_leancjson_CJson_printValue___closed__1 = (const lean_object*)&lp_leancjson_CJson_printValue___closed__1_value;
static const lean_ctor_object lp_leancjson_CJson_printValue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(117) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_printValue___closed__1_value)}};
static const lean_object* lp_leancjson_CJson_printValue___closed__2 = (const lean_object*)&lp_leancjson_CJson_printValue___closed__2_value;
static const lean_ctor_object lp_leancjson_CJson_printValue___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(110) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_printValue___closed__2_value)}};
static const lean_object* lp_leancjson_CJson_printValue___closed__3 = (const lean_object*)&lp_leancjson_CJson_printValue___closed__3_value;
static const lean_ctor_object lp_leancjson_CJson_printValue___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(101) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_printValue___closed__4 = (const lean_object*)&lp_leancjson_CJson_printValue___closed__4_value;
static const lean_ctor_object lp_leancjson_CJson_printValue___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(115) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_printValue___closed__4_value)}};
static const lean_object* lp_leancjson_CJson_printValue___closed__5 = (const lean_object*)&lp_leancjson_CJson_printValue___closed__5_value;
static const lean_ctor_object lp_leancjson_CJson_printValue___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(108) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_printValue___closed__5_value)}};
static const lean_object* lp_leancjson_CJson_printValue___closed__6 = (const lean_object*)&lp_leancjson_CJson_printValue___closed__6_value;
static const lean_ctor_object lp_leancjson_CJson_printValue___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(97) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_printValue___closed__6_value)}};
static const lean_object* lp_leancjson_CJson_printValue___closed__7 = (const lean_object*)&lp_leancjson_CJson_printValue___closed__7_value;
static const lean_ctor_object lp_leancjson_CJson_printValue___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(102) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_printValue___closed__7_value)}};
static const lean_object* lp_leancjson_CJson_printValue___closed__8 = (const lean_object*)&lp_leancjson_CJson_printValue___closed__8_value;
static const lean_ctor_object lp_leancjson_CJson_printValue___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(117) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_printValue___closed__4_value)}};
static const lean_object* lp_leancjson_CJson_printValue___closed__9 = (const lean_object*)&lp_leancjson_CJson_printValue___closed__9_value;
static const lean_ctor_object lp_leancjson_CJson_printValue___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(114) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_printValue___closed__9_value)}};
static const lean_object* lp_leancjson_CJson_printValue___closed__10 = (const lean_object*)&lp_leancjson_CJson_printValue___closed__10_value;
static const lean_ctor_object lp_leancjson_CJson_printValue___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(116) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_printValue___closed__10_value)}};
static const lean_object* lp_leancjson_CJson_printValue___closed__11 = (const lean_object*)&lp_leancjson_CJson_printValue___closed__11_value;
static const lean_ctor_object lp_leancjson_CJson_printValue___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(91) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_printTail___closed__0_value)}};
static const lean_object* lp_leancjson_CJson_printValue___closed__12 = (const lean_object*)&lp_leancjson_CJson_printValue___closed__12_value;
static const lean_ctor_object lp_leancjson_CJson_printMembers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(125) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_printMembers___closed__0 = (const lean_object*)&lp_leancjson_CJson_printMembers___closed__0_value;
LEAN_EXPORT lean_object* lp_leancjson_CJson_printMembers(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_printValue(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_printTail(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_printTail___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_printMembers___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_printValue___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_print(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_printUnformatted(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_tabs(uint8_t v_fmt_1_, lean_object* v_n_2_){
_start:
{
if (v_fmt_1_ == 0)
{
lean_object* v___x_3_; 
lean_dec(v_n_2_);
v___x_3_ = lean_box(0);
return v___x_3_;
}
else
{
uint8_t v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = 9;
v___x_5_ = lean_box(v___x_4_);
v___x_6_ = l_List_replicateTR___redArg(v_n_2_, v___x_5_);
return v___x_6_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_tabs___boxed(lean_object* v_fmt_7_, lean_object* v_n_8_){
_start:
{
uint8_t v_fmt_boxed_9_; lean_object* v_res_10_; 
v_fmt_boxed_9_ = lean_unbox(v_fmt_7_);
v_res_10_ = lp_leancjson_CJson_tabs(v_fmt_boxed_9_, v_n_8_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_nl(uint8_t v_fmt_15_){
_start:
{
if (v_fmt_15_ == 0)
{
lean_object* v___x_16_; 
v___x_16_ = lean_box(0);
return v___x_16_;
}
else
{
lean_object* v___x_17_; 
v___x_17_ = ((lean_object*)(lp_leancjson_CJson_nl___closed__0));
return v___x_17_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_nl___boxed(lean_object* v_fmt_18_){
_start:
{
uint8_t v_fmt_boxed_19_; lean_object* v_res_20_; 
v_fmt_boxed_19_ = lean_unbox(v_fmt_18_);
v_res_20_ = lp_leancjson_CJson_nl(v_fmt_boxed_19_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_tab(uint8_t v_fmt_25_){
_start:
{
if (v_fmt_25_ == 0)
{
lean_object* v___x_26_; 
v___x_26_ = lean_box(0);
return v___x_26_;
}
else
{
lean_object* v___x_27_; 
v___x_27_ = ((lean_object*)(lp_leancjson_CJson_tab___closed__0));
return v___x_27_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_tab___boxed(lean_object* v_fmt_28_){
_start:
{
uint8_t v_fmt_boxed_29_; lean_object* v_res_30_; 
v_fmt_boxed_29_ = lean_unbox(v_fmt_28_);
v_res_30_ = lp_leancjson_CJson_tab(v_fmt_boxed_29_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_sp(uint8_t v_fmt_35_){
_start:
{
if (v_fmt_35_ == 0)
{
lean_object* v___x_36_; 
v___x_36_ = lean_box(0);
return v___x_36_;
}
else
{
lean_object* v___x_37_; 
v___x_37_ = ((lean_object*)(lp_leancjson_CJson_sp___closed__0));
return v___x_37_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_sp___boxed(lean_object* v_fmt_38_){
_start:
{
uint8_t v_fmt_boxed_39_; lean_object* v_res_40_; 
v_fmt_boxed_39_ = lean_unbox(v_fmt_38_);
v_res_40_ = lp_leancjson_CJson_sp(v_fmt_boxed_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_printMembers(uint8_t v_fmt_101_, lean_object* v_d_102_, lean_object* v_x_103_){
_start:
{
if (lean_obj_tag(v_x_103_) == 0)
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_104_ = lp_leancjson_CJson_nl(v_fmt_101_);
v___x_105_ = lean_unsigned_to_nat(1u);
v___x_106_ = lean_nat_sub(v_d_102_, v___x_105_);
lean_dec(v_d_102_);
v___x_107_ = lp_leancjson_CJson_tabs(v_fmt_101_, v___x_106_);
v___x_108_ = l_List_appendTR___redArg(v___x_104_, v___x_107_);
v___x_109_ = ((lean_object*)(lp_leancjson_CJson_printMembers___closed__0));
v___x_110_ = l_List_appendTR___redArg(v___x_108_, v___x_109_);
return v___x_110_;
}
else
{
lean_object* v_head_111_; lean_object* v_tail_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_143_; 
v_head_111_ = lean_ctor_get(v_x_103_, 0);
v_tail_112_ = lean_ctor_get(v_x_103_, 1);
v_isSharedCheck_143_ = !lean_is_exclusive(v_x_103_);
if (v_isSharedCheck_143_ == 0)
{
v___x_114_ = v_x_103_;
v_isShared_115_ = v_isSharedCheck_143_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_tail_112_);
lean_inc(v_head_111_);
lean_dec(v_x_103_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_143_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v_fst_116_; lean_object* v_snd_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_142_; 
v_fst_116_ = lean_ctor_get(v_head_111_, 0);
v_snd_117_ = lean_ctor_get(v_head_111_, 1);
v_isSharedCheck_142_ = !lean_is_exclusive(v_head_111_);
if (v_isSharedCheck_142_ == 0)
{
v___x_119_ = v_head_111_;
v_isShared_120_ = v_isSharedCheck_142_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_snd_117_);
lean_inc(v_fst_116_);
lean_dec(v_head_111_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_142_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
uint8_t v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; uint8_t v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_135_; 
v___x_121_ = 44;
v___x_122_ = lp_leancjson_CJson_nl(v_fmt_101_);
lean_inc_n(v_d_102_, 2);
v___x_123_ = lp_leancjson_CJson_tabs(v_fmt_101_, v_d_102_);
v___x_124_ = l_List_appendTR___redArg(v___x_122_, v___x_123_);
v___x_125_ = lp_leancjson_CJson_printStr(v_fst_116_);
lean_dec(v_fst_116_);
v___x_126_ = l_List_appendTR___redArg(v___x_124_, v___x_125_);
v___x_127_ = 58;
v___x_128_ = lp_leancjson_CJson_tab(v_fmt_101_);
v___x_129_ = lp_leancjson_CJson_printValue(v_fmt_101_, v_d_102_, v_snd_117_);
v___x_130_ = l_List_appendTR___redArg(v___x_128_, v___x_129_);
v___x_131_ = lp_leancjson_CJson_printMembers(v_fmt_101_, v_d_102_, v_tail_112_);
v___x_132_ = l_List_appendTR___redArg(v___x_130_, v___x_131_);
v___x_133_ = lean_box(v___x_127_);
if (v_isShared_115_ == 0)
{
lean_ctor_set(v___x_114_, 1, v___x_132_);
lean_ctor_set(v___x_114_, 0, v___x_133_);
v___x_135_ = v___x_114_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v___x_133_);
lean_ctor_set(v_reuseFailAlloc_141_, 1, v___x_132_);
v___x_135_ = v_reuseFailAlloc_141_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_139_; 
v___x_136_ = l_List_appendTR___redArg(v___x_126_, v___x_135_);
v___x_137_ = lean_box(v___x_121_);
if (v_isShared_120_ == 0)
{
lean_ctor_set_tag(v___x_119_, 1);
lean_ctor_set(v___x_119_, 1, v___x_136_);
lean_ctor_set(v___x_119_, 0, v___x_137_);
v___x_139_ = v___x_119_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_137_);
lean_ctor_set(v_reuseFailAlloc_140_, 1, v___x_136_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_printValue(uint8_t v_fmt_144_, lean_object* v_d_145_, lean_object* v_x_146_){
_start:
{
switch(lean_obj_tag(v_x_146_))
{
case 0:
{
lean_object* v___x_147_; 
lean_dec(v_d_145_);
v___x_147_ = ((lean_object*)(lp_leancjson_CJson_printValue___closed__3));
return v___x_147_;
}
case 1:
{
uint8_t v_b_148_; 
lean_dec(v_d_145_);
v_b_148_ = lean_ctor_get_uint8(v_x_146_, 0);
lean_dec_ref_known(v_x_146_, 0);
if (v_b_148_ == 0)
{
lean_object* v___x_149_; 
v___x_149_ = ((lean_object*)(lp_leancjson_CJson_printValue___closed__8));
return v___x_149_;
}
else
{
lean_object* v___x_150_; 
v___x_150_ = ((lean_object*)(lp_leancjson_CJson_printValue___closed__11));
return v___x_150_;
}
}
case 2:
{
lean_object* v_n_151_; lean_object* v___x_152_; 
lean_dec(v_d_145_);
v_n_151_ = lean_ctor_get(v_x_146_, 0);
lean_inc_ref(v_n_151_);
lean_dec_ref_known(v_x_146_, 1);
v___x_152_ = lp_leancjson_CJson_printNum(v_n_151_);
lean_dec_ref(v_n_151_);
return v___x_152_;
}
case 3:
{
lean_object* v_s_153_; lean_object* v___x_154_; 
lean_dec(v_d_145_);
v_s_153_ = lean_ctor_get(v_x_146_, 0);
lean_inc(v_s_153_);
lean_dec_ref_known(v_x_146_, 1);
v___x_154_ = lp_leancjson_CJson_printStr(v_s_153_);
lean_dec(v_s_153_);
return v___x_154_;
}
case 4:
{
lean_object* v_xs_155_; 
v_xs_155_ = lean_ctor_get(v_x_146_, 0);
lean_inc(v_xs_155_);
lean_dec_ref_known(v_x_146_, 1);
if (lean_obj_tag(v_xs_155_) == 0)
{
lean_object* v___x_156_; 
lean_dec(v_d_145_);
v___x_156_ = ((lean_object*)(lp_leancjson_CJson_printValue___closed__12));
return v___x_156_;
}
else
{
lean_object* v_head_157_; lean_object* v_tail_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_172_; 
v_head_157_ = lean_ctor_get(v_xs_155_, 0);
v_tail_158_ = lean_ctor_get(v_xs_155_, 1);
v_isSharedCheck_172_ = !lean_is_exclusive(v_xs_155_);
if (v_isSharedCheck_172_ == 0)
{
v___x_160_ = v_xs_155_;
v_isShared_161_ = v_isSharedCheck_172_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_tail_158_);
lean_inc(v_head_157_);
lean_dec(v_xs_155_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_172_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
uint8_t v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_170_; 
v___x_162_ = 91;
v___x_163_ = lean_unsigned_to_nat(1u);
v___x_164_ = lean_nat_add(v_d_145_, v___x_163_);
lean_dec(v_d_145_);
lean_inc(v___x_164_);
v___x_165_ = lp_leancjson_CJson_printValue(v_fmt_144_, v___x_164_, v_head_157_);
v___x_166_ = lp_leancjson_CJson_printTail(v_fmt_144_, v___x_164_, v_tail_158_);
v___x_167_ = l_List_appendTR___redArg(v___x_165_, v___x_166_);
v___x_168_ = lean_box(v___x_162_);
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 1, v___x_167_);
lean_ctor_set(v___x_160_, 0, v___x_168_);
v___x_170_ = v___x_160_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v___x_168_);
lean_ctor_set(v_reuseFailAlloc_171_, 1, v___x_167_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
}
}
default: 
{
lean_object* v_kvs_173_; 
v_kvs_173_ = lean_ctor_get(v_x_146_, 0);
lean_inc(v_kvs_173_);
lean_dec_ref_known(v_x_146_, 1);
if (lean_obj_tag(v_kvs_173_) == 0)
{
uint8_t v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_174_ = 123;
v___x_175_ = lp_leancjson_CJson_nl(v_fmt_144_);
v___x_176_ = lp_leancjson_CJson_tabs(v_fmt_144_, v_d_145_);
v___x_177_ = l_List_appendTR___redArg(v___x_175_, v___x_176_);
v___x_178_ = ((lean_object*)(lp_leancjson_CJson_printMembers___closed__0));
v___x_179_ = l_List_appendTR___redArg(v___x_177_, v___x_178_);
v___x_180_ = lean_box(v___x_174_);
v___x_181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
lean_ctor_set(v___x_181_, 1, v___x_179_);
return v___x_181_;
}
else
{
lean_object* v_head_182_; lean_object* v_tail_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_216_; 
v_head_182_ = lean_ctor_get(v_kvs_173_, 0);
v_tail_183_ = lean_ctor_get(v_kvs_173_, 1);
v_isSharedCheck_216_ = !lean_is_exclusive(v_kvs_173_);
if (v_isSharedCheck_216_ == 0)
{
v___x_185_ = v_kvs_173_;
v_isShared_186_ = v_isSharedCheck_216_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_tail_183_);
lean_inc(v_head_182_);
lean_dec(v_kvs_173_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_216_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v_fst_187_; lean_object* v_snd_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_215_; 
v_fst_187_ = lean_ctor_get(v_head_182_, 0);
v_snd_188_ = lean_ctor_get(v_head_182_, 1);
v_isSharedCheck_215_ = !lean_is_exclusive(v_head_182_);
if (v_isSharedCheck_215_ == 0)
{
v___x_190_ = v_head_182_;
v_isShared_191_ = v_isSharedCheck_215_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_snd_188_);
lean_inc(v_fst_187_);
lean_dec(v_head_182_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_215_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
uint8_t v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; uint8_t v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_208_; 
v___x_192_ = 123;
v___x_193_ = lp_leancjson_CJson_nl(v_fmt_144_);
v___x_194_ = lean_unsigned_to_nat(1u);
v___x_195_ = lean_nat_add(v_d_145_, v___x_194_);
lean_dec(v_d_145_);
lean_inc_n(v___x_195_, 2);
v___x_196_ = lp_leancjson_CJson_tabs(v_fmt_144_, v___x_195_);
v___x_197_ = l_List_appendTR___redArg(v___x_193_, v___x_196_);
v___x_198_ = lp_leancjson_CJson_printStr(v_fst_187_);
lean_dec(v_fst_187_);
v___x_199_ = l_List_appendTR___redArg(v___x_197_, v___x_198_);
v___x_200_ = 58;
v___x_201_ = lp_leancjson_CJson_tab(v_fmt_144_);
v___x_202_ = lp_leancjson_CJson_printValue(v_fmt_144_, v___x_195_, v_snd_188_);
v___x_203_ = l_List_appendTR___redArg(v___x_201_, v___x_202_);
v___x_204_ = lp_leancjson_CJson_printMembers(v_fmt_144_, v___x_195_, v_tail_183_);
v___x_205_ = l_List_appendTR___redArg(v___x_203_, v___x_204_);
v___x_206_ = lean_box(v___x_200_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 1, v___x_205_);
lean_ctor_set(v___x_185_, 0, v___x_206_);
v___x_208_ = v___x_185_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_206_);
lean_ctor_set(v_reuseFailAlloc_214_, 1, v___x_205_);
v___x_208_ = v_reuseFailAlloc_214_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_212_; 
v___x_209_ = l_List_appendTR___redArg(v___x_199_, v___x_208_);
v___x_210_ = lean_box(v___x_192_);
if (v_isShared_191_ == 0)
{
lean_ctor_set_tag(v___x_190_, 1);
lean_ctor_set(v___x_190_, 1, v___x_209_);
lean_ctor_set(v___x_190_, 0, v___x_210_);
v___x_212_ = v___x_190_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v___x_210_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v___x_209_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_printTail(uint8_t v_fmt_217_, lean_object* v_d_218_, lean_object* v_x_219_){
_start:
{
if (lean_obj_tag(v_x_219_) == 0)
{
lean_object* v___x_220_; 
lean_dec(v_d_218_);
v___x_220_ = ((lean_object*)(lp_leancjson_CJson_printTail___closed__0));
return v___x_220_;
}
else
{
lean_object* v_head_221_; lean_object* v_tail_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_236_; 
v_head_221_ = lean_ctor_get(v_x_219_, 0);
v_tail_222_ = lean_ctor_get(v_x_219_, 1);
v_isSharedCheck_236_ = !lean_is_exclusive(v_x_219_);
if (v_isSharedCheck_236_ == 0)
{
v___x_224_ = v_x_219_;
v_isShared_225_ = v_isSharedCheck_236_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_tail_222_);
lean_inc(v_head_221_);
lean_dec(v_x_219_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_236_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
uint8_t v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_234_; 
v___x_226_ = 44;
v___x_227_ = lp_leancjson_CJson_sp(v_fmt_217_);
lean_inc(v_d_218_);
v___x_228_ = lp_leancjson_CJson_printValue(v_fmt_217_, v_d_218_, v_head_221_);
v___x_229_ = l_List_appendTR___redArg(v___x_227_, v___x_228_);
v___x_230_ = lp_leancjson_CJson_printTail(v_fmt_217_, v_d_218_, v_tail_222_);
v___x_231_ = l_List_appendTR___redArg(v___x_229_, v___x_230_);
v___x_232_ = lean_box(v___x_226_);
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 1, v___x_231_);
lean_ctor_set(v___x_224_, 0, v___x_232_);
v___x_234_ = v___x_224_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v___x_231_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_printTail___boxed(lean_object* v_fmt_237_, lean_object* v_d_238_, lean_object* v_x_239_){
_start:
{
uint8_t v_fmt_boxed_240_; lean_object* v_res_241_; 
v_fmt_boxed_240_ = lean_unbox(v_fmt_237_);
v_res_241_ = lp_leancjson_CJson_printTail(v_fmt_boxed_240_, v_d_238_, v_x_239_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_printMembers___boxed(lean_object* v_fmt_242_, lean_object* v_d_243_, lean_object* v_x_244_){
_start:
{
uint8_t v_fmt_boxed_245_; lean_object* v_res_246_; 
v_fmt_boxed_245_ = lean_unbox(v_fmt_242_);
v_res_246_ = lp_leancjson_CJson_printMembers(v_fmt_boxed_245_, v_d_243_, v_x_244_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_printValue___boxed(lean_object* v_fmt_247_, lean_object* v_d_248_, lean_object* v_x_249_){
_start:
{
uint8_t v_fmt_boxed_250_; lean_object* v_res_251_; 
v_fmt_boxed_250_ = lean_unbox(v_fmt_247_);
v_res_251_ = lp_leancjson_CJson_printValue(v_fmt_boxed_250_, v_d_248_, v_x_249_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_print(lean_object* v_v_252_){
_start:
{
uint8_t v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_253_ = 1;
v___x_254_ = lean_unsigned_to_nat(0u);
v___x_255_ = lp_leancjson_CJson_printValue(v___x_253_, v___x_254_, v_v_252_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_printUnformatted(lean_object* v_v_256_){
_start:
{
uint8_t v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_257_ = 0;
v___x_258_ = lean_unsigned_to_nat(0u);
v___x_259_ = lp_leancjson_CJson_printValue(v___x_257_, v___x_258_, v_v_256_);
return v___x_259_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Number(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Str(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_leancjson_CJson_Print(uint8_t builtin) {
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
res = initialize_leancjson_CJson_Number(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Str(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
