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
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* l_ByteArray_toList(lean_object*);
lean_object* lean_get_stdin();
extern lean_object* l_ByteArray_empty;
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
LEAN_EXPORT uint8_t lp_leancjson_List_elem___at___00main_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_elem___at___00main_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_leancjson_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_main___closed__0 = (const lean_object*)&lp_leancjson_main___closed__0_value;
static const lean_string_object lp_leancjson_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "print"};
static const lean_object* lp_leancjson_main___closed__1 = (const lean_object*)&lp_leancjson_main___closed__1_value;
static const lean_string_object lp_leancjson_main___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "compact"};
static const lean_object* lp_leancjson_main___closed__2 = (const lean_object*)&lp_leancjson_main___closed__2_value;
static const lean_string_object lp_leancjson_main___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "minify"};
static const lean_object* lp_leancjson_main___closed__3 = (const lean_object*)&lp_leancjson_main___closed__3_value;
static const lean_string_object lp_leancjson_main___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "check"};
static const lean_object* lp_leancjson_main___closed__4 = (const lean_object*)&lp_leancjson_main___closed__4_value;
static const lean_ctor_object lp_leancjson_main___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_main___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_main___closed__5 = (const lean_object*)&lp_leancjson_main___closed__5_value;
static const lean_ctor_object lp_leancjson_main___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_main___closed__3_value),((lean_object*)&lp_leancjson_main___closed__5_value)}};
static const lean_object* lp_leancjson_main___closed__6 = (const lean_object*)&lp_leancjson_main___closed__6_value;
static const lean_ctor_object lp_leancjson_main___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_main___closed__2_value),((lean_object*)&lp_leancjson_main___closed__6_value)}};
static const lean_object* lp_leancjson_main___closed__7 = (const lean_object*)&lp_leancjson_main___closed__7_value;
static const lean_ctor_object lp_leancjson_main___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_main___closed__1_value),((lean_object*)&lp_leancjson_main___closed__7_value)}};
static const lean_object* lp_leancjson_main___closed__8 = (const lean_object*)&lp_leancjson_main___closed__8_value;
static const lean_string_object lp_leancjson_main___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "cjson: parse error"};
static const lean_object* lp_leancjson_main___closed__9 = (const lean_object*)&lp_leancjson_main___closed__9_value;
static const lean_string_object lp_leancjson_main___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "cjson: not valid JSON"};
static const lean_object* lp_leancjson_main___closed__10 = (const lean_object*)&lp_leancjson_main___closed__10_value;
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
LEAN_EXPORT uint8_t lp_leancjson_List_elem___at___00main_spec__0(lean_object* v_a_88_, lean_object* v_x_89_){
_start:
{
if (lean_obj_tag(v_x_89_) == 0)
{
uint8_t v___x_90_; 
v___x_90_ = 0;
return v___x_90_;
}
else
{
lean_object* v_head_91_; lean_object* v_tail_92_; uint8_t v___x_93_; 
v_head_91_ = lean_ctor_get(v_x_89_, 0);
v_tail_92_ = lean_ctor_get(v_x_89_, 1);
v___x_93_ = lean_string_dec_eq(v_a_88_, v_head_91_);
if (v___x_93_ == 0)
{
v_x_89_ = v_tail_92_;
goto _start;
}
else
{
return v___x_93_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_elem___at___00main_spec__0___boxed(lean_object* v_a_95_, lean_object* v_x_96_){
_start:
{
uint8_t v_res_97_; lean_object* v_r_98_; 
v_res_97_ = lp_leancjson_List_elem___at___00main_spec__0(v_a_95_, v_x_96_);
lean_dec(v_x_96_);
lean_dec_ref(v_a_95_);
v_r_98_ = lean_box(v_res_97_);
return v_r_98_;
}
}
static lean_object* _init_lp_leancjson_main___boxed__const__1(void){
_start:
{
uint32_t v___x_121_; lean_object* v___x_122_; 
v___x_121_ = 0;
v___x_122_ = lean_box_uint32(v___x_121_);
return v___x_122_;
}
}
static lean_object* _init_lp_leancjson_main___boxed__const__2(void){
_start:
{
uint32_t v___x_123_; lean_object* v___x_124_; 
v___x_123_ = 2;
v___x_124_ = lean_box_uint32(v___x_123_);
return v___x_124_;
}
}
static lean_object* _init_lp_leancjson_main___boxed__const__3(void){
_start:
{
uint32_t v___x_125_; lean_object* v___x_126_; 
v___x_125_ = 1;
v___x_126_ = lean_box_uint32(v___x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* v_args_127_){
_start:
{
lean_object* v___y_130_; 
if (lean_obj_tag(v_args_127_) == 0)
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = ((lean_object*)(lp_leancjson_usage___closed__0));
v___x_180_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_179_);
if (lean_obj_tag(v___x_180_) == 0)
{
lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_188_; 
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_180_);
if (v_isSharedCheck_188_ == 0)
{
lean_object* v_unused_189_; 
v_unused_189_ = lean_ctor_get(v___x_180_, 0);
lean_dec(v_unused_189_);
v___x_182_ = v___x_180_;
v_isShared_183_ = v_isSharedCheck_188_;
goto v_resetjp_181_;
}
else
{
lean_dec(v___x_180_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_188_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_184_; lean_object* v___x_186_; 
v___x_184_ = lp_leancjson_main___boxed__const__2;
if (v_isShared_183_ == 0)
{
lean_ctor_set(v___x_182_, 0, v___x_184_);
v___x_186_ = v___x_182_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v___x_184_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
else
{
lean_object* v_a_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_197_; 
v_a_190_ = lean_ctor_get(v___x_180_, 0);
v_isSharedCheck_197_ = !lean_is_exclusive(v___x_180_);
if (v_isSharedCheck_197_ == 0)
{
v___x_192_ = v___x_180_;
v_isShared_193_ = v_isSharedCheck_197_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_a_190_);
lean_dec(v___x_180_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_197_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___x_195_; 
if (v_isShared_193_ == 0)
{
v___x_195_ = v___x_192_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_a_190_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
return v___x_195_;
}
}
}
}
else
{
lean_object* v_head_198_; lean_object* v_tail_199_; lean_object* v___x_200_; lean_object* v___x_201_; uint8_t v___x_202_; 
v_head_198_ = lean_ctor_get(v_args_127_, 0);
lean_inc(v_head_198_);
v_tail_199_ = lean_ctor_get(v_args_127_, 1);
lean_inc(v_tail_199_);
lean_dec_ref_known(v_args_127_, 2);
v___x_200_ = lean_unsigned_to_nat(1u);
v___x_201_ = l_List_lengthTR___redArg(v_tail_199_);
v___x_202_ = lean_nat_dec_lt(v___x_200_, v___x_201_);
lean_dec(v___x_201_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_203_ = ((lean_object*)(lp_leancjson_main___closed__1));
v___x_204_ = ((lean_object*)(lp_leancjson_main___closed__2));
v___x_205_ = ((lean_object*)(lp_leancjson_main___closed__3));
v___x_206_ = ((lean_object*)(lp_leancjson_main___closed__4));
v___x_207_ = ((lean_object*)(lp_leancjson_main___closed__8));
v___x_208_ = lp_leancjson_List_elem___at___00main_spec__0(v_head_198_, v___x_207_);
if (v___x_208_ == 0)
{
lean_dec(v_tail_199_);
lean_dec(v_head_198_);
goto v___jp_159_;
}
else
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = l_List_head_x3f___redArg(v_tail_199_);
lean_dec(v_tail_199_);
v___x_210_ = lp_leancjson_readInput(v___x_209_);
lean_dec(v___x_209_);
if (lean_obj_tag(v___x_210_) == 0)
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_306_; 
v_a_211_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_306_ == 0)
{
v___x_213_ = v___x_210_;
v_isShared_214_ = v_isSharedCheck_306_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v___x_210_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_306_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
uint8_t v___x_240_; 
v___x_240_ = lean_string_dec_eq(v_head_198_, v___x_205_);
if (v___x_240_ == 0)
{
uint8_t v___x_241_; 
v___x_241_ = lean_string_dec_eq(v_head_198_, v___x_206_);
if (v___x_241_ == 0)
{
uint8_t v___x_242_; 
lean_del_object(v___x_213_);
v___x_242_ = lean_string_dec_eq(v_head_198_, v___x_203_);
if (v___x_242_ == 0)
{
uint8_t v___x_243_; 
v___x_243_ = lean_string_dec_eq(v_head_198_, v___x_204_);
if (v___x_243_ == 0)
{
lean_object* v___x_244_; lean_object* v___x_245_; 
lean_dec(v_a_211_);
lean_dec(v_head_198_);
v___x_244_ = ((lean_object*)(lp_leancjson_usage___closed__0));
v___x_245_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_244_);
if (lean_obj_tag(v___x_245_) == 0)
{
lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_253_; 
v_isSharedCheck_253_ = !lean_is_exclusive(v___x_245_);
if (v_isSharedCheck_253_ == 0)
{
lean_object* v_unused_254_; 
v_unused_254_ = lean_ctor_get(v___x_245_, 0);
lean_dec(v_unused_254_);
v___x_247_ = v___x_245_;
v_isShared_248_ = v_isSharedCheck_253_;
goto v_resetjp_246_;
}
else
{
lean_dec(v___x_245_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_253_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___x_249_; lean_object* v___x_251_; 
v___x_249_ = lp_leancjson_main___boxed__const__2;
if (v_isShared_248_ == 0)
{
lean_ctor_set(v___x_247_, 0, v___x_249_);
v___x_251_ = v___x_247_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v___x_249_);
v___x_251_ = v_reuseFailAlloc_252_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
return v___x_251_;
}
}
}
else
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_262_; 
v_a_255_ = lean_ctor_get(v___x_245_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_245_);
if (v_isSharedCheck_262_ == 0)
{
v___x_257_ = v___x_245_;
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v___x_245_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_260_; 
if (v_isShared_258_ == 0)
{
v___x_260_ = v___x_257_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_a_255_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
return v___x_260_;
}
}
}
}
else
{
goto v___jp_215_;
}
}
else
{
goto v___jp_215_;
}
}
else
{
lean_object* v___x_263_; 
lean_dec(v_head_198_);
v___x_263_ = lp_leancjson_CJson_parseStrict(v_a_211_);
lean_dec(v_a_211_);
if (lean_obj_tag(v___x_263_) == 0)
{
lean_object* v___x_264_; lean_object* v___x_265_; 
lean_del_object(v___x_213_);
v___x_264_ = ((lean_object*)(lp_leancjson_main___closed__10));
v___x_265_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_264_);
if (lean_obj_tag(v___x_265_) == 0)
{
lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_273_; 
v_isSharedCheck_273_ = !lean_is_exclusive(v___x_265_);
if (v_isSharedCheck_273_ == 0)
{
lean_object* v_unused_274_; 
v_unused_274_ = lean_ctor_get(v___x_265_, 0);
lean_dec(v_unused_274_);
v___x_267_ = v___x_265_;
v_isShared_268_ = v_isSharedCheck_273_;
goto v_resetjp_266_;
}
else
{
lean_dec(v___x_265_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_273_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_269_; lean_object* v___x_271_; 
v___x_269_ = lp_leancjson_main___boxed__const__3;
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 0, v___x_269_);
v___x_271_ = v___x_267_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v___x_269_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
else
{
lean_object* v_a_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_282_; 
v_a_275_ = lean_ctor_get(v___x_265_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_265_);
if (v_isSharedCheck_282_ == 0)
{
v___x_277_ = v___x_265_;
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_a_275_);
lean_dec(v___x_265_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_280_; 
if (v_isShared_278_ == 0)
{
v___x_280_ = v___x_277_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_a_275_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
}
else
{
lean_object* v___x_283_; lean_object* v___x_285_; 
lean_dec_ref_known(v___x_263_, 1);
v___x_283_ = lp_leancjson_main___boxed__const__1;
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 0, v___x_283_);
v___x_285_ = v___x_213_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v___x_283_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
}
}
else
{
lean_object* v___x_287_; lean_object* v___x_288_; 
lean_del_object(v___x_213_);
lean_dec(v_head_198_);
v___x_287_ = lp_leancjson_CJson_minify(v_a_211_);
v___x_288_ = lp_leancjson_writeOut(v___x_287_);
if (lean_obj_tag(v___x_288_) == 0)
{
lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_296_; 
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_296_ == 0)
{
lean_object* v_unused_297_; 
v_unused_297_ = lean_ctor_get(v___x_288_, 0);
lean_dec(v_unused_297_);
v___x_290_ = v___x_288_;
v_isShared_291_ = v_isSharedCheck_296_;
goto v_resetjp_289_;
}
else
{
lean_dec(v___x_288_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_296_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_292_; lean_object* v___x_294_; 
v___x_292_ = lp_leancjson_main___boxed__const__1;
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 0, v___x_292_);
v___x_294_ = v___x_290_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v___x_292_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
else
{
lean_object* v_a_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_305_; 
v_a_298_ = lean_ctor_get(v___x_288_, 0);
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_305_ == 0)
{
v___x_300_ = v___x_288_;
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_a_298_);
lean_dec(v___x_288_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_303_; 
if (v_isShared_301_ == 0)
{
v___x_303_ = v___x_300_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_a_298_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
}
v___jp_215_:
{
lean_object* v___x_216_; 
v___x_216_ = lp_leancjson_CJson_parse(v_a_211_);
lean_dec(v_a_211_);
if (lean_obj_tag(v___x_216_) == 0)
{
lean_object* v___x_217_; lean_object* v___x_218_; 
lean_dec(v_head_198_);
v___x_217_ = ((lean_object*)(lp_leancjson_main___closed__9));
v___x_218_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_217_);
if (lean_obj_tag(v___x_218_) == 0)
{
lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_226_; 
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_218_);
if (v_isSharedCheck_226_ == 0)
{
lean_object* v_unused_227_; 
v_unused_227_ = lean_ctor_get(v___x_218_, 0);
lean_dec(v_unused_227_);
v___x_220_ = v___x_218_;
v_isShared_221_ = v_isSharedCheck_226_;
goto v_resetjp_219_;
}
else
{
lean_dec(v___x_218_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_226_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_222_; lean_object* v___x_224_; 
v___x_222_ = lp_leancjson_main___boxed__const__3;
if (v_isShared_221_ == 0)
{
lean_ctor_set(v___x_220_, 0, v___x_222_);
v___x_224_ = v___x_220_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_222_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
else
{
lean_object* v_a_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_235_; 
v_a_228_ = lean_ctor_get(v___x_218_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v___x_218_);
if (v_isSharedCheck_235_ == 0)
{
v___x_230_ = v___x_218_;
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_a_228_);
lean_dec(v___x_218_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___x_233_; 
if (v_isShared_231_ == 0)
{
v___x_233_ = v___x_230_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v_a_228_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
}
else
{
lean_object* v_val_236_; uint8_t v___x_237_; 
v_val_236_ = lean_ctor_get(v___x_216_, 0);
lean_inc(v_val_236_);
lean_dec_ref_known(v___x_216_, 1);
v___x_237_ = lean_string_dec_eq(v_head_198_, v___x_203_);
lean_dec(v_head_198_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; 
v___x_238_ = lp_leancjson_CJson_printUnformatted(v_val_236_);
v___y_130_ = v___x_238_;
goto v___jp_129_;
}
else
{
lean_object* v___x_239_; 
v___x_239_ = lp_leancjson_CJson_print(v_val_236_);
v___y_130_ = v___x_239_;
goto v___jp_129_;
}
}
}
}
}
else
{
lean_object* v_a_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_314_; 
lean_dec(v_head_198_);
v_a_307_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_314_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_314_ == 0)
{
v___x_309_ = v___x_210_;
v_isShared_310_ = v_isSharedCheck_314_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_a_307_);
lean_dec(v___x_210_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_314_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_312_; 
if (v_isShared_310_ == 0)
{
v___x_312_ = v___x_309_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_a_307_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
}
}
else
{
lean_dec(v_tail_199_);
lean_dec(v_head_198_);
goto v___jp_159_;
}
}
v___jp_129_:
{
lean_object* v___x_131_; 
v___x_131_ = lp_leancjson_writeOut(v___y_130_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v___x_132_; lean_object* v___x_133_; 
lean_dec_ref_known(v___x_131_, 1);
v___x_132_ = ((lean_object*)(lp_leancjson_main___closed__0));
v___x_133_ = lp_leancjson_writeOut(v___x_132_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_141_; 
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_141_ == 0)
{
lean_object* v_unused_142_; 
v_unused_142_ = lean_ctor_get(v___x_133_, 0);
lean_dec(v_unused_142_);
v___x_135_ = v___x_133_;
v_isShared_136_ = v_isSharedCheck_141_;
goto v_resetjp_134_;
}
else
{
lean_dec(v___x_133_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_141_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_137_; lean_object* v___x_139_; 
v___x_137_ = lp_leancjson_main___boxed__const__1;
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 0, v___x_137_);
v___x_139_ = v___x_135_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_137_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
else
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_150_; 
v_a_143_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_150_ == 0)
{
v___x_145_ = v___x_133_;
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v___x_133_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_146_ == 0)
{
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_a_143_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
}
else
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_158_; 
v_a_151_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_158_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_158_ == 0)
{
v___x_153_ = v___x_131_;
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_131_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_156_; 
if (v_isShared_154_ == 0)
{
v___x_156_ = v___x_153_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_a_151_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
}
v___jp_159_:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = ((lean_object*)(lp_leancjson_usage___closed__0));
v___x_161_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_160_);
if (lean_obj_tag(v___x_161_) == 0)
{
lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_169_; 
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_169_ == 0)
{
lean_object* v_unused_170_; 
v_unused_170_ = lean_ctor_get(v___x_161_, 0);
lean_dec(v_unused_170_);
v___x_163_ = v___x_161_;
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
else
{
lean_dec(v___x_161_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v___x_165_; lean_object* v___x_167_; 
v___x_165_ = lp_leancjson_main___boxed__const__2;
if (v_isShared_164_ == 0)
{
lean_ctor_set(v___x_163_, 0, v___x_165_);
v___x_167_ = v___x_163_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v___x_165_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
}
else
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_178_; 
v_a_171_ = lean_ctor_get(v___x_161_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_178_ == 0)
{
v___x_173_ = v___x_161_;
v_isShared_174_ = v_isSharedCheck_178_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_161_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_178_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_176_; 
if (v_isShared_174_ == 0)
{
v___x_176_ = v___x_173_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v_a_171_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_main___boxed(lean_object* v_args_315_, lean_object* v_a_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = _lean_main(v_args_315_);
return v_res_317_;
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
