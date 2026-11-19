// Lean compiler output
// Module: CJson.Parse
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
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_uint8_to_nat(uint8_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_leancjson_CJson_parseNumber(lean_object*);
uint8_t lp_leancjson_CJson_isDigit(uint8_t);
lean_object* lp_leancjson_CJson_parseStrBody(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_instDecidableEqUInt8___boxed(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_List_instDecidableEqNil___redArg(lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_isWs(uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_isWs___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_dropWhile___at___00CJson_skipWs_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_List_dropWhile___at___00CJson_skipWs_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_skipWs(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_skipWs___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseScalar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseElems(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseMembers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_leancjson_CJson_parseValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(93) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_parseValue___closed__0 = (const lean_object*)&lp_leancjson_CJson_parseValue___closed__0_value;
static const lean_ctor_object lp_leancjson_CJson_parseValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_parseValue___closed__1 = (const lean_object*)&lp_leancjson_CJson_parseValue___closed__1_value;
static const lean_ctor_object lp_leancjson_CJson_parseValue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(125) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_parseValue___closed__2 = (const lean_object*)&lp_leancjson_CJson_parseValue___closed__2_value;
static const lean_ctor_object lp_leancjson_CJson_parseValue___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_parseValue___closed__3 = (const lean_object*)&lp_leancjson_CJson_parseValue___closed__3_value;
static const lean_ctor_object lp_leancjson_CJson_parseValue___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(91) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_parseValue___closed__4 = (const lean_object*)&lp_leancjson_CJson_parseValue___closed__4_value;
static const lean_ctor_object lp_leancjson_CJson_parseValue___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(123) << 1) | 1))}};
static const lean_object* lp_leancjson_CJson_parseValue___closed__5 = (const lean_object*)&lp_leancjson_CJson_parseValue___closed__5_value;
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseValue___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseValue(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_skipBom(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_skipBom___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseWithOpts(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseWithOpts___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_parse(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_parse___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseStrict(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseStrict___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_isWs(uint8_t v_c_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; uint8_t v___x_4_; 
v___x_2_ = lean_uint8_to_nat(v_c_1_);
v___x_3_ = lean_unsigned_to_nat(32u);
v___x_4_ = lean_nat_dec_le(v___x_2_, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_isWs___boxed(lean_object* v_c_5_){
_start:
{
uint8_t v_c_boxed_6_; uint8_t v_res_7_; lean_object* v_r_8_; 
v_c_boxed_6_ = lean_unbox(v_c_5_);
v_res_7_ = lp_leancjson_CJson_isWs(v_c_boxed_6_);
v_r_8_ = lean_box(v_res_7_);
return v_r_8_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_dropWhile___at___00CJson_skipWs_spec__0(lean_object* v_x_9_){
_start:
{
if (lean_obj_tag(v_x_9_) == 0)
{
return v_x_9_;
}
else
{
lean_object* v_head_10_; lean_object* v_tail_11_; uint8_t v___x_12_; uint8_t v___x_13_; 
v_head_10_ = lean_ctor_get(v_x_9_, 0);
v_tail_11_ = lean_ctor_get(v_x_9_, 1);
v___x_12_ = lean_unbox(v_head_10_);
v___x_13_ = lp_leancjson_CJson_isWs(v___x_12_);
if (v___x_13_ == 0)
{
lean_inc_ref(v_x_9_);
return v_x_9_;
}
else
{
v_x_9_ = v_tail_11_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_List_dropWhile___at___00CJson_skipWs_spec__0___boxed(lean_object* v_x_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = lp_leancjson_List_dropWhile___at___00CJson_skipWs_spec__0(v_x_15_);
lean_dec(v_x_15_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_skipWs(lean_object* v_s_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lp_leancjson_List_dropWhile___at___00CJson_skipWs_spec__0(v_s_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_skipWs___boxed(lean_object* v_s_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = lp_leancjson_CJson_skipWs(v_s_19_);
lean_dec(v_s_19_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseScalar(lean_object* v_len_21_, lean_object* v_s_22_){
_start:
{
if (lean_obj_tag(v_s_22_) == 0)
{
lean_object* v___x_44_; 
lean_dec(v_len_21_);
v___x_44_ = lean_box(0);
return v___x_44_;
}
else
{
lean_object* v_head_45_; lean_object* v_tail_46_; uint8_t v___x_47_; uint8_t v___x_48_; uint8_t v___x_49_; 
v_head_45_ = lean_ctor_get(v_s_22_, 0);
v_tail_46_ = lean_ctor_get(v_s_22_, 1);
v___x_47_ = 45;
v___x_48_ = lean_unbox(v_head_45_);
v___x_49_ = lean_uint8_dec_eq(v___x_48_, v___x_47_);
if (v___x_49_ == 0)
{
uint8_t v___x_50_; uint8_t v___x_51_; 
v___x_50_ = lean_unbox(v_head_45_);
v___x_51_ = lp_leancjson_CJson_isDigit(v___x_50_);
if (v___x_51_ == 0)
{
uint8_t v___x_52_; uint8_t v___x_53_; uint8_t v___x_54_; 
lean_inc(v_tail_46_);
lean_inc(v_head_45_);
lean_dec_ref_known(v_s_22_, 2);
v___x_52_ = 34;
v___x_53_ = lean_unbox(v_head_45_);
v___x_54_ = lean_uint8_dec_eq(v___x_53_, v___x_52_);
if (v___x_54_ == 0)
{
uint8_t v___x_55_; uint8_t v___x_56_; uint8_t v___x_57_; 
lean_dec(v_len_21_);
v___x_55_ = 110;
v___x_56_ = lean_unbox(v_head_45_);
v___x_57_ = lean_uint8_dec_eq(v___x_56_, v___x_55_);
if (v___x_57_ == 0)
{
uint8_t v___x_58_; uint8_t v___x_59_; uint8_t v___x_60_; 
v___x_58_ = 116;
v___x_59_ = lean_unbox(v_head_45_);
v___x_60_ = lean_uint8_dec_eq(v___x_59_, v___x_58_);
if (v___x_60_ == 0)
{
uint8_t v___x_61_; uint8_t v___x_62_; uint8_t v___x_63_; 
v___x_61_ = 102;
v___x_62_ = lean_unbox(v_head_45_);
lean_dec(v_head_45_);
v___x_63_ = lean_uint8_dec_eq(v___x_62_, v___x_61_);
if (v___x_63_ == 0)
{
lean_object* v___x_64_; 
lean_dec(v_tail_46_);
v___x_64_ = lean_box(0);
return v___x_64_;
}
else
{
if (lean_obj_tag(v_tail_46_) == 1)
{
lean_object* v_head_65_; lean_object* v_tail_66_; uint8_t v___x_67_; uint8_t v___x_68_; uint8_t v___x_69_; 
v_head_65_ = lean_ctor_get(v_tail_46_, 0);
lean_inc(v_head_65_);
v_tail_66_ = lean_ctor_get(v_tail_46_, 1);
lean_inc(v_tail_66_);
lean_dec_ref_known(v_tail_46_, 2);
v___x_67_ = 97;
v___x_68_ = lean_unbox(v_head_65_);
lean_dec(v_head_65_);
v___x_69_ = lean_uint8_dec_eq(v___x_68_, v___x_67_);
if (v___x_69_ == 0)
{
lean_object* v___x_70_; 
lean_dec(v_tail_66_);
v___x_70_ = lean_box(0);
return v___x_70_;
}
else
{
if (lean_obj_tag(v_tail_66_) == 1)
{
lean_object* v_head_71_; lean_object* v_tail_72_; uint8_t v___x_73_; uint8_t v___x_74_; uint8_t v___x_75_; 
v_head_71_ = lean_ctor_get(v_tail_66_, 0);
lean_inc(v_head_71_);
v_tail_72_ = lean_ctor_get(v_tail_66_, 1);
lean_inc(v_tail_72_);
lean_dec_ref_known(v_tail_66_, 2);
v___x_73_ = 108;
v___x_74_ = lean_unbox(v_head_71_);
lean_dec(v_head_71_);
v___x_75_ = lean_uint8_dec_eq(v___x_74_, v___x_73_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; 
lean_dec(v_tail_72_);
v___x_76_ = lean_box(0);
return v___x_76_;
}
else
{
if (lean_obj_tag(v_tail_72_) == 1)
{
lean_object* v_head_77_; lean_object* v_tail_78_; uint8_t v___x_79_; uint8_t v___x_80_; uint8_t v___x_81_; 
v_head_77_ = lean_ctor_get(v_tail_72_, 0);
lean_inc(v_head_77_);
v_tail_78_ = lean_ctor_get(v_tail_72_, 1);
lean_inc(v_tail_78_);
lean_dec_ref_known(v_tail_72_, 2);
v___x_79_ = 115;
v___x_80_ = lean_unbox(v_head_77_);
lean_dec(v_head_77_);
v___x_81_ = lean_uint8_dec_eq(v___x_80_, v___x_79_);
if (v___x_81_ == 0)
{
lean_object* v___x_82_; 
lean_dec(v_tail_78_);
v___x_82_ = lean_box(0);
return v___x_82_;
}
else
{
if (lean_obj_tag(v_tail_78_) == 1)
{
lean_object* v_head_83_; lean_object* v_tail_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_97_; 
v_head_83_ = lean_ctor_get(v_tail_78_, 0);
v_tail_84_ = lean_ctor_get(v_tail_78_, 1);
v_isSharedCheck_97_ = !lean_is_exclusive(v_tail_78_);
if (v_isSharedCheck_97_ == 0)
{
v___x_86_ = v_tail_78_;
v_isShared_87_ = v_isSharedCheck_97_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_tail_84_);
lean_inc(v_head_83_);
lean_dec(v_tail_78_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_97_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
uint8_t v___x_88_; uint8_t v___x_89_; uint8_t v___x_90_; 
v___x_88_ = 101;
v___x_89_ = lean_unbox(v_head_83_);
lean_dec(v_head_83_);
v___x_90_ = lean_uint8_dec_eq(v___x_89_, v___x_88_);
if (v___x_90_ == 0)
{
lean_object* v___x_91_; 
lean_del_object(v___x_86_);
lean_dec(v_tail_84_);
v___x_91_ = lean_box(0);
return v___x_91_;
}
else
{
lean_object* v___x_92_; lean_object* v___x_94_; 
v___x_92_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_92_, 0, v___x_54_);
if (v_isShared_87_ == 0)
{
lean_ctor_set_tag(v___x_86_, 0);
lean_ctor_set(v___x_86_, 0, v___x_92_);
v___x_94_ = v___x_86_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v___x_92_);
lean_ctor_set(v_reuseFailAlloc_96_, 1, v_tail_84_);
v___x_94_ = v_reuseFailAlloc_96_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
lean_object* v___x_95_; 
v___x_95_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
return v___x_95_;
}
}
}
}
else
{
lean_object* v___x_98_; 
lean_dec(v_tail_78_);
v___x_98_ = lean_box(0);
return v___x_98_;
}
}
}
else
{
lean_object* v___x_99_; 
lean_dec(v_tail_72_);
v___x_99_ = lean_box(0);
return v___x_99_;
}
}
}
else
{
lean_object* v___x_100_; 
lean_dec(v_tail_66_);
v___x_100_ = lean_box(0);
return v___x_100_;
}
}
}
else
{
lean_object* v___x_101_; 
lean_dec(v_tail_46_);
v___x_101_ = lean_box(0);
return v___x_101_;
}
}
}
else
{
lean_dec(v_head_45_);
if (lean_obj_tag(v_tail_46_) == 1)
{
lean_object* v_head_102_; lean_object* v_tail_103_; uint8_t v___x_104_; uint8_t v___x_105_; uint8_t v___x_106_; 
v_head_102_ = lean_ctor_get(v_tail_46_, 0);
lean_inc(v_head_102_);
v_tail_103_ = lean_ctor_get(v_tail_46_, 1);
lean_inc(v_tail_103_);
lean_dec_ref_known(v_tail_46_, 2);
v___x_104_ = 114;
v___x_105_ = lean_unbox(v_head_102_);
lean_dec(v_head_102_);
v___x_106_ = lean_uint8_dec_eq(v___x_105_, v___x_104_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; 
lean_dec(v_tail_103_);
v___x_107_ = lean_box(0);
return v___x_107_;
}
else
{
if (lean_obj_tag(v_tail_103_) == 1)
{
lean_object* v_head_108_; lean_object* v_tail_109_; uint8_t v___x_110_; uint8_t v___x_111_; uint8_t v___x_112_; 
v_head_108_ = lean_ctor_get(v_tail_103_, 0);
lean_inc(v_head_108_);
v_tail_109_ = lean_ctor_get(v_tail_103_, 1);
lean_inc(v_tail_109_);
lean_dec_ref_known(v_tail_103_, 2);
v___x_110_ = 117;
v___x_111_ = lean_unbox(v_head_108_);
lean_dec(v_head_108_);
v___x_112_ = lean_uint8_dec_eq(v___x_111_, v___x_110_);
if (v___x_112_ == 0)
{
lean_object* v___x_113_; 
lean_dec(v_tail_109_);
v___x_113_ = lean_box(0);
return v___x_113_;
}
else
{
if (lean_obj_tag(v_tail_109_) == 1)
{
lean_object* v_head_114_; lean_object* v_tail_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_128_; 
v_head_114_ = lean_ctor_get(v_tail_109_, 0);
v_tail_115_ = lean_ctor_get(v_tail_109_, 1);
v_isSharedCheck_128_ = !lean_is_exclusive(v_tail_109_);
if (v_isSharedCheck_128_ == 0)
{
v___x_117_ = v_tail_109_;
v_isShared_118_ = v_isSharedCheck_128_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_tail_115_);
lean_inc(v_head_114_);
lean_dec(v_tail_109_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_128_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
uint8_t v___x_119_; uint8_t v___x_120_; uint8_t v___x_121_; 
v___x_119_ = 101;
v___x_120_ = lean_unbox(v_head_114_);
lean_dec(v_head_114_);
v___x_121_ = lean_uint8_dec_eq(v___x_120_, v___x_119_);
if (v___x_121_ == 0)
{
lean_object* v___x_122_; 
lean_del_object(v___x_117_);
lean_dec(v_tail_115_);
v___x_122_ = lean_box(0);
return v___x_122_;
}
else
{
lean_object* v___x_123_; lean_object* v___x_125_; 
v___x_123_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_123_, 0, v___x_121_);
if (v_isShared_118_ == 0)
{
lean_ctor_set_tag(v___x_117_, 0);
lean_ctor_set(v___x_117_, 0, v___x_123_);
v___x_125_ = v___x_117_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v___x_123_);
lean_ctor_set(v_reuseFailAlloc_127_, 1, v_tail_115_);
v___x_125_ = v_reuseFailAlloc_127_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
lean_object* v___x_126_; 
v___x_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
return v___x_126_;
}
}
}
}
else
{
lean_object* v___x_129_; 
lean_dec(v_tail_109_);
v___x_129_ = lean_box(0);
return v___x_129_;
}
}
}
else
{
lean_object* v___x_130_; 
lean_dec(v_tail_103_);
v___x_130_ = lean_box(0);
return v___x_130_;
}
}
}
else
{
lean_object* v___x_131_; 
lean_dec(v_tail_46_);
v___x_131_ = lean_box(0);
return v___x_131_;
}
}
}
else
{
lean_dec(v_head_45_);
if (lean_obj_tag(v_tail_46_) == 1)
{
lean_object* v_head_132_; lean_object* v_tail_133_; uint8_t v___x_134_; uint8_t v___x_135_; uint8_t v___x_136_; 
v_head_132_ = lean_ctor_get(v_tail_46_, 0);
lean_inc(v_head_132_);
v_tail_133_ = lean_ctor_get(v_tail_46_, 1);
lean_inc(v_tail_133_);
lean_dec_ref_known(v_tail_46_, 2);
v___x_134_ = 117;
v___x_135_ = lean_unbox(v_head_132_);
lean_dec(v_head_132_);
v___x_136_ = lean_uint8_dec_eq(v___x_135_, v___x_134_);
if (v___x_136_ == 0)
{
lean_object* v___x_137_; 
lean_dec(v_tail_133_);
v___x_137_ = lean_box(0);
return v___x_137_;
}
else
{
if (lean_obj_tag(v_tail_133_) == 1)
{
lean_object* v_head_138_; lean_object* v_tail_139_; uint8_t v___x_140_; uint8_t v___x_141_; uint8_t v___x_142_; 
v_head_138_ = lean_ctor_get(v_tail_133_, 0);
lean_inc(v_head_138_);
v_tail_139_ = lean_ctor_get(v_tail_133_, 1);
lean_inc(v_tail_139_);
lean_dec_ref_known(v_tail_133_, 2);
v___x_140_ = 108;
v___x_141_ = lean_unbox(v_head_138_);
lean_dec(v_head_138_);
v___x_142_ = lean_uint8_dec_eq(v___x_141_, v___x_140_);
if (v___x_142_ == 0)
{
lean_object* v___x_143_; 
lean_dec(v_tail_139_);
v___x_143_ = lean_box(0);
return v___x_143_;
}
else
{
if (lean_obj_tag(v_tail_139_) == 1)
{
lean_object* v_head_144_; lean_object* v_tail_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_157_; 
v_head_144_ = lean_ctor_get(v_tail_139_, 0);
v_tail_145_ = lean_ctor_get(v_tail_139_, 1);
v_isSharedCheck_157_ = !lean_is_exclusive(v_tail_139_);
if (v_isSharedCheck_157_ == 0)
{
v___x_147_ = v_tail_139_;
v_isShared_148_ = v_isSharedCheck_157_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_tail_145_);
lean_inc(v_head_144_);
lean_dec(v_tail_139_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_157_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
uint8_t v___x_149_; uint8_t v___x_150_; 
v___x_149_ = lean_unbox(v_head_144_);
lean_dec(v_head_144_);
v___x_150_ = lean_uint8_dec_eq(v___x_149_, v___x_140_);
if (v___x_150_ == 0)
{
lean_object* v___x_151_; 
lean_del_object(v___x_147_);
lean_dec(v_tail_145_);
v___x_151_ = lean_box(0);
return v___x_151_;
}
else
{
lean_object* v___x_152_; lean_object* v___x_154_; 
v___x_152_ = lean_box(0);
if (v_isShared_148_ == 0)
{
lean_ctor_set_tag(v___x_147_, 0);
lean_ctor_set(v___x_147_, 0, v___x_152_);
v___x_154_ = v___x_147_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v___x_152_);
lean_ctor_set(v_reuseFailAlloc_156_, 1, v_tail_145_);
v___x_154_ = v_reuseFailAlloc_156_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
lean_object* v___x_155_; 
v___x_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_155_, 0, v___x_154_);
return v___x_155_;
}
}
}
}
else
{
lean_object* v___x_158_; 
lean_dec(v_tail_139_);
v___x_158_ = lean_box(0);
return v___x_158_;
}
}
}
else
{
lean_object* v___x_159_; 
lean_dec(v_tail_133_);
v___x_159_ = lean_box(0);
return v___x_159_;
}
}
}
else
{
lean_object* v___x_160_; 
lean_dec(v_tail_46_);
v___x_160_ = lean_box(0);
return v___x_160_;
}
}
}
else
{
lean_object* v___x_161_; lean_object* v___x_162_; 
lean_dec(v_head_45_);
v___x_161_ = lean_box(0);
v___x_162_ = lp_leancjson_CJson_parseStrBody(v_len_21_, v_tail_46_, v___x_161_);
if (lean_obj_tag(v___x_162_) == 0)
{
lean_object* v___x_163_; 
v___x_163_ = lean_box(0);
return v___x_163_;
}
else
{
lean_object* v_val_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_181_; 
v_val_164_ = lean_ctor_get(v___x_162_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v___x_162_);
if (v_isSharedCheck_181_ == 0)
{
v___x_166_ = v___x_162_;
v_isShared_167_ = v_isSharedCheck_181_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_val_164_);
lean_dec(v___x_162_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_181_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v_fst_168_; lean_object* v_snd_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_180_; 
v_fst_168_ = lean_ctor_get(v_val_164_, 0);
v_snd_169_ = lean_ctor_get(v_val_164_, 1);
v_isSharedCheck_180_ = !lean_is_exclusive(v_val_164_);
if (v_isSharedCheck_180_ == 0)
{
v___x_171_ = v_val_164_;
v_isShared_172_ = v_isSharedCheck_180_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_snd_169_);
lean_inc(v_fst_168_);
lean_dec(v_val_164_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_180_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_173_; lean_object* v___x_175_; 
v___x_173_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_173_, 0, v_fst_168_);
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 0, v___x_173_);
v___x_175_ = v___x_171_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v___x_173_);
lean_ctor_set(v_reuseFailAlloc_179_, 1, v_snd_169_);
v___x_175_ = v_reuseFailAlloc_179_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
lean_object* v___x_177_; 
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 0, v___x_175_);
v___x_177_ = v___x_166_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
}
}
}
else
{
lean_dec(v_len_21_);
goto v___jp_23_;
}
}
else
{
lean_dec(v_len_21_);
goto v___jp_23_;
}
}
v___jp_23_:
{
lean_object* v___x_24_; 
v___x_24_ = lp_leancjson_CJson_parseNumber(v_s_22_);
if (lean_obj_tag(v___x_24_) == 0)
{
lean_object* v___x_25_; 
v___x_25_ = lean_box(0);
return v___x_25_;
}
else
{
lean_object* v_val_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_43_; 
v_val_26_ = lean_ctor_get(v___x_24_, 0);
v_isSharedCheck_43_ = !lean_is_exclusive(v___x_24_);
if (v_isSharedCheck_43_ == 0)
{
v___x_28_ = v___x_24_;
v_isShared_29_ = v_isSharedCheck_43_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_val_26_);
lean_dec(v___x_24_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_43_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v_fst_30_; lean_object* v_snd_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_42_; 
v_fst_30_ = lean_ctor_get(v_val_26_, 0);
v_snd_31_ = lean_ctor_get(v_val_26_, 1);
v_isSharedCheck_42_ = !lean_is_exclusive(v_val_26_);
if (v_isSharedCheck_42_ == 0)
{
v___x_33_ = v_val_26_;
v_isShared_34_ = v_isSharedCheck_42_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_snd_31_);
lean_inc(v_fst_30_);
lean_dec(v_val_26_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_42_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_35_; lean_object* v___x_37_; 
v___x_35_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_35_, 0, v_fst_30_);
if (v_isShared_34_ == 0)
{
lean_ctor_set(v___x_33_, 0, v___x_35_);
v___x_37_ = v___x_33_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v___x_35_);
lean_ctor_set(v_reuseFailAlloc_41_, 1, v_snd_31_);
v___x_37_ = v_reuseFailAlloc_41_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
lean_object* v___x_39_; 
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 0, v___x_37_);
v___x_39_ = v___x_28_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v___x_37_);
v___x_39_ = v_reuseFailAlloc_40_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
return v___x_39_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseElems(lean_object* v_pv_182_, lean_object* v_x_183_, lean_object* v_x_184_, lean_object* v_x_185_){
_start:
{
lean_object* v_zero_186_; uint8_t v_isZero_187_; 
v_zero_186_ = lean_unsigned_to_nat(0u);
v_isZero_187_ = lean_nat_dec_eq(v_x_183_, v_zero_186_);
if (v_isZero_187_ == 1)
{
lean_object* v___x_188_; 
lean_dec(v_x_185_);
lean_dec(v_x_184_);
lean_dec(v_x_183_);
lean_dec_ref(v_pv_182_);
v___x_188_ = lean_box(0);
return v___x_188_;
}
else
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = lp_leancjson_List_dropWhile___at___00CJson_skipWs_spec__0(v_x_184_);
lean_dec(v_x_184_);
lean_inc_ref(v_pv_182_);
v___x_190_ = lean_apply_1(v_pv_182_, v___x_189_);
if (lean_obj_tag(v___x_190_) == 0)
{
lean_object* v___x_191_; 
lean_dec(v_x_185_);
lean_dec(v_x_183_);
lean_dec_ref(v_pv_182_);
v___x_191_ = lean_box(0);
return v___x_191_;
}
else
{
lean_object* v_val_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_233_; 
v_val_192_ = lean_ctor_get(v___x_190_, 0);
v_isSharedCheck_233_ = !lean_is_exclusive(v___x_190_);
if (v_isSharedCheck_233_ == 0)
{
v___x_194_ = v___x_190_;
v_isShared_195_ = v_isSharedCheck_233_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_val_192_);
lean_dec(v___x_190_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_233_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
lean_object* v_fst_196_; lean_object* v_snd_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_232_; 
v_fst_196_ = lean_ctor_get(v_val_192_, 0);
v_snd_197_ = lean_ctor_get(v_val_192_, 1);
v_isSharedCheck_232_ = !lean_is_exclusive(v_val_192_);
if (v_isSharedCheck_232_ == 0)
{
v___x_199_ = v_val_192_;
v_isShared_200_ = v_isSharedCheck_232_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_snd_197_);
lean_inc(v_fst_196_);
lean_dec(v_val_192_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_232_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_201_; 
v___x_201_ = lp_leancjson_List_dropWhile___at___00CJson_skipWs_spec__0(v_snd_197_);
lean_dec(v_snd_197_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v___x_202_; 
lean_del_object(v___x_199_);
lean_dec(v_fst_196_);
lean_del_object(v___x_194_);
lean_dec(v_x_185_);
lean_dec(v_x_183_);
lean_dec_ref(v_pv_182_);
v___x_202_ = lean_box(0);
return v___x_202_;
}
else
{
lean_object* v_head_203_; lean_object* v_tail_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_231_; 
v_head_203_ = lean_ctor_get(v___x_201_, 0);
v_tail_204_ = lean_ctor_get(v___x_201_, 1);
v_isSharedCheck_231_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_231_ == 0)
{
v___x_206_ = v___x_201_;
v_isShared_207_ = v_isSharedCheck_231_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_tail_204_);
lean_inc(v_head_203_);
lean_dec(v___x_201_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_231_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
uint8_t v___x_208_; uint8_t v___x_209_; uint8_t v___x_210_; 
v___x_208_ = 44;
v___x_209_ = lean_unbox(v_head_203_);
v___x_210_ = lean_uint8_dec_eq(v___x_209_, v___x_208_);
if (v___x_210_ == 0)
{
uint8_t v___x_211_; uint8_t v___x_212_; uint8_t v___x_213_; 
lean_dec(v_x_183_);
lean_dec_ref(v_pv_182_);
v___x_211_ = 93;
v___x_212_ = lean_unbox(v_head_203_);
lean_dec(v_head_203_);
v___x_213_ = lean_uint8_dec_eq(v___x_212_, v___x_211_);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; 
lean_del_object(v___x_206_);
lean_dec(v_tail_204_);
lean_del_object(v___x_199_);
lean_dec(v_fst_196_);
lean_del_object(v___x_194_);
lean_dec(v_x_185_);
v___x_214_ = lean_box(0);
return v___x_214_;
}
else
{
lean_object* v___x_216_; 
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 1, v_x_185_);
lean_ctor_set(v___x_206_, 0, v_fst_196_);
v___x_216_ = v___x_206_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_fst_196_);
lean_ctor_set(v_reuseFailAlloc_224_, 1, v_x_185_);
v___x_216_ = v_reuseFailAlloc_224_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
lean_object* v___x_217_; lean_object* v___x_219_; 
v___x_217_ = l_List_reverse___redArg(v___x_216_);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 1, v_tail_204_);
lean_ctor_set(v___x_199_, 0, v___x_217_);
v___x_219_ = v___x_199_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___x_217_);
lean_ctor_set(v_reuseFailAlloc_223_, 1, v_tail_204_);
v___x_219_ = v_reuseFailAlloc_223_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
lean_object* v___x_221_; 
if (v_isShared_195_ == 0)
{
lean_ctor_set(v___x_194_, 0, v___x_219_);
v___x_221_ = v___x_194_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v___x_219_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
}
else
{
lean_object* v_one_225_; lean_object* v_n_226_; lean_object* v___x_228_; 
lean_dec(v_head_203_);
lean_del_object(v___x_199_);
lean_del_object(v___x_194_);
v_one_225_ = lean_unsigned_to_nat(1u);
v_n_226_ = lean_nat_sub(v_x_183_, v_one_225_);
lean_dec(v_x_183_);
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 1, v_x_185_);
lean_ctor_set(v___x_206_, 0, v_fst_196_);
v___x_228_ = v___x_206_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v_fst_196_);
lean_ctor_set(v_reuseFailAlloc_230_, 1, v_x_185_);
v___x_228_ = v_reuseFailAlloc_230_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
v_x_183_ = v_n_226_;
v_x_184_ = v_tail_204_;
v_x_185_ = v___x_228_;
goto _start;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseMembers(lean_object* v_pv_234_, lean_object* v_len_235_, lean_object* v_x_236_, lean_object* v_x_237_, lean_object* v_x_238_){
_start:
{
lean_object* v_zero_239_; uint8_t v_isZero_240_; 
v_zero_239_ = lean_unsigned_to_nat(0u);
v_isZero_240_ = lean_nat_dec_eq(v_x_236_, v_zero_239_);
if (v_isZero_240_ == 1)
{
lean_object* v___x_241_; 
lean_dec(v_x_238_);
lean_dec(v_x_237_);
lean_dec(v_x_236_);
lean_dec(v_len_235_);
lean_dec_ref(v_pv_234_);
v___x_241_ = lean_box(0);
return v___x_241_;
}
else
{
lean_object* v___x_242_; 
v___x_242_ = lp_leancjson_List_dropWhile___at___00CJson_skipWs_spec__0(v_x_237_);
lean_dec(v_x_237_);
if (lean_obj_tag(v___x_242_) == 0)
{
lean_object* v___x_243_; 
lean_dec(v_x_238_);
lean_dec(v_x_236_);
lean_dec(v_len_235_);
lean_dec_ref(v_pv_234_);
v___x_243_ = lean_box(0);
return v___x_243_;
}
else
{
lean_object* v_head_244_; lean_object* v_tail_245_; uint8_t v___x_246_; uint8_t v___x_247_; uint8_t v___x_248_; 
v_head_244_ = lean_ctor_get(v___x_242_, 0);
lean_inc(v_head_244_);
v_tail_245_ = lean_ctor_get(v___x_242_, 1);
lean_inc(v_tail_245_);
lean_dec_ref_known(v___x_242_, 2);
v___x_246_ = 34;
v___x_247_ = lean_unbox(v_head_244_);
lean_dec(v_head_244_);
v___x_248_ = lean_uint8_dec_eq(v___x_247_, v___x_246_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; 
lean_dec(v_tail_245_);
lean_dec(v_x_238_);
lean_dec(v_x_236_);
lean_dec(v_len_235_);
lean_dec_ref(v_pv_234_);
v___x_249_ = lean_box(0);
return v___x_249_;
}
else
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = lean_box(0);
lean_inc(v_len_235_);
v___x_251_ = lp_leancjson_CJson_parseStrBody(v_len_235_, v_tail_245_, v___x_250_);
if (lean_obj_tag(v___x_251_) == 0)
{
lean_object* v___x_252_; 
lean_dec(v_x_238_);
lean_dec(v_x_236_);
lean_dec(v_len_235_);
lean_dec_ref(v_pv_234_);
v___x_252_ = lean_box(0);
return v___x_252_;
}
else
{
lean_object* v_val_253_; lean_object* v_fst_254_; lean_object* v_snd_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_318_; 
v_val_253_ = lean_ctor_get(v___x_251_, 0);
lean_inc(v_val_253_);
lean_dec_ref_known(v___x_251_, 1);
v_fst_254_ = lean_ctor_get(v_val_253_, 0);
v_snd_255_ = lean_ctor_get(v_val_253_, 1);
v_isSharedCheck_318_ = !lean_is_exclusive(v_val_253_);
if (v_isSharedCheck_318_ == 0)
{
v___x_257_ = v_val_253_;
v_isShared_258_ = v_isSharedCheck_318_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_snd_255_);
lean_inc(v_fst_254_);
lean_dec(v_val_253_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_318_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_259_; 
v___x_259_ = lp_leancjson_List_dropWhile___at___00CJson_skipWs_spec__0(v_snd_255_);
lean_dec(v_snd_255_);
if (lean_obj_tag(v___x_259_) == 0)
{
lean_object* v___x_260_; 
lean_del_object(v___x_257_);
lean_dec(v_fst_254_);
lean_dec(v_x_238_);
lean_dec(v_x_236_);
lean_dec(v_len_235_);
lean_dec_ref(v_pv_234_);
v___x_260_ = lean_box(0);
return v___x_260_;
}
else
{
lean_object* v_head_261_; lean_object* v_tail_262_; uint8_t v___x_263_; uint8_t v___x_264_; uint8_t v___x_265_; 
v_head_261_ = lean_ctor_get(v___x_259_, 0);
lean_inc(v_head_261_);
v_tail_262_ = lean_ctor_get(v___x_259_, 1);
lean_inc(v_tail_262_);
lean_dec_ref_known(v___x_259_, 2);
v___x_263_ = 58;
v___x_264_ = lean_unbox(v_head_261_);
lean_dec(v_head_261_);
v___x_265_ = lean_uint8_dec_eq(v___x_264_, v___x_263_);
if (v___x_265_ == 0)
{
lean_object* v___x_266_; 
lean_dec(v_tail_262_);
lean_del_object(v___x_257_);
lean_dec(v_fst_254_);
lean_dec(v_x_238_);
lean_dec(v_x_236_);
lean_dec(v_len_235_);
lean_dec_ref(v_pv_234_);
v___x_266_ = lean_box(0);
return v___x_266_;
}
else
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lp_leancjson_List_dropWhile___at___00CJson_skipWs_spec__0(v_tail_262_);
lean_dec(v_tail_262_);
lean_inc_ref(v_pv_234_);
v___x_268_ = lean_apply_1(v_pv_234_, v___x_267_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v___x_269_; 
lean_del_object(v___x_257_);
lean_dec(v_fst_254_);
lean_dec(v_x_238_);
lean_dec(v_x_236_);
lean_dec(v_len_235_);
lean_dec_ref(v_pv_234_);
v___x_269_ = lean_box(0);
return v___x_269_;
}
else
{
lean_object* v_val_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_317_; 
v_val_270_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_317_ == 0)
{
v___x_272_ = v___x_268_;
v_isShared_273_ = v_isSharedCheck_317_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_val_270_);
lean_dec(v___x_268_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_317_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v_fst_274_; lean_object* v_snd_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_316_; 
v_fst_274_ = lean_ctor_get(v_val_270_, 0);
v_snd_275_ = lean_ctor_get(v_val_270_, 1);
v_isSharedCheck_316_ = !lean_is_exclusive(v_val_270_);
if (v_isSharedCheck_316_ == 0)
{
v___x_277_ = v_val_270_;
v_isShared_278_ = v_isSharedCheck_316_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_snd_275_);
lean_inc(v_fst_274_);
lean_dec(v_val_270_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_316_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_279_; 
v___x_279_ = lp_leancjson_List_dropWhile___at___00CJson_skipWs_spec__0(v_snd_275_);
lean_dec(v_snd_275_);
if (lean_obj_tag(v___x_279_) == 0)
{
lean_object* v___x_280_; 
lean_del_object(v___x_277_);
lean_dec(v_fst_274_);
lean_del_object(v___x_272_);
lean_del_object(v___x_257_);
lean_dec(v_fst_254_);
lean_dec(v_x_238_);
lean_dec(v_x_236_);
lean_dec(v_len_235_);
lean_dec_ref(v_pv_234_);
v___x_280_ = lean_box(0);
return v___x_280_;
}
else
{
lean_object* v_head_281_; lean_object* v_tail_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_315_; 
v_head_281_ = lean_ctor_get(v___x_279_, 0);
v_tail_282_ = lean_ctor_get(v___x_279_, 1);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_279_);
if (v_isSharedCheck_315_ == 0)
{
v___x_284_ = v___x_279_;
v_isShared_285_ = v_isSharedCheck_315_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_tail_282_);
lean_inc(v_head_281_);
lean_dec(v___x_279_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_315_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
uint8_t v___x_286_; uint8_t v___x_287_; uint8_t v___x_288_; 
v___x_286_ = 44;
v___x_287_ = lean_unbox(v_head_281_);
v___x_288_ = lean_uint8_dec_eq(v___x_287_, v___x_286_);
if (v___x_288_ == 0)
{
uint8_t v___x_289_; uint8_t v___x_290_; uint8_t v___x_291_; 
lean_dec(v_x_236_);
lean_dec(v_len_235_);
lean_dec_ref(v_pv_234_);
v___x_289_ = 125;
v___x_290_ = lean_unbox(v_head_281_);
lean_dec(v_head_281_);
v___x_291_ = lean_uint8_dec_eq(v___x_290_, v___x_289_);
if (v___x_291_ == 0)
{
lean_object* v___x_292_; 
lean_del_object(v___x_284_);
lean_dec(v_tail_282_);
lean_del_object(v___x_277_);
lean_dec(v_fst_274_);
lean_del_object(v___x_272_);
lean_del_object(v___x_257_);
lean_dec(v_fst_254_);
lean_dec(v_x_238_);
v___x_292_ = lean_box(0);
return v___x_292_;
}
else
{
lean_object* v___x_294_; 
if (v_isShared_278_ == 0)
{
lean_ctor_set(v___x_277_, 1, v_fst_274_);
lean_ctor_set(v___x_277_, 0, v_fst_254_);
v___x_294_ = v___x_277_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v_fst_254_);
lean_ctor_set(v_reuseFailAlloc_305_, 1, v_fst_274_);
v___x_294_ = v_reuseFailAlloc_305_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
lean_object* v___x_296_; 
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 1, v_x_238_);
lean_ctor_set(v___x_284_, 0, v___x_294_);
v___x_296_ = v___x_284_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_294_);
lean_ctor_set(v_reuseFailAlloc_304_, 1, v_x_238_);
v___x_296_ = v_reuseFailAlloc_304_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
lean_object* v___x_297_; lean_object* v___x_299_; 
v___x_297_ = l_List_reverse___redArg(v___x_296_);
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 1, v_tail_282_);
lean_ctor_set(v___x_257_, 0, v___x_297_);
v___x_299_ = v___x_257_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v___x_297_);
lean_ctor_set(v_reuseFailAlloc_303_, 1, v_tail_282_);
v___x_299_ = v_reuseFailAlloc_303_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
lean_object* v___x_301_; 
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 0, v___x_299_);
v___x_301_ = v___x_272_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v___x_299_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
}
}
}
else
{
lean_object* v_one_306_; lean_object* v_n_307_; lean_object* v___x_309_; 
lean_dec(v_head_281_);
lean_del_object(v___x_272_);
lean_del_object(v___x_257_);
v_one_306_ = lean_unsigned_to_nat(1u);
v_n_307_ = lean_nat_sub(v_x_236_, v_one_306_);
lean_dec(v_x_236_);
if (v_isShared_278_ == 0)
{
lean_ctor_set(v___x_277_, 1, v_fst_274_);
lean_ctor_set(v___x_277_, 0, v_fst_254_);
v___x_309_ = v___x_277_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_fst_254_);
lean_ctor_set(v_reuseFailAlloc_314_, 1, v_fst_274_);
v___x_309_ = v_reuseFailAlloc_314_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
lean_object* v___x_311_; 
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 1, v_x_238_);
lean_ctor_set(v___x_284_, 0, v___x_309_);
v___x_311_ = v___x_284_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v___x_309_);
lean_ctor_set(v_reuseFailAlloc_313_, 1, v_x_238_);
v___x_311_ = v_reuseFailAlloc_313_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
v_x_236_ = v_n_307_;
v_x_237_ = v_tail_282_;
v_x_238_ = v___x_311_;
goto _start;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseValue___boxed(lean_object* v_x_335_, lean_object* v_x_336_, lean_object* v_x_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = lp_leancjson_CJson_parseValue(v_x_335_, v_x_336_, v_x_337_);
lean_dec(v_x_335_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseValue(lean_object* v_x_339_, lean_object* v_x_340_, lean_object* v_x_341_){
_start:
{
lean_object* v___y_343_; lean_object* v___y_344_; lean_object* v___y_348_; lean_object* v___y_349_; lean_object* v_zero_352_; uint8_t v_isZero_353_; 
v_zero_352_ = lean_unsigned_to_nat(0u);
v_isZero_353_ = lean_nat_dec_eq(v_x_339_, v_zero_352_);
if (v_isZero_353_ == 1)
{
lean_object* v___x_354_; 
v___x_354_ = lp_leancjson_CJson_parseScalar(v_x_340_, v_x_341_);
return v___x_354_;
}
else
{
lean_object* v_one_355_; lean_object* v_n_356_; lean_object* v___x_357_; lean_object* v___y_359_; lean_object* v___y_389_; lean_object* v___x_418_; lean_object* v___x_419_; uint8_t v___x_420_; 
v_one_355_ = lean_unsigned_to_nat(1u);
v_n_356_ = lean_nat_sub(v_x_339_, v_one_355_);
v___x_357_ = lean_alloc_closure((void*)(l_instDecidableEqUInt8___boxed), 2, 0);
v___x_418_ = l_List_head_x3f___redArg(v_x_341_);
v___x_419_ = ((lean_object*)(lp_leancjson_CJson_parseValue___closed__4));
lean_inc(v___x_418_);
lean_inc_ref(v___x_357_);
v___x_420_ = l_Option_instDecidableEq___redArg(v___x_357_, v___x_418_, v___x_419_);
if (v___x_420_ == 0)
{
lean_object* v___x_421_; uint8_t v___x_422_; 
v___x_421_ = ((lean_object*)(lp_leancjson_CJson_parseValue___closed__5));
lean_inc_ref(v___x_357_);
v___x_422_ = l_Option_instDecidableEq___redArg(v___x_357_, v___x_418_, v___x_421_);
if (v___x_422_ == 0)
{
lean_object* v___x_423_; 
lean_dec_ref(v___x_357_);
lean_dec(v_n_356_);
v___x_423_ = lp_leancjson_CJson_parseScalar(v_x_340_, v_x_341_);
return v___x_423_;
}
else
{
if (lean_obj_tag(v_x_341_) == 0)
{
v___y_389_ = v_x_341_;
goto v___jp_388_;
}
else
{
lean_object* v_tail_424_; 
v_tail_424_ = lean_ctor_get(v_x_341_, 1);
lean_inc(v_tail_424_);
lean_dec_ref_known(v_x_341_, 2);
v___y_389_ = v_tail_424_;
goto v___jp_388_;
}
}
}
else
{
lean_dec(v___x_418_);
if (lean_obj_tag(v_x_341_) == 0)
{
v___y_359_ = v_x_341_;
goto v___jp_358_;
}
else
{
lean_object* v_tail_425_; 
v_tail_425_ = lean_ctor_get(v_x_341_, 1);
lean_inc(v_tail_425_);
lean_dec_ref_known(v_x_341_, 2);
v___y_359_ = v_tail_425_;
goto v___jp_358_;
}
}
v___jp_358_:
{
lean_object* v_r_360_; lean_object* v___x_361_; lean_object* v___x_362_; uint8_t v___x_363_; 
v_r_360_ = lp_leancjson_List_dropWhile___at___00CJson_skipWs_spec__0(v___y_359_);
lean_dec(v___y_359_);
v___x_361_ = l_List_head_x3f___redArg(v_r_360_);
v___x_362_ = ((lean_object*)(lp_leancjson_CJson_parseValue___closed__0));
v___x_363_ = l_Option_instDecidableEq___redArg(v___x_357_, v___x_361_, v___x_362_);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
lean_inc(v_x_340_);
v___x_364_ = lean_alloc_closure((void*)(lp_leancjson_CJson_parseValue___boxed), 3, 2);
lean_closure_set(v___x_364_, 0, v_n_356_);
lean_closure_set(v___x_364_, 1, v_x_340_);
v___x_365_ = lean_box(0);
v___x_366_ = lp_leancjson_CJson_parseElems(v___x_364_, v_x_340_, v_r_360_, v___x_365_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v___x_367_; 
v___x_367_ = lean_box(0);
return v___x_367_;
}
else
{
lean_object* v_val_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_385_; 
v_val_368_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_385_ == 0)
{
v___x_370_ = v___x_366_;
v_isShared_371_ = v_isSharedCheck_385_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_val_368_);
lean_dec(v___x_366_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_385_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v_fst_372_; lean_object* v_snd_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_384_; 
v_fst_372_ = lean_ctor_get(v_val_368_, 0);
v_snd_373_ = lean_ctor_get(v_val_368_, 1);
v_isSharedCheck_384_ = !lean_is_exclusive(v_val_368_);
if (v_isSharedCheck_384_ == 0)
{
v___x_375_ = v_val_368_;
v_isShared_376_ = v_isSharedCheck_384_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_snd_373_);
lean_inc(v_fst_372_);
lean_dec(v_val_368_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_384_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_377_; lean_object* v___x_379_; 
v___x_377_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_377_, 0, v_fst_372_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v___x_377_);
v___x_379_ = v___x_375_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v___x_377_);
lean_ctor_set(v_reuseFailAlloc_383_, 1, v_snd_373_);
v___x_379_ = v_reuseFailAlloc_383_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
lean_object* v___x_381_; 
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 0, v___x_379_);
v___x_381_ = v___x_370_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v___x_379_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
}
}
}
else
{
lean_object* v___x_386_; 
lean_dec(v_n_356_);
lean_dec(v_x_340_);
v___x_386_ = ((lean_object*)(lp_leancjson_CJson_parseValue___closed__1));
if (lean_obj_tag(v_r_360_) == 0)
{
v___y_343_ = v___x_386_;
v___y_344_ = v_r_360_;
goto v___jp_342_;
}
else
{
lean_object* v_tail_387_; 
v_tail_387_ = lean_ctor_get(v_r_360_, 1);
lean_inc(v_tail_387_);
lean_dec_ref_known(v_r_360_, 2);
v___y_343_ = v___x_386_;
v___y_344_ = v_tail_387_;
goto v___jp_342_;
}
}
}
v___jp_388_:
{
lean_object* v_r_390_; lean_object* v___x_391_; lean_object* v___x_392_; uint8_t v___x_393_; 
v_r_390_ = lp_leancjson_List_dropWhile___at___00CJson_skipWs_spec__0(v___y_389_);
lean_dec(v___y_389_);
v___x_391_ = l_List_head_x3f___redArg(v_r_390_);
v___x_392_ = ((lean_object*)(lp_leancjson_CJson_parseValue___closed__2));
v___x_393_ = l_Option_instDecidableEq___redArg(v___x_357_, v___x_391_, v___x_392_);
if (v___x_393_ == 0)
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
lean_inc_n(v_x_340_, 2);
v___x_394_ = lean_alloc_closure((void*)(lp_leancjson_CJson_parseValue___boxed), 3, 2);
lean_closure_set(v___x_394_, 0, v_n_356_);
lean_closure_set(v___x_394_, 1, v_x_340_);
v___x_395_ = lean_box(0);
v___x_396_ = lp_leancjson_CJson_parseMembers(v___x_394_, v_x_340_, v_x_340_, v_r_390_, v___x_395_);
if (lean_obj_tag(v___x_396_) == 0)
{
lean_object* v___x_397_; 
v___x_397_ = lean_box(0);
return v___x_397_;
}
else
{
lean_object* v_val_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_415_; 
v_val_398_ = lean_ctor_get(v___x_396_, 0);
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_396_);
if (v_isSharedCheck_415_ == 0)
{
v___x_400_ = v___x_396_;
v_isShared_401_ = v_isSharedCheck_415_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_val_398_);
lean_dec(v___x_396_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_415_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v_fst_402_; lean_object* v_snd_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_414_; 
v_fst_402_ = lean_ctor_get(v_val_398_, 0);
v_snd_403_ = lean_ctor_get(v_val_398_, 1);
v_isSharedCheck_414_ = !lean_is_exclusive(v_val_398_);
if (v_isSharedCheck_414_ == 0)
{
v___x_405_ = v_val_398_;
v_isShared_406_ = v_isSharedCheck_414_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_snd_403_);
lean_inc(v_fst_402_);
lean_dec(v_val_398_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_414_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_407_; lean_object* v___x_409_; 
v___x_407_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_407_, 0, v_fst_402_);
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 0, v___x_407_);
v___x_409_ = v___x_405_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v___x_407_);
lean_ctor_set(v_reuseFailAlloc_413_, 1, v_snd_403_);
v___x_409_ = v_reuseFailAlloc_413_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
lean_object* v___x_411_; 
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 0, v___x_409_);
v___x_411_ = v___x_400_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_409_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
}
}
}
}
else
{
lean_object* v___x_416_; 
lean_dec(v_n_356_);
lean_dec(v_x_340_);
v___x_416_ = ((lean_object*)(lp_leancjson_CJson_parseValue___closed__3));
if (lean_obj_tag(v_r_390_) == 0)
{
v___y_348_ = v___x_416_;
v___y_349_ = v_r_390_;
goto v___jp_347_;
}
else
{
lean_object* v_tail_417_; 
v_tail_417_ = lean_ctor_get(v_r_390_, 1);
lean_inc(v_tail_417_);
lean_dec_ref_known(v_r_390_, 2);
v___y_348_ = v___x_416_;
v___y_349_ = v_tail_417_;
goto v___jp_347_;
}
}
}
}
v___jp_342_:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
lean_inc(v___y_343_);
v___x_345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_345_, 0, v___y_343_);
lean_ctor_set(v___x_345_, 1, v___y_344_);
v___x_346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
return v___x_346_;
}
v___jp_347_:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
lean_inc(v___y_348_);
v___x_350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_350_, 0, v___y_348_);
lean_ctor_set(v___x_350_, 1, v___y_349_);
v___x_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
return v___x_351_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_skipBom(lean_object* v_s_426_){
_start:
{
if (lean_obj_tag(v_s_426_) == 1)
{
lean_object* v_head_427_; lean_object* v_tail_428_; uint8_t v___x_429_; uint8_t v___x_430_; uint8_t v___x_431_; 
v_head_427_ = lean_ctor_get(v_s_426_, 0);
v_tail_428_ = lean_ctor_get(v_s_426_, 1);
v___x_429_ = 239;
v___x_430_ = lean_unbox(v_head_427_);
v___x_431_ = lean_uint8_dec_eq(v___x_430_, v___x_429_);
if (v___x_431_ == 0)
{
lean_inc_ref(v_s_426_);
return v_s_426_;
}
else
{
if (lean_obj_tag(v_tail_428_) == 1)
{
lean_object* v_head_432_; lean_object* v_tail_433_; uint8_t v___x_434_; uint8_t v___x_435_; uint8_t v___x_436_; 
v_head_432_ = lean_ctor_get(v_tail_428_, 0);
v_tail_433_ = lean_ctor_get(v_tail_428_, 1);
v___x_434_ = 187;
v___x_435_ = lean_unbox(v_head_432_);
v___x_436_ = lean_uint8_dec_eq(v___x_435_, v___x_434_);
if (v___x_436_ == 0)
{
lean_inc_ref(v_s_426_);
return v_s_426_;
}
else
{
if (lean_obj_tag(v_tail_433_) == 1)
{
lean_object* v_head_437_; lean_object* v_tail_438_; uint8_t v___x_439_; uint8_t v___x_440_; uint8_t v___x_441_; 
v_head_437_ = lean_ctor_get(v_tail_433_, 0);
v_tail_438_ = lean_ctor_get(v_tail_433_, 1);
v___x_439_ = 191;
v___x_440_ = lean_unbox(v_head_437_);
v___x_441_ = lean_uint8_dec_eq(v___x_440_, v___x_439_);
if (v___x_441_ == 0)
{
lean_inc_ref(v_s_426_);
return v_s_426_;
}
else
{
lean_inc(v_tail_438_);
return v_tail_438_;
}
}
else
{
lean_inc_ref(v_s_426_);
return v_s_426_;
}
}
}
else
{
lean_inc_ref(v_s_426_);
return v_s_426_;
}
}
}
else
{
lean_inc(v_s_426_);
return v_s_426_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_skipBom___boxed(lean_object* v_s_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = lp_leancjson_CJson_skipBom(v_s_442_);
lean_dec(v_s_442_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseWithOpts(lean_object* v_s_444_, uint8_t v_requireEnd_445_){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_446_ = lean_unsigned_to_nat(1000u);
v___x_447_ = l_List_lengthTR___redArg(v_s_444_);
v___x_448_ = lp_leancjson_CJson_skipBom(v_s_444_);
v___x_449_ = lp_leancjson_List_dropWhile___at___00CJson_skipWs_spec__0(v___x_448_);
lean_dec(v___x_448_);
v___x_450_ = lp_leancjson_CJson_parseValue(v___x_446_, v___x_447_, v___x_449_);
if (lean_obj_tag(v___x_450_) == 0)
{
return v___x_450_;
}
else
{
lean_object* v_val_451_; 
v_val_451_ = lean_ctor_get(v___x_450_, 0);
lean_inc(v_val_451_);
if (v_requireEnd_445_ == 0)
{
lean_dec(v_val_451_);
return v___x_450_;
}
else
{
lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_471_; 
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_471_ == 0)
{
lean_object* v_unused_472_; 
v_unused_472_ = lean_ctor_get(v___x_450_, 0);
lean_dec(v_unused_472_);
v___x_453_ = v___x_450_;
v_isShared_454_ = v_isSharedCheck_471_;
goto v_resetjp_452_;
}
else
{
lean_dec(v___x_450_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_471_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v_fst_455_; lean_object* v_snd_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_470_; 
v_fst_455_ = lean_ctor_get(v_val_451_, 0);
v_snd_456_ = lean_ctor_get(v_val_451_, 1);
v_isSharedCheck_470_ = !lean_is_exclusive(v_val_451_);
if (v_isSharedCheck_470_ == 0)
{
v___x_458_ = v_val_451_;
v_isShared_459_ = v_isSharedCheck_470_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_snd_456_);
lean_inc(v_fst_455_);
lean_dec(v_val_451_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_470_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_460_; uint8_t v___x_461_; 
v___x_460_ = lp_leancjson_List_dropWhile___at___00CJson_skipWs_spec__0(v_snd_456_);
lean_dec(v_snd_456_);
v___x_461_ = l_List_instDecidableEqNil___redArg(v___x_460_);
lean_dec(v___x_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; 
lean_del_object(v___x_458_);
lean_dec(v_fst_455_);
lean_del_object(v___x_453_);
v___x_462_ = lean_box(0);
return v___x_462_;
}
else
{
lean_object* v___x_463_; lean_object* v___x_465_; 
v___x_463_ = lean_box(0);
if (v_isShared_459_ == 0)
{
lean_ctor_set(v___x_458_, 1, v___x_463_);
v___x_465_ = v___x_458_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_fst_455_);
lean_ctor_set(v_reuseFailAlloc_469_, 1, v___x_463_);
v___x_465_ = v_reuseFailAlloc_469_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
lean_object* v___x_467_; 
if (v_isShared_454_ == 0)
{
lean_ctor_set(v___x_453_, 0, v___x_465_);
v___x_467_ = v___x_453_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v___x_465_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseWithOpts___boxed(lean_object* v_s_473_, lean_object* v_requireEnd_474_){
_start:
{
uint8_t v_requireEnd_boxed_475_; lean_object* v_res_476_; 
v_requireEnd_boxed_475_ = lean_unbox(v_requireEnd_474_);
v_res_476_ = lp_leancjson_CJson_parseWithOpts(v_s_473_, v_requireEnd_boxed_475_);
lean_dec(v_s_473_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parse(lean_object* v_s_477_){
_start:
{
uint8_t v___x_478_; lean_object* v___x_479_; 
v___x_478_ = 0;
v___x_479_ = lp_leancjson_CJson_parseWithOpts(v_s_477_, v___x_478_);
if (lean_obj_tag(v___x_479_) == 0)
{
lean_object* v___x_480_; 
v___x_480_ = lean_box(0);
return v___x_480_;
}
else
{
lean_object* v_val_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_489_; 
v_val_481_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_489_ == 0)
{
v___x_483_ = v___x_479_;
v_isShared_484_ = v_isSharedCheck_489_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_val_481_);
lean_dec(v___x_479_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_489_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v_fst_485_; lean_object* v___x_487_; 
v_fst_485_ = lean_ctor_get(v_val_481_, 0);
lean_inc(v_fst_485_);
lean_dec(v_val_481_);
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 0, v_fst_485_);
v___x_487_ = v___x_483_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_fst_485_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parse___boxed(lean_object* v_s_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = lp_leancjson_CJson_parse(v_s_490_);
lean_dec(v_s_490_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseStrict(lean_object* v_s_492_){
_start:
{
uint8_t v___x_493_; lean_object* v___x_494_; 
v___x_493_ = 1;
v___x_494_ = lp_leancjson_CJson_parseWithOpts(v_s_492_, v___x_493_);
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v___x_495_; 
v___x_495_ = lean_box(0);
return v___x_495_;
}
else
{
lean_object* v_val_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_504_; 
v_val_496_ = lean_ctor_get(v___x_494_, 0);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_504_ == 0)
{
v___x_498_ = v___x_494_;
v_isShared_499_ = v_isSharedCheck_504_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_val_496_);
lean_dec(v___x_494_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_504_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v_fst_500_; lean_object* v___x_502_; 
v_fst_500_ = lean_ctor_get(v_val_496_, 0);
lean_inc(v_fst_500_);
lean_dec(v_val_496_);
if (v_isShared_499_ == 0)
{
lean_ctor_set(v___x_498_, 0, v_fst_500_);
v___x_502_ = v___x_498_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v_fst_500_);
v___x_502_ = v_reuseFailAlloc_503_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
return v___x_502_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_parseStrict___boxed(lean_object* v_s_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = lp_leancjson_CJson_parseStrict(v_s_505_);
lean_dec(v_s_505_);
return v_res_506_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Number(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Str(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_leancjson_CJson_Parse(uint8_t builtin) {
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
