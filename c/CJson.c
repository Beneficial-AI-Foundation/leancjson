// Lean compiler output
// Module: CJson
// Imports: public import Init public meta import Init public import CJson.Basic public import CJson.Number public import CJson.Str public import CJson.Print public import CJson.Parse public import CJson.Api public import CJson.Minify public import CJson.Proofs.Number public import CJson.Proofs.Str public import CJson.Proofs.Roundtrip public import CJson.Proofs.Minify public import CJson.Proofs.Api public import CJson.Spec public import CJson.SpecExamples public import CJson.Audit
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
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Basic(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Number(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Str(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Print(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Parse(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Api(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Minify(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Proofs_Number(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Proofs_Str(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Proofs_Roundtrip(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Proofs_Minify(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Proofs_Api(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Spec(uint8_t builtin);
lean_object* initialize_leancjson_CJson_SpecExamples(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Audit(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_leancjson_CJson(uint8_t builtin) {
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
res = initialize_leancjson_CJson_Str(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Print(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Parse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Api(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Minify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Proofs_Number(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Proofs_Str(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Proofs_Roundtrip(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Proofs_Minify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Proofs_Api(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Spec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_SpecExamples(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Audit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
