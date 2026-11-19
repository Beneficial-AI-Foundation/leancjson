// Lean compiler output
// Module: CJson.Proofs.Str
// Imports: public import Init public meta import Init public import CJson.Str public import CJson.Proofs.Number
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_uint8_of_nat(lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
LEAN_EXPORT uint8_t lp_leancjson_CJson_hexDigitUpper(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson_CJson_hexDigitUpper___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseUnicode_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseUnicode_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseHex4_match__4_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseHex4_match__4_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseHex4_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseHex4_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseUnicode_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseUnicode_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseStrBody_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseStrBody_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_hexDigitUpper(lean_object* v_n_1_){
_start:
{
lean_object* v___x_2_; uint8_t v___x_3_; 
v___x_2_ = lean_unsigned_to_nat(10u);
v___x_3_ = lean_nat_dec_lt(v_n_1_, v___x_2_);
if (v___x_3_ == 0)
{
lean_object* v___x_4_; lean_object* v___x_5_; uint8_t v___x_6_; 
v___x_4_ = lean_unsigned_to_nat(55u);
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
LEAN_EXPORT lean_object* lp_leancjson_CJson_hexDigitUpper___boxed(lean_object* v_n_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = lp_leancjson_CJson_hexDigitUpper(v_n_10_);
lean_dec(v_n_10_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseUnicode_match__3_splitter___redArg(lean_object* v_t1_13_, lean_object* v_h__1_14_, lean_object* v_h__2_15_){
_start:
{
if (lean_obj_tag(v_t1_13_) == 1)
{
lean_object* v_head_16_; lean_object* v_tail_17_; uint8_t v___x_18_; uint8_t v___x_19_; uint8_t v___x_20_; 
v_head_16_ = lean_ctor_get(v_t1_13_, 0);
v_tail_17_ = lean_ctor_get(v_t1_13_, 1);
v___x_18_ = 92;
v___x_19_ = lean_unbox(v_head_16_);
v___x_20_ = lean_uint8_dec_eq(v___x_19_, v___x_18_);
if (v___x_20_ == 0)
{
lean_object* v___x_21_; 
lean_dec(v_h__1_14_);
v___x_21_ = lean_apply_2(v_h__2_15_, v_t1_13_, lean_box(0));
return v___x_21_;
}
else
{
lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_41_; 
lean_inc(v_tail_17_);
v_isSharedCheck_41_ = !lean_is_exclusive(v_t1_13_);
if (v_isSharedCheck_41_ == 0)
{
lean_object* v_unused_42_; lean_object* v_unused_43_; 
v_unused_42_ = lean_ctor_get(v_t1_13_, 1);
lean_dec(v_unused_42_);
v_unused_43_ = lean_ctor_get(v_t1_13_, 0);
lean_dec(v_unused_43_);
v___x_23_ = v_t1_13_;
v_isShared_24_ = v_isSharedCheck_41_;
goto v_resetjp_22_;
}
else
{
lean_dec(v_t1_13_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_41_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
if (lean_obj_tag(v_tail_17_) == 1)
{
lean_object* v_head_25_; lean_object* v_tail_26_; uint8_t v___x_27_; uint8_t v___x_28_; uint8_t v___x_29_; 
v_head_25_ = lean_ctor_get(v_tail_17_, 0);
v_tail_26_ = lean_ctor_get(v_tail_17_, 1);
v___x_27_ = 117;
v___x_28_ = lean_unbox(v_head_25_);
v___x_29_ = lean_uint8_dec_eq(v___x_28_, v___x_27_);
if (v___x_29_ == 0)
{
lean_object* v___x_30_; lean_object* v___x_32_; 
lean_dec(v_h__1_14_);
v___x_30_ = lean_box(v___x_18_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 0, v___x_30_);
v___x_32_ = v___x_23_;
goto v_reusejp_31_;
}
else
{
lean_object* v_reuseFailAlloc_34_; 
v_reuseFailAlloc_34_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_34_, 0, v___x_30_);
lean_ctor_set(v_reuseFailAlloc_34_, 1, v_tail_17_);
v___x_32_ = v_reuseFailAlloc_34_;
goto v_reusejp_31_;
}
v_reusejp_31_:
{
lean_object* v___x_33_; 
v___x_33_ = lean_apply_2(v_h__2_15_, v___x_32_, lean_box(0));
return v___x_33_;
}
}
else
{
lean_object* v___x_35_; 
lean_inc(v_tail_26_);
lean_dec_ref_known(v_tail_17_, 2);
lean_del_object(v___x_23_);
lean_dec(v_h__2_15_);
v___x_35_ = lean_apply_1(v_h__1_14_, v_tail_26_);
return v___x_35_;
}
}
else
{
lean_object* v___x_36_; lean_object* v___x_38_; 
lean_dec(v_h__1_14_);
v___x_36_ = lean_box(v___x_18_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 0, v___x_36_);
v___x_38_ = v___x_23_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v___x_36_);
lean_ctor_set(v_reuseFailAlloc_40_, 1, v_tail_17_);
v___x_38_ = v_reuseFailAlloc_40_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
lean_object* v___x_39_; 
v___x_39_ = lean_apply_2(v_h__2_15_, v___x_38_, lean_box(0));
return v___x_39_;
}
}
}
}
}
else
{
lean_object* v___x_44_; 
lean_dec(v_h__1_14_);
v___x_44_ = lean_apply_2(v_h__2_15_, v_t1_13_, lean_box(0));
return v___x_44_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseUnicode_match__3_splitter(lean_object* v_motive_45_, lean_object* v_t1_46_, lean_object* v_h__1_47_, lean_object* v_h__2_48_){
_start:
{
if (lean_obj_tag(v_t1_46_) == 1)
{
lean_object* v_head_49_; lean_object* v_tail_50_; uint8_t v___x_51_; uint8_t v___x_52_; uint8_t v___x_53_; 
v_head_49_ = lean_ctor_get(v_t1_46_, 0);
v_tail_50_ = lean_ctor_get(v_t1_46_, 1);
v___x_51_ = 92;
v___x_52_ = lean_unbox(v_head_49_);
v___x_53_ = lean_uint8_dec_eq(v___x_52_, v___x_51_);
if (v___x_53_ == 0)
{
lean_object* v___x_54_; 
lean_dec(v_h__1_47_);
v___x_54_ = lean_apply_2(v_h__2_48_, v_t1_46_, lean_box(0));
return v___x_54_;
}
else
{
lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_74_; 
lean_inc(v_tail_50_);
v_isSharedCheck_74_ = !lean_is_exclusive(v_t1_46_);
if (v_isSharedCheck_74_ == 0)
{
lean_object* v_unused_75_; lean_object* v_unused_76_; 
v_unused_75_ = lean_ctor_get(v_t1_46_, 1);
lean_dec(v_unused_75_);
v_unused_76_ = lean_ctor_get(v_t1_46_, 0);
lean_dec(v_unused_76_);
v___x_56_ = v_t1_46_;
v_isShared_57_ = v_isSharedCheck_74_;
goto v_resetjp_55_;
}
else
{
lean_dec(v_t1_46_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_74_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
if (lean_obj_tag(v_tail_50_) == 1)
{
lean_object* v_head_58_; lean_object* v_tail_59_; uint8_t v___x_60_; uint8_t v___x_61_; uint8_t v___x_62_; 
v_head_58_ = lean_ctor_get(v_tail_50_, 0);
v_tail_59_ = lean_ctor_get(v_tail_50_, 1);
v___x_60_ = 117;
v___x_61_ = lean_unbox(v_head_58_);
v___x_62_ = lean_uint8_dec_eq(v___x_61_, v___x_60_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; lean_object* v___x_65_; 
lean_dec(v_h__1_47_);
v___x_63_ = lean_box(v___x_51_);
if (v_isShared_57_ == 0)
{
lean_ctor_set(v___x_56_, 0, v___x_63_);
v___x_65_ = v___x_56_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v___x_63_);
lean_ctor_set(v_reuseFailAlloc_67_, 1, v_tail_50_);
v___x_65_ = v_reuseFailAlloc_67_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
lean_object* v___x_66_; 
v___x_66_ = lean_apply_2(v_h__2_48_, v___x_65_, lean_box(0));
return v___x_66_;
}
}
else
{
lean_object* v___x_68_; 
lean_inc(v_tail_59_);
lean_dec_ref_known(v_tail_50_, 2);
lean_del_object(v___x_56_);
lean_dec(v_h__2_48_);
v___x_68_ = lean_apply_1(v_h__1_47_, v_tail_59_);
return v___x_68_;
}
}
else
{
lean_object* v___x_69_; lean_object* v___x_71_; 
lean_dec(v_h__1_47_);
v___x_69_ = lean_box(v___x_51_);
if (v_isShared_57_ == 0)
{
lean_ctor_set(v___x_56_, 0, v___x_69_);
v___x_71_ = v___x_56_;
goto v_reusejp_70_;
}
else
{
lean_object* v_reuseFailAlloc_73_; 
v_reuseFailAlloc_73_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_73_, 0, v___x_69_);
lean_ctor_set(v_reuseFailAlloc_73_, 1, v_tail_50_);
v___x_71_ = v_reuseFailAlloc_73_;
goto v_reusejp_70_;
}
v_reusejp_70_:
{
lean_object* v___x_72_; 
v___x_72_ = lean_apply_2(v_h__2_48_, v___x_71_, lean_box(0));
return v___x_72_;
}
}
}
}
}
else
{
lean_object* v___x_77_; 
lean_dec(v_h__1_47_);
v___x_77_ = lean_apply_2(v_h__2_48_, v_t1_46_, lean_box(0));
return v___x_77_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseHex4_match__4_splitter___redArg(lean_object* v_s_78_, lean_object* v_h__1_79_, lean_object* v_h__2_80_){
_start:
{
if (lean_obj_tag(v_s_78_) == 1)
{
lean_object* v_tail_81_; 
v_tail_81_ = lean_ctor_get(v_s_78_, 1);
if (lean_obj_tag(v_tail_81_) == 1)
{
lean_object* v_tail_82_; 
v_tail_82_ = lean_ctor_get(v_tail_81_, 1);
if (lean_obj_tag(v_tail_82_) == 1)
{
lean_object* v_tail_83_; 
v_tail_83_ = lean_ctor_get(v_tail_82_, 1);
if (lean_obj_tag(v_tail_83_) == 1)
{
lean_object* v_head_84_; lean_object* v_head_85_; lean_object* v_head_86_; lean_object* v_head_87_; lean_object* v_tail_88_; lean_object* v___x_89_; 
lean_inc_ref(v_tail_83_);
lean_inc_ref(v_tail_82_);
lean_inc_ref(v_tail_81_);
lean_dec(v_h__2_80_);
v_head_84_ = lean_ctor_get(v_s_78_, 0);
lean_inc(v_head_84_);
lean_dec_ref_known(v_s_78_, 2);
v_head_85_ = lean_ctor_get(v_tail_81_, 0);
lean_inc(v_head_85_);
lean_dec_ref_known(v_tail_81_, 2);
v_head_86_ = lean_ctor_get(v_tail_82_, 0);
lean_inc(v_head_86_);
lean_dec_ref_known(v_tail_82_, 2);
v_head_87_ = lean_ctor_get(v_tail_83_, 0);
lean_inc(v_head_87_);
v_tail_88_ = lean_ctor_get(v_tail_83_, 1);
lean_inc(v_tail_88_);
lean_dec_ref_known(v_tail_83_, 2);
v___x_89_ = lean_apply_5(v_h__1_79_, v_head_84_, v_head_85_, v_head_86_, v_head_87_, v_tail_88_);
return v___x_89_;
}
else
{
lean_object* v___x_90_; 
lean_dec(v_h__1_79_);
v___x_90_ = lean_apply_2(v_h__2_80_, v_s_78_, lean_box(0));
return v___x_90_;
}
}
else
{
lean_object* v___x_91_; 
lean_dec(v_h__1_79_);
v___x_91_ = lean_apply_2(v_h__2_80_, v_s_78_, lean_box(0));
return v___x_91_;
}
}
else
{
lean_object* v___x_92_; 
lean_dec(v_h__1_79_);
v___x_92_ = lean_apply_2(v_h__2_80_, v_s_78_, lean_box(0));
return v___x_92_;
}
}
else
{
lean_object* v___x_93_; 
lean_dec(v_h__1_79_);
v___x_93_ = lean_apply_2(v_h__2_80_, v_s_78_, lean_box(0));
return v___x_93_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseHex4_match__4_splitter(lean_object* v_motive_94_, lean_object* v_s_95_, lean_object* v_h__1_96_, lean_object* v_h__2_97_){
_start:
{
if (lean_obj_tag(v_s_95_) == 1)
{
lean_object* v_tail_98_; 
v_tail_98_ = lean_ctor_get(v_s_95_, 1);
if (lean_obj_tag(v_tail_98_) == 1)
{
lean_object* v_tail_99_; 
v_tail_99_ = lean_ctor_get(v_tail_98_, 1);
if (lean_obj_tag(v_tail_99_) == 1)
{
lean_object* v_tail_100_; 
v_tail_100_ = lean_ctor_get(v_tail_99_, 1);
if (lean_obj_tag(v_tail_100_) == 1)
{
lean_object* v_head_101_; lean_object* v_head_102_; lean_object* v_head_103_; lean_object* v_head_104_; lean_object* v_tail_105_; lean_object* v___x_106_; 
lean_inc_ref(v_tail_100_);
lean_inc_ref(v_tail_99_);
lean_inc_ref(v_tail_98_);
lean_dec(v_h__2_97_);
v_head_101_ = lean_ctor_get(v_s_95_, 0);
lean_inc(v_head_101_);
lean_dec_ref_known(v_s_95_, 2);
v_head_102_ = lean_ctor_get(v_tail_98_, 0);
lean_inc(v_head_102_);
lean_dec_ref_known(v_tail_98_, 2);
v_head_103_ = lean_ctor_get(v_tail_99_, 0);
lean_inc(v_head_103_);
lean_dec_ref_known(v_tail_99_, 2);
v_head_104_ = lean_ctor_get(v_tail_100_, 0);
lean_inc(v_head_104_);
v_tail_105_ = lean_ctor_get(v_tail_100_, 1);
lean_inc(v_tail_105_);
lean_dec_ref_known(v_tail_100_, 2);
v___x_106_ = lean_apply_5(v_h__1_96_, v_head_101_, v_head_102_, v_head_103_, v_head_104_, v_tail_105_);
return v___x_106_;
}
else
{
lean_object* v___x_107_; 
lean_dec(v_h__1_96_);
v___x_107_ = lean_apply_2(v_h__2_97_, v_s_95_, lean_box(0));
return v___x_107_;
}
}
else
{
lean_object* v___x_108_; 
lean_dec(v_h__1_96_);
v___x_108_ = lean_apply_2(v_h__2_97_, v_s_95_, lean_box(0));
return v___x_108_;
}
}
else
{
lean_object* v___x_109_; 
lean_dec(v_h__1_96_);
v___x_109_ = lean_apply_2(v_h__2_97_, v_s_95_, lean_box(0));
return v___x_109_;
}
}
else
{
lean_object* v___x_110_; 
lean_dec(v_h__1_96_);
v___x_110_ = lean_apply_2(v_h__2_97_, v_s_95_, lean_box(0));
return v___x_110_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseHex4_match__1_splitter___redArg(lean_object* v_x_111_, lean_object* v_x_112_, lean_object* v_x_113_, lean_object* v_x_114_, lean_object* v_h__1_115_, lean_object* v_h__2_116_){
_start:
{
if (lean_obj_tag(v_x_111_) == 1)
{
if (lean_obj_tag(v_x_112_) == 1)
{
if (lean_obj_tag(v_x_113_) == 1)
{
if (lean_obj_tag(v_x_114_) == 1)
{
lean_object* v_val_117_; lean_object* v_val_118_; lean_object* v_val_119_; lean_object* v_val_120_; lean_object* v___x_121_; 
lean_dec(v_h__2_116_);
v_val_117_ = lean_ctor_get(v_x_111_, 0);
lean_inc(v_val_117_);
lean_dec_ref_known(v_x_111_, 1);
v_val_118_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_val_118_);
lean_dec_ref_known(v_x_112_, 1);
v_val_119_ = lean_ctor_get(v_x_113_, 0);
lean_inc(v_val_119_);
lean_dec_ref_known(v_x_113_, 1);
v_val_120_ = lean_ctor_get(v_x_114_, 0);
lean_inc(v_val_120_);
lean_dec_ref_known(v_x_114_, 1);
v___x_121_ = lean_apply_4(v_h__1_115_, v_val_117_, v_val_118_, v_val_119_, v_val_120_);
return v___x_121_;
}
else
{
lean_object* v___x_122_; 
lean_dec(v_h__1_115_);
v___x_122_ = lean_apply_5(v_h__2_116_, v_x_111_, v_x_112_, v_x_113_, v_x_114_, lean_box(0));
return v___x_122_;
}
}
else
{
lean_object* v___x_123_; 
lean_dec(v_h__1_115_);
v___x_123_ = lean_apply_5(v_h__2_116_, v_x_111_, v_x_112_, v_x_113_, v_x_114_, lean_box(0));
return v___x_123_;
}
}
else
{
lean_object* v___x_124_; 
lean_dec(v_h__1_115_);
v___x_124_ = lean_apply_5(v_h__2_116_, v_x_111_, v_x_112_, v_x_113_, v_x_114_, lean_box(0));
return v___x_124_;
}
}
else
{
lean_object* v___x_125_; 
lean_dec(v_h__1_115_);
v___x_125_ = lean_apply_5(v_h__2_116_, v_x_111_, v_x_112_, v_x_113_, v_x_114_, lean_box(0));
return v___x_125_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseHex4_match__1_splitter(lean_object* v_motive_126_, lean_object* v_x_127_, lean_object* v_x_128_, lean_object* v_x_129_, lean_object* v_x_130_, lean_object* v_h__1_131_, lean_object* v_h__2_132_){
_start:
{
if (lean_obj_tag(v_x_127_) == 1)
{
if (lean_obj_tag(v_x_128_) == 1)
{
if (lean_obj_tag(v_x_129_) == 1)
{
if (lean_obj_tag(v_x_130_) == 1)
{
lean_object* v_val_133_; lean_object* v_val_134_; lean_object* v_val_135_; lean_object* v_val_136_; lean_object* v___x_137_; 
lean_dec(v_h__2_132_);
v_val_133_ = lean_ctor_get(v_x_127_, 0);
lean_inc(v_val_133_);
lean_dec_ref_known(v_x_127_, 1);
v_val_134_ = lean_ctor_get(v_x_128_, 0);
lean_inc(v_val_134_);
lean_dec_ref_known(v_x_128_, 1);
v_val_135_ = lean_ctor_get(v_x_129_, 0);
lean_inc(v_val_135_);
lean_dec_ref_known(v_x_129_, 1);
v_val_136_ = lean_ctor_get(v_x_130_, 0);
lean_inc(v_val_136_);
lean_dec_ref_known(v_x_130_, 1);
v___x_137_ = lean_apply_4(v_h__1_131_, v_val_133_, v_val_134_, v_val_135_, v_val_136_);
return v___x_137_;
}
else
{
lean_object* v___x_138_; 
lean_dec(v_h__1_131_);
v___x_138_ = lean_apply_5(v_h__2_132_, v_x_127_, v_x_128_, v_x_129_, v_x_130_, lean_box(0));
return v___x_138_;
}
}
else
{
lean_object* v___x_139_; 
lean_dec(v_h__1_131_);
v___x_139_ = lean_apply_5(v_h__2_132_, v_x_127_, v_x_128_, v_x_129_, v_x_130_, lean_box(0));
return v___x_139_;
}
}
else
{
lean_object* v___x_140_; 
lean_dec(v_h__1_131_);
v___x_140_ = lean_apply_5(v_h__2_132_, v_x_127_, v_x_128_, v_x_129_, v_x_130_, lean_box(0));
return v___x_140_;
}
}
else
{
lean_object* v___x_141_; 
lean_dec(v_h__1_131_);
v___x_141_ = lean_apply_5(v_h__2_132_, v_x_127_, v_x_128_, v_x_129_, v_x_130_, lean_box(0));
return v___x_141_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseUnicode_match__1_splitter___redArg(lean_object* v_x_142_, lean_object* v_h__1_143_, lean_object* v_h__2_144_){
_start:
{
if (lean_obj_tag(v_x_142_) == 0)
{
lean_object* v___x_145_; lean_object* v___x_146_; 
lean_dec(v_h__2_144_);
v___x_145_ = lean_box(0);
v___x_146_ = lean_apply_1(v_h__1_143_, v___x_145_);
return v___x_146_;
}
else
{
lean_object* v_val_147_; lean_object* v_fst_148_; lean_object* v_snd_149_; lean_object* v___x_150_; 
lean_dec(v_h__1_143_);
v_val_147_ = lean_ctor_get(v_x_142_, 0);
lean_inc(v_val_147_);
lean_dec_ref_known(v_x_142_, 1);
v_fst_148_ = lean_ctor_get(v_val_147_, 0);
lean_inc(v_fst_148_);
v_snd_149_ = lean_ctor_get(v_val_147_, 1);
lean_inc(v_snd_149_);
lean_dec(v_val_147_);
v___x_150_ = lean_apply_2(v_h__2_144_, v_fst_148_, v_snd_149_);
return v___x_150_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseUnicode_match__1_splitter(lean_object* v_motive_151_, lean_object* v_x_152_, lean_object* v_h__1_153_, lean_object* v_h__2_154_){
_start:
{
if (lean_obj_tag(v_x_152_) == 0)
{
lean_object* v___x_155_; lean_object* v___x_156_; 
lean_dec(v_h__2_154_);
v___x_155_ = lean_box(0);
v___x_156_ = lean_apply_1(v_h__1_153_, v___x_155_);
return v___x_156_;
}
else
{
lean_object* v_val_157_; lean_object* v_fst_158_; lean_object* v_snd_159_; lean_object* v___x_160_; 
lean_dec(v_h__1_153_);
v_val_157_ = lean_ctor_get(v_x_152_, 0);
lean_inc(v_val_157_);
lean_dec_ref_known(v_x_152_, 1);
v_fst_158_ = lean_ctor_get(v_val_157_, 0);
lean_inc(v_fst_158_);
v_snd_159_ = lean_ctor_get(v_val_157_, 1);
lean_inc(v_snd_159_);
lean_dec(v_val_157_);
v___x_160_ = lean_apply_2(v_h__2_154_, v_fst_158_, v_snd_159_);
return v___x_160_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseStrBody_match__1_splitter___redArg(lean_object* v_r_161_, lean_object* v_h__1_162_, lean_object* v_h__2_163_){
_start:
{
if (lean_obj_tag(v_r_161_) == 0)
{
lean_object* v___x_164_; lean_object* v___x_165_; 
lean_dec(v_h__2_163_);
v___x_164_ = lean_box(0);
v___x_165_ = lean_apply_1(v_h__1_162_, v___x_164_);
return v___x_165_;
}
else
{
lean_object* v_head_166_; lean_object* v_tail_167_; lean_object* v___x_168_; 
lean_dec(v_h__1_162_);
v_head_166_ = lean_ctor_get(v_r_161_, 0);
lean_inc(v_head_166_);
v_tail_167_ = lean_ctor_get(v_r_161_, 1);
lean_inc(v_tail_167_);
lean_dec_ref_known(v_r_161_, 2);
v___x_168_ = lean_apply_2(v_h__2_163_, v_head_166_, v_tail_167_);
return v___x_168_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Str_0__CJson_parseStrBody_match__1_splitter(lean_object* v_motive_169_, lean_object* v_r_170_, lean_object* v_h__1_171_, lean_object* v_h__2_172_){
_start:
{
if (lean_obj_tag(v_r_170_) == 0)
{
lean_object* v___x_173_; lean_object* v___x_174_; 
lean_dec(v_h__2_172_);
v___x_173_ = lean_box(0);
v___x_174_ = lean_apply_1(v_h__1_171_, v___x_173_);
return v___x_174_;
}
else
{
lean_object* v_head_175_; lean_object* v_tail_176_; lean_object* v___x_177_; 
lean_dec(v_h__1_171_);
v_head_175_ = lean_ctor_get(v_r_170_, 0);
lean_inc(v_head_175_);
v_tail_176_ = lean_ctor_get(v_r_170_, 1);
lean_inc(v_tail_176_);
lean_dec_ref_known(v_r_170_, 2);
v___x_177_ = lean_apply_2(v_h__2_172_, v_head_175_, v_tail_176_);
return v___x_177_;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Str(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Proofs_Number(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_leancjson_CJson_Proofs_Str(uint8_t builtin) {
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
res = initialize_leancjson_CJson_Str(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Proofs_Number(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
