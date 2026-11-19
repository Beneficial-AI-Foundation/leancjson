// Lean compiler output
// Module: CJson.Basic
// Imports: public import Init public meta import Init
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
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_Format_joinSep___at___00Lean_Syntax_formatStxAux_spec__2(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l_ByteArray_toList(lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_instDecidableEqNum_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_instDecidableEqNum_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_instDecidableEqNum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_instDecidableEqNum___boxed(lean_object*, lean_object*);
static const lean_string_object lp_leancjson_CJson_instReprNum_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__0 = (const lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__0_value;
static const lean_string_object lp_leancjson_CJson_instReprNum_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__1 = (const lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__1_value;
static lean_once_cell_t lp_leancjson_CJson_instReprNum_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__2;
static lean_once_cell_t lp_leancjson_CJson_instReprNum_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__3;
static const lean_ctor_object lp_leancjson_CJson_instReprNum_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__0_value)}};
static const lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__4 = (const lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__4_value;
static const lean_ctor_object lp_leancjson_CJson_instReprNum_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__1_value)}};
static const lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__5 = (const lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__5_value;
static const lean_string_object lp_leancjson_CJson_instReprNum_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mant"};
static const lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__6 = (const lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__6_value;
static const lean_ctor_object lp_leancjson_CJson_instReprNum_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__6_value)}};
static const lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__7 = (const lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__7_value;
static const lean_ctor_object lp_leancjson_CJson_instReprNum_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__7_value)}};
static const lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__8 = (const lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__8_value;
static const lean_string_object lp_leancjson_CJson_instReprNum_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__9 = (const lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__9_value;
static const lean_ctor_object lp_leancjson_CJson_instReprNum_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__9_value)}};
static const lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__10 = (const lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__10_value;
static const lean_ctor_object lp_leancjson_CJson_instReprNum_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__8_value),((lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__10_value)}};
static const lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__11 = (const lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__11_value;
static lean_once_cell_t lp_leancjson_CJson_instReprNum_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__12;
static const lean_string_object lp_leancjson_CJson_instReprNum_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__13 = (const lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__13_value;
static const lean_ctor_object lp_leancjson_CJson_instReprNum_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__13_value)}};
static const lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__14 = (const lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__14_value;
static const lean_string_object lp_leancjson_CJson_instReprNum_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "exp"};
static const lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__15 = (const lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__15_value;
static const lean_ctor_object lp_leancjson_CJson_instReprNum_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__15_value)}};
static const lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__16 = (const lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__16_value;
static lean_once_cell_t lp_leancjson_CJson_instReprNum_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__17;
static lean_once_cell_t lp_leancjson_CJson_instReprNum_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson_instReprNum_repr___redArg___closed__18;
LEAN_EXPORT lean_object* lp_leancjson_CJson_instReprNum_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_instReprNum_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_instReprNum_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_leancjson_CJson_instReprNum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_leancjson_CJson_instReprNum_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_leancjson_CJson_instReprNum___closed__0 = (const lean_object*)&lp_leancjson_CJson_instReprNum___closed__0_value;
LEAN_EXPORT const lean_object* lp_leancjson_CJson_instReprNum = (const lean_object*)&lp_leancjson_CJson_instReprNum___closed__0_value;
static lean_once_cell_t lp_leancjson_CJson_instDecidableNormal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson_instDecidableNormal___closed__0;
LEAN_EXPORT uint8_t lp_leancjson_CJson_instDecidableNormal(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_instDecidableNormal___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_null_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_null_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_bool_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_bool_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_number_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_number_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_string_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_string_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_object_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_object_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_Std_Format_joinSep___at___00List_repr_x27___at___00CJson_instReprJSON_repr_spec__0_spec__0___lam__0(uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_Std_Format_joinSep___at___00List_repr_x27___at___00CJson_instReprJSON_repr_spec__0_spec__0___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00CJson_instReprJSON_repr_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00CJson_instReprJSON_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_Std_Format_joinSep___at___00List_repr_x27___at___00CJson_instReprJSON_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__0 = (const lean_object*)&lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__1 = (const lean_object*)&lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__1_value;
static const lean_string_object lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__2 = (const lean_object*)&lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__2_value;
static const lean_ctor_object lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprNum_repr___redArg___closed__14_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__3 = (const lean_object*)&lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__3_value;
static const lean_string_object lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__4 = (const lean_object*)&lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__4_value;
static lean_once_cell_t lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__5;
static lean_once_cell_t lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__6;
static const lean_ctor_object lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__7 = (const lean_object*)&lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__7_value;
static const lean_ctor_object lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__4_value)}};
static const lean_object* lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__8 = (const lean_object*)&lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__8_value;
LEAN_EXPORT lean_object* lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_leancjson_CJson_instReprJSON_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "CJson.JSON.null"};
static const lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__0 = (const lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__0_value;
static const lean_ctor_object lp_leancjson_CJson_instReprJSON_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__0_value)}};
static const lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__1 = (const lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__1_value;
static lean_once_cell_t lp_leancjson_CJson_instReprJSON_repr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__2;
static lean_once_cell_t lp_leancjson_CJson_instReprJSON_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__3;
static const lean_string_object lp_leancjson_CJson_instReprJSON_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "CJson.JSON.bool"};
static const lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__4 = (const lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__4_value;
static const lean_ctor_object lp_leancjson_CJson_instReprJSON_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__4_value)}};
static const lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__5 = (const lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__5_value;
static const lean_ctor_object lp_leancjson_CJson_instReprJSON_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__6 = (const lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__6_value;
static const lean_string_object lp_leancjson_CJson_instReprJSON_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "CJson.JSON.number"};
static const lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__7 = (const lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__7_value;
static const lean_ctor_object lp_leancjson_CJson_instReprJSON_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__7_value)}};
static const lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__8 = (const lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__8_value;
static const lean_ctor_object lp_leancjson_CJson_instReprJSON_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__8_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__9 = (const lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__9_value;
static const lean_string_object lp_leancjson_CJson_instReprJSON_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "CJson.JSON.string"};
static const lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__10 = (const lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__10_value;
static const lean_ctor_object lp_leancjson_CJson_instReprJSON_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__10_value)}};
static const lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__11 = (const lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__11_value;
static const lean_ctor_object lp_leancjson_CJson_instReprJSON_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__11_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__12 = (const lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__12_value;
static const lean_string_object lp_leancjson_CJson_instReprJSON_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "CJson.JSON.array"};
static const lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__13 = (const lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__13_value;
static const lean_ctor_object lp_leancjson_CJson_instReprJSON_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__13_value)}};
static const lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__14 = (const lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__14_value;
static const lean_ctor_object lp_leancjson_CJson_instReprJSON_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__14_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__15 = (const lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__15_value;
LEAN_EXPORT lean_object* lp_leancjson_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__1_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_repr___at___00CJson_instReprJSON_repr_spec__1___redArg(lean_object*);
static const lean_string_object lp_leancjson_CJson_instReprJSON_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "CJson.JSON.object"};
static const lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__16 = (const lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__16_value;
static const lean_ctor_object lp_leancjson_CJson_instReprJSON_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__16_value)}};
static const lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__17 = (const lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__17_value;
static const lean_ctor_object lp_leancjson_CJson_instReprJSON_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__17_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_instReprJSON_repr___closed__18 = (const lean_object*)&lp_leancjson_CJson_instReprJSON_repr___closed__18_value;
static const lean_string_object lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__0 = (const lean_object*)&lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__0_value;
static lean_once_cell_t lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__2;
static lean_once_cell_t lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__3;
static const lean_ctor_object lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__0_value)}};
static const lean_object* lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__4 = (const lean_object*)&lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__4_value;
static const lean_string_object lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__1 = (const lean_object*)&lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__1_value;
static const lean_ctor_object lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__1_value)}};
static const lean_object* lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__5 = (const lean_object*)&lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__5_value;
LEAN_EXPORT lean_object* lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__5_spec__8_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_repr___at___00CJson_instReprJSON_repr_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_instReprJSON_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__1_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_instReprJSON_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_repr___at___00CJson_instReprJSON_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_repr___at___00CJson_instReprJSON_repr_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_repr___at___00CJson_instReprJSON_repr_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_repr___at___00CJson_instReprJSON_repr_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_leancjson_CJson_instReprJSON___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_leancjson_CJson_instReprJSON_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_leancjson_CJson_instReprJSON___closed__0 = (const lean_object*)&lp_leancjson_CJson_instReprJSON___closed__0_value;
LEAN_EXPORT const lean_object* lp_leancjson_CJson_instReprJSON = (const lean_object*)&lp_leancjson_CJson_instReprJSON___closed__0_value;
LEAN_EXPORT lean_object* lp_leancjson_CJson_instInhabitedJSON_default;
LEAN_EXPORT lean_object* lp_leancjson_CJson_instInhabitedJSON;
LEAN_EXPORT uint8_t lp_leancjson_List_beq___at___00CJson_JSON_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_beq___at___00CJson_JSON_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_beqMembers(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_beq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_beqList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_beqList___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_beqMembers___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Basic_0__CJson_JSON_beq_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Basic_0__CJson_JSON_beq_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Basic_0__CJson_JSON_beqList_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Basic_0__CJson_JSON_beqList_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Basic_0__CJson_JSON_beqMembers_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Basic_0__CJson_JSON_beqMembers_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_instDecidableEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_instDecidableEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_depthMembers(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_depth(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_depthList(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_depthList___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_depth___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_depthMembers___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_nestingLimit;
LEAN_EXPORT lean_object* lp_leancjson_CJson_bytes(lean_object*);
static const lean_string_object lp_leancjson_CJson_termB_x21___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "CJson"};
static const lean_object* lp_leancjson_CJson_termB_x21___00__closed__0 = (const lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__0_value;
static const lean_string_object lp_leancjson_CJson_termB_x21___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "termB!_"};
static const lean_object* lp_leancjson_CJson_termB_x21___00__closed__1 = (const lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__1_value;
static const lean_ctor_object lp_leancjson_CJson_termB_x21___00__closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 50, 232, 169, 111, 134, 44, 185)}};
static const lean_ctor_object lp_leancjson_CJson_termB_x21___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__2_value_aux_0),((lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 1, 96, 204, 201, 234, 175, 85)}};
static const lean_object* lp_leancjson_CJson_termB_x21___00__closed__2 = (const lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__2_value;
static const lean_string_object lp_leancjson_CJson_termB_x21___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* lp_leancjson_CJson_termB_x21___00__closed__3 = (const lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__3_value;
static const lean_ctor_object lp_leancjson_CJson_termB_x21___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* lp_leancjson_CJson_termB_x21___00__closed__4 = (const lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__4_value;
static const lean_string_object lp_leancjson_CJson_termB_x21___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "b!"};
static const lean_object* lp_leancjson_CJson_termB_x21___00__closed__5 = (const lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__5_value;
static const lean_ctor_object lp_leancjson_CJson_termB_x21___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__5_value)}};
static const lean_object* lp_leancjson_CJson_termB_x21___00__closed__6 = (const lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__6_value;
static const lean_string_object lp_leancjson_CJson_termB_x21___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* lp_leancjson_CJson_termB_x21___00__closed__7 = (const lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__7_value;
static const lean_ctor_object lp_leancjson_CJson_termB_x21___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__7_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* lp_leancjson_CJson_termB_x21___00__closed__8 = (const lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__8_value;
static const lean_ctor_object lp_leancjson_CJson_termB_x21___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__8_value)}};
static const lean_object* lp_leancjson_CJson_termB_x21___00__closed__9 = (const lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__9_value;
static const lean_ctor_object lp_leancjson_CJson_termB_x21___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__4_value),((lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__6_value),((lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__9_value)}};
static const lean_object* lp_leancjson_CJson_termB_x21___00__closed__10 = (const lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__10_value;
static const lean_ctor_object lp_leancjson_CJson_termB_x21___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__2_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__10_value)}};
static const lean_object* lp_leancjson_CJson_termB_x21___00__closed__11 = (const lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__11_value;
LEAN_EXPORT const lean_object* lp_leancjson_CJson_termB_x21__ = (const lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__11_value;
LEAN_EXPORT lean_object* lp_leancjson___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__0 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__0_value;
static const lean_string_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__1 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__1_value;
static const lean_string_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__2 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__2_value;
static const lean_string_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__3 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__3_value;
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__4_value_aux_0),((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__4_value_aux_1),((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__4_value_aux_2),((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__4 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__4_value;
static const lean_string_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__5 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__5_value;
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__6_value_aux_0),((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__6_value_aux_1),((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__6_value_aux_2),((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__6 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__6_value;
static const lean_string_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__7 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__7_value;
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__8 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__8_value;
static const lean_string_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__9 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__9_value;
static lean_once_cell_t lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__10;
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 50, 232, 169, 111, 134, 44, 185)}};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__11 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__11_value;
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__11_value)}};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__12 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__12_value;
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__13 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__13_value;
static const lean_string_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term[_]"};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__14 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__14_value;
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(86, 147, 168, 74, 195, 98, 232, 161)}};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__15 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__15_value;
static const lean_string_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__16 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__16_value;
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__17 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__17_value;
static lean_once_cell_t lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__18;
static const lean_string_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__19 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__19_value;
static const lean_string_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Bytes"};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__20 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__20_value;
static lean_once_cell_t lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__21;
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(108, 110, 68, 134, 66, 57, 79, 63)}};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__22 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__22_value;
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_termB_x21___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 50, 232, 169, 111, 134, 44, 185)}};
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__23_value_aux_0),((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(179, 30, 31, 141, 18, 215, 37, 51)}};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__23 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__23_value;
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__23_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__24 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__24_value;
static const lean_ctor_object lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__24_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__25 = (const lean_object*)&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__25_value;
LEAN_EXPORT lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_instDecidableEqNum_decEq(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
lean_object* v_mant_3_; lean_object* v_exp_4_; lean_object* v_mant_5_; lean_object* v_exp_6_; uint8_t v___x_7_; 
v_mant_3_ = lean_ctor_get(v_x_1_, 0);
v_exp_4_ = lean_ctor_get(v_x_1_, 1);
v_mant_5_ = lean_ctor_get(v_x_2_, 0);
v_exp_6_ = lean_ctor_get(v_x_2_, 1);
v___x_7_ = lean_int_dec_eq(v_mant_3_, v_mant_5_);
if (v___x_7_ == 0)
{
return v___x_7_;
}
else
{
uint8_t v___x_8_; 
v___x_8_ = lean_int_dec_eq(v_exp_4_, v_exp_6_);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_instDecidableEqNum_decEq___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = lp_leancjson_CJson_instDecidableEqNum_decEq(v_x_9_, v_x_10_);
lean_dec_ref(v_x_10_);
lean_dec_ref(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_instDecidableEqNum(lean_object* v_x_13_, lean_object* v_x_14_){
_start:
{
uint8_t v___x_15_; 
v___x_15_ = lp_leancjson_CJson_instDecidableEqNum_decEq(v_x_13_, v_x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_instDecidableEqNum___boxed(lean_object* v_x_16_, lean_object* v_x_17_){
_start:
{
uint8_t v_res_18_; lean_object* v_r_19_; 
v_res_18_ = lp_leancjson_CJson_instDecidableEqNum(v_x_16_, v_x_17_);
lean_dec_ref(v_x_17_);
lean_dec_ref(v_x_16_);
v_r_19_ = lean_box(v_res_18_);
return v_r_19_;
}
}
static lean_object* _init_lp_leancjson_CJson_instReprNum_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = ((lean_object*)(lp_leancjson_CJson_instReprNum_repr___redArg___closed__0));
v___x_23_ = lean_string_length(v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_lp_leancjson_CJson_instReprNum_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = lean_obj_once(&lp_leancjson_CJson_instReprNum_repr___redArg___closed__2, &lp_leancjson_CJson_instReprNum_repr___redArg___closed__2_once, _init_lp_leancjson_CJson_instReprNum_repr___redArg___closed__2);
v___x_25_ = lean_nat_to_int(v___x_24_);
return v___x_25_;
}
}
static lean_object* _init_lp_leancjson_CJson_instReprNum_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_unsigned_to_nat(8u);
v___x_43_ = lean_nat_to_int(v___x_42_);
return v___x_43_;
}
}
static lean_object* _init_lp_leancjson_CJson_instReprNum_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = lean_unsigned_to_nat(7u);
v___x_51_ = lean_nat_to_int(v___x_50_);
return v___x_51_;
}
}
static lean_object* _init_lp_leancjson_CJson_instReprNum_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = lean_unsigned_to_nat(0u);
v___x_53_ = lean_nat_to_int(v___x_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_instReprNum_repr___redArg(lean_object* v_x_54_){
_start:
{
lean_object* v_mant_55_; lean_object* v_exp_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_110_; 
v_mant_55_ = lean_ctor_get(v_x_54_, 0);
v_exp_56_ = lean_ctor_get(v_x_54_, 1);
v_isSharedCheck_110_ = !lean_is_exclusive(v_x_54_);
if (v_isSharedCheck_110_ == 0)
{
v___x_58_ = v_x_54_;
v_isShared_59_ = v_isSharedCheck_110_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_exp_56_);
lean_inc(v_mant_55_);
lean_dec(v_x_54_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_110_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___y_61_; lean_object* v___y_62_; uint8_t v___y_63_; lean_object* v___y_64_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___y_81_; lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_77_ = ((lean_object*)(lp_leancjson_CJson_instReprNum_repr___redArg___closed__10));
v___x_78_ = ((lean_object*)(lp_leancjson_CJson_instReprNum_repr___redArg___closed__11));
v___x_79_ = lean_obj_once(&lp_leancjson_CJson_instReprNum_repr___redArg___closed__12, &lp_leancjson_CJson_instReprNum_repr___redArg___closed__12_once, _init_lp_leancjson_CJson_instReprNum_repr___redArg___closed__12);
v___x_102_ = lean_unsigned_to_nat(0u);
v___x_103_ = lean_obj_once(&lp_leancjson_CJson_instReprNum_repr___redArg___closed__18, &lp_leancjson_CJson_instReprNum_repr___redArg___closed__18_once, _init_lp_leancjson_CJson_instReprNum_repr___redArg___closed__18);
v___x_104_ = lean_int_dec_lt(v_mant_55_, v___x_103_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = l_Int_repr(v_mant_55_);
lean_dec(v_mant_55_);
v___x_106_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
v___y_81_ = v___x_106_;
goto v___jp_80_;
}
else
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = l_Int_repr(v_mant_55_);
lean_dec(v_mant_55_);
v___x_108_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
v___x_109_ = l_Repr_addAppParen(v___x_108_, v___x_102_);
v___y_81_ = v___x_109_;
goto v___jp_80_;
}
v___jp_60_:
{
lean_object* v___x_66_; 
lean_inc(v___y_62_);
if (v_isShared_59_ == 0)
{
lean_ctor_set_tag(v___x_58_, 4);
lean_ctor_set(v___x_58_, 1, v___y_64_);
lean_ctor_set(v___x_58_, 0, v___y_62_);
v___x_66_ = v___x_58_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v___y_62_);
lean_ctor_set(v_reuseFailAlloc_76_, 1, v___y_64_);
v___x_66_ = v_reuseFailAlloc_76_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_67_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set_uint8(v___x_67_, sizeof(void*)*1, v___y_63_);
v___x_68_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_68_, 0, v___y_61_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = lean_obj_once(&lp_leancjson_CJson_instReprNum_repr___redArg___closed__3, &lp_leancjson_CJson_instReprNum_repr___redArg___closed__3_once, _init_lp_leancjson_CJson_instReprNum_repr___redArg___closed__3);
v___x_70_ = ((lean_object*)(lp_leancjson_CJson_instReprNum_repr___redArg___closed__4));
v___x_71_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
lean_ctor_set(v___x_71_, 1, v___x_68_);
v___x_72_ = ((lean_object*)(lp_leancjson_CJson_instReprNum_repr___redArg___closed__5));
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_71_);
lean_ctor_set(v___x_73_, 1, v___x_72_);
v___x_74_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_69_);
lean_ctor_set(v___x_74_, 1, v___x_73_);
v___x_75_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_75_, 0, v___x_74_);
lean_ctor_set_uint8(v___x_75_, sizeof(void*)*1, v___y_63_);
return v___x_75_;
}
}
v___jp_80_:
{
lean_object* v___x_82_; uint8_t v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; uint8_t v___x_96_; 
v___x_82_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_79_);
lean_ctor_set(v___x_82_, 1, v___y_81_);
v___x_83_ = 0;
v___x_84_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_84_, 0, v___x_82_);
lean_ctor_set_uint8(v___x_84_, sizeof(void*)*1, v___x_83_);
v___x_85_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_78_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v___x_86_ = ((lean_object*)(lp_leancjson_CJson_instReprNum_repr___redArg___closed__14));
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_85_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = lean_box(1);
v___x_89_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_87_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = ((lean_object*)(lp_leancjson_CJson_instReprNum_repr___redArg___closed__16));
v___x_91_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_89_);
lean_ctor_set(v___x_91_, 1, v___x_90_);
v___x_92_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
lean_ctor_set(v___x_92_, 1, v___x_77_);
v___x_93_ = lean_obj_once(&lp_leancjson_CJson_instReprNum_repr___redArg___closed__17, &lp_leancjson_CJson_instReprNum_repr___redArg___closed__17_once, _init_lp_leancjson_CJson_instReprNum_repr___redArg___closed__17);
v___x_94_ = lean_unsigned_to_nat(0u);
v___x_95_ = lean_obj_once(&lp_leancjson_CJson_instReprNum_repr___redArg___closed__18, &lp_leancjson_CJson_instReprNum_repr___redArg___closed__18_once, _init_lp_leancjson_CJson_instReprNum_repr___redArg___closed__18);
v___x_96_ = lean_int_dec_lt(v_exp_56_, v___x_95_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = l_Int_repr(v_exp_56_);
lean_dec(v_exp_56_);
v___x_98_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
v___y_61_ = v___x_92_;
v___y_62_ = v___x_93_;
v___y_63_ = v___x_83_;
v___y_64_ = v___x_98_;
goto v___jp_60_;
}
else
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = l_Int_repr(v_exp_56_);
lean_dec(v_exp_56_);
v___x_100_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
v___x_101_ = l_Repr_addAppParen(v___x_100_, v___x_94_);
v___y_61_ = v___x_92_;
v___y_62_ = v___x_93_;
v___y_63_ = v___x_83_;
v___y_64_ = v___x_101_;
goto v___jp_60_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_instReprNum_repr(lean_object* v_x_111_, lean_object* v_prec_112_){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = lp_leancjson_CJson_instReprNum_repr___redArg(v_x_111_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_instReprNum_repr___boxed(lean_object* v_x_114_, lean_object* v_prec_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = lp_leancjson_CJson_instReprNum_repr(v_x_114_, v_prec_115_);
lean_dec(v_prec_115_);
return v_res_116_;
}
}
static lean_object* _init_lp_leancjson_CJson_instDecidableNormal___closed__0(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = lean_unsigned_to_nat(10u);
v___x_120_ = lean_nat_to_int(v___x_119_);
return v___x_120_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_instDecidableNormal(lean_object* v_n_121_){
_start:
{
lean_object* v_mant_122_; lean_object* v_exp_123_; lean_object* v___x_124_; uint8_t v_decide_125_; 
v_mant_122_ = lean_ctor_get(v_n_121_, 0);
v_exp_123_ = lean_ctor_get(v_n_121_, 1);
v___x_124_ = lean_obj_once(&lp_leancjson_CJson_instReprNum_repr___redArg___closed__18, &lp_leancjson_CJson_instReprNum_repr___redArg___closed__18_once, _init_lp_leancjson_CJson_instReprNum_repr___redArg___closed__18);
v_decide_125_ = lean_int_dec_eq(v_mant_122_, v___x_124_);
if (v_decide_125_ == 0)
{
lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_126_ = lean_obj_once(&lp_leancjson_CJson_instDecidableNormal___closed__0, &lp_leancjson_CJson_instDecidableNormal___closed__0_once, _init_lp_leancjson_CJson_instDecidableNormal___closed__0);
v___x_127_ = lean_int_emod(v_mant_122_, v___x_126_);
v___x_128_ = lean_int_dec_eq(v___x_127_, v___x_124_);
lean_dec(v___x_127_);
if (v___x_128_ == 0)
{
uint8_t v___x_129_; 
v___x_129_ = 1;
return v___x_129_;
}
else
{
return v_decide_125_;
}
}
else
{
uint8_t v___x_130_; 
v___x_130_ = lean_int_dec_eq(v_exp_123_, v___x_124_);
return v___x_130_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_instDecidableNormal___boxed(lean_object* v_n_131_){
_start:
{
uint8_t v_res_132_; lean_object* v_r_133_; 
v_res_132_ = lp_leancjson_CJson_instDecidableNormal(v_n_131_);
lean_dec_ref(v_n_131_);
v_r_133_ = lean_box(v_res_132_);
return v_r_133_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_ctorIdx___impl(lean_object* v_x_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = lean_obj_tag_nat(v_x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_ctorIdx___impl___boxed(lean_object* v_x_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = lp_leancjson_CJson_JSON_ctorIdx___impl(v_x_136_);
lean_dec(v_x_136_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_ctorElim___redArg(lean_object* v_t_138_, lean_object* v_k_139_){
_start:
{
switch(lean_obj_tag(v_t_138_))
{
case 0:
{
return v_k_139_;
}
case 1:
{
uint8_t v_b_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v_b_140_ = lean_ctor_get_uint8(v_t_138_, 0);
lean_dec_ref_known(v_t_138_, 0);
v___x_141_ = lean_box(v_b_140_);
v___x_142_ = lean_apply_1(v_k_139_, v___x_141_);
return v___x_142_;
}
case 2:
{
lean_object* v_n_143_; lean_object* v___x_144_; 
v_n_143_ = lean_ctor_get(v_t_138_, 0);
lean_inc_ref(v_n_143_);
lean_dec_ref_known(v_t_138_, 1);
v___x_144_ = lean_apply_1(v_k_139_, v_n_143_);
return v___x_144_;
}
default: 
{
lean_object* v_s_145_; lean_object* v___x_146_; 
v_s_145_ = lean_ctor_get(v_t_138_, 0);
lean_inc(v_s_145_);
lean_dec(v_t_138_);
v___x_146_ = lean_apply_1(v_k_139_, v_s_145_);
return v___x_146_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_ctorElim(lean_object* v_motive__1_147_, lean_object* v_ctorIdx_148_, lean_object* v_t_149_, lean_object* v_h_150_, lean_object* v_k_151_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = lp_leancjson_CJson_JSON_ctorElim___redArg(v_t_149_, v_k_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_ctorElim___boxed(lean_object* v_motive__1_153_, lean_object* v_ctorIdx_154_, lean_object* v_t_155_, lean_object* v_h_156_, lean_object* v_k_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = lp_leancjson_CJson_JSON_ctorElim(v_motive__1_153_, v_ctorIdx_154_, v_t_155_, v_h_156_, v_k_157_);
lean_dec(v_ctorIdx_154_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_null_elim___redArg(lean_object* v_t_159_, lean_object* v_null_160_){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = lp_leancjson_CJson_JSON_ctorElim___redArg(v_t_159_, v_null_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_null_elim(lean_object* v_motive__1_162_, lean_object* v_t_163_, lean_object* v_h_164_, lean_object* v_null_165_){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = lp_leancjson_CJson_JSON_ctorElim___redArg(v_t_163_, v_null_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_bool_elim___redArg(lean_object* v_t_167_, lean_object* v_bool_168_){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = lp_leancjson_CJson_JSON_ctorElim___redArg(v_t_167_, v_bool_168_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_bool_elim(lean_object* v_motive__1_170_, lean_object* v_t_171_, lean_object* v_h_172_, lean_object* v_bool_173_){
_start:
{
lean_object* v___x_174_; 
v___x_174_ = lp_leancjson_CJson_JSON_ctorElim___redArg(v_t_171_, v_bool_173_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_number_elim___redArg(lean_object* v_t_175_, lean_object* v_number_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = lp_leancjson_CJson_JSON_ctorElim___redArg(v_t_175_, v_number_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_number_elim(lean_object* v_motive__1_178_, lean_object* v_t_179_, lean_object* v_h_180_, lean_object* v_number_181_){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = lp_leancjson_CJson_JSON_ctorElim___redArg(v_t_179_, v_number_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_string_elim___redArg(lean_object* v_t_183_, lean_object* v_string_184_){
_start:
{
lean_object* v___x_185_; 
v___x_185_ = lp_leancjson_CJson_JSON_ctorElim___redArg(v_t_183_, v_string_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_string_elim(lean_object* v_motive__1_186_, lean_object* v_t_187_, lean_object* v_h_188_, lean_object* v_string_189_){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = lp_leancjson_CJson_JSON_ctorElim___redArg(v_t_187_, v_string_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_array_elim___redArg(lean_object* v_t_191_, lean_object* v_array_192_){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = lp_leancjson_CJson_JSON_ctorElim___redArg(v_t_191_, v_array_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_array_elim(lean_object* v_motive__1_194_, lean_object* v_t_195_, lean_object* v_h_196_, lean_object* v_array_197_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = lp_leancjson_CJson_JSON_ctorElim___redArg(v_t_195_, v_array_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_object_elim___redArg(lean_object* v_t_199_, lean_object* v_object_200_){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = lp_leancjson_CJson_JSON_ctorElim___redArg(v_t_199_, v_object_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_object_elim(lean_object* v_motive__1_202_, lean_object* v_t_203_, lean_object* v_h_204_, lean_object* v_object_205_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = lp_leancjson_CJson_JSON_ctorElim___redArg(v_t_203_, v_object_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_Std_Format_joinSep___at___00List_repr_x27___at___00CJson_instReprJSON_repr_spec__0_spec__0___lam__0(uint8_t v___y_207_){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_208_ = lean_uint8_to_nat(v___y_207_);
v___x_209_ = l_Nat_reprFast(v___x_208_);
v___x_210_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_Std_Format_joinSep___at___00List_repr_x27___at___00CJson_instReprJSON_repr_spec__0_spec__0___lam__0___boxed(lean_object* v___y_211_){
_start:
{
uint8_t v___y_1031__boxed_212_; lean_object* v_res_213_; 
v___y_1031__boxed_212_ = lean_unbox(v___y_211_);
v_res_213_ = lp_leancjson_Std_Format_joinSep___at___00List_repr_x27___at___00CJson_instReprJSON_repr_spec__0_spec__0___lam__0(v___y_1031__boxed_212_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00CJson_instReprJSON_repr_spec__0_spec__0_spec__1_spec__4(lean_object* v_x_214_, lean_object* v_x_215_, lean_object* v_x_216_){
_start:
{
if (lean_obj_tag(v_x_216_) == 0)
{
lean_dec(v_x_214_);
return v_x_215_;
}
else
{
lean_object* v_head_217_; lean_object* v_tail_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_231_; 
v_head_217_ = lean_ctor_get(v_x_216_, 0);
v_tail_218_ = lean_ctor_get(v_x_216_, 1);
v_isSharedCheck_231_ = !lean_is_exclusive(v_x_216_);
if (v_isSharedCheck_231_ == 0)
{
v___x_220_ = v_x_216_;
v_isShared_221_ = v_isSharedCheck_231_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_tail_218_);
lean_inc(v_head_217_);
lean_dec(v_x_216_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_231_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_223_; 
lean_inc(v_x_214_);
if (v_isShared_221_ == 0)
{
lean_ctor_set_tag(v___x_220_, 5);
lean_ctor_set(v___x_220_, 1, v_x_214_);
lean_ctor_set(v___x_220_, 0, v_x_215_);
v___x_223_ = v___x_220_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v_x_215_);
lean_ctor_set(v_reuseFailAlloc_230_, 1, v_x_214_);
v___x_223_ = v_reuseFailAlloc_230_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
uint8_t v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_224_ = lean_unbox(v_head_217_);
lean_dec(v_head_217_);
v___x_225_ = lean_uint8_to_nat(v___x_224_);
v___x_226_ = l_Nat_reprFast(v___x_225_);
v___x_227_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
v___x_228_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_228_, 0, v___x_223_);
lean_ctor_set(v___x_228_, 1, v___x_227_);
v_x_215_ = v___x_228_;
v_x_216_ = v_tail_218_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00CJson_instReprJSON_repr_spec__0_spec__0_spec__1(lean_object* v_x_232_, lean_object* v_x_233_, lean_object* v_x_234_){
_start:
{
if (lean_obj_tag(v_x_234_) == 0)
{
lean_dec(v_x_232_);
return v_x_233_;
}
else
{
lean_object* v_head_235_; lean_object* v_tail_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_249_; 
v_head_235_ = lean_ctor_get(v_x_234_, 0);
v_tail_236_ = lean_ctor_get(v_x_234_, 1);
v_isSharedCheck_249_ = !lean_is_exclusive(v_x_234_);
if (v_isSharedCheck_249_ == 0)
{
v___x_238_ = v_x_234_;
v_isShared_239_ = v_isSharedCheck_249_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_tail_236_);
lean_inc(v_head_235_);
lean_dec(v_x_234_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_249_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_241_; 
lean_inc(v_x_232_);
if (v_isShared_239_ == 0)
{
lean_ctor_set_tag(v___x_238_, 5);
lean_ctor_set(v___x_238_, 1, v_x_232_);
lean_ctor_set(v___x_238_, 0, v_x_233_);
v___x_241_ = v___x_238_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_x_233_);
lean_ctor_set(v_reuseFailAlloc_248_, 1, v_x_232_);
v___x_241_ = v_reuseFailAlloc_248_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
uint8_t v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_242_ = lean_unbox(v_head_235_);
lean_dec(v_head_235_);
v___x_243_ = lean_uint8_to_nat(v___x_242_);
v___x_244_ = l_Nat_reprFast(v___x_243_);
v___x_245_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
v___x_246_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_241_);
lean_ctor_set(v___x_246_, 1, v___x_245_);
v___x_247_ = lp_leancjson_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00CJson_instReprJSON_repr_spec__0_spec__0_spec__1_spec__4(v_x_232_, v___x_246_, v_tail_236_);
return v___x_247_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_Std_Format_joinSep___at___00List_repr_x27___at___00CJson_instReprJSON_repr_spec__0_spec__0(lean_object* v_x_250_, lean_object* v_x_251_){
_start:
{
if (lean_obj_tag(v_x_250_) == 0)
{
lean_object* v___x_252_; 
lean_dec(v_x_251_);
v___x_252_ = lean_box(0);
return v___x_252_;
}
else
{
lean_object* v_tail_253_; 
v_tail_253_ = lean_ctor_get(v_x_250_, 1);
if (lean_obj_tag(v_tail_253_) == 0)
{
lean_object* v_head_254_; uint8_t v___x_255_; lean_object* v___x_256_; 
lean_dec(v_x_251_);
v_head_254_ = lean_ctor_get(v_x_250_, 0);
lean_inc(v_head_254_);
lean_dec_ref_known(v_x_250_, 2);
v___x_255_ = lean_unbox(v_head_254_);
lean_dec(v_head_254_);
v___x_256_ = lp_leancjson_Std_Format_joinSep___at___00List_repr_x27___at___00CJson_instReprJSON_repr_spec__0_spec__0___lam__0(v___x_255_);
return v___x_256_;
}
else
{
lean_object* v_head_257_; uint8_t v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
lean_inc(v_tail_253_);
v_head_257_ = lean_ctor_get(v_x_250_, 0);
lean_inc(v_head_257_);
lean_dec_ref_known(v_x_250_, 2);
v___x_258_ = lean_unbox(v_head_257_);
lean_dec(v_head_257_);
v___x_259_ = lp_leancjson_Std_Format_joinSep___at___00List_repr_x27___at___00CJson_instReprJSON_repr_spec__0_spec__0___lam__0(v___x_258_);
v___x_260_ = lp_leancjson_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00CJson_instReprJSON_repr_spec__0_spec__0_spec__1(v_x_251_, v___x_259_, v_tail_253_);
return v___x_260_;
}
}
}
}
static lean_object* _init_lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = ((lean_object*)(lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__2));
v___x_270_ = lean_string_length(v___x_269_);
return v___x_270_;
}
}
static lean_object* _init_lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_271_ = lean_obj_once(&lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__5, &lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__5_once, _init_lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__5);
v___x_272_ = lean_nat_to_int(v___x_271_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg(lean_object* v_a_277_){
_start:
{
if (lean_obj_tag(v_a_277_) == 0)
{
lean_object* v___x_278_; 
v___x_278_ = ((lean_object*)(lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__1));
return v___x_278_;
}
else
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_279_ = ((lean_object*)(lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__3));
v___x_280_ = lp_leancjson_Std_Format_joinSep___at___00List_repr_x27___at___00CJson_instReprJSON_repr_spec__0_spec__0(v_a_277_, v___x_279_);
v___x_281_ = lean_obj_once(&lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__6, &lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__6_once, _init_lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__6);
v___x_282_ = ((lean_object*)(lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__7));
v___x_283_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
lean_ctor_set(v___x_283_, 1, v___x_280_);
v___x_284_ = ((lean_object*)(lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__8));
v___x_285_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_283_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_281_);
lean_ctor_set(v___x_286_, 1, v___x_285_);
v___x_287_ = l_Std_Format_fill(v___x_286_);
return v___x_287_;
}
}
}
static lean_object* _init_lp_leancjson_CJson_instReprJSON_repr___closed__2(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = lean_unsigned_to_nat(2u);
v___x_292_ = lean_nat_to_int(v___x_291_);
return v___x_292_;
}
}
static lean_object* _init_lp_leancjson_CJson_instReprJSON_repr___closed__3(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = lean_unsigned_to_nat(1u);
v___x_294_ = lean_nat_to_int(v___x_293_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__1_spec__2_spec__4_spec__7(lean_object* v_x_319_, lean_object* v_x_320_, lean_object* v_x_321_){
_start:
{
if (lean_obj_tag(v_x_321_) == 0)
{
lean_dec(v_x_319_);
return v_x_320_;
}
else
{
lean_object* v_head_322_; lean_object* v_tail_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_334_; 
v_head_322_ = lean_ctor_get(v_x_321_, 0);
v_tail_323_ = lean_ctor_get(v_x_321_, 1);
v_isSharedCheck_334_ = !lean_is_exclusive(v_x_321_);
if (v_isSharedCheck_334_ == 0)
{
v___x_325_ = v_x_321_;
v_isShared_326_ = v_isSharedCheck_334_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_tail_323_);
lean_inc(v_head_322_);
lean_dec(v_x_321_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_334_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
lean_inc(v_x_319_);
if (v_isShared_326_ == 0)
{
lean_ctor_set_tag(v___x_325_, 5);
lean_ctor_set(v___x_325_, 1, v_x_319_);
lean_ctor_set(v___x_325_, 0, v_x_320_);
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_x_320_);
lean_ctor_set(v_reuseFailAlloc_333_, 1, v_x_319_);
v___x_328_ = v_reuseFailAlloc_333_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_329_ = lean_unsigned_to_nat(0u);
v___x_330_ = lp_leancjson_CJson_instReprJSON_repr(v_head_322_, v___x_329_);
v___x_331_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_331_, 0, v___x_328_);
lean_ctor_set(v___x_331_, 1, v___x_330_);
v_x_320_ = v___x_331_;
v_x_321_ = v_tail_323_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__1_spec__2_spec__4(lean_object* v_x_335_, lean_object* v_x_336_, lean_object* v_x_337_){
_start:
{
if (lean_obj_tag(v_x_337_) == 0)
{
lean_dec(v_x_335_);
return v_x_336_;
}
else
{
lean_object* v_head_338_; lean_object* v_tail_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_350_; 
v_head_338_ = lean_ctor_get(v_x_337_, 0);
v_tail_339_ = lean_ctor_get(v_x_337_, 1);
v_isSharedCheck_350_ = !lean_is_exclusive(v_x_337_);
if (v_isSharedCheck_350_ == 0)
{
v___x_341_ = v_x_337_;
v_isShared_342_ = v_isSharedCheck_350_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_tail_339_);
lean_inc(v_head_338_);
lean_dec(v_x_337_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_350_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_344_; 
lean_inc(v_x_335_);
if (v_isShared_342_ == 0)
{
lean_ctor_set_tag(v___x_341_, 5);
lean_ctor_set(v___x_341_, 1, v_x_335_);
lean_ctor_set(v___x_341_, 0, v_x_336_);
v___x_344_ = v___x_341_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v_x_336_);
lean_ctor_set(v_reuseFailAlloc_349_, 1, v_x_335_);
v___x_344_ = v_reuseFailAlloc_349_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_345_ = lean_unsigned_to_nat(0u);
v___x_346_ = lp_leancjson_CJson_instReprJSON_repr(v_head_338_, v___x_345_);
v___x_347_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_347_, 0, v___x_344_);
lean_ctor_set(v___x_347_, 1, v___x_346_);
v___x_348_ = lp_leancjson_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__1_spec__2_spec__4_spec__7(v_x_335_, v___x_347_, v_tail_339_);
return v___x_348_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__1_spec__2(lean_object* v_x_351_, lean_object* v_x_352_){
_start:
{
if (lean_obj_tag(v_x_351_) == 0)
{
lean_object* v___x_353_; 
lean_dec(v_x_352_);
v___x_353_ = lean_box(0);
return v___x_353_;
}
else
{
lean_object* v_tail_354_; 
v_tail_354_ = lean_ctor_get(v_x_351_, 1);
if (lean_obj_tag(v_tail_354_) == 0)
{
lean_object* v_head_355_; lean_object* v___x_356_; 
lean_dec(v_x_352_);
v_head_355_ = lean_ctor_get(v_x_351_, 0);
lean_inc(v_head_355_);
lean_dec_ref_known(v_x_351_, 2);
v___x_356_ = lp_leancjson_Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__1_spec__2___lam__0(v_head_355_);
return v___x_356_;
}
else
{
lean_object* v_head_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
lean_inc(v_tail_354_);
v_head_357_ = lean_ctor_get(v_x_351_, 0);
lean_inc(v_head_357_);
lean_dec_ref_known(v_x_351_, 2);
v___x_358_ = lp_leancjson_Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__1_spec__2___lam__0(v_head_357_);
v___x_359_ = lp_leancjson_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__1_spec__2_spec__4(v_x_352_, v___x_358_, v_tail_354_);
return v___x_359_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_repr___at___00CJson_instReprJSON_repr_spec__1___redArg(lean_object* v_a_360_){
_start:
{
if (lean_obj_tag(v_a_360_) == 0)
{
lean_object* v___x_361_; 
v___x_361_ = ((lean_object*)(lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__1));
return v___x_361_;
}
else
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; uint8_t v___x_370_; lean_object* v___x_371_; 
v___x_362_ = ((lean_object*)(lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__3));
v___x_363_ = lp_leancjson_Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__1_spec__2(v_a_360_, v___x_362_);
v___x_364_ = lean_obj_once(&lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__6, &lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__6_once, _init_lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__6);
v___x_365_ = ((lean_object*)(lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__7));
v___x_366_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
lean_ctor_set(v___x_366_, 1, v___x_363_);
v___x_367_ = ((lean_object*)(lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__8));
v___x_368_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_368_, 0, v___x_366_);
lean_ctor_set(v___x_368_, 1, v___x_367_);
v___x_369_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_369_, 0, v___x_364_);
lean_ctor_set(v___x_369_, 1, v___x_368_);
v___x_370_ = 0;
v___x_371_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_371_, 0, v___x_369_);
lean_ctor_set_uint8(v___x_371_, sizeof(void*)*1, v___x_370_);
return v___x_371_;
}
}
}
static lean_object* _init_lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = ((lean_object*)(lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__0));
v___x_380_ = lean_string_length(v___x_379_);
return v___x_380_;
}
}
static lean_object* _init_lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = lean_obj_once(&lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__2, &lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__2_once, _init_lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__2);
v___x_382_ = lean_nat_to_int(v___x_381_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg(lean_object* v_x_388_){
_start:
{
lean_object* v_fst_389_; lean_object* v_snd_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_413_; 
v_fst_389_ = lean_ctor_get(v_x_388_, 0);
v_snd_390_ = lean_ctor_get(v_x_388_, 1);
v_isSharedCheck_413_ = !lean_is_exclusive(v_x_388_);
if (v_isSharedCheck_413_ == 0)
{
v___x_392_ = v_x_388_;
v_isShared_393_ = v_isSharedCheck_413_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_snd_390_);
lean_inc(v_fst_389_);
lean_dec(v_x_388_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_413_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_398_; 
v___x_394_ = lean_unsigned_to_nat(0u);
v___x_395_ = lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg(v_fst_389_);
v___x_396_ = lean_box(0);
if (v_isShared_393_ == 0)
{
lean_ctor_set_tag(v___x_392_, 1);
lean_ctor_set(v___x_392_, 1, v___x_396_);
lean_ctor_set(v___x_392_, 0, v___x_395_);
v___x_398_ = v___x_392_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_395_);
lean_ctor_set(v_reuseFailAlloc_412_, 1, v___x_396_);
v___x_398_ = v_reuseFailAlloc_412_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; uint8_t v___x_410_; lean_object* v___x_411_; 
v___x_399_ = lp_leancjson_CJson_instReprJSON_repr(v_snd_390_, v___x_394_);
v___x_400_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
lean_ctor_set(v___x_400_, 1, v___x_398_);
v___x_401_ = l_List_reverse___redArg(v___x_400_);
v___x_402_ = ((lean_object*)(lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__3));
v___x_403_ = l_Std_Format_joinSep___at___00Lean_Syntax_formatStxAux_spec__2(v___x_401_, v___x_402_);
v___x_404_ = lean_obj_once(&lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__3, &lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__3_once, _init_lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__3);
v___x_405_ = ((lean_object*)(lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__4));
v___x_406_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
lean_ctor_set(v___x_406_, 1, v___x_403_);
v___x_407_ = ((lean_object*)(lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__5));
v___x_408_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_408_, 0, v___x_406_);
lean_ctor_set(v___x_408_, 1, v___x_407_);
v___x_409_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_404_);
lean_ctor_set(v___x_409_, 1, v___x_408_);
v___x_410_ = 0;
v___x_411_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_411_, 0, v___x_409_);
lean_ctor_set_uint8(v___x_411_, sizeof(void*)*1, v___x_410_);
return v___x_411_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__5_spec__8_spec__11(lean_object* v_x_414_, lean_object* v_x_415_, lean_object* v_x_416_){
_start:
{
if (lean_obj_tag(v_x_416_) == 0)
{
lean_dec(v_x_414_);
return v_x_415_;
}
else
{
lean_object* v_head_417_; lean_object* v_tail_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_428_; 
v_head_417_ = lean_ctor_get(v_x_416_, 0);
v_tail_418_ = lean_ctor_get(v_x_416_, 1);
v_isSharedCheck_428_ = !lean_is_exclusive(v_x_416_);
if (v_isSharedCheck_428_ == 0)
{
v___x_420_ = v_x_416_;
v_isShared_421_ = v_isSharedCheck_428_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_tail_418_);
lean_inc(v_head_417_);
lean_dec(v_x_416_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_428_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_423_; 
lean_inc(v_x_414_);
if (v_isShared_421_ == 0)
{
lean_ctor_set_tag(v___x_420_, 5);
lean_ctor_set(v___x_420_, 1, v_x_414_);
lean_ctor_set(v___x_420_, 0, v_x_415_);
v___x_423_ = v___x_420_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_x_415_);
lean_ctor_set(v_reuseFailAlloc_427_, 1, v_x_414_);
v___x_423_ = v_reuseFailAlloc_427_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_424_ = lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg(v_head_417_);
v___x_425_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_425_, 0, v___x_423_);
lean_ctor_set(v___x_425_, 1, v___x_424_);
v_x_415_ = v___x_425_;
v_x_416_ = v_tail_418_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__5_spec__8(lean_object* v_x_429_, lean_object* v_x_430_, lean_object* v_x_431_){
_start:
{
if (lean_obj_tag(v_x_431_) == 0)
{
lean_dec(v_x_429_);
return v_x_430_;
}
else
{
lean_object* v_head_432_; lean_object* v_tail_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_443_; 
v_head_432_ = lean_ctor_get(v_x_431_, 0);
v_tail_433_ = lean_ctor_get(v_x_431_, 1);
v_isSharedCheck_443_ = !lean_is_exclusive(v_x_431_);
if (v_isSharedCheck_443_ == 0)
{
v___x_435_ = v_x_431_;
v_isShared_436_ = v_isSharedCheck_443_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_tail_433_);
lean_inc(v_head_432_);
lean_dec(v_x_431_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_443_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_438_; 
lean_inc(v_x_429_);
if (v_isShared_436_ == 0)
{
lean_ctor_set_tag(v___x_435_, 5);
lean_ctor_set(v___x_435_, 1, v_x_429_);
lean_ctor_set(v___x_435_, 0, v_x_430_);
v___x_438_ = v___x_435_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_x_430_);
lean_ctor_set(v_reuseFailAlloc_442_, 1, v_x_429_);
v___x_438_ = v_reuseFailAlloc_442_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_439_ = lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg(v_head_432_);
v___x_440_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_440_, 0, v___x_438_);
lean_ctor_set(v___x_440_, 1, v___x_439_);
v___x_441_ = lp_leancjson_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__5_spec__8_spec__11(v_x_429_, v___x_440_, v_tail_433_);
return v___x_441_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__5(lean_object* v_x_444_, lean_object* v_x_445_){
_start:
{
if (lean_obj_tag(v_x_444_) == 0)
{
lean_object* v___x_446_; 
lean_dec(v_x_445_);
v___x_446_ = lean_box(0);
return v___x_446_;
}
else
{
lean_object* v_tail_447_; 
v_tail_447_ = lean_ctor_get(v_x_444_, 1);
if (lean_obj_tag(v_tail_447_) == 0)
{
lean_object* v_head_448_; lean_object* v___x_449_; 
lean_dec(v_x_445_);
v_head_448_ = lean_ctor_get(v_x_444_, 0);
lean_inc(v_head_448_);
lean_dec_ref_known(v_x_444_, 2);
v___x_449_ = lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg(v_head_448_);
return v___x_449_;
}
else
{
lean_object* v_head_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
lean_inc(v_tail_447_);
v_head_450_ = lean_ctor_get(v_x_444_, 0);
lean_inc(v_head_450_);
lean_dec_ref_known(v_x_444_, 2);
v___x_451_ = lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg(v_head_450_);
v___x_452_ = lp_leancjson_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__5_spec__8(v_x_445_, v___x_451_, v_tail_447_);
return v___x_452_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_repr___at___00CJson_instReprJSON_repr_spec__2___redArg(lean_object* v_a_453_){
_start:
{
if (lean_obj_tag(v_a_453_) == 0)
{
lean_object* v___x_454_; 
v___x_454_ = ((lean_object*)(lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__1));
return v___x_454_;
}
else
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; uint8_t v___x_463_; lean_object* v___x_464_; 
v___x_455_ = ((lean_object*)(lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__3));
v___x_456_ = lp_leancjson_Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__5(v_a_453_, v___x_455_);
v___x_457_ = lean_obj_once(&lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__6, &lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__6_once, _init_lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__6);
v___x_458_ = ((lean_object*)(lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__7));
v___x_459_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
lean_ctor_set(v___x_459_, 1, v___x_456_);
v___x_460_ = ((lean_object*)(lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__8));
v___x_461_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_461_, 0, v___x_459_);
lean_ctor_set(v___x_461_, 1, v___x_460_);
v___x_462_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_462_, 0, v___x_457_);
lean_ctor_set(v___x_462_, 1, v___x_461_);
v___x_463_ = 0;
v___x_464_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_464_, 0, v___x_462_);
lean_ctor_set_uint8(v___x_464_, sizeof(void*)*1, v___x_463_);
return v___x_464_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_instReprJSON_repr(lean_object* v_x_465_, lean_object* v_prec_466_){
_start:
{
lean_object* v___y_468_; 
switch(lean_obj_tag(v_x_465_))
{
case 0:
{
lean_object* v___x_474_; uint8_t v___x_475_; 
v___x_474_ = lean_unsigned_to_nat(1024u);
v___x_475_ = lean_nat_dec_le(v___x_474_, v_prec_466_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; 
v___x_476_ = lean_obj_once(&lp_leancjson_CJson_instReprJSON_repr___closed__2, &lp_leancjson_CJson_instReprJSON_repr___closed__2_once, _init_lp_leancjson_CJson_instReprJSON_repr___closed__2);
v___y_468_ = v___x_476_;
goto v___jp_467_;
}
else
{
lean_object* v___x_477_; 
v___x_477_ = lean_obj_once(&lp_leancjson_CJson_instReprJSON_repr___closed__3, &lp_leancjson_CJson_instReprJSON_repr___closed__3_once, _init_lp_leancjson_CJson_instReprJSON_repr___closed__3);
v___y_468_ = v___x_477_;
goto v___jp_467_;
}
}
case 1:
{
uint8_t v_b_478_; lean_object* v___y_480_; lean_object* v___x_488_; uint8_t v___x_489_; 
v_b_478_ = lean_ctor_get_uint8(v_x_465_, 0);
lean_dec_ref_known(v_x_465_, 0);
v___x_488_ = lean_unsigned_to_nat(1024u);
v___x_489_ = lean_nat_dec_le(v___x_488_, v_prec_466_);
if (v___x_489_ == 0)
{
lean_object* v___x_490_; 
v___x_490_ = lean_obj_once(&lp_leancjson_CJson_instReprJSON_repr___closed__2, &lp_leancjson_CJson_instReprJSON_repr___closed__2_once, _init_lp_leancjson_CJson_instReprJSON_repr___closed__2);
v___y_480_ = v___x_490_;
goto v___jp_479_;
}
else
{
lean_object* v___x_491_; 
v___x_491_ = lean_obj_once(&lp_leancjson_CJson_instReprJSON_repr___closed__3, &lp_leancjson_CJson_instReprJSON_repr___closed__3_once, _init_lp_leancjson_CJson_instReprJSON_repr___closed__3);
v___y_480_ = v___x_491_;
goto v___jp_479_;
}
v___jp_479_:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; uint8_t v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_481_ = ((lean_object*)(lp_leancjson_CJson_instReprJSON_repr___closed__6));
v___x_482_ = l_Bool_repr___redArg(v_b_478_);
v___x_483_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_483_, 0, v___x_481_);
lean_ctor_set(v___x_483_, 1, v___x_482_);
lean_inc(v___y_480_);
v___x_484_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_484_, 0, v___y_480_);
lean_ctor_set(v___x_484_, 1, v___x_483_);
v___x_485_ = 0;
v___x_486_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_486_, 0, v___x_484_);
lean_ctor_set_uint8(v___x_486_, sizeof(void*)*1, v___x_485_);
v___x_487_ = l_Repr_addAppParen(v___x_486_, v_prec_466_);
return v___x_487_;
}
}
case 2:
{
lean_object* v_n_492_; lean_object* v___y_494_; lean_object* v___x_502_; uint8_t v___x_503_; 
v_n_492_ = lean_ctor_get(v_x_465_, 0);
lean_inc_ref(v_n_492_);
lean_dec_ref_known(v_x_465_, 1);
v___x_502_ = lean_unsigned_to_nat(1024u);
v___x_503_ = lean_nat_dec_le(v___x_502_, v_prec_466_);
if (v___x_503_ == 0)
{
lean_object* v___x_504_; 
v___x_504_ = lean_obj_once(&lp_leancjson_CJson_instReprJSON_repr___closed__2, &lp_leancjson_CJson_instReprJSON_repr___closed__2_once, _init_lp_leancjson_CJson_instReprJSON_repr___closed__2);
v___y_494_ = v___x_504_;
goto v___jp_493_;
}
else
{
lean_object* v___x_505_; 
v___x_505_ = lean_obj_once(&lp_leancjson_CJson_instReprJSON_repr___closed__3, &lp_leancjson_CJson_instReprJSON_repr___closed__3_once, _init_lp_leancjson_CJson_instReprJSON_repr___closed__3);
v___y_494_ = v___x_505_;
goto v___jp_493_;
}
v___jp_493_:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; uint8_t v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_495_ = ((lean_object*)(lp_leancjson_CJson_instReprJSON_repr___closed__9));
v___x_496_ = lp_leancjson_CJson_instReprNum_repr___redArg(v_n_492_);
v___x_497_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_497_, 0, v___x_495_);
lean_ctor_set(v___x_497_, 1, v___x_496_);
lean_inc(v___y_494_);
v___x_498_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_498_, 0, v___y_494_);
lean_ctor_set(v___x_498_, 1, v___x_497_);
v___x_499_ = 0;
v___x_500_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_500_, 0, v___x_498_);
lean_ctor_set_uint8(v___x_500_, sizeof(void*)*1, v___x_499_);
v___x_501_ = l_Repr_addAppParen(v___x_500_, v_prec_466_);
return v___x_501_;
}
}
case 3:
{
lean_object* v_s_506_; lean_object* v___y_508_; lean_object* v___x_516_; uint8_t v___x_517_; 
v_s_506_ = lean_ctor_get(v_x_465_, 0);
lean_inc(v_s_506_);
lean_dec_ref_known(v_x_465_, 1);
v___x_516_ = lean_unsigned_to_nat(1024u);
v___x_517_ = lean_nat_dec_le(v___x_516_, v_prec_466_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; 
v___x_518_ = lean_obj_once(&lp_leancjson_CJson_instReprJSON_repr___closed__2, &lp_leancjson_CJson_instReprJSON_repr___closed__2_once, _init_lp_leancjson_CJson_instReprJSON_repr___closed__2);
v___y_508_ = v___x_518_;
goto v___jp_507_;
}
else
{
lean_object* v___x_519_; 
v___x_519_ = lean_obj_once(&lp_leancjson_CJson_instReprJSON_repr___closed__3, &lp_leancjson_CJson_instReprJSON_repr___closed__3_once, _init_lp_leancjson_CJson_instReprJSON_repr___closed__3);
v___y_508_ = v___x_519_;
goto v___jp_507_;
}
v___jp_507_:
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; uint8_t v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_509_ = ((lean_object*)(lp_leancjson_CJson_instReprJSON_repr___closed__12));
v___x_510_ = lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg(v_s_506_);
v___x_511_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_511_, 0, v___x_509_);
lean_ctor_set(v___x_511_, 1, v___x_510_);
lean_inc(v___y_508_);
v___x_512_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_512_, 0, v___y_508_);
lean_ctor_set(v___x_512_, 1, v___x_511_);
v___x_513_ = 0;
v___x_514_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_514_, 0, v___x_512_);
lean_ctor_set_uint8(v___x_514_, sizeof(void*)*1, v___x_513_);
v___x_515_ = l_Repr_addAppParen(v___x_514_, v_prec_466_);
return v___x_515_;
}
}
case 4:
{
lean_object* v_xs_520_; lean_object* v___y_522_; lean_object* v___x_530_; uint8_t v___x_531_; 
v_xs_520_ = lean_ctor_get(v_x_465_, 0);
lean_inc(v_xs_520_);
lean_dec_ref_known(v_x_465_, 1);
v___x_530_ = lean_unsigned_to_nat(1024u);
v___x_531_ = lean_nat_dec_le(v___x_530_, v_prec_466_);
if (v___x_531_ == 0)
{
lean_object* v___x_532_; 
v___x_532_ = lean_obj_once(&lp_leancjson_CJson_instReprJSON_repr___closed__2, &lp_leancjson_CJson_instReprJSON_repr___closed__2_once, _init_lp_leancjson_CJson_instReprJSON_repr___closed__2);
v___y_522_ = v___x_532_;
goto v___jp_521_;
}
else
{
lean_object* v___x_533_; 
v___x_533_ = lean_obj_once(&lp_leancjson_CJson_instReprJSON_repr___closed__3, &lp_leancjson_CJson_instReprJSON_repr___closed__3_once, _init_lp_leancjson_CJson_instReprJSON_repr___closed__3);
v___y_522_ = v___x_533_;
goto v___jp_521_;
}
v___jp_521_:
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; uint8_t v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_523_ = ((lean_object*)(lp_leancjson_CJson_instReprJSON_repr___closed__15));
v___x_524_ = lp_leancjson_List_repr___at___00CJson_instReprJSON_repr_spec__1___redArg(v_xs_520_);
v___x_525_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_525_, 0, v___x_523_);
lean_ctor_set(v___x_525_, 1, v___x_524_);
lean_inc(v___y_522_);
v___x_526_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_526_, 0, v___y_522_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = 0;
v___x_528_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_528_, 0, v___x_526_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*1, v___x_527_);
v___x_529_ = l_Repr_addAppParen(v___x_528_, v_prec_466_);
return v___x_529_;
}
}
default: 
{
lean_object* v_kvs_534_; lean_object* v___y_536_; lean_object* v___x_544_; uint8_t v___x_545_; 
v_kvs_534_ = lean_ctor_get(v_x_465_, 0);
lean_inc(v_kvs_534_);
lean_dec_ref_known(v_x_465_, 1);
v___x_544_ = lean_unsigned_to_nat(1024u);
v___x_545_ = lean_nat_dec_le(v___x_544_, v_prec_466_);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; 
v___x_546_ = lean_obj_once(&lp_leancjson_CJson_instReprJSON_repr___closed__2, &lp_leancjson_CJson_instReprJSON_repr___closed__2_once, _init_lp_leancjson_CJson_instReprJSON_repr___closed__2);
v___y_536_ = v___x_546_;
goto v___jp_535_;
}
else
{
lean_object* v___x_547_; 
v___x_547_ = lean_obj_once(&lp_leancjson_CJson_instReprJSON_repr___closed__3, &lp_leancjson_CJson_instReprJSON_repr___closed__3_once, _init_lp_leancjson_CJson_instReprJSON_repr___closed__3);
v___y_536_ = v___x_547_;
goto v___jp_535_;
}
v___jp_535_:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; uint8_t v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_537_ = ((lean_object*)(lp_leancjson_CJson_instReprJSON_repr___closed__18));
v___x_538_ = lp_leancjson_List_repr___at___00CJson_instReprJSON_repr_spec__2___redArg(v_kvs_534_);
v___x_539_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_539_, 0, v___x_537_);
lean_ctor_set(v___x_539_, 1, v___x_538_);
lean_inc(v___y_536_);
v___x_540_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_540_, 0, v___y_536_);
lean_ctor_set(v___x_540_, 1, v___x_539_);
v___x_541_ = 0;
v___x_542_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_542_, 0, v___x_540_);
lean_ctor_set_uint8(v___x_542_, sizeof(void*)*1, v___x_541_);
v___x_543_ = l_Repr_addAppParen(v___x_542_, v_prec_466_);
return v___x_543_;
}
}
}
v___jp_467_:
{
lean_object* v___x_469_; lean_object* v___x_470_; uint8_t v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_469_ = ((lean_object*)(lp_leancjson_CJson_instReprJSON_repr___closed__1));
lean_inc(v___y_468_);
v___x_470_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_470_, 0, v___y_468_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
v___x_471_ = 0;
v___x_472_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_472_, 0, v___x_470_);
lean_ctor_set_uint8(v___x_472_, sizeof(void*)*1, v___x_471_);
v___x_473_ = l_Repr_addAppParen(v___x_472_, v_prec_466_);
return v___x_473_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_Std_Format_joinSep___at___00List_repr___at___00CJson_instReprJSON_repr_spec__1_spec__2___lam__0(lean_object* v___y_548_){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = lean_unsigned_to_nat(0u);
v___x_550_ = lp_leancjson_CJson_instReprJSON_repr(v___y_548_, v___x_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_instReprJSON_repr___boxed(lean_object* v_x_551_, lean_object* v_prec_552_){
_start:
{
lean_object* v_res_553_; 
v_res_553_ = lp_leancjson_CJson_instReprJSON_repr(v_x_551_, v_prec_552_);
lean_dec(v_prec_552_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0(lean_object* v_a_554_, lean_object* v_n_555_){
_start:
{
lean_object* v___x_556_; 
v___x_556_ = lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg(v_a_554_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___boxed(lean_object* v_a_557_, lean_object* v_n_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0(v_a_557_, v_n_558_);
lean_dec(v_n_558_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_repr___at___00CJson_instReprJSON_repr_spec__1(lean_object* v_a_560_, lean_object* v_n_561_){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = lp_leancjson_List_repr___at___00CJson_instReprJSON_repr_spec__1___redArg(v_a_560_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_repr___at___00CJson_instReprJSON_repr_spec__1___boxed(lean_object* v_a_563_, lean_object* v_n_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = lp_leancjson_List_repr___at___00CJson_instReprJSON_repr_spec__1(v_a_563_, v_n_564_);
lean_dec(v_n_564_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_repr___at___00CJson_instReprJSON_repr_spec__2(lean_object* v_a_566_, lean_object* v_n_567_){
_start:
{
lean_object* v___x_568_; 
v___x_568_ = lp_leancjson_List_repr___at___00CJson_instReprJSON_repr_spec__2___redArg(v_a_566_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_repr___at___00CJson_instReprJSON_repr_spec__2___boxed(lean_object* v_a_569_, lean_object* v_n_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = lp_leancjson_List_repr___at___00CJson_instReprJSON_repr_spec__2(v_a_569_, v_n_570_);
lean_dec(v_n_570_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4(lean_object* v_x_572_, lean_object* v_x_573_){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg(v_x_572_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___boxed(lean_object* v_x_575_, lean_object* v_x_576_){
_start:
{
lean_object* v_res_577_; 
v_res_577_ = lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4(v_x_575_, v_x_576_);
lean_dec(v_x_576_);
return v_res_577_;
}
}
static lean_object* _init_lp_leancjson_CJson_instInhabitedJSON_default(void){
_start:
{
lean_object* v___x_580_; 
v___x_580_ = lean_box(0);
return v___x_580_;
}
}
static lean_object* _init_lp_leancjson_CJson_instInhabitedJSON(void){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = lean_box(0);
return v___x_581_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_List_beq___at___00CJson_JSON_beq_spec__0(lean_object* v_x_582_, lean_object* v_x_583_){
_start:
{
if (lean_obj_tag(v_x_582_) == 0)
{
if (lean_obj_tag(v_x_583_) == 0)
{
uint8_t v___x_584_; 
v___x_584_ = 1;
return v___x_584_;
}
else
{
uint8_t v___x_585_; 
v___x_585_ = 0;
return v___x_585_;
}
}
else
{
if (lean_obj_tag(v_x_583_) == 0)
{
uint8_t v___x_586_; 
v___x_586_ = 0;
return v___x_586_;
}
else
{
lean_object* v_head_587_; lean_object* v_tail_588_; lean_object* v_head_589_; lean_object* v_tail_590_; uint8_t v___x_591_; uint8_t v___x_592_; uint8_t v___x_593_; 
v_head_587_ = lean_ctor_get(v_x_582_, 0);
v_tail_588_ = lean_ctor_get(v_x_582_, 1);
v_head_589_ = lean_ctor_get(v_x_583_, 0);
v_tail_590_ = lean_ctor_get(v_x_583_, 1);
v___x_591_ = lean_unbox(v_head_587_);
v___x_592_ = lean_unbox(v_head_589_);
v___x_593_ = lean_uint8_dec_eq(v___x_591_, v___x_592_);
if (v___x_593_ == 0)
{
return v___x_593_;
}
else
{
v_x_582_ = v_tail_588_;
v_x_583_ = v_tail_590_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_beq___at___00CJson_JSON_beq_spec__0___boxed(lean_object* v_x_595_, lean_object* v_x_596_){
_start:
{
uint8_t v_res_597_; lean_object* v_r_598_; 
v_res_597_ = lp_leancjson_List_beq___at___00CJson_JSON_beq_spec__0(v_x_595_, v_x_596_);
lean_dec(v_x_596_);
lean_dec(v_x_595_);
v_r_598_ = lean_box(v_res_597_);
return v_r_598_;
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_beqMembers(lean_object* v_x_599_, lean_object* v_x_600_){
_start:
{
if (lean_obj_tag(v_x_599_) == 0)
{
if (lean_obj_tag(v_x_600_) == 0)
{
uint8_t v___x_601_; 
v___x_601_ = 1;
return v___x_601_;
}
else
{
uint8_t v___x_602_; 
v___x_602_ = 0;
return v___x_602_;
}
}
else
{
if (lean_obj_tag(v_x_600_) == 1)
{
lean_object* v_head_603_; lean_object* v_head_604_; lean_object* v_tail_605_; lean_object* v_fst_606_; lean_object* v_snd_607_; lean_object* v_tail_608_; lean_object* v_fst_609_; lean_object* v_snd_610_; uint8_t v___x_611_; 
v_head_603_ = lean_ctor_get(v_x_599_, 0);
v_head_604_ = lean_ctor_get(v_x_600_, 0);
v_tail_605_ = lean_ctor_get(v_x_599_, 1);
v_fst_606_ = lean_ctor_get(v_head_603_, 0);
v_snd_607_ = lean_ctor_get(v_head_603_, 1);
v_tail_608_ = lean_ctor_get(v_x_600_, 1);
v_fst_609_ = lean_ctor_get(v_head_604_, 0);
v_snd_610_ = lean_ctor_get(v_head_604_, 1);
v___x_611_ = lp_leancjson_List_beq___at___00CJson_JSON_beq_spec__0(v_fst_606_, v_fst_609_);
if (v___x_611_ == 0)
{
return v___x_611_;
}
else
{
uint8_t v___x_612_; 
v___x_612_ = lp_leancjson_CJson_JSON_beq(v_snd_607_, v_snd_610_);
if (v___x_612_ == 0)
{
return v___x_612_;
}
else
{
v_x_599_ = v_tail_605_;
v_x_600_ = v_tail_608_;
goto _start;
}
}
}
else
{
uint8_t v___x_614_; 
v___x_614_ = 0;
return v___x_614_;
}
}
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_beq(lean_object* v_x_615_, lean_object* v_x_616_){
_start:
{
switch(lean_obj_tag(v_x_615_))
{
case 0:
{
if (lean_obj_tag(v_x_616_) == 0)
{
uint8_t v___x_617_; 
v___x_617_ = 1;
return v___x_617_;
}
else
{
uint8_t v___x_618_; 
v___x_618_ = 0;
return v___x_618_;
}
}
case 1:
{
if (lean_obj_tag(v_x_616_) == 1)
{
uint8_t v_b_619_; 
v_b_619_ = lean_ctor_get_uint8(v_x_616_, 0);
if (v_b_619_ == 0)
{
uint8_t v_b_620_; 
v_b_620_ = lean_ctor_get_uint8(v_x_615_, 0);
if (v_b_620_ == 0)
{
uint8_t v___x_621_; 
v___x_621_ = 1;
return v___x_621_;
}
else
{
return v_b_619_;
}
}
else
{
uint8_t v_b_622_; 
v_b_622_ = lean_ctor_get_uint8(v_x_615_, 0);
return v_b_622_;
}
}
else
{
uint8_t v___x_623_; 
v___x_623_ = 0;
return v___x_623_;
}
}
case 2:
{
if (lean_obj_tag(v_x_616_) == 2)
{
lean_object* v_n_624_; lean_object* v_n_625_; uint8_t v___x_626_; 
v_n_624_ = lean_ctor_get(v_x_615_, 0);
v_n_625_ = lean_ctor_get(v_x_616_, 0);
v___x_626_ = lp_leancjson_CJson_instDecidableEqNum_decEq(v_n_624_, v_n_625_);
return v___x_626_;
}
else
{
uint8_t v___x_627_; 
v___x_627_ = 0;
return v___x_627_;
}
}
case 3:
{
if (lean_obj_tag(v_x_616_) == 3)
{
lean_object* v_s_628_; lean_object* v_s_629_; uint8_t v___x_630_; 
v_s_628_ = lean_ctor_get(v_x_615_, 0);
v_s_629_ = lean_ctor_get(v_x_616_, 0);
v___x_630_ = lp_leancjson_List_beq___at___00CJson_JSON_beq_spec__0(v_s_628_, v_s_629_);
return v___x_630_;
}
else
{
uint8_t v___x_631_; 
v___x_631_ = 0;
return v___x_631_;
}
}
case 4:
{
if (lean_obj_tag(v_x_616_) == 4)
{
lean_object* v_xs_632_; lean_object* v_xs_633_; uint8_t v___x_634_; 
v_xs_632_ = lean_ctor_get(v_x_615_, 0);
v_xs_633_ = lean_ctor_get(v_x_616_, 0);
v___x_634_ = lp_leancjson_CJson_JSON_beqList(v_xs_632_, v_xs_633_);
return v___x_634_;
}
else
{
uint8_t v___x_635_; 
v___x_635_ = 0;
return v___x_635_;
}
}
default: 
{
if (lean_obj_tag(v_x_616_) == 5)
{
lean_object* v_kvs_636_; lean_object* v_kvs_637_; uint8_t v___x_638_; 
v_kvs_636_ = lean_ctor_get(v_x_615_, 0);
v_kvs_637_ = lean_ctor_get(v_x_616_, 0);
v___x_638_ = lp_leancjson_CJson_JSON_beqMembers(v_kvs_636_, v_kvs_637_);
return v___x_638_;
}
else
{
uint8_t v___x_639_; 
v___x_639_ = 0;
return v___x_639_;
}
}
}
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_beqList(lean_object* v_x_640_, lean_object* v_x_641_){
_start:
{
if (lean_obj_tag(v_x_640_) == 0)
{
if (lean_obj_tag(v_x_641_) == 0)
{
uint8_t v___x_642_; 
v___x_642_ = 1;
return v___x_642_;
}
else
{
uint8_t v___x_643_; 
v___x_643_ = 0;
return v___x_643_;
}
}
else
{
if (lean_obj_tag(v_x_641_) == 1)
{
lean_object* v_head_644_; lean_object* v_tail_645_; lean_object* v_head_646_; lean_object* v_tail_647_; uint8_t v___x_648_; 
v_head_644_ = lean_ctor_get(v_x_640_, 0);
v_tail_645_ = lean_ctor_get(v_x_640_, 1);
v_head_646_ = lean_ctor_get(v_x_641_, 0);
v_tail_647_ = lean_ctor_get(v_x_641_, 1);
v___x_648_ = lp_leancjson_CJson_JSON_beq(v_head_644_, v_head_646_);
if (v___x_648_ == 0)
{
return v___x_648_;
}
else
{
v_x_640_ = v_tail_645_;
v_x_641_ = v_tail_647_;
goto _start;
}
}
else
{
uint8_t v___x_650_; 
v___x_650_ = 0;
return v___x_650_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_beqList___boxed(lean_object* v_x_651_, lean_object* v_x_652_){
_start:
{
uint8_t v_res_653_; lean_object* v_r_654_; 
v_res_653_ = lp_leancjson_CJson_JSON_beqList(v_x_651_, v_x_652_);
lean_dec(v_x_652_);
lean_dec(v_x_651_);
v_r_654_ = lean_box(v_res_653_);
return v_r_654_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_beqMembers___boxed(lean_object* v_x_655_, lean_object* v_x_656_){
_start:
{
uint8_t v_res_657_; lean_object* v_r_658_; 
v_res_657_ = lp_leancjson_CJson_JSON_beqMembers(v_x_655_, v_x_656_);
lean_dec(v_x_656_);
lean_dec(v_x_655_);
v_r_658_ = lean_box(v_res_657_);
return v_r_658_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_beq___boxed(lean_object* v_x_659_, lean_object* v_x_660_){
_start:
{
uint8_t v_res_661_; lean_object* v_r_662_; 
v_res_661_ = lp_leancjson_CJson_JSON_beq(v_x_659_, v_x_660_);
lean_dec(v_x_660_);
lean_dec(v_x_659_);
v_r_662_ = lean_box(v_res_661_);
return v_r_662_;
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Basic_0__CJson_JSON_beq_match__1_splitter___redArg(lean_object* v_x_663_, lean_object* v_x_664_, lean_object* v_h__1_665_, lean_object* v_h__2_666_, lean_object* v_h__3_667_, lean_object* v_h__4_668_, lean_object* v_h__5_669_, lean_object* v_h__6_670_, lean_object* v_h__7_671_){
_start:
{
switch(lean_obj_tag(v_x_663_))
{
case 0:
{
lean_dec(v_h__6_670_);
lean_dec(v_h__5_669_);
lean_dec(v_h__4_668_);
lean_dec(v_h__3_667_);
lean_dec(v_h__2_666_);
if (lean_obj_tag(v_x_664_) == 0)
{
lean_object* v___x_672_; lean_object* v___x_673_; 
lean_dec(v_h__7_671_);
v___x_672_ = lean_box(0);
v___x_673_ = lean_apply_1(v_h__1_665_, v___x_672_);
return v___x_673_;
}
else
{
lean_object* v___x_674_; 
lean_dec(v_h__1_665_);
v___x_674_ = lean_apply_8(v_h__7_671_, v_x_663_, v_x_664_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_674_;
}
}
case 1:
{
lean_dec(v_h__6_670_);
lean_dec(v_h__5_669_);
lean_dec(v_h__4_668_);
lean_dec(v_h__3_667_);
lean_dec(v_h__1_665_);
if (lean_obj_tag(v_x_664_) == 1)
{
uint8_t v_b_675_; uint8_t v_b_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
lean_dec(v_h__7_671_);
v_b_675_ = lean_ctor_get_uint8(v_x_663_, 0);
lean_dec_ref_known(v_x_663_, 0);
v_b_676_ = lean_ctor_get_uint8(v_x_664_, 0);
lean_dec_ref_known(v_x_664_, 0);
v___x_677_ = lean_box(v_b_675_);
v___x_678_ = lean_box(v_b_676_);
v___x_679_ = lean_apply_2(v_h__2_666_, v___x_677_, v___x_678_);
return v___x_679_;
}
else
{
lean_object* v___x_680_; 
lean_dec(v_h__2_666_);
v___x_680_ = lean_apply_8(v_h__7_671_, v_x_663_, v_x_664_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_680_;
}
}
case 2:
{
lean_dec(v_h__6_670_);
lean_dec(v_h__5_669_);
lean_dec(v_h__4_668_);
lean_dec(v_h__2_666_);
lean_dec(v_h__1_665_);
if (lean_obj_tag(v_x_664_) == 2)
{
lean_object* v_n_681_; lean_object* v_n_682_; lean_object* v___x_683_; 
lean_dec(v_h__7_671_);
v_n_681_ = lean_ctor_get(v_x_663_, 0);
lean_inc_ref(v_n_681_);
lean_dec_ref_known(v_x_663_, 1);
v_n_682_ = lean_ctor_get(v_x_664_, 0);
lean_inc_ref(v_n_682_);
lean_dec_ref_known(v_x_664_, 1);
v___x_683_ = lean_apply_2(v_h__3_667_, v_n_681_, v_n_682_);
return v___x_683_;
}
else
{
lean_object* v___x_684_; 
lean_dec(v_h__3_667_);
v___x_684_ = lean_apply_8(v_h__7_671_, v_x_663_, v_x_664_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_684_;
}
}
case 3:
{
lean_dec(v_h__6_670_);
lean_dec(v_h__5_669_);
lean_dec(v_h__3_667_);
lean_dec(v_h__2_666_);
lean_dec(v_h__1_665_);
if (lean_obj_tag(v_x_664_) == 3)
{
lean_object* v_s_685_; lean_object* v_s_686_; lean_object* v___x_687_; 
lean_dec(v_h__7_671_);
v_s_685_ = lean_ctor_get(v_x_663_, 0);
lean_inc(v_s_685_);
lean_dec_ref_known(v_x_663_, 1);
v_s_686_ = lean_ctor_get(v_x_664_, 0);
lean_inc(v_s_686_);
lean_dec_ref_known(v_x_664_, 1);
v___x_687_ = lean_apply_2(v_h__4_668_, v_s_685_, v_s_686_);
return v___x_687_;
}
else
{
lean_object* v___x_688_; 
lean_dec(v_h__4_668_);
v___x_688_ = lean_apply_8(v_h__7_671_, v_x_663_, v_x_664_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_688_;
}
}
case 4:
{
lean_dec(v_h__6_670_);
lean_dec(v_h__4_668_);
lean_dec(v_h__3_667_);
lean_dec(v_h__2_666_);
lean_dec(v_h__1_665_);
if (lean_obj_tag(v_x_664_) == 4)
{
lean_object* v_xs_689_; lean_object* v_xs_690_; lean_object* v___x_691_; 
lean_dec(v_h__7_671_);
v_xs_689_ = lean_ctor_get(v_x_663_, 0);
lean_inc(v_xs_689_);
lean_dec_ref_known(v_x_663_, 1);
v_xs_690_ = lean_ctor_get(v_x_664_, 0);
lean_inc(v_xs_690_);
lean_dec_ref_known(v_x_664_, 1);
v___x_691_ = lean_apply_2(v_h__5_669_, v_xs_689_, v_xs_690_);
return v___x_691_;
}
else
{
lean_object* v___x_692_; 
lean_dec(v_h__5_669_);
v___x_692_ = lean_apply_8(v_h__7_671_, v_x_663_, v_x_664_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_692_;
}
}
default: 
{
lean_dec(v_h__5_669_);
lean_dec(v_h__4_668_);
lean_dec(v_h__3_667_);
lean_dec(v_h__2_666_);
lean_dec(v_h__1_665_);
if (lean_obj_tag(v_x_664_) == 5)
{
lean_object* v_kvs_693_; lean_object* v_kvs_694_; lean_object* v___x_695_; 
lean_dec(v_h__7_671_);
v_kvs_693_ = lean_ctor_get(v_x_663_, 0);
lean_inc(v_kvs_693_);
lean_dec_ref_known(v_x_663_, 1);
v_kvs_694_ = lean_ctor_get(v_x_664_, 0);
lean_inc(v_kvs_694_);
lean_dec_ref_known(v_x_664_, 1);
v___x_695_ = lean_apply_2(v_h__6_670_, v_kvs_693_, v_kvs_694_);
return v___x_695_;
}
else
{
lean_object* v___x_696_; 
lean_dec(v_h__6_670_);
v___x_696_ = lean_apply_8(v_h__7_671_, v_x_663_, v_x_664_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_696_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Basic_0__CJson_JSON_beq_match__1_splitter(lean_object* v_motive_697_, lean_object* v_x_698_, lean_object* v_x_699_, lean_object* v_h__1_700_, lean_object* v_h__2_701_, lean_object* v_h__3_702_, lean_object* v_h__4_703_, lean_object* v_h__5_704_, lean_object* v_h__6_705_, lean_object* v_h__7_706_){
_start:
{
switch(lean_obj_tag(v_x_698_))
{
case 0:
{
lean_dec(v_h__6_705_);
lean_dec(v_h__5_704_);
lean_dec(v_h__4_703_);
lean_dec(v_h__3_702_);
lean_dec(v_h__2_701_);
if (lean_obj_tag(v_x_699_) == 0)
{
lean_object* v___x_707_; lean_object* v___x_708_; 
lean_dec(v_h__7_706_);
v___x_707_ = lean_box(0);
v___x_708_ = lean_apply_1(v_h__1_700_, v___x_707_);
return v___x_708_;
}
else
{
lean_object* v___x_709_; 
lean_dec(v_h__1_700_);
v___x_709_ = lean_apply_8(v_h__7_706_, v_x_698_, v_x_699_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_709_;
}
}
case 1:
{
lean_dec(v_h__6_705_);
lean_dec(v_h__5_704_);
lean_dec(v_h__4_703_);
lean_dec(v_h__3_702_);
lean_dec(v_h__1_700_);
if (lean_obj_tag(v_x_699_) == 1)
{
uint8_t v_b_710_; uint8_t v_b_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
lean_dec(v_h__7_706_);
v_b_710_ = lean_ctor_get_uint8(v_x_698_, 0);
lean_dec_ref_known(v_x_698_, 0);
v_b_711_ = lean_ctor_get_uint8(v_x_699_, 0);
lean_dec_ref_known(v_x_699_, 0);
v___x_712_ = lean_box(v_b_710_);
v___x_713_ = lean_box(v_b_711_);
v___x_714_ = lean_apply_2(v_h__2_701_, v___x_712_, v___x_713_);
return v___x_714_;
}
else
{
lean_object* v___x_715_; 
lean_dec(v_h__2_701_);
v___x_715_ = lean_apply_8(v_h__7_706_, v_x_698_, v_x_699_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_715_;
}
}
case 2:
{
lean_dec(v_h__6_705_);
lean_dec(v_h__5_704_);
lean_dec(v_h__4_703_);
lean_dec(v_h__2_701_);
lean_dec(v_h__1_700_);
if (lean_obj_tag(v_x_699_) == 2)
{
lean_object* v_n_716_; lean_object* v_n_717_; lean_object* v___x_718_; 
lean_dec(v_h__7_706_);
v_n_716_ = lean_ctor_get(v_x_698_, 0);
lean_inc_ref(v_n_716_);
lean_dec_ref_known(v_x_698_, 1);
v_n_717_ = lean_ctor_get(v_x_699_, 0);
lean_inc_ref(v_n_717_);
lean_dec_ref_known(v_x_699_, 1);
v___x_718_ = lean_apply_2(v_h__3_702_, v_n_716_, v_n_717_);
return v___x_718_;
}
else
{
lean_object* v___x_719_; 
lean_dec(v_h__3_702_);
v___x_719_ = lean_apply_8(v_h__7_706_, v_x_698_, v_x_699_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_719_;
}
}
case 3:
{
lean_dec(v_h__6_705_);
lean_dec(v_h__5_704_);
lean_dec(v_h__3_702_);
lean_dec(v_h__2_701_);
lean_dec(v_h__1_700_);
if (lean_obj_tag(v_x_699_) == 3)
{
lean_object* v_s_720_; lean_object* v_s_721_; lean_object* v___x_722_; 
lean_dec(v_h__7_706_);
v_s_720_ = lean_ctor_get(v_x_698_, 0);
lean_inc(v_s_720_);
lean_dec_ref_known(v_x_698_, 1);
v_s_721_ = lean_ctor_get(v_x_699_, 0);
lean_inc(v_s_721_);
lean_dec_ref_known(v_x_699_, 1);
v___x_722_ = lean_apply_2(v_h__4_703_, v_s_720_, v_s_721_);
return v___x_722_;
}
else
{
lean_object* v___x_723_; 
lean_dec(v_h__4_703_);
v___x_723_ = lean_apply_8(v_h__7_706_, v_x_698_, v_x_699_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_723_;
}
}
case 4:
{
lean_dec(v_h__6_705_);
lean_dec(v_h__4_703_);
lean_dec(v_h__3_702_);
lean_dec(v_h__2_701_);
lean_dec(v_h__1_700_);
if (lean_obj_tag(v_x_699_) == 4)
{
lean_object* v_xs_724_; lean_object* v_xs_725_; lean_object* v___x_726_; 
lean_dec(v_h__7_706_);
v_xs_724_ = lean_ctor_get(v_x_698_, 0);
lean_inc(v_xs_724_);
lean_dec_ref_known(v_x_698_, 1);
v_xs_725_ = lean_ctor_get(v_x_699_, 0);
lean_inc(v_xs_725_);
lean_dec_ref_known(v_x_699_, 1);
v___x_726_ = lean_apply_2(v_h__5_704_, v_xs_724_, v_xs_725_);
return v___x_726_;
}
else
{
lean_object* v___x_727_; 
lean_dec(v_h__5_704_);
v___x_727_ = lean_apply_8(v_h__7_706_, v_x_698_, v_x_699_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_727_;
}
}
default: 
{
lean_dec(v_h__5_704_);
lean_dec(v_h__4_703_);
lean_dec(v_h__3_702_);
lean_dec(v_h__2_701_);
lean_dec(v_h__1_700_);
if (lean_obj_tag(v_x_699_) == 5)
{
lean_object* v_kvs_728_; lean_object* v_kvs_729_; lean_object* v___x_730_; 
lean_dec(v_h__7_706_);
v_kvs_728_ = lean_ctor_get(v_x_698_, 0);
lean_inc(v_kvs_728_);
lean_dec_ref_known(v_x_698_, 1);
v_kvs_729_ = lean_ctor_get(v_x_699_, 0);
lean_inc(v_kvs_729_);
lean_dec_ref_known(v_x_699_, 1);
v___x_730_ = lean_apply_2(v_h__6_705_, v_kvs_728_, v_kvs_729_);
return v___x_730_;
}
else
{
lean_object* v___x_731_; 
lean_dec(v_h__6_705_);
v___x_731_ = lean_apply_8(v_h__7_706_, v_x_698_, v_x_699_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_731_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Basic_0__CJson_JSON_beqList_match__1_splitter___redArg(lean_object* v_x_732_, lean_object* v_x_733_, lean_object* v_h__1_734_, lean_object* v_h__2_735_, lean_object* v_h__3_736_){
_start:
{
if (lean_obj_tag(v_x_732_) == 0)
{
lean_dec(v_h__2_735_);
if (lean_obj_tag(v_x_733_) == 0)
{
lean_object* v___x_737_; lean_object* v___x_738_; 
lean_dec(v_h__3_736_);
v___x_737_ = lean_box(0);
v___x_738_ = lean_apply_1(v_h__1_734_, v___x_737_);
return v___x_738_;
}
else
{
lean_object* v___x_739_; 
lean_dec(v_h__1_734_);
v___x_739_ = lean_apply_4(v_h__3_736_, v_x_732_, v_x_733_, lean_box(0), lean_box(0));
return v___x_739_;
}
}
else
{
lean_dec(v_h__1_734_);
if (lean_obj_tag(v_x_733_) == 1)
{
lean_object* v_head_740_; lean_object* v_tail_741_; lean_object* v_head_742_; lean_object* v_tail_743_; lean_object* v___x_744_; 
lean_dec(v_h__3_736_);
v_head_740_ = lean_ctor_get(v_x_732_, 0);
lean_inc(v_head_740_);
v_tail_741_ = lean_ctor_get(v_x_732_, 1);
lean_inc(v_tail_741_);
lean_dec_ref_known(v_x_732_, 2);
v_head_742_ = lean_ctor_get(v_x_733_, 0);
lean_inc(v_head_742_);
v_tail_743_ = lean_ctor_get(v_x_733_, 1);
lean_inc(v_tail_743_);
lean_dec_ref_known(v_x_733_, 2);
v___x_744_ = lean_apply_4(v_h__2_735_, v_head_740_, v_tail_741_, v_head_742_, v_tail_743_);
return v___x_744_;
}
else
{
lean_object* v___x_745_; 
lean_dec(v_h__2_735_);
v___x_745_ = lean_apply_4(v_h__3_736_, v_x_732_, v_x_733_, lean_box(0), lean_box(0));
return v___x_745_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Basic_0__CJson_JSON_beqList_match__1_splitter(lean_object* v_motive_746_, lean_object* v_x_747_, lean_object* v_x_748_, lean_object* v_h__1_749_, lean_object* v_h__2_750_, lean_object* v_h__3_751_){
_start:
{
if (lean_obj_tag(v_x_747_) == 0)
{
lean_dec(v_h__2_750_);
if (lean_obj_tag(v_x_748_) == 0)
{
lean_object* v___x_752_; lean_object* v___x_753_; 
lean_dec(v_h__3_751_);
v___x_752_ = lean_box(0);
v___x_753_ = lean_apply_1(v_h__1_749_, v___x_752_);
return v___x_753_;
}
else
{
lean_object* v___x_754_; 
lean_dec(v_h__1_749_);
v___x_754_ = lean_apply_4(v_h__3_751_, v_x_747_, v_x_748_, lean_box(0), lean_box(0));
return v___x_754_;
}
}
else
{
lean_dec(v_h__1_749_);
if (lean_obj_tag(v_x_748_) == 1)
{
lean_object* v_head_755_; lean_object* v_tail_756_; lean_object* v_head_757_; lean_object* v_tail_758_; lean_object* v___x_759_; 
lean_dec(v_h__3_751_);
v_head_755_ = lean_ctor_get(v_x_747_, 0);
lean_inc(v_head_755_);
v_tail_756_ = lean_ctor_get(v_x_747_, 1);
lean_inc(v_tail_756_);
lean_dec_ref_known(v_x_747_, 2);
v_head_757_ = lean_ctor_get(v_x_748_, 0);
lean_inc(v_head_757_);
v_tail_758_ = lean_ctor_get(v_x_748_, 1);
lean_inc(v_tail_758_);
lean_dec_ref_known(v_x_748_, 2);
v___x_759_ = lean_apply_4(v_h__2_750_, v_head_755_, v_tail_756_, v_head_757_, v_tail_758_);
return v___x_759_;
}
else
{
lean_object* v___x_760_; 
lean_dec(v_h__2_750_);
v___x_760_ = lean_apply_4(v_h__3_751_, v_x_747_, v_x_748_, lean_box(0), lean_box(0));
return v___x_760_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Basic_0__CJson_JSON_beqMembers_match__1_splitter___redArg(lean_object* v_x_761_, lean_object* v_x_762_, lean_object* v_h__1_763_, lean_object* v_h__2_764_, lean_object* v_h__3_765_){
_start:
{
if (lean_obj_tag(v_x_761_) == 0)
{
lean_dec(v_h__2_764_);
if (lean_obj_tag(v_x_762_) == 0)
{
lean_object* v___x_766_; lean_object* v___x_767_; 
lean_dec(v_h__3_765_);
v___x_766_ = lean_box(0);
v___x_767_ = lean_apply_1(v_h__1_763_, v___x_766_);
return v___x_767_;
}
else
{
lean_object* v___x_768_; 
lean_dec(v_h__1_763_);
v___x_768_ = lean_apply_4(v_h__3_765_, v_x_761_, v_x_762_, lean_box(0), lean_box(0));
return v___x_768_;
}
}
else
{
lean_dec(v_h__1_763_);
if (lean_obj_tag(v_x_762_) == 1)
{
lean_object* v_head_769_; lean_object* v_head_770_; lean_object* v_tail_771_; lean_object* v_fst_772_; lean_object* v_snd_773_; lean_object* v_tail_774_; lean_object* v_fst_775_; lean_object* v_snd_776_; lean_object* v___x_777_; 
v_head_769_ = lean_ctor_get(v_x_761_, 0);
lean_inc(v_head_769_);
lean_dec(v_h__3_765_);
v_head_770_ = lean_ctor_get(v_x_762_, 0);
lean_inc(v_head_770_);
v_tail_771_ = lean_ctor_get(v_x_761_, 1);
lean_inc(v_tail_771_);
lean_dec_ref_known(v_x_761_, 2);
v_fst_772_ = lean_ctor_get(v_head_769_, 0);
lean_inc(v_fst_772_);
v_snd_773_ = lean_ctor_get(v_head_769_, 1);
lean_inc(v_snd_773_);
lean_dec(v_head_769_);
v_tail_774_ = lean_ctor_get(v_x_762_, 1);
lean_inc(v_tail_774_);
lean_dec_ref_known(v_x_762_, 2);
v_fst_775_ = lean_ctor_get(v_head_770_, 0);
lean_inc(v_fst_775_);
v_snd_776_ = lean_ctor_get(v_head_770_, 1);
lean_inc(v_snd_776_);
lean_dec(v_head_770_);
v___x_777_ = lean_apply_6(v_h__2_764_, v_fst_772_, v_snd_773_, v_tail_771_, v_fst_775_, v_snd_776_, v_tail_774_);
return v___x_777_;
}
else
{
lean_object* v___x_778_; 
lean_dec(v_h__2_764_);
v___x_778_ = lean_apply_4(v_h__3_765_, v_x_761_, v_x_762_, lean_box(0), lean_box(0));
return v___x_778_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Basic_0__CJson_JSON_beqMembers_match__1_splitter(lean_object* v_motive_779_, lean_object* v_x_780_, lean_object* v_x_781_, lean_object* v_h__1_782_, lean_object* v_h__2_783_, lean_object* v_h__3_784_){
_start:
{
if (lean_obj_tag(v_x_780_) == 0)
{
lean_dec(v_h__2_783_);
if (lean_obj_tag(v_x_781_) == 0)
{
lean_object* v___x_785_; lean_object* v___x_786_; 
lean_dec(v_h__3_784_);
v___x_785_ = lean_box(0);
v___x_786_ = lean_apply_1(v_h__1_782_, v___x_785_);
return v___x_786_;
}
else
{
lean_object* v___x_787_; 
lean_dec(v_h__1_782_);
v___x_787_ = lean_apply_4(v_h__3_784_, v_x_780_, v_x_781_, lean_box(0), lean_box(0));
return v___x_787_;
}
}
else
{
lean_dec(v_h__1_782_);
if (lean_obj_tag(v_x_781_) == 1)
{
lean_object* v_head_788_; lean_object* v_head_789_; lean_object* v_tail_790_; lean_object* v_fst_791_; lean_object* v_snd_792_; lean_object* v_tail_793_; lean_object* v_fst_794_; lean_object* v_snd_795_; lean_object* v___x_796_; 
v_head_788_ = lean_ctor_get(v_x_780_, 0);
lean_inc(v_head_788_);
lean_dec(v_h__3_784_);
v_head_789_ = lean_ctor_get(v_x_781_, 0);
lean_inc(v_head_789_);
v_tail_790_ = lean_ctor_get(v_x_780_, 1);
lean_inc(v_tail_790_);
lean_dec_ref_known(v_x_780_, 2);
v_fst_791_ = lean_ctor_get(v_head_788_, 0);
lean_inc(v_fst_791_);
v_snd_792_ = lean_ctor_get(v_head_788_, 1);
lean_inc(v_snd_792_);
lean_dec(v_head_788_);
v_tail_793_ = lean_ctor_get(v_x_781_, 1);
lean_inc(v_tail_793_);
lean_dec_ref_known(v_x_781_, 2);
v_fst_794_ = lean_ctor_get(v_head_789_, 0);
lean_inc(v_fst_794_);
v_snd_795_ = lean_ctor_get(v_head_789_, 1);
lean_inc(v_snd_795_);
lean_dec(v_head_789_);
v___x_796_ = lean_apply_6(v_h__2_783_, v_fst_791_, v_snd_792_, v_tail_790_, v_fst_794_, v_snd_795_, v_tail_793_);
return v___x_796_;
}
else
{
lean_object* v___x_797_; 
lean_dec(v_h__2_783_);
v___x_797_ = lean_apply_4(v_h__3_784_, v_x_780_, v_x_781_, lean_box(0), lean_box(0));
return v___x_797_;
}
}
}
}
LEAN_EXPORT uint8_t lp_leancjson_CJson_JSON_instDecidableEq(lean_object* v_a_798_, lean_object* v_b_799_){
_start:
{
uint8_t v___x_800_; 
v___x_800_ = lp_leancjson_CJson_JSON_beq(v_a_798_, v_b_799_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_instDecidableEq___boxed(lean_object* v_a_801_, lean_object* v_b_802_){
_start:
{
uint8_t v_res_803_; lean_object* v_r_804_; 
v_res_803_ = lp_leancjson_CJson_JSON_instDecidableEq(v_a_801_, v_b_802_);
lean_dec(v_b_802_);
lean_dec(v_a_801_);
v_r_804_ = lean_box(v_res_803_);
return v_r_804_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_depthMembers(lean_object* v_x_805_){
_start:
{
if (lean_obj_tag(v_x_805_) == 0)
{
lean_object* v___x_806_; 
v___x_806_ = lean_unsigned_to_nat(0u);
return v___x_806_;
}
else
{
lean_object* v_head_807_; lean_object* v_tail_808_; lean_object* v_snd_809_; lean_object* v___x_810_; lean_object* v___x_811_; uint8_t v___x_812_; 
v_head_807_ = lean_ctor_get(v_x_805_, 0);
v_tail_808_ = lean_ctor_get(v_x_805_, 1);
v_snd_809_ = lean_ctor_get(v_head_807_, 1);
v___x_810_ = lp_leancjson_CJson_JSON_depth(v_snd_809_);
v___x_811_ = lp_leancjson_CJson_JSON_depthMembers(v_tail_808_);
v___x_812_ = lean_nat_dec_le(v___x_810_, v___x_811_);
if (v___x_812_ == 0)
{
lean_dec(v___x_811_);
return v___x_810_;
}
else
{
lean_dec(v___x_810_);
return v___x_811_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_depth(lean_object* v_x_813_){
_start:
{
switch(lean_obj_tag(v_x_813_))
{
case 4:
{
lean_object* v_xs_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v_xs_814_ = lean_ctor_get(v_x_813_, 0);
v___x_815_ = lp_leancjson_CJson_JSON_depthList(v_xs_814_);
v___x_816_ = lean_unsigned_to_nat(1u);
v___x_817_ = lean_nat_add(v___x_815_, v___x_816_);
lean_dec(v___x_815_);
return v___x_817_;
}
case 5:
{
lean_object* v_kvs_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
v_kvs_818_ = lean_ctor_get(v_x_813_, 0);
v___x_819_ = lp_leancjson_CJson_JSON_depthMembers(v_kvs_818_);
v___x_820_ = lean_unsigned_to_nat(1u);
v___x_821_ = lean_nat_add(v___x_819_, v___x_820_);
lean_dec(v___x_819_);
return v___x_821_;
}
default: 
{
lean_object* v___x_822_; 
v___x_822_ = lean_unsigned_to_nat(0u);
return v___x_822_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_depthList(lean_object* v_x_823_){
_start:
{
if (lean_obj_tag(v_x_823_) == 0)
{
lean_object* v___x_824_; 
v___x_824_ = lean_unsigned_to_nat(0u);
return v___x_824_;
}
else
{
lean_object* v_head_825_; lean_object* v_tail_826_; lean_object* v___x_827_; lean_object* v___x_828_; uint8_t v___x_829_; 
v_head_825_ = lean_ctor_get(v_x_823_, 0);
v_tail_826_ = lean_ctor_get(v_x_823_, 1);
v___x_827_ = lp_leancjson_CJson_JSON_depth(v_head_825_);
v___x_828_ = lp_leancjson_CJson_JSON_depthList(v_tail_826_);
v___x_829_ = lean_nat_dec_le(v___x_827_, v___x_828_);
if (v___x_829_ == 0)
{
lean_dec(v___x_828_);
return v___x_827_;
}
else
{
lean_dec(v___x_827_);
return v___x_828_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_depthList___boxed(lean_object* v_x_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = lp_leancjson_CJson_JSON_depthList(v_x_830_);
lean_dec(v_x_830_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_depth___boxed(lean_object* v_x_832_){
_start:
{
lean_object* v_res_833_; 
v_res_833_ = lp_leancjson_CJson_JSON_depth(v_x_832_);
lean_dec(v_x_832_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_JSON_depthMembers___boxed(lean_object* v_x_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = lp_leancjson_CJson_JSON_depthMembers(v_x_834_);
lean_dec(v_x_834_);
return v_res_835_;
}
}
static lean_object* _init_lp_leancjson_CJson_nestingLimit(void){
_start:
{
lean_object* v___x_836_; 
v___x_836_ = lean_unsigned_to_nat(1000u);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_bytes(lean_object* v_s_837_){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_838_ = lean_string_to_utf8(v_s_837_);
v___x_839_ = l_ByteArray_toList(v___x_838_);
lean_dec_ref(v___x_838_);
return v___x_839_;
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1_spec__1(size_t v_sz_865_, size_t v_i_866_, lean_object* v_bs_867_){
_start:
{
uint8_t v___x_868_; 
v___x_868_ = lean_usize_dec_lt(v_i_866_, v_sz_865_);
if (v___x_868_ == 0)
{
return v_bs_867_;
}
else
{
lean_object* v_v_869_; lean_object* v___x_870_; lean_object* v_bs_x27_871_; size_t v___x_872_; size_t v___x_873_; lean_object* v___x_874_; 
v_v_869_ = lean_array_uget(v_bs_867_, v_i_866_);
v___x_870_ = lean_unsigned_to_nat(0u);
v_bs_x27_871_ = lean_array_uset(v_bs_867_, v_i_866_, v___x_870_);
v___x_872_ = ((size_t)1ULL);
v___x_873_ = lean_usize_add(v_i_866_, v___x_872_);
v___x_874_ = lean_array_uset(v_bs_x27_871_, v_i_866_, v_v_869_);
v_i_866_ = v___x_873_;
v_bs_867_ = v___x_874_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1_spec__1___boxed(lean_object* v_sz_876_, lean_object* v_i_877_, lean_object* v_bs_878_){
_start:
{
size_t v_sz_boxed_879_; size_t v_i_boxed_880_; lean_object* v_res_881_; 
v_sz_boxed_879_ = lean_unbox_usize(v_sz_876_);
lean_dec(v_sz_876_);
v_i_boxed_880_ = lean_unbox_usize(v_i_877_);
lean_dec(v_i_877_);
v_res_881_ = lp_leancjson___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1_spec__1(v_sz_boxed_879_, v_i_boxed_880_, v_bs_878_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1_spec__0(size_t v_sz_882_, size_t v_i_883_, lean_object* v_bs_884_){
_start:
{
uint8_t v___x_885_; 
v___x_885_ = lean_usize_dec_lt(v_i_883_, v_sz_882_);
if (v___x_885_ == 0)
{
return v_bs_884_;
}
else
{
lean_object* v_v_886_; lean_object* v___x_887_; lean_object* v_bs_x27_888_; uint8_t v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; size_t v___x_894_; size_t v___x_895_; lean_object* v___x_896_; 
v_v_886_ = lean_array_uget(v_bs_884_, v_i_883_);
v___x_887_ = lean_unsigned_to_nat(0u);
v_bs_x27_888_ = lean_array_uset(v_bs_884_, v_i_883_, v___x_887_);
v___x_889_ = lean_unbox(v_v_886_);
lean_dec(v_v_886_);
v___x_890_ = lean_uint8_to_nat(v___x_889_);
v___x_891_ = l_Nat_reprFast(v___x_890_);
v___x_892_ = lean_box(2);
v___x_893_ = l_Lean_Syntax_mkNumLit(v___x_891_, v___x_892_);
v___x_894_ = ((size_t)1ULL);
v___x_895_ = lean_usize_add(v_i_883_, v___x_894_);
v___x_896_ = lean_array_uset(v_bs_x27_888_, v_i_883_, v___x_893_);
v_i_883_ = v___x_895_;
v_bs_884_ = v___x_896_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1_spec__0___boxed(lean_object* v_sz_898_, lean_object* v_i_899_, lean_object* v_bs_900_){
_start:
{
size_t v_sz_boxed_901_; size_t v_i_boxed_902_; lean_object* v_res_903_; 
v_sz_boxed_901_ = lean_unbox_usize(v_sz_898_);
lean_dec(v_sz_898_);
v_i_boxed_902_ = lean_unbox_usize(v_i_899_);
lean_dec(v_i_899_);
v_res_903_ = lp_leancjson___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1_spec__0(v_sz_boxed_901_, v_i_boxed_902_, v_bs_900_);
return v_res_903_;
}
}
static lean_object* _init_lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__10(void){
_start:
{
lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_923_ = ((lean_object*)(lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__9));
v___x_924_ = l_String_toRawSubstring_x27(v___x_923_);
return v___x_924_;
}
}
static lean_object* _init_lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__18(void){
_start:
{
lean_object* v___x_938_; 
v___x_938_ = l_Array_mkArray0___redArg();
return v___x_938_;
}
}
static lean_object* _init_lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__21(void){
_start:
{
lean_object* v___x_941_; lean_object* v___x_942_; 
v___x_941_ = ((lean_object*)(lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__20));
v___x_942_ = l_String_toRawSubstring_x27(v___x_941_);
return v___x_942_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1(lean_object* v_x_954_, lean_object* v_a_955_, lean_object* v_a_956_){
_start:
{
lean_object* v___x_957_; uint8_t v___x_958_; 
v___x_957_ = ((lean_object*)(lp_leancjson_CJson_termB_x21___00__closed__2));
lean_inc(v_x_954_);
v___x_958_ = l_Lean_Syntax_isOfKind(v_x_954_, v___x_957_);
if (v___x_958_ == 0)
{
lean_object* v___x_959_; lean_object* v___x_960_; 
lean_dec(v_x_954_);
v___x_959_ = lean_box(1);
v___x_960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_960_, 0, v___x_959_);
lean_ctor_set(v___x_960_, 1, v_a_956_);
return v___x_960_;
}
else
{
lean_object* v_quotContext_961_; lean_object* v_currMacroScope_962_; lean_object* v_ref_963_; lean_object* v___x_964_; lean_object* v_s_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; size_t v_sz_970_; size_t v___x_971_; lean_object* v_elems_972_; uint8_t v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; size_t v_sz_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v_quotContext_961_ = lean_ctor_get(v_a_955_, 1);
v_currMacroScope_962_ = lean_ctor_get(v_a_955_, 2);
v_ref_963_ = lean_ctor_get(v_a_955_, 5);
v___x_964_ = lean_unsigned_to_nat(1u);
v_s_965_ = l_Lean_Syntax_getArg(v_x_954_, v___x_964_);
lean_dec(v_x_954_);
v___x_966_ = l_Lean_TSyntax_getString(v_s_965_);
lean_dec(v_s_965_);
v___x_967_ = lean_string_to_utf8(v___x_966_);
v___x_968_ = l_ByteArray_toList(v___x_967_);
lean_dec_ref(v___x_967_);
v___x_969_ = lean_array_mk(v___x_968_);
v_sz_970_ = lean_array_size(v___x_969_);
v___x_971_ = ((size_t)0ULL);
v_elems_972_ = lp_leancjson___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1_spec__0(v_sz_970_, v___x_971_, v___x_969_);
v___x_973_ = 0;
v___x_974_ = l_Lean_SourceInfo_fromRef(v_ref_963_, v___x_973_);
v___x_975_ = ((lean_object*)(lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__4));
v___x_976_ = ((lean_object*)(lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__6));
v___x_977_ = ((lean_object*)(lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__0));
lean_inc_n(v___x_974_, 12);
v___x_978_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_974_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v___x_979_ = ((lean_object*)(lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__8));
v___x_980_ = lean_obj_once(&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__10, &lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__10_once, _init_lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__10);
v___x_981_ = lean_box(0);
lean_inc_n(v_currMacroScope_962_, 2);
lean_inc_n(v_quotContext_961_, 2);
v___x_982_ = l_Lean_addMacroScope(v_quotContext_961_, v___x_981_, v_currMacroScope_962_);
v___x_983_ = ((lean_object*)(lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__13));
v___x_984_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_984_, 0, v___x_974_);
lean_ctor_set(v___x_984_, 1, v___x_980_);
lean_ctor_set(v___x_984_, 2, v___x_982_);
lean_ctor_set(v___x_984_, 3, v___x_983_);
v___x_985_ = l_Lean_Syntax_node1(v___x_974_, v___x_979_, v___x_984_);
v___x_986_ = l_Lean_Syntax_node2(v___x_974_, v___x_976_, v___x_978_, v___x_985_);
v___x_987_ = ((lean_object*)(lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__15));
v___x_988_ = ((lean_object*)(lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__2));
v___x_989_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_989_, 0, v___x_974_);
lean_ctor_set(v___x_989_, 1, v___x_988_);
v___x_990_ = ((lean_object*)(lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__17));
v___x_991_ = lean_obj_once(&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__18, &lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__18_once, _init_lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__18);
v___x_992_ = ((lean_object*)(lp_leancjson_CJson_instReprNum_repr___redArg___closed__13));
v_sz_993_ = lean_array_size(v_elems_972_);
v___x_994_ = lp_leancjson___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1_spec__1(v_sz_993_, v___x_971_, v_elems_972_);
v___x_995_ = l_Lean_Syntax_SepArray_ofElems(v___x_992_, v___x_994_);
lean_dec_ref(v___x_994_);
v___x_996_ = l_Array_append___redArg(v___x_991_, v___x_995_);
lean_dec_ref(v___x_995_);
v___x_997_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_997_, 0, v___x_974_);
lean_ctor_set(v___x_997_, 1, v___x_990_);
lean_ctor_set(v___x_997_, 2, v___x_996_);
v___x_998_ = ((lean_object*)(lp_leancjson_List_repr_x27___at___00CJson_instReprJSON_repr_spec__0___redArg___closed__4));
v___x_999_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_974_);
lean_ctor_set(v___x_999_, 1, v___x_998_);
v___x_1000_ = l_Lean_Syntax_node3(v___x_974_, v___x_987_, v___x_989_, v___x_997_, v___x_999_);
v___x_1001_ = ((lean_object*)(lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__19));
v___x_1002_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_974_);
lean_ctor_set(v___x_1002_, 1, v___x_1001_);
v___x_1003_ = lean_obj_once(&lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__21, &lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__21_once, _init_lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__21);
v___x_1004_ = ((lean_object*)(lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__22));
v___x_1005_ = l_Lean_addMacroScope(v_quotContext_961_, v___x_1004_, v_currMacroScope_962_);
v___x_1006_ = ((lean_object*)(lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___closed__25));
v___x_1007_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1007_, 0, v___x_974_);
lean_ctor_set(v___x_1007_, 1, v___x_1003_);
lean_ctor_set(v___x_1007_, 2, v___x_1005_);
lean_ctor_set(v___x_1007_, 3, v___x_1006_);
v___x_1008_ = l_Lean_Syntax_node1(v___x_974_, v___x_990_, v___x_1007_);
v___x_1009_ = ((lean_object*)(lp_leancjson_Prod_repr___at___00List_repr___at___00CJson_instReprJSON_repr_spec__2_spec__4___redArg___closed__1));
v___x_1010_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___x_974_);
lean_ctor_set(v___x_1010_, 1, v___x_1009_);
v___x_1011_ = l_Lean_Syntax_node5(v___x_974_, v___x_975_, v___x_986_, v___x_1000_, v___x_1002_, v___x_1008_, v___x_1010_);
v___x_1012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1011_);
lean_ctor_set(v___x_1012_, 1, v_a_956_);
return v___x_1012_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1___boxed(lean_object* v_x_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = lp_leancjson_CJson___aux__CJson__Basic______macroRules__CJson__termB_x21____1(v_x_1013_, v_a_1014_, v_a_1015_);
lean_dec_ref(v_a_1014_);
return v_res_1016_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_leancjson_CJson_Basic(uint8_t builtin) {
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
lp_leancjson_CJson_instInhabitedJSON_default = _init_lp_leancjson_CJson_instInhabitedJSON_default();
lean_mark_persistent(lp_leancjson_CJson_instInhabitedJSON_default);
lp_leancjson_CJson_instInhabitedJSON = _init_lp_leancjson_CJson_instInhabitedJSON();
lean_mark_persistent(lp_leancjson_CJson_instInhabitedJSON);
lp_leancjson_CJson_nestingLimit = _init_lp_leancjson_CJson_nestingLimit();
lean_mark_persistent(lp_leancjson_CJson_nestingLimit);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
