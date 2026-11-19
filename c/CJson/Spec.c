// Lean compiler output
// Module: CJson.Spec
// Imports: public import Init public meta import Init public import CJson.Proofs.Roundtrip public import CJson.Proofs.Minify public import CJson.Proofs.Api
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_leancjson_CJson_parse(lean_object*);
uint8_t lp_leancjson_CJson_JSON_compare(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_Spec_num(lean_object*, lean_object*);
static const lean_string_object lp_leancjson_CJson_Spec_termStr_x21___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "CJson"};
static const lean_object* lp_leancjson_CJson_Spec_termStr_x21___00__closed__0 = (const lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__0_value;
static const lean_string_object lp_leancjson_CJson_Spec_termStr_x21___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Spec"};
static const lean_object* lp_leancjson_CJson_Spec_termStr_x21___00__closed__1 = (const lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__1_value;
static const lean_string_object lp_leancjson_CJson_Spec_termStr_x21___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "termStr!_"};
static const lean_object* lp_leancjson_CJson_Spec_termStr_x21___00__closed__2 = (const lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__2_value;
static const lean_ctor_object lp_leancjson_CJson_Spec_termStr_x21___00__closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 50, 232, 169, 111, 134, 44, 185)}};
static const lean_ctor_object lp_leancjson_CJson_Spec_termStr_x21___00__closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__3_value_aux_0),((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(96, 116, 119, 83, 220, 66, 233, 139)}};
static const lean_ctor_object lp_leancjson_CJson_Spec_termStr_x21___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__3_value_aux_1),((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(141, 48, 86, 88, 103, 215, 134, 98)}};
static const lean_object* lp_leancjson_CJson_Spec_termStr_x21___00__closed__3 = (const lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__3_value;
static const lean_string_object lp_leancjson_CJson_Spec_termStr_x21___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* lp_leancjson_CJson_Spec_termStr_x21___00__closed__4 = (const lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__4_value;
static const lean_ctor_object lp_leancjson_CJson_Spec_termStr_x21___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* lp_leancjson_CJson_Spec_termStr_x21___00__closed__5 = (const lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__5_value;
static const lean_string_object lp_leancjson_CJson_Spec_termStr_x21___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "str!"};
static const lean_object* lp_leancjson_CJson_Spec_termStr_x21___00__closed__6 = (const lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__6_value;
static const lean_ctor_object lp_leancjson_CJson_Spec_termStr_x21___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__6_value)}};
static const lean_object* lp_leancjson_CJson_Spec_termStr_x21___00__closed__7 = (const lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__7_value;
static const lean_string_object lp_leancjson_CJson_Spec_termStr_x21___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* lp_leancjson_CJson_Spec_termStr_x21___00__closed__8 = (const lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__8_value;
static const lean_ctor_object lp_leancjson_CJson_Spec_termStr_x21___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__8_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* lp_leancjson_CJson_Spec_termStr_x21___00__closed__9 = (const lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__9_value;
static const lean_ctor_object lp_leancjson_CJson_Spec_termStr_x21___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__9_value)}};
static const lean_object* lp_leancjson_CJson_Spec_termStr_x21___00__closed__10 = (const lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__10_value;
static const lean_ctor_object lp_leancjson_CJson_Spec_termStr_x21___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__5_value),((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__7_value),((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__10_value)}};
static const lean_object* lp_leancjson_CJson_Spec_termStr_x21___00__closed__11 = (const lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__11_value;
static const lean_ctor_object lp_leancjson_CJson_Spec_termStr_x21___00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__3_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__11_value)}};
static const lean_object* lp_leancjson_CJson_Spec_termStr_x21___00__closed__12 = (const lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__12_value;
LEAN_EXPORT const lean_object* lp_leancjson_CJson_Spec_termStr_x21__ = (const lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__12_value;
static const lean_string_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__0 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__0_value;
static const lean_string_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__1 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__1_value;
static const lean_string_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__2 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__2_value;
static const lean_string_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__3 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__3_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__4_value_aux_0),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__4_value_aux_1),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__4_value_aux_2),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__4 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__4_value;
static const lean_string_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "JSON.string"};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__5 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__5_value;
static lean_once_cell_t lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__6;
static const lean_string_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "JSON"};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__7 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__7_value;
static const lean_string_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "string"};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__8 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__8_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(227, 30, 22, 167, 190, 8, 142, 147)}};
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__9_value_aux_0),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(122, 23, 85, 176, 66, 93, 221, 126)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__9 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__9_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 50, 232, 169, 111, 134, 44, 185)}};
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__10_value_aux_0),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(252, 174, 46, 203, 158, 52, 67, 188)}};
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__10_value_aux_1),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(145, 23, 162, 25, 60, 7, 7, 7)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__10 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__10_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__11 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__11_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__10_value)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__12 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__12_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__13 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__13_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__12_value),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__13_value)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__14 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__14_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__11_value),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__14_value)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__15 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__15_value;
static const lean_string_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__16 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__16_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__17 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__17_value;
static const lean_string_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__18 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__18_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__19_value_aux_0),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__19_value_aux_1),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__19_value_aux_2),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__19 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__19_value;
static const lean_string_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__20 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__20_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__21_value_aux_0),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__21_value_aux_1),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__21_value_aux_2),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__21 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__21_value;
static const lean_string_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__22 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__22_value;
static const lean_string_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__23 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__23_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__24 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__24_value;
static const lean_string_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__25 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__25_value;
static lean_once_cell_t lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__26;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 50, 232, 169, 111, 134, 44, 185)}};
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__27_value_aux_0),((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(96, 116, 119, 83, 220, 66, 233, 139)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__27 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__27_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__27_value)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__28 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__28_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 50, 232, 169, 111, 134, 44, 185)}};
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__29_value_aux_0),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(252, 174, 46, 203, 158, 52, 67, 188)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__29 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__29_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__29_value)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__30 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__30_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 50, 232, 169, 111, 134, 44, 185)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__31 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__31_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__31_value)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__32 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__32_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__32_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__33 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__33_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__30_value),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__33_value)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__34 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__34_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__30_value),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__34_value)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__35 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__35_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__28_value),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__35_value)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__36 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__36_value;
static const lean_string_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "termB!_"};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__37 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__37_value;
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_leancjson_CJson_Spec_termStr_x21___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 50, 232, 169, 111, 134, 44, 185)}};
static const lean_ctor_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__38_value_aux_0),((lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__37_value),LEAN_SCALAR_PTR_LITERAL(161, 1, 96, 204, 201, 234, 175, 85)}};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__38 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__38_value;
static const lean_string_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "b!"};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__39 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__39_value;
static const lean_string_object lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__40 = (const lean_object*)&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__40_value;
LEAN_EXPORT lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_parseElems_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_parseElems_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_parseHex4_match__4_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_parseHex4_match__4_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_Spec_cmp(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_Spec_cmp___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_arraySize_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_arraySize_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_getArrayItem_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_getArrayItem_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_isObject_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_isObject_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_detachItemFromArray_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_detachItemFromArray_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_insertItemInArray_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_insertItemInArray_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_addItemToArray_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_addItemToArray_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_replaceFirst_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_replaceFirst_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__List_filter_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__List_filter_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__List_filter_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__List_filter_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_eraseFirst_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_eraseFirst_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_Spec_num(lean_object* v_mant_1_, lean_object* v_exp_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3_, 0, v_mant_1_);
lean_ctor_set(v___x_3_, 1, v_exp_2_);
v___x_4_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4_, 0, v___x_3_);
return v___x_4_;
}
}
static lean_object* _init_lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__6(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = ((lean_object*)(lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__5));
v___x_43_ = l_String_toRawSubstring_x27(v___x_42_);
return v___x_43_;
}
}
static lean_object* _init_lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__26(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_87_ = ((lean_object*)(lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__25));
v___x_88_ = l_String_toRawSubstring_x27(v___x_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1(lean_object* v_x_121_, lean_object* v_a_122_, lean_object* v_a_123_){
_start:
{
lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_124_ = ((lean_object*)(lp_leancjson_CJson_Spec_termStr_x21___00__closed__3));
lean_inc(v_x_121_);
v___x_125_ = l_Lean_Syntax_isOfKind(v_x_121_, v___x_124_);
if (v___x_125_ == 0)
{
lean_object* v___x_126_; lean_object* v___x_127_; 
lean_dec(v_x_121_);
v___x_126_ = lean_box(1);
v___x_127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
lean_ctor_set(v___x_127_, 1, v_a_123_);
return v___x_127_;
}
else
{
lean_object* v_quotContext_128_; lean_object* v_currMacroScope_129_; lean_object* v_ref_130_; lean_object* v___x_131_; lean_object* v___x_132_; uint8_t v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v_quotContext_128_ = lean_ctor_get(v_a_122_, 1);
v_currMacroScope_129_ = lean_ctor_get(v_a_122_, 2);
v_ref_130_ = lean_ctor_get(v_a_122_, 5);
v___x_131_ = lean_unsigned_to_nat(1u);
v___x_132_ = l_Lean_Syntax_getArg(v_x_121_, v___x_131_);
lean_dec(v_x_121_);
v___x_133_ = 0;
v___x_134_ = l_Lean_SourceInfo_fromRef(v_ref_130_, v___x_133_);
v___x_135_ = ((lean_object*)(lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__4));
v___x_136_ = lean_obj_once(&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__6, &lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__6_once, _init_lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__6);
v___x_137_ = ((lean_object*)(lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__9));
lean_inc_n(v_currMacroScope_129_, 2);
lean_inc_n(v_quotContext_128_, 2);
v___x_138_ = l_Lean_addMacroScope(v_quotContext_128_, v___x_137_, v_currMacroScope_129_);
v___x_139_ = ((lean_object*)(lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__15));
lean_inc_n(v___x_134_, 10);
v___x_140_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_140_, 0, v___x_134_);
lean_ctor_set(v___x_140_, 1, v___x_136_);
lean_ctor_set(v___x_140_, 2, v___x_138_);
lean_ctor_set(v___x_140_, 3, v___x_139_);
v___x_141_ = ((lean_object*)(lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__17));
v___x_142_ = ((lean_object*)(lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__19));
v___x_143_ = ((lean_object*)(lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__21));
v___x_144_ = ((lean_object*)(lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__22));
v___x_145_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_145_, 0, v___x_134_);
lean_ctor_set(v___x_145_, 1, v___x_144_);
v___x_146_ = ((lean_object*)(lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__24));
v___x_147_ = lean_obj_once(&lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__26, &lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__26_once, _init_lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__26);
v___x_148_ = lean_box(0);
v___x_149_ = l_Lean_addMacroScope(v_quotContext_128_, v___x_148_, v_currMacroScope_129_);
v___x_150_ = ((lean_object*)(lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__36));
v___x_151_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_151_, 0, v___x_134_);
lean_ctor_set(v___x_151_, 1, v___x_147_);
lean_ctor_set(v___x_151_, 2, v___x_149_);
lean_ctor_set(v___x_151_, 3, v___x_150_);
v___x_152_ = l_Lean_Syntax_node1(v___x_134_, v___x_146_, v___x_151_);
v___x_153_ = l_Lean_Syntax_node2(v___x_134_, v___x_143_, v___x_145_, v___x_152_);
v___x_154_ = ((lean_object*)(lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__38));
v___x_155_ = ((lean_object*)(lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__39));
v___x_156_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_134_);
lean_ctor_set(v___x_156_, 1, v___x_155_);
v___x_157_ = l_Lean_Syntax_node2(v___x_134_, v___x_154_, v___x_156_, v___x_132_);
v___x_158_ = ((lean_object*)(lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___closed__40));
v___x_159_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_134_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
v___x_160_ = l_Lean_Syntax_node3(v___x_134_, v___x_142_, v___x_153_, v___x_157_, v___x_159_);
v___x_161_ = l_Lean_Syntax_node1(v___x_134_, v___x_141_, v___x_160_);
v___x_162_ = l_Lean_Syntax_node2(v___x_134_, v___x_135_, v___x_140_, v___x_161_);
v___x_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
lean_ctor_set(v___x_163_, 1, v_a_123_);
return v___x_163_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1___boxed(lean_object* v_x_164_, lean_object* v_a_165_, lean_object* v_a_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = lp_leancjson_CJson_Spec___aux__CJson__Spec______macroRules__CJson__Spec__termStr_x21____1(v_x_164_, v_a_165_, v_a_166_);
lean_dec_ref(v_a_165_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_parseElems_match__1_splitter___redArg(lean_object* v_x_168_, lean_object* v_h__1_169_, lean_object* v_h__2_170_){
_start:
{
if (lean_obj_tag(v_x_168_) == 0)
{
lean_object* v___x_171_; lean_object* v___x_172_; 
lean_dec(v_h__2_170_);
v___x_171_ = lean_box(0);
v___x_172_ = lean_apply_1(v_h__1_169_, v___x_171_);
return v___x_172_;
}
else
{
lean_object* v_val_173_; lean_object* v_fst_174_; lean_object* v_snd_175_; lean_object* v___x_176_; 
lean_dec(v_h__1_169_);
v_val_173_ = lean_ctor_get(v_x_168_, 0);
lean_inc(v_val_173_);
lean_dec_ref_known(v_x_168_, 1);
v_fst_174_ = lean_ctor_get(v_val_173_, 0);
lean_inc(v_fst_174_);
v_snd_175_ = lean_ctor_get(v_val_173_, 1);
lean_inc(v_snd_175_);
lean_dec(v_val_173_);
v___x_176_ = lean_apply_2(v_h__2_170_, v_fst_174_, v_snd_175_);
return v___x_176_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_parseElems_match__1_splitter(lean_object* v_motive_177_, lean_object* v_x_178_, lean_object* v_h__1_179_, lean_object* v_h__2_180_){
_start:
{
if (lean_obj_tag(v_x_178_) == 0)
{
lean_object* v___x_181_; lean_object* v___x_182_; 
lean_dec(v_h__2_180_);
v___x_181_ = lean_box(0);
v___x_182_ = lean_apply_1(v_h__1_179_, v___x_181_);
return v___x_182_;
}
else
{
lean_object* v_val_183_; lean_object* v_fst_184_; lean_object* v_snd_185_; lean_object* v___x_186_; 
lean_dec(v_h__1_179_);
v_val_183_ = lean_ctor_get(v_x_178_, 0);
lean_inc(v_val_183_);
lean_dec_ref_known(v_x_178_, 1);
v_fst_184_ = lean_ctor_get(v_val_183_, 0);
lean_inc(v_fst_184_);
v_snd_185_ = lean_ctor_get(v_val_183_, 1);
lean_inc(v_snd_185_);
lean_dec(v_val_183_);
v___x_186_ = lean_apply_2(v_h__2_180_, v_fst_184_, v_snd_185_);
return v___x_186_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_parseHex4_match__4_splitter___redArg(lean_object* v_s_187_, lean_object* v_h__1_188_, lean_object* v_h__2_189_){
_start:
{
if (lean_obj_tag(v_s_187_) == 1)
{
lean_object* v_tail_190_; 
v_tail_190_ = lean_ctor_get(v_s_187_, 1);
if (lean_obj_tag(v_tail_190_) == 1)
{
lean_object* v_tail_191_; 
v_tail_191_ = lean_ctor_get(v_tail_190_, 1);
if (lean_obj_tag(v_tail_191_) == 1)
{
lean_object* v_tail_192_; 
v_tail_192_ = lean_ctor_get(v_tail_191_, 1);
if (lean_obj_tag(v_tail_192_) == 1)
{
lean_object* v_head_193_; lean_object* v_head_194_; lean_object* v_head_195_; lean_object* v_head_196_; lean_object* v_tail_197_; lean_object* v___x_198_; 
lean_inc_ref(v_tail_192_);
lean_inc_ref(v_tail_191_);
lean_inc_ref(v_tail_190_);
lean_dec(v_h__2_189_);
v_head_193_ = lean_ctor_get(v_s_187_, 0);
lean_inc(v_head_193_);
lean_dec_ref_known(v_s_187_, 2);
v_head_194_ = lean_ctor_get(v_tail_190_, 0);
lean_inc(v_head_194_);
lean_dec_ref_known(v_tail_190_, 2);
v_head_195_ = lean_ctor_get(v_tail_191_, 0);
lean_inc(v_head_195_);
lean_dec_ref_known(v_tail_191_, 2);
v_head_196_ = lean_ctor_get(v_tail_192_, 0);
lean_inc(v_head_196_);
v_tail_197_ = lean_ctor_get(v_tail_192_, 1);
lean_inc(v_tail_197_);
lean_dec_ref_known(v_tail_192_, 2);
v___x_198_ = lean_apply_5(v_h__1_188_, v_head_193_, v_head_194_, v_head_195_, v_head_196_, v_tail_197_);
return v___x_198_;
}
else
{
lean_object* v___x_199_; 
lean_dec(v_h__1_188_);
v___x_199_ = lean_apply_2(v_h__2_189_, v_s_187_, lean_box(0));
return v___x_199_;
}
}
else
{
lean_object* v___x_200_; 
lean_dec(v_h__1_188_);
v___x_200_ = lean_apply_2(v_h__2_189_, v_s_187_, lean_box(0));
return v___x_200_;
}
}
else
{
lean_object* v___x_201_; 
lean_dec(v_h__1_188_);
v___x_201_ = lean_apply_2(v_h__2_189_, v_s_187_, lean_box(0));
return v___x_201_;
}
}
else
{
lean_object* v___x_202_; 
lean_dec(v_h__1_188_);
v___x_202_ = lean_apply_2(v_h__2_189_, v_s_187_, lean_box(0));
return v___x_202_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_parseHex4_match__4_splitter(lean_object* v_motive_203_, lean_object* v_s_204_, lean_object* v_h__1_205_, lean_object* v_h__2_206_){
_start:
{
if (lean_obj_tag(v_s_204_) == 1)
{
lean_object* v_tail_207_; 
v_tail_207_ = lean_ctor_get(v_s_204_, 1);
if (lean_obj_tag(v_tail_207_) == 1)
{
lean_object* v_tail_208_; 
v_tail_208_ = lean_ctor_get(v_tail_207_, 1);
if (lean_obj_tag(v_tail_208_) == 1)
{
lean_object* v_tail_209_; 
v_tail_209_ = lean_ctor_get(v_tail_208_, 1);
if (lean_obj_tag(v_tail_209_) == 1)
{
lean_object* v_head_210_; lean_object* v_head_211_; lean_object* v_head_212_; lean_object* v_head_213_; lean_object* v_tail_214_; lean_object* v___x_215_; 
lean_inc_ref(v_tail_209_);
lean_inc_ref(v_tail_208_);
lean_inc_ref(v_tail_207_);
lean_dec(v_h__2_206_);
v_head_210_ = lean_ctor_get(v_s_204_, 0);
lean_inc(v_head_210_);
lean_dec_ref_known(v_s_204_, 2);
v_head_211_ = lean_ctor_get(v_tail_207_, 0);
lean_inc(v_head_211_);
lean_dec_ref_known(v_tail_207_, 2);
v_head_212_ = lean_ctor_get(v_tail_208_, 0);
lean_inc(v_head_212_);
lean_dec_ref_known(v_tail_208_, 2);
v_head_213_ = lean_ctor_get(v_tail_209_, 0);
lean_inc(v_head_213_);
v_tail_214_ = lean_ctor_get(v_tail_209_, 1);
lean_inc(v_tail_214_);
lean_dec_ref_known(v_tail_209_, 2);
v___x_215_ = lean_apply_5(v_h__1_205_, v_head_210_, v_head_211_, v_head_212_, v_head_213_, v_tail_214_);
return v___x_215_;
}
else
{
lean_object* v___x_216_; 
lean_dec(v_h__1_205_);
v___x_216_ = lean_apply_2(v_h__2_206_, v_s_204_, lean_box(0));
return v___x_216_;
}
}
else
{
lean_object* v___x_217_; 
lean_dec(v_h__1_205_);
v___x_217_ = lean_apply_2(v_h__2_206_, v_s_204_, lean_box(0));
return v___x_217_;
}
}
else
{
lean_object* v___x_218_; 
lean_dec(v_h__1_205_);
v___x_218_ = lean_apply_2(v_h__2_206_, v_s_204_, lean_box(0));
return v___x_218_;
}
}
else
{
lean_object* v___x_219_; 
lean_dec(v_h__1_205_);
v___x_219_ = lean_apply_2(v_h__2_206_, v_s_204_, lean_box(0));
return v___x_219_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_Spec_cmp(lean_object* v_a_220_, lean_object* v_b_221_, uint8_t v_cs_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = lp_leancjson_CJson_parse(v_a_220_);
if (lean_obj_tag(v___x_223_) == 1)
{
lean_object* v_val_224_; lean_object* v___x_225_; 
v_val_224_ = lean_ctor_get(v___x_223_, 0);
lean_inc(v_val_224_);
lean_dec_ref_known(v___x_223_, 1);
v___x_225_ = lp_leancjson_CJson_parse(v_b_221_);
if (lean_obj_tag(v___x_225_) == 1)
{
lean_object* v_val_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_235_; 
v_val_226_ = lean_ctor_get(v___x_225_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v___x_225_);
if (v_isSharedCheck_235_ == 0)
{
v___x_228_ = v___x_225_;
v_isShared_229_ = v_isSharedCheck_235_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_val_226_);
lean_dec(v___x_225_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_235_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
uint8_t v___x_230_; lean_object* v___x_231_; lean_object* v___x_233_; 
v___x_230_ = lp_leancjson_CJson_JSON_compare(v_val_224_, v_val_226_, v_cs_222_);
v___x_231_ = lean_box(v___x_230_);
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 0, v___x_231_);
v___x_233_ = v___x_228_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_231_);
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
lean_object* v___x_236_; 
lean_dec(v___x_225_);
lean_dec(v_val_224_);
v___x_236_ = lean_box(0);
return v___x_236_;
}
}
else
{
lean_object* v___x_237_; 
lean_dec(v___x_223_);
v___x_237_ = lean_box(0);
return v___x_237_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_Spec_cmp___boxed(lean_object* v_a_238_, lean_object* v_b_239_, lean_object* v_cs_240_){
_start:
{
uint8_t v_cs_boxed_241_; lean_object* v_res_242_; 
v_cs_boxed_241_ = lean_unbox(v_cs_240_);
v_res_242_ = lp_leancjson_CJson_Spec_cmp(v_a_238_, v_b_239_, v_cs_boxed_241_);
lean_dec(v_b_239_);
lean_dec(v_a_238_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_arraySize_match__1_splitter___redArg(lean_object* v_x_243_, lean_object* v_h__1_244_, lean_object* v_h__2_245_, lean_object* v_h__3_246_){
_start:
{
switch(lean_obj_tag(v_x_243_))
{
case 4:
{
lean_object* v_xs_247_; lean_object* v___x_248_; 
lean_dec(v_h__3_246_);
lean_dec(v_h__2_245_);
v_xs_247_ = lean_ctor_get(v_x_243_, 0);
lean_inc(v_xs_247_);
lean_dec_ref_known(v_x_243_, 1);
v___x_248_ = lean_apply_1(v_h__1_244_, v_xs_247_);
return v___x_248_;
}
case 5:
{
lean_object* v_kvs_249_; lean_object* v___x_250_; 
lean_dec(v_h__3_246_);
lean_dec(v_h__1_244_);
v_kvs_249_ = lean_ctor_get(v_x_243_, 0);
lean_inc(v_kvs_249_);
lean_dec_ref_known(v_x_243_, 1);
v___x_250_ = lean_apply_1(v_h__2_245_, v_kvs_249_);
return v___x_250_;
}
default: 
{
lean_object* v___x_251_; 
lean_dec(v_h__2_245_);
lean_dec(v_h__1_244_);
v___x_251_ = lean_apply_3(v_h__3_246_, v_x_243_, lean_box(0), lean_box(0));
return v___x_251_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_arraySize_match__1_splitter(lean_object* v_motive_252_, lean_object* v_x_253_, lean_object* v_h__1_254_, lean_object* v_h__2_255_, lean_object* v_h__3_256_){
_start:
{
switch(lean_obj_tag(v_x_253_))
{
case 4:
{
lean_object* v_xs_257_; lean_object* v___x_258_; 
lean_dec(v_h__3_256_);
lean_dec(v_h__2_255_);
v_xs_257_ = lean_ctor_get(v_x_253_, 0);
lean_inc(v_xs_257_);
lean_dec_ref_known(v_x_253_, 1);
v___x_258_ = lean_apply_1(v_h__1_254_, v_xs_257_);
return v___x_258_;
}
case 5:
{
lean_object* v_kvs_259_; lean_object* v___x_260_; 
lean_dec(v_h__3_256_);
lean_dec(v_h__1_254_);
v_kvs_259_ = lean_ctor_get(v_x_253_, 0);
lean_inc(v_kvs_259_);
lean_dec_ref_known(v_x_253_, 1);
v___x_260_ = lean_apply_1(v_h__2_255_, v_kvs_259_);
return v___x_260_;
}
default: 
{
lean_object* v___x_261_; 
lean_dec(v_h__2_255_);
lean_dec(v_h__1_254_);
v___x_261_ = lean_apply_3(v_h__3_256_, v_x_253_, lean_box(0), lean_box(0));
return v___x_261_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_getArrayItem_match__1_splitter___redArg(lean_object* v_x_262_, lean_object* v_x_263_, lean_object* v_h__1_264_, lean_object* v_h__2_265_, lean_object* v_h__3_266_){
_start:
{
switch(lean_obj_tag(v_x_262_))
{
case 4:
{
lean_object* v_xs_267_; lean_object* v___x_268_; 
lean_dec(v_h__3_266_);
lean_dec(v_h__2_265_);
v_xs_267_ = lean_ctor_get(v_x_262_, 0);
lean_inc(v_xs_267_);
lean_dec_ref_known(v_x_262_, 1);
v___x_268_ = lean_apply_2(v_h__1_264_, v_xs_267_, v_x_263_);
return v___x_268_;
}
case 5:
{
lean_object* v_kvs_269_; lean_object* v___x_270_; 
lean_dec(v_h__3_266_);
lean_dec(v_h__1_264_);
v_kvs_269_ = lean_ctor_get(v_x_262_, 0);
lean_inc(v_kvs_269_);
lean_dec_ref_known(v_x_262_, 1);
v___x_270_ = lean_apply_2(v_h__2_265_, v_kvs_269_, v_x_263_);
return v___x_270_;
}
default: 
{
lean_object* v___x_271_; 
lean_dec(v_h__2_265_);
lean_dec(v_h__1_264_);
v___x_271_ = lean_apply_4(v_h__3_266_, v_x_262_, v_x_263_, lean_box(0), lean_box(0));
return v___x_271_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_getArrayItem_match__1_splitter(lean_object* v_motive_272_, lean_object* v_x_273_, lean_object* v_x_274_, lean_object* v_h__1_275_, lean_object* v_h__2_276_, lean_object* v_h__3_277_){
_start:
{
switch(lean_obj_tag(v_x_273_))
{
case 4:
{
lean_object* v_xs_278_; lean_object* v___x_279_; 
lean_dec(v_h__3_277_);
lean_dec(v_h__2_276_);
v_xs_278_ = lean_ctor_get(v_x_273_, 0);
lean_inc(v_xs_278_);
lean_dec_ref_known(v_x_273_, 1);
v___x_279_ = lean_apply_2(v_h__1_275_, v_xs_278_, v_x_274_);
return v___x_279_;
}
case 5:
{
lean_object* v_kvs_280_; lean_object* v___x_281_; 
lean_dec(v_h__3_277_);
lean_dec(v_h__1_275_);
v_kvs_280_ = lean_ctor_get(v_x_273_, 0);
lean_inc(v_kvs_280_);
lean_dec_ref_known(v_x_273_, 1);
v___x_281_ = lean_apply_2(v_h__2_276_, v_kvs_280_, v_x_274_);
return v___x_281_;
}
default: 
{
lean_object* v___x_282_; 
lean_dec(v_h__2_276_);
lean_dec(v_h__1_275_);
v___x_282_ = lean_apply_4(v_h__3_277_, v_x_273_, v_x_274_, lean_box(0), lean_box(0));
return v___x_282_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_isObject_match__1_splitter___redArg(lean_object* v_x_283_, lean_object* v_h__1_284_, lean_object* v_h__2_285_){
_start:
{
if (lean_obj_tag(v_x_283_) == 5)
{
lean_object* v_kvs_286_; lean_object* v___x_287_; 
lean_dec(v_h__2_285_);
v_kvs_286_ = lean_ctor_get(v_x_283_, 0);
lean_inc(v_kvs_286_);
lean_dec_ref_known(v_x_283_, 1);
v___x_287_ = lean_apply_1(v_h__1_284_, v_kvs_286_);
return v___x_287_;
}
else
{
lean_object* v___x_288_; 
lean_dec(v_h__1_284_);
v___x_288_ = lean_apply_2(v_h__2_285_, v_x_283_, lean_box(0));
return v___x_288_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_isObject_match__1_splitter(lean_object* v_motive_289_, lean_object* v_x_290_, lean_object* v_h__1_291_, lean_object* v_h__2_292_){
_start:
{
if (lean_obj_tag(v_x_290_) == 5)
{
lean_object* v_kvs_293_; lean_object* v___x_294_; 
lean_dec(v_h__2_292_);
v_kvs_293_ = lean_ctor_get(v_x_290_, 0);
lean_inc(v_kvs_293_);
lean_dec_ref_known(v_x_290_, 1);
v___x_294_ = lean_apply_1(v_h__1_291_, v_kvs_293_);
return v___x_294_;
}
else
{
lean_object* v___x_295_; 
lean_dec(v_h__1_291_);
v___x_295_ = lean_apply_2(v_h__2_292_, v_x_290_, lean_box(0));
return v___x_295_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_detachItemFromArray_match__1_splitter___redArg(lean_object* v_x_296_, lean_object* v_x_297_, lean_object* v_h__1_298_, lean_object* v_h__2_299_){
_start:
{
if (lean_obj_tag(v_x_296_) == 4)
{
lean_object* v_xs_300_; lean_object* v___x_301_; 
lean_dec(v_h__2_299_);
v_xs_300_ = lean_ctor_get(v_x_296_, 0);
lean_inc(v_xs_300_);
lean_dec_ref_known(v_x_296_, 1);
v___x_301_ = lean_apply_2(v_h__1_298_, v_xs_300_, v_x_297_);
return v___x_301_;
}
else
{
lean_object* v___x_302_; 
lean_dec(v_h__1_298_);
v___x_302_ = lean_apply_3(v_h__2_299_, v_x_296_, v_x_297_, lean_box(0));
return v___x_302_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_detachItemFromArray_match__1_splitter(lean_object* v_motive_303_, lean_object* v_x_304_, lean_object* v_x_305_, lean_object* v_h__1_306_, lean_object* v_h__2_307_){
_start:
{
if (lean_obj_tag(v_x_304_) == 4)
{
lean_object* v_xs_308_; lean_object* v___x_309_; 
lean_dec(v_h__2_307_);
v_xs_308_ = lean_ctor_get(v_x_304_, 0);
lean_inc(v_xs_308_);
lean_dec_ref_known(v_x_304_, 1);
v___x_309_ = lean_apply_2(v_h__1_306_, v_xs_308_, v_x_305_);
return v___x_309_;
}
else
{
lean_object* v___x_310_; 
lean_dec(v_h__1_306_);
v___x_310_ = lean_apply_3(v_h__2_307_, v_x_304_, v_x_305_, lean_box(0));
return v___x_310_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_insertItemInArray_match__1_splitter___redArg(lean_object* v_x_311_, lean_object* v_x_312_, lean_object* v_x_313_, lean_object* v_h__1_314_, lean_object* v_h__2_315_){
_start:
{
if (lean_obj_tag(v_x_311_) == 4)
{
lean_object* v_xs_316_; lean_object* v___x_317_; 
lean_dec(v_h__2_315_);
v_xs_316_ = lean_ctor_get(v_x_311_, 0);
lean_inc(v_xs_316_);
lean_dec_ref_known(v_x_311_, 1);
v___x_317_ = lean_apply_3(v_h__1_314_, v_xs_316_, v_x_312_, v_x_313_);
return v___x_317_;
}
else
{
lean_object* v___x_318_; 
lean_dec(v_h__1_314_);
v___x_318_ = lean_apply_4(v_h__2_315_, v_x_311_, v_x_312_, v_x_313_, lean_box(0));
return v___x_318_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_insertItemInArray_match__1_splitter(lean_object* v_motive_319_, lean_object* v_x_320_, lean_object* v_x_321_, lean_object* v_x_322_, lean_object* v_h__1_323_, lean_object* v_h__2_324_){
_start:
{
if (lean_obj_tag(v_x_320_) == 4)
{
lean_object* v_xs_325_; lean_object* v___x_326_; 
lean_dec(v_h__2_324_);
v_xs_325_ = lean_ctor_get(v_x_320_, 0);
lean_inc(v_xs_325_);
lean_dec_ref_known(v_x_320_, 1);
v___x_326_ = lean_apply_3(v_h__1_323_, v_xs_325_, v_x_321_, v_x_322_);
return v___x_326_;
}
else
{
lean_object* v___x_327_; 
lean_dec(v_h__1_323_);
v___x_327_ = lean_apply_4(v_h__2_324_, v_x_320_, v_x_321_, v_x_322_, lean_box(0));
return v___x_327_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_addItemToArray_match__1_splitter___redArg(lean_object* v_x_328_, lean_object* v_x_329_, lean_object* v_h__1_330_, lean_object* v_h__2_331_){
_start:
{
if (lean_obj_tag(v_x_328_) == 4)
{
lean_object* v_xs_332_; lean_object* v___x_333_; 
lean_dec(v_h__2_331_);
v_xs_332_ = lean_ctor_get(v_x_328_, 0);
lean_inc(v_xs_332_);
lean_dec_ref_known(v_x_328_, 1);
v___x_333_ = lean_apply_2(v_h__1_330_, v_xs_332_, v_x_329_);
return v___x_333_;
}
else
{
lean_object* v___x_334_; 
lean_dec(v_h__1_330_);
v___x_334_ = lean_apply_3(v_h__2_331_, v_x_328_, v_x_329_, lean_box(0));
return v___x_334_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_JSON_addItemToArray_match__1_splitter(lean_object* v_motive_335_, lean_object* v_x_336_, lean_object* v_x_337_, lean_object* v_h__1_338_, lean_object* v_h__2_339_){
_start:
{
if (lean_obj_tag(v_x_336_) == 4)
{
lean_object* v_xs_340_; lean_object* v___x_341_; 
lean_dec(v_h__2_339_);
v_xs_340_ = lean_ctor_get(v_x_336_, 0);
lean_inc(v_xs_340_);
lean_dec_ref_known(v_x_336_, 1);
v___x_341_ = lean_apply_2(v_h__1_338_, v_xs_340_, v_x_337_);
return v___x_341_;
}
else
{
lean_object* v___x_342_; 
lean_dec(v_h__1_338_);
v___x_342_ = lean_apply_3(v_h__2_339_, v_x_336_, v_x_337_, lean_box(0));
return v___x_342_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_replaceFirst_match__1_splitter___redArg(lean_object* v_x_343_, lean_object* v_h__1_344_, lean_object* v_h__2_345_){
_start:
{
if (lean_obj_tag(v_x_343_) == 0)
{
lean_object* v___x_346_; lean_object* v___x_347_; 
lean_dec(v_h__2_345_);
v___x_346_ = lean_box(0);
v___x_347_ = lean_apply_1(v_h__1_344_, v___x_346_);
return v___x_347_;
}
else
{
lean_object* v_head_348_; lean_object* v_tail_349_; lean_object* v___x_350_; 
lean_dec(v_h__1_344_);
v_head_348_ = lean_ctor_get(v_x_343_, 0);
lean_inc(v_head_348_);
v_tail_349_ = lean_ctor_get(v_x_343_, 1);
lean_inc(v_tail_349_);
lean_dec_ref_known(v_x_343_, 2);
v___x_350_ = lean_apply_2(v_h__2_345_, v_head_348_, v_tail_349_);
return v___x_350_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_replaceFirst_match__1_splitter(lean_object* v_00_u03b1_351_, lean_object* v_motive_352_, lean_object* v_x_353_, lean_object* v_h__1_354_, lean_object* v_h__2_355_){
_start:
{
if (lean_obj_tag(v_x_353_) == 0)
{
lean_object* v___x_356_; lean_object* v___x_357_; 
lean_dec(v_h__2_355_);
v___x_356_ = lean_box(0);
v___x_357_ = lean_apply_1(v_h__1_354_, v___x_356_);
return v___x_357_;
}
else
{
lean_object* v_head_358_; lean_object* v_tail_359_; lean_object* v___x_360_; 
lean_dec(v_h__1_354_);
v_head_358_ = lean_ctor_get(v_x_353_, 0);
lean_inc(v_head_358_);
v_tail_359_ = lean_ctor_get(v_x_353_, 1);
lean_inc(v_tail_359_);
lean_dec_ref_known(v_x_353_, 2);
v___x_360_ = lean_apply_2(v_h__2_355_, v_head_358_, v_tail_359_);
return v___x_360_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__List_filter_match__1_splitter___redArg(uint8_t v_x_361_, lean_object* v_h__1_362_, lean_object* v_h__2_363_){
_start:
{
if (v_x_361_ == 0)
{
lean_object* v___x_364_; lean_object* v___x_365_; 
lean_dec(v_h__1_362_);
v___x_364_ = lean_box(0);
v___x_365_ = lean_apply_1(v_h__2_363_, v___x_364_);
return v___x_365_;
}
else
{
lean_object* v___x_366_; lean_object* v___x_367_; 
lean_dec(v_h__2_363_);
v___x_366_ = lean_box(0);
v___x_367_ = lean_apply_1(v_h__1_362_, v___x_366_);
return v___x_367_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__List_filter_match__1_splitter___redArg___boxed(lean_object* v_x_368_, lean_object* v_h__1_369_, lean_object* v_h__2_370_){
_start:
{
uint8_t v_x_24__boxed_371_; lean_object* v_res_372_; 
v_x_24__boxed_371_ = lean_unbox(v_x_368_);
v_res_372_ = lp_leancjson___private_CJson_Spec_0__List_filter_match__1_splitter___redArg(v_x_24__boxed_371_, v_h__1_369_, v_h__2_370_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__List_filter_match__1_splitter(lean_object* v_motive_373_, uint8_t v_x_374_, lean_object* v_h__1_375_, lean_object* v_h__2_376_){
_start:
{
if (v_x_374_ == 0)
{
lean_object* v___x_377_; lean_object* v___x_378_; 
lean_dec(v_h__1_375_);
v___x_377_ = lean_box(0);
v___x_378_ = lean_apply_1(v_h__2_376_, v___x_377_);
return v___x_378_;
}
else
{
lean_object* v___x_379_; lean_object* v___x_380_; 
lean_dec(v_h__2_376_);
v___x_379_ = lean_box(0);
v___x_380_ = lean_apply_1(v_h__1_375_, v___x_379_);
return v___x_380_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__List_filter_match__1_splitter___boxed(lean_object* v_motive_381_, lean_object* v_x_382_, lean_object* v_h__1_383_, lean_object* v_h__2_384_){
_start:
{
uint8_t v_x_35__boxed_385_; lean_object* v_res_386_; 
v_x_35__boxed_385_ = lean_unbox(v_x_382_);
v_res_386_ = lp_leancjson___private_CJson_Spec_0__List_filter_match__1_splitter(v_motive_381_, v_x_35__boxed_385_, v_h__1_383_, v_h__2_384_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_eraseFirst_match__1_splitter___redArg(lean_object* v_x_387_, lean_object* v_h__1_388_){
_start:
{
lean_object* v_fst_389_; lean_object* v_snd_390_; lean_object* v___x_391_; 
v_fst_389_ = lean_ctor_get(v_x_387_, 0);
lean_inc(v_fst_389_);
v_snd_390_ = lean_ctor_get(v_x_387_, 1);
lean_inc(v_snd_390_);
lean_dec_ref(v_x_387_);
v___x_391_ = lean_apply_2(v_h__1_388_, v_fst_389_, v_snd_390_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Spec_0__CJson_eraseFirst_match__1_splitter(lean_object* v_00_u03b1_392_, lean_object* v_motive_393_, lean_object* v_x_394_, lean_object* v_h__1_395_){
_start:
{
lean_object* v_fst_396_; lean_object* v_snd_397_; lean_object* v___x_398_; 
v_fst_396_ = lean_ctor_get(v_x_394_, 0);
lean_inc(v_fst_396_);
v_snd_397_ = lean_ctor_get(v_x_394_, 1);
lean_inc(v_snd_397_);
lean_dec_ref(v_x_394_);
v___x_398_ = lean_apply_2(v_h__1_395_, v_fst_396_, v_snd_397_);
return v___x_398_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Proofs_Roundtrip(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Proofs_Minify(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Proofs_Api(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_leancjson_CJson_Spec(uint8_t builtin) {
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
res = initialize_leancjson_CJson_Proofs_Roundtrip(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Proofs_Minify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Proofs_Api(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
