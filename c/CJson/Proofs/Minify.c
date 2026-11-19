// Lean compiler output
// Module: CJson.Proofs.Minify
// Imports: public import Init public meta import Init public import CJson.Minify public import CJson.Print public import CJson.Proofs.Str
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
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
LEAN_EXPORT uint8_t lp_leancjson_CJson_instDecidablePlain(uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_instDecidablePlain___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_instDecidablePlain(uint8_t v_c_1_){
_start:
{
uint8_t v___x_2_; uint8_t v___x_3_; 
v___x_2_ = 32;
v___x_3_ = lean_uint8_dec_eq(v_c_1_, v___x_2_);
if (v___x_3_ == 0)
{
uint8_t v___x_4_; uint8_t v___x_5_; 
v___x_4_ = 9;
v___x_5_ = lean_uint8_dec_eq(v_c_1_, v___x_4_);
if (v___x_5_ == 0)
{
uint8_t v___x_6_; uint8_t v___x_7_; 
v___x_6_ = 13;
v___x_7_ = lean_uint8_dec_eq(v_c_1_, v___x_6_);
if (v___x_7_ == 0)
{
uint8_t v___x_8_; uint8_t v___x_9_; 
v___x_8_ = 10;
v___x_9_ = lean_uint8_dec_eq(v_c_1_, v___x_8_);
if (v___x_9_ == 0)
{
uint8_t v___x_10_; uint8_t v___x_11_; 
v___x_10_ = 47;
v___x_11_ = lean_uint8_dec_eq(v_c_1_, v___x_10_);
if (v___x_11_ == 0)
{
uint8_t v___x_12_; uint8_t v___x_13_; 
v___x_12_ = 34;
v___x_13_ = lean_uint8_dec_eq(v_c_1_, v___x_12_);
if (v___x_13_ == 0)
{
uint8_t v___x_14_; 
v___x_14_ = 1;
return v___x_14_;
}
else
{
return v___x_11_;
}
}
else
{
return v___x_9_;
}
}
else
{
return v___x_7_;
}
}
else
{
return v___x_5_;
}
}
else
{
return v___x_3_;
}
}
else
{
uint8_t v___x_15_; 
v___x_15_ = 0;
return v___x_15_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_instDecidablePlain___boxed(lean_object* v_c_16_){
_start:
{
uint8_t v_c_boxed_17_; uint8_t v_res_18_; lean_object* v_r_19_; 
v_c_boxed_17_ = lean_unbox(v_c_16_);
v_res_18_ = lp_leancjson_CJson_instDecidablePlain(v_c_boxed_17_);
v_r_19_ = lean_box(v_res_18_);
return v_r_19_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Minify(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Print(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Proofs_Str(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_leancjson_CJson_Proofs_Minify(uint8_t builtin) {
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
res = initialize_leancjson_CJson_Minify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Print(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Proofs_Str(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
