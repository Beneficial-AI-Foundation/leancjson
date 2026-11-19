// Lean compiler output
// Module: Main
// Imports: public import Init public meta import Init public import CJson
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
lean_object* lean_get_stdout();
lean_object* lean_array_mk(lean_object*);
lean_object* lean_byte_array_mk(lean_object*);
uint8_t l_ByteArray_isEmpty(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* l_ByteArray_toList(lean_object*);
lean_object* lean_get_stdin();
extern lean_object* l_ByteArray_empty;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_IO_FS_readBinFile(lean_object*);
lean_object* lp_leancjson_CJson_parse(lean_object*);
lean_object* lp_leancjson_CJson_printUnformatted(lean_object*);
lean_object* lp_leancjson_CJson_print(lean_object*);
lean_object* lp_leancjson_CJson_parseStrict(lean_object*);
lean_object* lp_leancjson_CJson_minify(lean_object*);
static const lean_ctor_object lp_leancjson_readAll___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(65536ULL)}};
LEAN_EXPORT const lean_object* lp_leancjson_readAll___boxed__const__1 = (const lean_object*)&lp_leancjson_readAll___boxed__const__1_value;
LEAN_EXPORT lean_object* lp_leancjson_readAll(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_readAll___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_leancjson_readInput___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* lp_leancjson_readInput___closed__0 = (const lean_object*)&lp_leancjson_readInput___closed__0_value;
LEAN_EXPORT lean_object* lp_leancjson_readInput(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_readInput___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_writeOut(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_writeOut___boxed(lean_object*, lean_object*);
static const lean_string_object lp_leancjson_usage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "usage: cjson (print|compact|minify|check) [FILE]   (FILE defaults to stdin)"};
static const lean_object* lp_leancjson_usage___closed__0 = (const lean_object*)&lp_leancjson_usage___closed__0_value;
LEAN_EXPORT const lean_object* lp_leancjson_usage = (const lean_object*)&lp_leancjson_usage___closed__0_value;
static const lean_ctor_object lp_leancjson_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_main___closed__0 = (const lean_object*)&lp_leancjson_main___closed__0_value;
static const lean_string_object lp_leancjson_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "cjson: parse error"};
static const lean_object* lp_leancjson_main___closed__1 = (const lean_object*)&lp_leancjson_main___closed__1_value;
static const lean_string_object lp_leancjson_main___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "print"};
static const lean_object* lp_leancjson_main___closed__2 = (const lean_object*)&lp_leancjson_main___closed__2_value;
static const lean_string_object lp_leancjson_main___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "minify"};
static const lean_object* lp_leancjson_main___closed__3 = (const lean_object*)&lp_leancjson_main___closed__3_value;
static const lean_string_object lp_leancjson_main___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "check"};
static const lean_object* lp_leancjson_main___closed__4 = (const lean_object*)&lp_leancjson_main___closed__4_value;
static const lean_string_object lp_leancjson_main___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "compact"};
static const lean_object* lp_leancjson_main___closed__5 = (const lean_object*)&lp_leancjson_main___closed__5_value;
static const lean_string_object lp_leancjson_main___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "cjson: not valid JSON"};
static const lean_object* lp_leancjson_main___closed__6 = (const lean_object*)&lp_leancjson_main___closed__6_value;
LEAN_EXPORT lean_object* lp_leancjson_main___boxed__const__1;
LEAN_EXPORT lean_object* lp_leancjson_main___boxed__const__2;
LEAN_EXPORT lean_object* lp_leancjson_main___boxed__const__3;
LEAN_EXPORT lean_object* _lean_main(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_main___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_readAll(lean_object* v_h_3_, lean_object* v_acc_4_){
_start:
{
lean_object* v_read_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v_read_6_ = lean_ctor_get(v_h_3_, 1);
v___x_7_ = ((lean_object*)(lp_leancjson_readAll___boxed__const__1));
lean_inc_ref(v_read_6_);
v___x_8_ = lean_apply_2(v_read_6_, v___x_7_, lean_box(0));
if (lean_obj_tag(v___x_8_) == 0)
{
lean_object* v_a_9_; lean_object* v___x_11_; uint8_t v_isShared_12_; uint8_t v_isSharedCheck_22_; 
v_a_9_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_22_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_22_ == 0)
{
v___x_11_ = v___x_8_;
v_isShared_12_ = v_isSharedCheck_22_;
goto v_resetjp_10_;
}
else
{
lean_inc(v_a_9_);
lean_dec(v___x_8_);
v___x_11_ = lean_box(0);
v_isShared_12_ = v_isSharedCheck_22_;
goto v_resetjp_10_;
}
v_resetjp_10_:
{
uint8_t v___x_13_; 
v___x_13_ = l_ByteArray_isEmpty(v_a_9_);
if (v___x_13_ == 0)
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
lean_del_object(v___x_11_);
v___x_14_ = lean_unsigned_to_nat(0u);
v___x_15_ = lean_byte_array_size(v_acc_4_);
v___x_16_ = lean_byte_array_size(v_a_9_);
v___x_17_ = lean_byte_array_copy_slice(v_a_9_, v___x_14_, v_acc_4_, v___x_15_, v___x_16_, v___x_13_);
lean_dec(v_a_9_);
v_acc_4_ = v___x_17_;
goto _start;
}
else
{
lean_object* v___x_20_; 
lean_dec(v_a_9_);
lean_dec_ref(v_h_3_);
if (v_isShared_12_ == 0)
{
lean_ctor_set(v___x_11_, 0, v_acc_4_);
v___x_20_ = v___x_11_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v_acc_4_);
v___x_20_ = v_reuseFailAlloc_21_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
return v___x_20_;
}
}
}
}
else
{
lean_dec_ref(v_acc_4_);
lean_dec_ref(v_h_3_);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_readAll___boxed(lean_object* v_h_23_, lean_object* v_acc_24_, lean_object* v_a_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = lp_leancjson_readAll(v_h_23_, v_acc_24_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_readInput(lean_object* v_path_28_){
_start:
{
lean_object* v_data_31_; 
if (lean_obj_tag(v_path_28_) == 0)
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_34_ = lean_get_stdin();
v___x_35_ = l_ByteArray_empty;
v___x_36_ = lp_leancjson_readAll(v___x_34_, v___x_35_);
if (lean_obj_tag(v___x_36_) == 0)
{
lean_object* v_a_37_; 
v_a_37_ = lean_ctor_get(v___x_36_, 0);
lean_inc(v_a_37_);
lean_dec_ref_known(v___x_36_, 1);
v_data_31_ = v_a_37_;
goto v___jp_30_;
}
else
{
lean_object* v_a_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_45_; 
v_a_38_ = lean_ctor_get(v___x_36_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v___x_36_);
if (v_isSharedCheck_45_ == 0)
{
v___x_40_ = v___x_36_;
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_a_38_);
lean_dec(v___x_36_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_43_; 
if (v_isShared_41_ == 0)
{
v___x_43_ = v___x_40_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_a_38_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
}
else
{
lean_object* v_val_46_; lean_object* v___x_47_; uint8_t v___x_48_; 
v_val_46_ = lean_ctor_get(v_path_28_, 0);
v___x_47_ = ((lean_object*)(lp_leancjson_readInput___closed__0));
v___x_48_ = lean_string_dec_eq(v_val_46_, v___x_47_);
if (v___x_48_ == 0)
{
lean_object* v___x_49_; 
v___x_49_ = l_IO_FS_readBinFile(v_val_46_);
if (lean_obj_tag(v___x_49_) == 0)
{
lean_object* v_a_50_; 
v_a_50_ = lean_ctor_get(v___x_49_, 0);
lean_inc(v_a_50_);
lean_dec_ref_known(v___x_49_, 1);
v_data_31_ = v_a_50_;
goto v___jp_30_;
}
else
{
lean_object* v_a_51_; lean_object* v___x_53_; uint8_t v_isShared_54_; uint8_t v_isSharedCheck_58_; 
v_a_51_ = lean_ctor_get(v___x_49_, 0);
v_isSharedCheck_58_ = !lean_is_exclusive(v___x_49_);
if (v_isSharedCheck_58_ == 0)
{
v___x_53_ = v___x_49_;
v_isShared_54_ = v_isSharedCheck_58_;
goto v_resetjp_52_;
}
else
{
lean_inc(v_a_51_);
lean_dec(v___x_49_);
v___x_53_ = lean_box(0);
v_isShared_54_ = v_isSharedCheck_58_;
goto v_resetjp_52_;
}
v_resetjp_52_:
{
lean_object* v___x_56_; 
if (v_isShared_54_ == 0)
{
v___x_56_ = v___x_53_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_57_; 
v_reuseFailAlloc_57_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_57_, 0, v_a_51_);
v___x_56_ = v_reuseFailAlloc_57_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
return v___x_56_;
}
}
}
}
else
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_59_ = lean_get_stdin();
v___x_60_ = l_ByteArray_empty;
v___x_61_ = lp_leancjson_readAll(v___x_59_, v___x_60_);
if (lean_obj_tag(v___x_61_) == 0)
{
lean_object* v_a_62_; 
v_a_62_ = lean_ctor_get(v___x_61_, 0);
lean_inc(v_a_62_);
lean_dec_ref_known(v___x_61_, 1);
v_data_31_ = v_a_62_;
goto v___jp_30_;
}
else
{
lean_object* v_a_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_70_; 
v_a_63_ = lean_ctor_get(v___x_61_, 0);
v_isSharedCheck_70_ = !lean_is_exclusive(v___x_61_);
if (v_isSharedCheck_70_ == 0)
{
v___x_65_ = v___x_61_;
v_isShared_66_ = v_isSharedCheck_70_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_a_63_);
lean_dec(v___x_61_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_70_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_68_; 
if (v_isShared_66_ == 0)
{
v___x_68_ = v___x_65_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_69_, 0, v_a_63_);
v___x_68_ = v_reuseFailAlloc_69_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
return v___x_68_;
}
}
}
}
}
v___jp_30_:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = l_ByteArray_toList(v_data_31_);
lean_dec_ref(v_data_31_);
v___x_33_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
return v___x_33_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_readInput___boxed(lean_object* v_path_71_, lean_object* v_a_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = lp_leancjson_readInput(v_path_71_);
lean_dec(v_path_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_writeOut(lean_object* v_b_74_){
_start:
{
lean_object* v___x_76_; lean_object* v_flush_77_; lean_object* v_write_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_76_ = lean_get_stdout();
v_flush_77_ = lean_ctor_get(v___x_76_, 0);
lean_inc_ref(v_flush_77_);
v_write_78_ = lean_ctor_get(v___x_76_, 2);
lean_inc_ref(v_write_78_);
lean_dec_ref(v___x_76_);
v___x_79_ = lean_array_mk(v_b_74_);
v___x_80_ = lean_byte_array_mk(v___x_79_);
v___x_81_ = lean_apply_2(v_write_78_, v___x_80_, lean_box(0));
if (lean_obj_tag(v___x_81_) == 0)
{
lean_object* v___x_82_; 
lean_dec_ref_known(v___x_81_, 1);
v___x_82_ = lean_apply_1(v_flush_77_, lean_box(0));
return v___x_82_;
}
else
{
lean_dec_ref(v_flush_77_);
return v___x_81_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_writeOut___boxed(lean_object* v_b_83_, lean_object* v_a_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = lp_leancjson_writeOut(v_b_83_);
return v_res_85_;
}
}
static lean_object* _init_lp_leancjson_main___boxed__const__1(void){
_start:
{
uint32_t v___x_98_; lean_object* v___x_99_; 
v___x_98_ = 0;
v___x_99_ = lean_box_uint32(v___x_98_);
return v___x_99_;
}
}
static lean_object* _init_lp_leancjson_main___boxed__const__2(void){
_start:
{
uint32_t v___x_100_; lean_object* v___x_101_; 
v___x_100_ = 2;
v___x_101_ = lean_box_uint32(v___x_100_);
return v___x_101_;
}
}
static lean_object* _init_lp_leancjson_main___boxed__const__3(void){
_start:
{
uint32_t v___x_102_; lean_object* v___x_103_; 
v___x_102_ = 1;
v___x_103_ = lean_box_uint32(v___x_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* v_args_104_){
_start:
{
lean_object* v___y_107_; 
if (lean_obj_tag(v_args_104_) == 0)
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = ((lean_object*)(lp_leancjson_usage___closed__0));
v___x_137_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_136_);
if (lean_obj_tag(v___x_137_) == 0)
{
lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_145_; 
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_145_ == 0)
{
lean_object* v_unused_146_; 
v_unused_146_ = lean_ctor_get(v___x_137_, 0);
lean_dec(v_unused_146_);
v___x_139_ = v___x_137_;
v_isShared_140_ = v_isSharedCheck_145_;
goto v_resetjp_138_;
}
else
{
lean_dec(v___x_137_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_145_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_141_; lean_object* v___x_143_; 
v___x_141_ = lp_leancjson_main___boxed__const__2;
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 0, v___x_141_);
v___x_143_ = v___x_139_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v___x_141_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
else
{
lean_object* v_a_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_154_; 
v_a_147_ = lean_ctor_get(v___x_137_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_154_ == 0)
{
v___x_149_ = v___x_137_;
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_a_147_);
lean_dec(v___x_137_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_152_; 
if (v_isShared_150_ == 0)
{
v___x_152_ = v___x_149_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v_a_147_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
}
}
else
{
lean_object* v_head_155_; lean_object* v_tail_156_; lean_object* v___x_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
v_head_155_ = lean_ctor_get(v_args_104_, 0);
lean_inc(v_head_155_);
v_tail_156_ = lean_ctor_get(v_args_104_, 1);
lean_inc(v_tail_156_);
lean_dec_ref_known(v_args_104_, 2);
v___x_157_ = lean_unsigned_to_nat(1u);
v___x_158_ = l_List_lengthTR___redArg(v_tail_156_);
v___x_159_ = lean_nat_dec_lt(v___x_157_, v___x_158_);
lean_dec(v___x_158_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = l_List_head_x3f___redArg(v_tail_156_);
lean_dec(v_tail_156_);
v___x_161_ = lp_leancjson_readInput(v___x_160_);
lean_dec(v___x_160_);
if (lean_obj_tag(v___x_161_) == 0)
{
lean_object* v_a_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_262_; 
v_a_162_ = lean_ctor_get(v___x_161_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_262_ == 0)
{
v___x_164_ = v___x_161_;
v_isShared_165_ = v_isSharedCheck_262_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_a_162_);
lean_dec(v___x_161_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_262_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v___x_192_; uint8_t v___x_193_; 
v___x_192_ = ((lean_object*)(lp_leancjson_main___closed__3));
v___x_193_ = lean_string_dec_eq(v_head_155_, v___x_192_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; uint8_t v___x_195_; 
v___x_194_ = ((lean_object*)(lp_leancjson_main___closed__4));
v___x_195_ = lean_string_dec_eq(v_head_155_, v___x_194_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; uint8_t v___x_197_; 
lean_del_object(v___x_164_);
v___x_196_ = ((lean_object*)(lp_leancjson_main___closed__2));
v___x_197_ = lean_string_dec_eq(v_head_155_, v___x_196_);
if (v___x_197_ == 0)
{
lean_object* v___x_198_; uint8_t v___x_199_; 
v___x_198_ = ((lean_object*)(lp_leancjson_main___closed__5));
v___x_199_ = lean_string_dec_eq(v_head_155_, v___x_198_);
if (v___x_199_ == 0)
{
lean_object* v___x_200_; lean_object* v___x_201_; 
lean_dec(v_a_162_);
lean_dec(v_head_155_);
v___x_200_ = ((lean_object*)(lp_leancjson_usage___closed__0));
v___x_201_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_200_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_209_; 
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_209_ == 0)
{
lean_object* v_unused_210_; 
v_unused_210_ = lean_ctor_get(v___x_201_, 0);
lean_dec(v_unused_210_);
v___x_203_ = v___x_201_;
v_isShared_204_ = v_isSharedCheck_209_;
goto v_resetjp_202_;
}
else
{
lean_dec(v___x_201_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_209_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_205_; lean_object* v___x_207_; 
v___x_205_ = lp_leancjson_main___boxed__const__2;
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 0, v___x_205_);
v___x_207_ = v___x_203_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v___x_205_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
else
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_218_; 
v_a_211_ = lean_ctor_get(v___x_201_, 0);
v_isSharedCheck_218_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_218_ == 0)
{
v___x_213_ = v___x_201_;
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v___x_201_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_216_; 
if (v_isShared_214_ == 0)
{
v___x_216_ = v___x_213_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v_a_211_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
}
else
{
goto v___jp_166_;
}
}
else
{
goto v___jp_166_;
}
}
else
{
lean_object* v___x_219_; 
lean_dec(v_head_155_);
v___x_219_ = lp_leancjson_CJson_parseStrict(v_a_162_);
lean_dec(v_a_162_);
if (lean_obj_tag(v___x_219_) == 0)
{
lean_object* v___x_220_; lean_object* v___x_221_; 
lean_del_object(v___x_164_);
v___x_220_ = ((lean_object*)(lp_leancjson_main___closed__6));
v___x_221_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_220_);
if (lean_obj_tag(v___x_221_) == 0)
{
lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_229_; 
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_221_);
if (v_isSharedCheck_229_ == 0)
{
lean_object* v_unused_230_; 
v_unused_230_ = lean_ctor_get(v___x_221_, 0);
lean_dec(v_unused_230_);
v___x_223_ = v___x_221_;
v_isShared_224_ = v_isSharedCheck_229_;
goto v_resetjp_222_;
}
else
{
lean_dec(v___x_221_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_229_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_225_; lean_object* v___x_227_; 
v___x_225_ = lp_leancjson_main___boxed__const__3;
if (v_isShared_224_ == 0)
{
lean_ctor_set(v___x_223_, 0, v___x_225_);
v___x_227_ = v___x_223_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v___x_225_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
else
{
lean_object* v_a_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_238_; 
v_a_231_ = lean_ctor_get(v___x_221_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_221_);
if (v_isSharedCheck_238_ == 0)
{
v___x_233_ = v___x_221_;
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_a_231_);
lean_dec(v___x_221_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_236_; 
if (v_isShared_234_ == 0)
{
v___x_236_ = v___x_233_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_a_231_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
}
else
{
lean_object* v___x_239_; lean_object* v___x_241_; 
lean_dec_ref_known(v___x_219_, 1);
v___x_239_ = lp_leancjson_main___boxed__const__1;
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 0, v___x_239_);
v___x_241_ = v___x_164_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v___x_239_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
else
{
lean_object* v___x_243_; lean_object* v___x_244_; 
lean_del_object(v___x_164_);
lean_dec(v_head_155_);
v___x_243_ = lp_leancjson_CJson_minify(v_a_162_);
v___x_244_ = lp_leancjson_writeOut(v___x_243_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_252_; 
v_isSharedCheck_252_ = !lean_is_exclusive(v___x_244_);
if (v_isSharedCheck_252_ == 0)
{
lean_object* v_unused_253_; 
v_unused_253_ = lean_ctor_get(v___x_244_, 0);
lean_dec(v_unused_253_);
v___x_246_ = v___x_244_;
v_isShared_247_ = v_isSharedCheck_252_;
goto v_resetjp_245_;
}
else
{
lean_dec(v___x_244_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_252_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v___x_248_; lean_object* v___x_250_; 
v___x_248_ = lp_leancjson_main___boxed__const__1;
if (v_isShared_247_ == 0)
{
lean_ctor_set(v___x_246_, 0, v___x_248_);
v___x_250_ = v___x_246_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v___x_248_);
v___x_250_ = v_reuseFailAlloc_251_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
return v___x_250_;
}
}
}
else
{
lean_object* v_a_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_261_; 
v_a_254_ = lean_ctor_get(v___x_244_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_244_);
if (v_isSharedCheck_261_ == 0)
{
v___x_256_ = v___x_244_;
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_a_254_);
lean_dec(v___x_244_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_259_; 
if (v_isShared_257_ == 0)
{
v___x_259_ = v___x_256_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_a_254_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
v___jp_166_:
{
lean_object* v___x_167_; 
v___x_167_ = lp_leancjson_CJson_parse(v_a_162_);
lean_dec(v_a_162_);
if (lean_obj_tag(v___x_167_) == 0)
{
lean_object* v___x_168_; lean_object* v___x_169_; 
lean_dec(v_head_155_);
v___x_168_ = ((lean_object*)(lp_leancjson_main___closed__1));
v___x_169_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_168_);
if (lean_obj_tag(v___x_169_) == 0)
{
lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_177_; 
v_isSharedCheck_177_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_177_ == 0)
{
lean_object* v_unused_178_; 
v_unused_178_ = lean_ctor_get(v___x_169_, 0);
lean_dec(v_unused_178_);
v___x_171_ = v___x_169_;
v_isShared_172_ = v_isSharedCheck_177_;
goto v_resetjp_170_;
}
else
{
lean_dec(v___x_169_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_177_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_173_; lean_object* v___x_175_; 
v___x_173_ = lp_leancjson_main___boxed__const__3;
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 0, v___x_173_);
v___x_175_ = v___x_171_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v___x_173_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
else
{
lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_186_; 
v_a_179_ = lean_ctor_get(v___x_169_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_186_ == 0)
{
v___x_181_ = v___x_169_;
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v___x_169_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_184_; 
if (v_isShared_182_ == 0)
{
v___x_184_ = v___x_181_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_a_179_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
}
else
{
lean_object* v_val_187_; lean_object* v___x_188_; uint8_t v___x_189_; 
v_val_187_ = lean_ctor_get(v___x_167_, 0);
lean_inc(v_val_187_);
lean_dec_ref_known(v___x_167_, 1);
v___x_188_ = ((lean_object*)(lp_leancjson_main___closed__2));
v___x_189_ = lean_string_dec_eq(v_head_155_, v___x_188_);
lean_dec(v_head_155_);
if (v___x_189_ == 0)
{
lean_object* v___x_190_; 
v___x_190_ = lp_leancjson_CJson_printUnformatted(v_val_187_);
v___y_107_ = v___x_190_;
goto v___jp_106_;
}
else
{
lean_object* v___x_191_; 
v___x_191_ = lp_leancjson_CJson_print(v_val_187_);
v___y_107_ = v___x_191_;
goto v___jp_106_;
}
}
}
}
}
else
{
lean_object* v_a_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_270_; 
lean_dec(v_head_155_);
v_a_263_ = lean_ctor_get(v___x_161_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_270_ == 0)
{
v___x_265_ = v___x_161_;
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_a_263_);
lean_dec(v___x_161_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_268_; 
if (v_isShared_266_ == 0)
{
v___x_268_ = v___x_265_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_a_263_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
}
else
{
lean_object* v___x_271_; lean_object* v___x_272_; 
lean_dec(v_tail_156_);
lean_dec(v_head_155_);
v___x_271_ = ((lean_object*)(lp_leancjson_usage___closed__0));
v___x_272_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_271_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_280_; 
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_280_ == 0)
{
lean_object* v_unused_281_; 
v_unused_281_ = lean_ctor_get(v___x_272_, 0);
lean_dec(v_unused_281_);
v___x_274_ = v___x_272_;
v_isShared_275_ = v_isSharedCheck_280_;
goto v_resetjp_273_;
}
else
{
lean_dec(v___x_272_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_280_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_276_; lean_object* v___x_278_; 
v___x_276_ = lp_leancjson_main___boxed__const__2;
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 0, v___x_276_);
v___x_278_ = v___x_274_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v___x_276_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
else
{
lean_object* v_a_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_289_; 
v_a_282_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_289_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_289_ == 0)
{
v___x_284_ = v___x_272_;
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_a_282_);
lean_dec(v___x_272_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_287_; 
if (v_isShared_285_ == 0)
{
v___x_287_ = v___x_284_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_a_282_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
}
}
v___jp_106_:
{
lean_object* v___x_108_; 
v___x_108_ = lp_leancjson_writeOut(v___y_107_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v___x_109_; lean_object* v___x_110_; 
lean_dec_ref_known(v___x_108_, 1);
v___x_109_ = ((lean_object*)(lp_leancjson_main___closed__0));
v___x_110_ = lp_leancjson_writeOut(v___x_109_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_118_; 
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_118_ == 0)
{
lean_object* v_unused_119_; 
v_unused_119_ = lean_ctor_get(v___x_110_, 0);
lean_dec(v_unused_119_);
v___x_112_ = v___x_110_;
v_isShared_113_ = v_isSharedCheck_118_;
goto v_resetjp_111_;
}
else
{
lean_dec(v___x_110_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_118_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_114_; lean_object* v___x_116_; 
v___x_114_ = lp_leancjson_main___boxed__const__1;
if (v_isShared_113_ == 0)
{
lean_ctor_set(v___x_112_, 0, v___x_114_);
v___x_116_ = v___x_112_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v___x_114_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
else
{
lean_object* v_a_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_127_; 
v_a_120_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_127_ == 0)
{
v___x_122_ = v___x_110_;
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_a_120_);
lean_dec(v___x_110_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_125_; 
if (v_isShared_123_ == 0)
{
v___x_125_ = v___x_122_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_a_120_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
}
else
{
lean_object* v_a_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_135_; 
v_a_128_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_135_ == 0)
{
v___x_130_ = v___x_108_;
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_a_128_);
lean_dec(v___x_108_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_133_; 
if (v_isShared_131_ == 0)
{
v___x_133_ = v___x_130_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_a_128_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_main___boxed(lean_object* v_args_290_, lean_object* v_a_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = _lean_main(v_args_290_);
return v_res_292_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_leancjson_CJson(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_leancjson_Main(uint8_t builtin) {
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
res = initialize_leancjson_CJson(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_leancjson_main___boxed__const__1 = _init_lp_leancjson_main___boxed__const__1();
lean_mark_persistent(lp_leancjson_main___boxed__const__1);
lp_leancjson_main___boxed__const__2 = _init_lp_leancjson_main___boxed__const__2();
lean_mark_persistent(lp_leancjson_main___boxed__const__2);
lp_leancjson_main___boxed__const__3 = _init_lp_leancjson_main___boxed__const__3();
lean_mark_persistent(lp_leancjson_main___boxed__const__3);
return lean_io_result_mk_ok(lean_box(0));
}
char ** lean_setup_args(int argc, char ** argv);
#if defined(WIN32) || defined(_WIN32)
#include <windows.h>
#endif
lean_object* run_main(int argc, char ** argv) {
    lean_object* in = lean_box(0);
    int i = argc;
    while (i > 1) {
      lean_object* n;
      i--;
      n = lean_alloc_ctor(1,2,0); lean_ctor_set(n, 0, lean_mk_string(argv[i])); lean_ctor_set(n, 1, in);
      in = n;
    }
    return _lean_main(in);
}
int main(int argc, char ** argv) {
#if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
#endif
  lean_object* res;
  argv = lean_setup_args(argc, argv);
  res = initialize_leancjson_Main(1 /* builtin */);
  lean_io_mark_end_initialization();
  if (lean_io_result_is_ok(res)) {
    lean_dec_ref(res);
    lean_init_task_manager();
    res = lean_run_main(&run_main, argc, argv);
  }
  lean_finalize_task_manager();
  if (lean_io_result_is_ok(res)) {
    int ret = lean_unbox_uint32(lean_io_result_get_value(res));
    lean_dec_ref(res);
    return ret;
  } else {
    lean_io_result_show_error(res);
    lean_dec_ref(res);
    return 1;
  }
}
#ifdef __cplusplus
}
#endif
