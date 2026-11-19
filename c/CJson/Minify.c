// Lean compiler output
// Module: CJson.Minify
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_code_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_code_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_code_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_code_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_slash_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_slash_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_slash_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_slash_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_line_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_line_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_line_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_line_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_block_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_block_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_block_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_block_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_blockStar_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_blockStar_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_blockStar_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_blockStar_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_str_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_str_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_str_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_str_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_strEsc_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_strEsc_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_strEsc_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_strEsc_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_MinState_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_instDecidableEqMinState(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_instDecidableEqMinState___boxed(lean_object*, lean_object*);
static const lean_string_object lp_leancjson_CJson_instReprMinState_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "CJson.MinState.code"};
static const lean_object* lp_leancjson_CJson_instReprMinState_repr___closed__0 = (const lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__0_value;
static const lean_ctor_object lp_leancjson_CJson_instReprMinState_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__0_value)}};
static const lean_object* lp_leancjson_CJson_instReprMinState_repr___closed__1 = (const lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__1_value;
static const lean_string_object lp_leancjson_CJson_instReprMinState_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "CJson.MinState.slash"};
static const lean_object* lp_leancjson_CJson_instReprMinState_repr___closed__2 = (const lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__2_value;
static const lean_ctor_object lp_leancjson_CJson_instReprMinState_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__2_value)}};
static const lean_object* lp_leancjson_CJson_instReprMinState_repr___closed__3 = (const lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__3_value;
static const lean_string_object lp_leancjson_CJson_instReprMinState_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "CJson.MinState.line"};
static const lean_object* lp_leancjson_CJson_instReprMinState_repr___closed__4 = (const lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__4_value;
static const lean_ctor_object lp_leancjson_CJson_instReprMinState_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__4_value)}};
static const lean_object* lp_leancjson_CJson_instReprMinState_repr___closed__5 = (const lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__5_value;
static const lean_string_object lp_leancjson_CJson_instReprMinState_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "CJson.MinState.block"};
static const lean_object* lp_leancjson_CJson_instReprMinState_repr___closed__6 = (const lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__6_value;
static const lean_ctor_object lp_leancjson_CJson_instReprMinState_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__6_value)}};
static const lean_object* lp_leancjson_CJson_instReprMinState_repr___closed__7 = (const lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__7_value;
static const lean_string_object lp_leancjson_CJson_instReprMinState_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "CJson.MinState.blockStar"};
static const lean_object* lp_leancjson_CJson_instReprMinState_repr___closed__8 = (const lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__8_value;
static const lean_ctor_object lp_leancjson_CJson_instReprMinState_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__8_value)}};
static const lean_object* lp_leancjson_CJson_instReprMinState_repr___closed__9 = (const lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__9_value;
static const lean_string_object lp_leancjson_CJson_instReprMinState_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "CJson.MinState.str"};
static const lean_object* lp_leancjson_CJson_instReprMinState_repr___closed__10 = (const lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__10_value;
static const lean_ctor_object lp_leancjson_CJson_instReprMinState_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__10_value)}};
static const lean_object* lp_leancjson_CJson_instReprMinState_repr___closed__11 = (const lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__11_value;
static const lean_string_object lp_leancjson_CJson_instReprMinState_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "CJson.MinState.strEsc"};
static const lean_object* lp_leancjson_CJson_instReprMinState_repr___closed__12 = (const lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__12_value;
static const lean_ctor_object lp_leancjson_CJson_instReprMinState_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__12_value)}};
static const lean_object* lp_leancjson_CJson_instReprMinState_repr___closed__13 = (const lean_object*)&lp_leancjson_CJson_instReprMinState_repr___closed__13_value;
static lean_once_cell_t lp_leancjson_CJson_instReprMinState_repr___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson_instReprMinState_repr___closed__14;
static lean_once_cell_t lp_leancjson_CJson_instReprMinState_repr___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson_instReprMinState_repr___closed__15;
LEAN_EXPORT lean_object* lp_leancjson_CJson_instReprMinState_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_instReprMinState_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_leancjson_CJson_instReprMinState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_leancjson_CJson_instReprMinState_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_leancjson_CJson_instReprMinState___closed__0 = (const lean_object*)&lp_leancjson_CJson_instReprMinState___closed__0_value;
LEAN_EXPORT const lean_object* lp_leancjson_CJson_instReprMinState = (const lean_object*)&lp_leancjson_CJson_instReprMinState___closed__0_value;
LEAN_EXPORT lean_object* lp_leancjson_CJson_minifyAux(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_minifyAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_minify(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = lp_leancjson_CJson_MinState_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = lp_leancjson_CJson_MinState_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = lp_leancjson_CJson_MinState_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_code_elim___redArg(lean_object* v_code_22_){
_start:
{
lean_inc(v_code_22_);
return v_code_22_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_code_elim___redArg___boxed(lean_object* v_code_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_leancjson_CJson_MinState_code_elim___redArg(v_code_23_);
lean_dec(v_code_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_code_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_code_28_){
_start:
{
lean_inc(v_code_28_);
return v_code_28_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_code_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_code_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = lp_leancjson_CJson_MinState_code_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_code_32_);
lean_dec(v_code_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_slash_elim___redArg(lean_object* v_slash_35_){
_start:
{
lean_inc(v_slash_35_);
return v_slash_35_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_slash_elim___redArg___boxed(lean_object* v_slash_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = lp_leancjson_CJson_MinState_slash_elim___redArg(v_slash_36_);
lean_dec(v_slash_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_slash_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_slash_41_){
_start:
{
lean_inc(v_slash_41_);
return v_slash_41_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_slash_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_slash_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = lp_leancjson_CJson_MinState_slash_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_slash_45_);
lean_dec(v_slash_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_line_elim___redArg(lean_object* v_line_48_){
_start:
{
lean_inc(v_line_48_);
return v_line_48_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_line_elim___redArg___boxed(lean_object* v_line_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = lp_leancjson_CJson_MinState_line_elim___redArg(v_line_49_);
lean_dec(v_line_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_line_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_line_54_){
_start:
{
lean_inc(v_line_54_);
return v_line_54_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_line_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_line_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = lp_leancjson_CJson_MinState_line_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_line_58_);
lean_dec(v_line_58_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_block_elim___redArg(lean_object* v_block_61_){
_start:
{
lean_inc(v_block_61_);
return v_block_61_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_block_elim___redArg___boxed(lean_object* v_block_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = lp_leancjson_CJson_MinState_block_elim___redArg(v_block_62_);
lean_dec(v_block_62_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_block_elim(lean_object* v_motive_64_, uint8_t v_t_65_, lean_object* v_h_66_, lean_object* v_block_67_){
_start:
{
lean_inc(v_block_67_);
return v_block_67_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_block_elim___boxed(lean_object* v_motive_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_block_71_){
_start:
{
uint8_t v_t_boxed_72_; lean_object* v_res_73_; 
v_t_boxed_72_ = lean_unbox(v_t_69_);
v_res_73_ = lp_leancjson_CJson_MinState_block_elim(v_motive_68_, v_t_boxed_72_, v_h_70_, v_block_71_);
lean_dec(v_block_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_blockStar_elim___redArg(lean_object* v_blockStar_74_){
_start:
{
lean_inc(v_blockStar_74_);
return v_blockStar_74_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_blockStar_elim___redArg___boxed(lean_object* v_blockStar_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = lp_leancjson_CJson_MinState_blockStar_elim___redArg(v_blockStar_75_);
lean_dec(v_blockStar_75_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_blockStar_elim(lean_object* v_motive_77_, uint8_t v_t_78_, lean_object* v_h_79_, lean_object* v_blockStar_80_){
_start:
{
lean_inc(v_blockStar_80_);
return v_blockStar_80_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_blockStar_elim___boxed(lean_object* v_motive_81_, lean_object* v_t_82_, lean_object* v_h_83_, lean_object* v_blockStar_84_){
_start:
{
uint8_t v_t_boxed_85_; lean_object* v_res_86_; 
v_t_boxed_85_ = lean_unbox(v_t_82_);
v_res_86_ = lp_leancjson_CJson_MinState_blockStar_elim(v_motive_81_, v_t_boxed_85_, v_h_83_, v_blockStar_84_);
lean_dec(v_blockStar_84_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_str_elim___redArg(lean_object* v_str_87_){
_start:
{
lean_inc(v_str_87_);
return v_str_87_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_str_elim___redArg___boxed(lean_object* v_str_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = lp_leancjson_CJson_MinState_str_elim___redArg(v_str_88_);
lean_dec(v_str_88_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_str_elim(lean_object* v_motive_90_, uint8_t v_t_91_, lean_object* v_h_92_, lean_object* v_str_93_){
_start:
{
lean_inc(v_str_93_);
return v_str_93_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_str_elim___boxed(lean_object* v_motive_94_, lean_object* v_t_95_, lean_object* v_h_96_, lean_object* v_str_97_){
_start:
{
uint8_t v_t_boxed_98_; lean_object* v_res_99_; 
v_t_boxed_98_ = lean_unbox(v_t_95_);
v_res_99_ = lp_leancjson_CJson_MinState_str_elim(v_motive_94_, v_t_boxed_98_, v_h_96_, v_str_97_);
lean_dec(v_str_97_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_strEsc_elim___redArg(lean_object* v_strEsc_100_){
_start:
{
lean_inc(v_strEsc_100_);
return v_strEsc_100_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_strEsc_elim___redArg___boxed(lean_object* v_strEsc_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = lp_leancjson_CJson_MinState_strEsc_elim___redArg(v_strEsc_101_);
lean_dec(v_strEsc_101_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_strEsc_elim(lean_object* v_motive_103_, uint8_t v_t_104_, lean_object* v_h_105_, lean_object* v_strEsc_106_){
_start:
{
lean_inc(v_strEsc_106_);
return v_strEsc_106_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_strEsc_elim___boxed(lean_object* v_motive_107_, lean_object* v_t_108_, lean_object* v_h_109_, lean_object* v_strEsc_110_){
_start:
{
uint8_t v_t_boxed_111_; lean_object* v_res_112_; 
v_t_boxed_111_ = lean_unbox(v_t_108_);
v_res_112_ = lp_leancjson_CJson_MinState_strEsc_elim(v_motive_107_, v_t_boxed_111_, v_h_109_, v_strEsc_110_);
lean_dec(v_strEsc_110_);
return v_res_112_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_MinState_ofNat(lean_object* v_n_113_){
_start:
{
lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_114_ = lean_unsigned_to_nat(2u);
v___x_115_ = lean_nat_dec_le(v_n_113_, v___x_114_);
if (v___x_115_ == 0)
{
lean_object* v___x_116_; uint8_t v___x_117_; 
v___x_116_ = lean_unsigned_to_nat(4u);
v___x_117_ = lean_nat_dec_le(v_n_113_, v___x_116_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_118_ = lean_unsigned_to_nat(5u);
v___x_119_ = lean_nat_dec_le(v_n_113_, v___x_118_);
if (v___x_119_ == 0)
{
uint8_t v___x_120_; 
v___x_120_ = 6;
return v___x_120_;
}
else
{
uint8_t v___x_121_; 
v___x_121_ = 5;
return v___x_121_;
}
}
else
{
lean_object* v___x_122_; uint8_t v___x_123_; 
v___x_122_ = lean_unsigned_to_nat(3u);
v___x_123_ = lean_nat_dec_le(v_n_113_, v___x_122_);
if (v___x_123_ == 0)
{
uint8_t v___x_124_; 
v___x_124_ = 4;
return v___x_124_;
}
else
{
uint8_t v___x_125_; 
v___x_125_ = 3;
return v___x_125_;
}
}
}
else
{
lean_object* v___x_126_; uint8_t v___x_127_; 
v___x_126_ = lean_unsigned_to_nat(0u);
v___x_127_ = lean_nat_dec_le(v_n_113_, v___x_126_);
if (v___x_127_ == 0)
{
lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_128_ = lean_unsigned_to_nat(1u);
v___x_129_ = lean_nat_dec_le(v_n_113_, v___x_128_);
if (v___x_129_ == 0)
{
uint8_t v___x_130_; 
v___x_130_ = 2;
return v___x_130_;
}
else
{
uint8_t v___x_131_; 
v___x_131_ = 1;
return v___x_131_;
}
}
else
{
uint8_t v___x_132_; 
v___x_132_ = 0;
return v___x_132_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_MinState_ofNat___boxed(lean_object* v_n_133_){
_start:
{
uint8_t v_res_134_; lean_object* v_r_135_; 
v_res_134_ = lp_leancjson_CJson_MinState_ofNat(v_n_133_);
lean_dec(v_n_133_);
v_r_135_ = lean_box(v_res_134_);
return v_r_135_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_instDecidableEqMinState(uint8_t v_x_136_, uint8_t v_y_137_){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; 
v___x_138_ = lean_box(v_x_136_);
v___x_139_ = lean_obj_tag_nat(v___x_138_);
lean_dec(v___x_138_);
v___x_140_ = lean_box(v_y_137_);
v___x_141_ = lean_obj_tag_nat(v___x_140_);
lean_dec(v___x_140_);
v___x_142_ = lean_nat_dec_eq(v___x_139_, v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_instDecidableEqMinState___boxed(lean_object* v_x_143_, lean_object* v_y_144_){
_start:
{
uint8_t v_x_23__boxed_145_; uint8_t v_y_24__boxed_146_; uint8_t v_res_147_; lean_object* v_r_148_; 
v_x_23__boxed_145_ = lean_unbox(v_x_143_);
v_y_24__boxed_146_ = lean_unbox(v_y_144_);
v_res_147_ = lp_leancjson_CJson_instDecidableEqMinState(v_x_23__boxed_145_, v_y_24__boxed_146_);
v_r_148_ = lean_box(v_res_147_);
return v_r_148_;
}
}
static lean_object* _init_lp_leancjson_CJson_instReprMinState_repr___closed__14(void){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = lean_unsigned_to_nat(2u);
v___x_171_ = lean_nat_to_int(v___x_170_);
return v___x_171_;
}
}
static lean_object* _init_lp_leancjson_CJson_instReprMinState_repr___closed__15(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = lean_unsigned_to_nat(1u);
v___x_173_ = lean_nat_to_int(v___x_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_instReprMinState_repr(uint8_t v_x_174_, lean_object* v_prec_175_){
_start:
{
lean_object* v___y_177_; lean_object* v___y_184_; lean_object* v___y_191_; lean_object* v___y_198_; lean_object* v___y_205_; lean_object* v___y_212_; lean_object* v___y_219_; 
switch(v_x_174_)
{
case 0:
{
lean_object* v___x_225_; uint8_t v___x_226_; 
v___x_225_ = lean_unsigned_to_nat(1024u);
v___x_226_ = lean_nat_dec_le(v___x_225_, v_prec_175_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; 
v___x_227_ = lean_obj_once(&lp_leancjson_CJson_instReprMinState_repr___closed__14, &lp_leancjson_CJson_instReprMinState_repr___closed__14_once, _init_lp_leancjson_CJson_instReprMinState_repr___closed__14);
v___y_177_ = v___x_227_;
goto v___jp_176_;
}
else
{
lean_object* v___x_228_; 
v___x_228_ = lean_obj_once(&lp_leancjson_CJson_instReprMinState_repr___closed__15, &lp_leancjson_CJson_instReprMinState_repr___closed__15_once, _init_lp_leancjson_CJson_instReprMinState_repr___closed__15);
v___y_177_ = v___x_228_;
goto v___jp_176_;
}
}
case 1:
{
lean_object* v___x_229_; uint8_t v___x_230_; 
v___x_229_ = lean_unsigned_to_nat(1024u);
v___x_230_ = lean_nat_dec_le(v___x_229_, v_prec_175_);
if (v___x_230_ == 0)
{
lean_object* v___x_231_; 
v___x_231_ = lean_obj_once(&lp_leancjson_CJson_instReprMinState_repr___closed__14, &lp_leancjson_CJson_instReprMinState_repr___closed__14_once, _init_lp_leancjson_CJson_instReprMinState_repr___closed__14);
v___y_184_ = v___x_231_;
goto v___jp_183_;
}
else
{
lean_object* v___x_232_; 
v___x_232_ = lean_obj_once(&lp_leancjson_CJson_instReprMinState_repr___closed__15, &lp_leancjson_CJson_instReprMinState_repr___closed__15_once, _init_lp_leancjson_CJson_instReprMinState_repr___closed__15);
v___y_184_ = v___x_232_;
goto v___jp_183_;
}
}
case 2:
{
lean_object* v___x_233_; uint8_t v___x_234_; 
v___x_233_ = lean_unsigned_to_nat(1024u);
v___x_234_ = lean_nat_dec_le(v___x_233_, v_prec_175_);
if (v___x_234_ == 0)
{
lean_object* v___x_235_; 
v___x_235_ = lean_obj_once(&lp_leancjson_CJson_instReprMinState_repr___closed__14, &lp_leancjson_CJson_instReprMinState_repr___closed__14_once, _init_lp_leancjson_CJson_instReprMinState_repr___closed__14);
v___y_191_ = v___x_235_;
goto v___jp_190_;
}
else
{
lean_object* v___x_236_; 
v___x_236_ = lean_obj_once(&lp_leancjson_CJson_instReprMinState_repr___closed__15, &lp_leancjson_CJson_instReprMinState_repr___closed__15_once, _init_lp_leancjson_CJson_instReprMinState_repr___closed__15);
v___y_191_ = v___x_236_;
goto v___jp_190_;
}
}
case 3:
{
lean_object* v___x_237_; uint8_t v___x_238_; 
v___x_237_ = lean_unsigned_to_nat(1024u);
v___x_238_ = lean_nat_dec_le(v___x_237_, v_prec_175_);
if (v___x_238_ == 0)
{
lean_object* v___x_239_; 
v___x_239_ = lean_obj_once(&lp_leancjson_CJson_instReprMinState_repr___closed__14, &lp_leancjson_CJson_instReprMinState_repr___closed__14_once, _init_lp_leancjson_CJson_instReprMinState_repr___closed__14);
v___y_198_ = v___x_239_;
goto v___jp_197_;
}
else
{
lean_object* v___x_240_; 
v___x_240_ = lean_obj_once(&lp_leancjson_CJson_instReprMinState_repr___closed__15, &lp_leancjson_CJson_instReprMinState_repr___closed__15_once, _init_lp_leancjson_CJson_instReprMinState_repr___closed__15);
v___y_198_ = v___x_240_;
goto v___jp_197_;
}
}
case 4:
{
lean_object* v___x_241_; uint8_t v___x_242_; 
v___x_241_ = lean_unsigned_to_nat(1024u);
v___x_242_ = lean_nat_dec_le(v___x_241_, v_prec_175_);
if (v___x_242_ == 0)
{
lean_object* v___x_243_; 
v___x_243_ = lean_obj_once(&lp_leancjson_CJson_instReprMinState_repr___closed__14, &lp_leancjson_CJson_instReprMinState_repr___closed__14_once, _init_lp_leancjson_CJson_instReprMinState_repr___closed__14);
v___y_205_ = v___x_243_;
goto v___jp_204_;
}
else
{
lean_object* v___x_244_; 
v___x_244_ = lean_obj_once(&lp_leancjson_CJson_instReprMinState_repr___closed__15, &lp_leancjson_CJson_instReprMinState_repr___closed__15_once, _init_lp_leancjson_CJson_instReprMinState_repr___closed__15);
v___y_205_ = v___x_244_;
goto v___jp_204_;
}
}
case 5:
{
lean_object* v___x_245_; uint8_t v___x_246_; 
v___x_245_ = lean_unsigned_to_nat(1024u);
v___x_246_ = lean_nat_dec_le(v___x_245_, v_prec_175_);
if (v___x_246_ == 0)
{
lean_object* v___x_247_; 
v___x_247_ = lean_obj_once(&lp_leancjson_CJson_instReprMinState_repr___closed__14, &lp_leancjson_CJson_instReprMinState_repr___closed__14_once, _init_lp_leancjson_CJson_instReprMinState_repr___closed__14);
v___y_212_ = v___x_247_;
goto v___jp_211_;
}
else
{
lean_object* v___x_248_; 
v___x_248_ = lean_obj_once(&lp_leancjson_CJson_instReprMinState_repr___closed__15, &lp_leancjson_CJson_instReprMinState_repr___closed__15_once, _init_lp_leancjson_CJson_instReprMinState_repr___closed__15);
v___y_212_ = v___x_248_;
goto v___jp_211_;
}
}
default: 
{
lean_object* v___x_249_; uint8_t v___x_250_; 
v___x_249_ = lean_unsigned_to_nat(1024u);
v___x_250_ = lean_nat_dec_le(v___x_249_, v_prec_175_);
if (v___x_250_ == 0)
{
lean_object* v___x_251_; 
v___x_251_ = lean_obj_once(&lp_leancjson_CJson_instReprMinState_repr___closed__14, &lp_leancjson_CJson_instReprMinState_repr___closed__14_once, _init_lp_leancjson_CJson_instReprMinState_repr___closed__14);
v___y_219_ = v___x_251_;
goto v___jp_218_;
}
else
{
lean_object* v___x_252_; 
v___x_252_ = lean_obj_once(&lp_leancjson_CJson_instReprMinState_repr___closed__15, &lp_leancjson_CJson_instReprMinState_repr___closed__15_once, _init_lp_leancjson_CJson_instReprMinState_repr___closed__15);
v___y_219_ = v___x_252_;
goto v___jp_218_;
}
}
}
v___jp_176_:
{
lean_object* v___x_178_; lean_object* v___x_179_; uint8_t v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_178_ = ((lean_object*)(lp_leancjson_CJson_instReprMinState_repr___closed__1));
lean_inc(v___y_177_);
v___x_179_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_179_, 0, v___y_177_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
v___x_180_ = 0;
v___x_181_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_181_, 0, v___x_179_);
lean_ctor_set_uint8(v___x_181_, sizeof(void*)*1, v___x_180_);
v___x_182_ = l_Repr_addAppParen(v___x_181_, v_prec_175_);
return v___x_182_;
}
v___jp_183_:
{
lean_object* v___x_185_; lean_object* v___x_186_; uint8_t v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_185_ = ((lean_object*)(lp_leancjson_CJson_instReprMinState_repr___closed__3));
lean_inc(v___y_184_);
v___x_186_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_186_, 0, v___y_184_);
lean_ctor_set(v___x_186_, 1, v___x_185_);
v___x_187_ = 0;
v___x_188_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_188_, 0, v___x_186_);
lean_ctor_set_uint8(v___x_188_, sizeof(void*)*1, v___x_187_);
v___x_189_ = l_Repr_addAppParen(v___x_188_, v_prec_175_);
return v___x_189_;
}
v___jp_190_:
{
lean_object* v___x_192_; lean_object* v___x_193_; uint8_t v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_192_ = ((lean_object*)(lp_leancjson_CJson_instReprMinState_repr___closed__5));
lean_inc(v___y_191_);
v___x_193_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_193_, 0, v___y_191_);
lean_ctor_set(v___x_193_, 1, v___x_192_);
v___x_194_ = 0;
v___x_195_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_195_, 0, v___x_193_);
lean_ctor_set_uint8(v___x_195_, sizeof(void*)*1, v___x_194_);
v___x_196_ = l_Repr_addAppParen(v___x_195_, v_prec_175_);
return v___x_196_;
}
v___jp_197_:
{
lean_object* v___x_199_; lean_object* v___x_200_; uint8_t v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_199_ = ((lean_object*)(lp_leancjson_CJson_instReprMinState_repr___closed__7));
lean_inc(v___y_198_);
v___x_200_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_200_, 0, v___y_198_);
lean_ctor_set(v___x_200_, 1, v___x_199_);
v___x_201_ = 0;
v___x_202_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_202_, 0, v___x_200_);
lean_ctor_set_uint8(v___x_202_, sizeof(void*)*1, v___x_201_);
v___x_203_ = l_Repr_addAppParen(v___x_202_, v_prec_175_);
return v___x_203_;
}
v___jp_204_:
{
lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_206_ = ((lean_object*)(lp_leancjson_CJson_instReprMinState_repr___closed__9));
lean_inc(v___y_205_);
v___x_207_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_207_, 0, v___y_205_);
lean_ctor_set(v___x_207_, 1, v___x_206_);
v___x_208_ = 0;
v___x_209_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_209_, 0, v___x_207_);
lean_ctor_set_uint8(v___x_209_, sizeof(void*)*1, v___x_208_);
v___x_210_ = l_Repr_addAppParen(v___x_209_, v_prec_175_);
return v___x_210_;
}
v___jp_211_:
{
lean_object* v___x_213_; lean_object* v___x_214_; uint8_t v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_213_ = ((lean_object*)(lp_leancjson_CJson_instReprMinState_repr___closed__11));
lean_inc(v___y_212_);
v___x_214_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_214_, 0, v___y_212_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
v___x_215_ = 0;
v___x_216_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_216_, 0, v___x_214_);
lean_ctor_set_uint8(v___x_216_, sizeof(void*)*1, v___x_215_);
v___x_217_ = l_Repr_addAppParen(v___x_216_, v_prec_175_);
return v___x_217_;
}
v___jp_218_:
{
lean_object* v___x_220_; lean_object* v___x_221_; uint8_t v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_220_ = ((lean_object*)(lp_leancjson_CJson_instReprMinState_repr___closed__13));
lean_inc(v___y_219_);
v___x_221_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_221_, 0, v___y_219_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
v___x_222_ = 0;
v___x_223_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_223_, 0, v___x_221_);
lean_ctor_set_uint8(v___x_223_, sizeof(void*)*1, v___x_222_);
v___x_224_ = l_Repr_addAppParen(v___x_223_, v_prec_175_);
return v___x_224_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_instReprMinState_repr___boxed(lean_object* v_x_253_, lean_object* v_prec_254_){
_start:
{
uint8_t v_x_387__boxed_255_; lean_object* v_res_256_; 
v_x_387__boxed_255_ = lean_unbox(v_x_253_);
v_res_256_ = lp_leancjson_CJson_instReprMinState_repr(v_x_387__boxed_255_, v_prec_254_);
lean_dec(v_prec_254_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_minifyAux(uint8_t v_x_259_, lean_object* v_x_260_, lean_object* v_x_261_){
_start:
{
if (lean_obj_tag(v_x_260_) == 0)
{
lean_object* v___x_262_; 
v___x_262_ = l_List_reverse___redArg(v_x_261_);
return v___x_262_;
}
else
{
lean_object* v_head_263_; lean_object* v_tail_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_387_; 
v_head_263_ = lean_ctor_get(v_x_260_, 0);
v_tail_264_ = lean_ctor_get(v_x_260_, 1);
v_isSharedCheck_387_ = !lean_is_exclusive(v_x_260_);
if (v_isSharedCheck_387_ == 0)
{
v___x_266_ = v_x_260_;
v_isShared_267_ = v_isSharedCheck_387_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_tail_264_);
lean_inc(v_head_263_);
lean_dec(v_x_260_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_387_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
switch(v_x_259_)
{
case 0:
{
uint8_t v___x_271_; uint8_t v___x_272_; uint8_t v___x_273_; 
v___x_271_ = 32;
v___x_272_ = lean_unbox(v_head_263_);
v___x_273_ = lean_uint8_dec_eq(v___x_272_, v___x_271_);
if (v___x_273_ == 0)
{
uint8_t v___x_274_; uint8_t v___x_275_; uint8_t v___x_276_; 
v___x_274_ = 9;
v___x_275_ = lean_unbox(v_head_263_);
v___x_276_ = lean_uint8_dec_eq(v___x_275_, v___x_274_);
if (v___x_276_ == 0)
{
uint8_t v___x_277_; uint8_t v___x_278_; uint8_t v___x_279_; 
v___x_277_ = 13;
v___x_278_ = lean_unbox(v_head_263_);
v___x_279_ = lean_uint8_dec_eq(v___x_278_, v___x_277_);
if (v___x_279_ == 0)
{
uint8_t v___x_280_; uint8_t v___x_281_; uint8_t v___x_282_; 
v___x_280_ = 10;
v___x_281_ = lean_unbox(v_head_263_);
v___x_282_ = lean_uint8_dec_eq(v___x_281_, v___x_280_);
if (v___x_282_ == 0)
{
uint8_t v___x_283_; uint8_t v___x_284_; uint8_t v___x_285_; 
v___x_283_ = 47;
v___x_284_ = lean_unbox(v_head_263_);
v___x_285_ = lean_uint8_dec_eq(v___x_284_, v___x_283_);
if (v___x_285_ == 0)
{
uint8_t v___x_286_; uint8_t v___x_287_; uint8_t v___x_288_; 
v___x_286_ = 34;
v___x_287_ = lean_unbox(v_head_263_);
v___x_288_ = lean_uint8_dec_eq(v___x_287_, v___x_286_);
if (v___x_288_ == 0)
{
lean_object* v___x_290_; 
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 1, v_x_261_);
v___x_290_ = v___x_266_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_head_263_);
lean_ctor_set(v_reuseFailAlloc_292_, 1, v_x_261_);
v___x_290_ = v_reuseFailAlloc_292_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
v_x_260_ = v_tail_264_;
v_x_261_ = v___x_290_;
goto _start;
}
}
else
{
uint8_t v___x_293_; lean_object* v___x_295_; 
v___x_293_ = 5;
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 1, v_x_261_);
v___x_295_ = v___x_266_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_head_263_);
lean_ctor_set(v_reuseFailAlloc_297_, 1, v_x_261_);
v___x_295_ = v_reuseFailAlloc_297_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
v_x_259_ = v___x_293_;
v_x_260_ = v_tail_264_;
v_x_261_ = v___x_295_;
goto _start;
}
}
}
else
{
uint8_t v___x_298_; 
lean_del_object(v___x_266_);
lean_dec(v_head_263_);
v___x_298_ = 1;
v_x_259_ = v___x_298_;
v_x_260_ = v_tail_264_;
goto _start;
}
}
else
{
lean_del_object(v___x_266_);
lean_dec(v_head_263_);
v_x_260_ = v_tail_264_;
goto _start;
}
}
else
{
lean_del_object(v___x_266_);
lean_dec(v_head_263_);
v_x_260_ = v_tail_264_;
goto _start;
}
}
else
{
lean_del_object(v___x_266_);
lean_dec(v_head_263_);
v_x_260_ = v_tail_264_;
goto _start;
}
}
else
{
lean_del_object(v___x_266_);
lean_dec(v_head_263_);
v_x_260_ = v_tail_264_;
goto _start;
}
}
case 1:
{
uint8_t v___x_304_; uint8_t v___x_305_; uint8_t v___x_306_; 
v___x_304_ = 47;
v___x_305_ = lean_unbox(v_head_263_);
v___x_306_ = lean_uint8_dec_eq(v___x_305_, v___x_304_);
if (v___x_306_ == 0)
{
uint8_t v___x_307_; uint8_t v___x_308_; uint8_t v___x_309_; 
v___x_307_ = 42;
v___x_308_ = lean_unbox(v_head_263_);
v___x_309_ = lean_uint8_dec_eq(v___x_308_, v___x_307_);
if (v___x_309_ == 0)
{
uint8_t v___x_310_; uint8_t v___x_311_; uint8_t v___x_312_; 
v___x_310_ = 32;
v___x_311_ = lean_unbox(v_head_263_);
v___x_312_ = lean_uint8_dec_eq(v___x_311_, v___x_310_);
if (v___x_312_ == 0)
{
uint8_t v___x_313_; uint8_t v___x_314_; uint8_t v___x_315_; 
v___x_313_ = 9;
v___x_314_ = lean_unbox(v_head_263_);
v___x_315_ = lean_uint8_dec_eq(v___x_314_, v___x_313_);
if (v___x_315_ == 0)
{
uint8_t v___x_316_; uint8_t v___x_317_; uint8_t v___x_318_; 
v___x_316_ = 13;
v___x_317_ = lean_unbox(v_head_263_);
v___x_318_ = lean_uint8_dec_eq(v___x_317_, v___x_316_);
if (v___x_318_ == 0)
{
uint8_t v___x_319_; uint8_t v___x_320_; uint8_t v___x_321_; 
v___x_319_ = 10;
v___x_320_ = lean_unbox(v_head_263_);
v___x_321_ = lean_uint8_dec_eq(v___x_320_, v___x_319_);
if (v___x_321_ == 0)
{
uint8_t v___x_322_; uint8_t v___x_323_; uint8_t v___x_324_; 
v___x_322_ = 34;
v___x_323_ = lean_unbox(v_head_263_);
v___x_324_ = lean_uint8_dec_eq(v___x_323_, v___x_322_);
if (v___x_324_ == 0)
{
uint8_t v___x_325_; lean_object* v___x_327_; 
v___x_325_ = 0;
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 1, v_x_261_);
v___x_327_ = v___x_266_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_head_263_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v_x_261_);
v___x_327_ = v_reuseFailAlloc_329_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
v_x_259_ = v___x_325_;
v_x_260_ = v_tail_264_;
v_x_261_ = v___x_327_;
goto _start;
}
}
else
{
uint8_t v___x_330_; lean_object* v___x_332_; 
v___x_330_ = 5;
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 1, v_x_261_);
v___x_332_ = v___x_266_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_head_263_);
lean_ctor_set(v_reuseFailAlloc_334_, 1, v_x_261_);
v___x_332_ = v_reuseFailAlloc_334_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
v_x_259_ = v___x_330_;
v_x_260_ = v_tail_264_;
v_x_261_ = v___x_332_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_266_);
lean_dec(v_head_263_);
goto v___jp_268_;
}
}
else
{
lean_del_object(v___x_266_);
lean_dec(v_head_263_);
goto v___jp_268_;
}
}
else
{
lean_del_object(v___x_266_);
lean_dec(v_head_263_);
goto v___jp_268_;
}
}
else
{
lean_del_object(v___x_266_);
lean_dec(v_head_263_);
goto v___jp_268_;
}
}
else
{
uint8_t v___x_335_; 
lean_del_object(v___x_266_);
lean_dec(v_head_263_);
v___x_335_ = 3;
v_x_259_ = v___x_335_;
v_x_260_ = v_tail_264_;
goto _start;
}
}
else
{
uint8_t v___x_337_; 
lean_del_object(v___x_266_);
lean_dec(v_head_263_);
v___x_337_ = 2;
v_x_259_ = v___x_337_;
v_x_260_ = v_tail_264_;
goto _start;
}
}
case 2:
{
uint8_t v___x_339_; uint8_t v___x_340_; uint8_t v___x_341_; 
lean_del_object(v___x_266_);
v___x_339_ = 10;
v___x_340_ = lean_unbox(v_head_263_);
lean_dec(v_head_263_);
v___x_341_ = lean_uint8_dec_eq(v___x_340_, v___x_339_);
if (v___x_341_ == 0)
{
v_x_260_ = v_tail_264_;
goto _start;
}
else
{
uint8_t v___x_343_; 
v___x_343_ = 0;
v_x_259_ = v___x_343_;
v_x_260_ = v_tail_264_;
goto _start;
}
}
case 3:
{
uint8_t v___x_345_; uint8_t v___x_346_; uint8_t v___x_347_; 
lean_del_object(v___x_266_);
v___x_345_ = 42;
v___x_346_ = lean_unbox(v_head_263_);
lean_dec(v_head_263_);
v___x_347_ = lean_uint8_dec_eq(v___x_346_, v___x_345_);
if (v___x_347_ == 0)
{
v_x_260_ = v_tail_264_;
goto _start;
}
else
{
uint8_t v___x_349_; 
v___x_349_ = 4;
v_x_259_ = v___x_349_;
v_x_260_ = v_tail_264_;
goto _start;
}
}
case 4:
{
uint8_t v___x_351_; uint8_t v___x_352_; uint8_t v___x_353_; 
lean_del_object(v___x_266_);
v___x_351_ = 47;
v___x_352_ = lean_unbox(v_head_263_);
v___x_353_ = lean_uint8_dec_eq(v___x_352_, v___x_351_);
if (v___x_353_ == 0)
{
uint8_t v___x_354_; uint8_t v___x_355_; uint8_t v___x_356_; 
v___x_354_ = 42;
v___x_355_ = lean_unbox(v_head_263_);
lean_dec(v_head_263_);
v___x_356_ = lean_uint8_dec_eq(v___x_355_, v___x_354_);
if (v___x_356_ == 0)
{
uint8_t v___x_357_; 
v___x_357_ = 3;
v_x_259_ = v___x_357_;
v_x_260_ = v_tail_264_;
goto _start;
}
else
{
v_x_260_ = v_tail_264_;
goto _start;
}
}
else
{
uint8_t v___x_360_; 
lean_dec(v_head_263_);
v___x_360_ = 0;
v_x_259_ = v___x_360_;
v_x_260_ = v_tail_264_;
goto _start;
}
}
case 5:
{
uint8_t v___x_362_; uint8_t v___x_363_; uint8_t v___x_364_; 
v___x_362_ = 34;
v___x_363_ = lean_unbox(v_head_263_);
v___x_364_ = lean_uint8_dec_eq(v___x_363_, v___x_362_);
if (v___x_364_ == 0)
{
uint8_t v___x_365_; uint8_t v___x_366_; uint8_t v___x_367_; 
v___x_365_ = 92;
v___x_366_ = lean_unbox(v_head_263_);
v___x_367_ = lean_uint8_dec_eq(v___x_366_, v___x_365_);
if (v___x_367_ == 0)
{
lean_object* v___x_369_; 
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 1, v_x_261_);
v___x_369_ = v___x_266_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_head_263_);
lean_ctor_set(v_reuseFailAlloc_371_, 1, v_x_261_);
v___x_369_ = v_reuseFailAlloc_371_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
v_x_260_ = v_tail_264_;
v_x_261_ = v___x_369_;
goto _start;
}
}
else
{
uint8_t v___x_372_; lean_object* v___x_374_; 
v___x_372_ = 6;
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 1, v_x_261_);
v___x_374_ = v___x_266_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v_head_263_);
lean_ctor_set(v_reuseFailAlloc_376_, 1, v_x_261_);
v___x_374_ = v_reuseFailAlloc_376_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
v_x_259_ = v___x_372_;
v_x_260_ = v_tail_264_;
v_x_261_ = v___x_374_;
goto _start;
}
}
}
else
{
uint8_t v___x_377_; lean_object* v___x_379_; 
v___x_377_ = 0;
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 1, v_x_261_);
v___x_379_ = v___x_266_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_head_263_);
lean_ctor_set(v_reuseFailAlloc_381_, 1, v_x_261_);
v___x_379_ = v_reuseFailAlloc_381_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
v_x_259_ = v___x_377_;
v_x_260_ = v_tail_264_;
v_x_261_ = v___x_379_;
goto _start;
}
}
}
default: 
{
uint8_t v___x_382_; lean_object* v___x_384_; 
v___x_382_ = 5;
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 1, v_x_261_);
v___x_384_ = v___x_266_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_head_263_);
lean_ctor_set(v_reuseFailAlloc_386_, 1, v_x_261_);
v___x_384_ = v_reuseFailAlloc_386_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
v_x_259_ = v___x_382_;
v_x_260_ = v_tail_264_;
v_x_261_ = v___x_384_;
goto _start;
}
}
}
v___jp_268_:
{
uint8_t v___x_269_; 
v___x_269_ = 0;
v_x_259_ = v___x_269_;
v_x_260_ = v_tail_264_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_minifyAux___boxed(lean_object* v_x_388_, lean_object* v_x_389_, lean_object* v_x_390_){
_start:
{
uint8_t v_x_792__boxed_391_; lean_object* v_res_392_; 
v_x_792__boxed_391_ = lean_unbox(v_x_388_);
v_res_392_ = lp_leancjson_CJson_minifyAux(v_x_792__boxed_391_, v_x_389_, v_x_390_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_minify(lean_object* v_s_393_){
_start:
{
uint8_t v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_394_ = 0;
v___x_395_ = lean_box(0);
v___x_396_ = lp_leancjson_CJson_minifyAux(v___x_394_, v_s_393_, v___x_395_);
return v___x_396_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_leancjson_CJson_Minify(uint8_t builtin) {
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
