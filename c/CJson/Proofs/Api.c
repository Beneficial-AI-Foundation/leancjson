// Lean compiler output
// Module: CJson.Proofs.Api
// Imports: public import Init public meta import Init public import CJson.Api public import CJson.Str public import CJson.Proofs.Number
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_utf8Decode_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_utf8Decode_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_all2_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_all2_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_compareF_match__5_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_compareF_match__5_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_compareF_match__5_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_compareF_match__5_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_compareF_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_compareF_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_compareF_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_compareF_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_depth_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_depth_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_arraySize_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_arraySize_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_utf8Decode_match__1_splitter___redArg(lean_object* v_b_1_, lean_object* v_h__1_2_, lean_object* v_h__2_3_, lean_object* v_h__3_4_, lean_object* v_h__4_5_, lean_object* v_h__5_6_){
_start:
{
if (lean_obj_tag(v_b_1_) == 1)
{
lean_object* v_tail_7_; 
v_tail_7_ = lean_ctor_get(v_b_1_, 1);
if (lean_obj_tag(v_tail_7_) == 0)
{
lean_object* v_head_8_; lean_object* v___x_9_; 
lean_dec(v_h__5_6_);
lean_dec(v_h__4_5_);
lean_dec(v_h__3_4_);
lean_dec(v_h__2_3_);
v_head_8_ = lean_ctor_get(v_b_1_, 0);
lean_inc(v_head_8_);
lean_dec_ref_known(v_b_1_, 2);
v___x_9_ = lean_apply_1(v_h__1_2_, v_head_8_);
return v___x_9_;
}
else
{
lean_object* v_tail_10_; 
lean_dec(v_h__1_2_);
v_tail_10_ = lean_ctor_get(v_tail_7_, 1);
if (lean_obj_tag(v_tail_10_) == 0)
{
lean_object* v_head_11_; lean_object* v_head_12_; lean_object* v___x_13_; 
lean_inc_ref(v_tail_7_);
lean_dec(v_h__5_6_);
lean_dec(v_h__4_5_);
lean_dec(v_h__3_4_);
v_head_11_ = lean_ctor_get(v_b_1_, 0);
lean_inc(v_head_11_);
lean_dec_ref_known(v_b_1_, 2);
v_head_12_ = lean_ctor_get(v_tail_7_, 0);
lean_inc(v_head_12_);
lean_dec_ref_known(v_tail_7_, 2);
v___x_13_ = lean_apply_2(v_h__2_3_, v_head_11_, v_head_12_);
return v___x_13_;
}
else
{
lean_object* v_tail_14_; 
lean_dec(v_h__2_3_);
v_tail_14_ = lean_ctor_get(v_tail_10_, 1);
if (lean_obj_tag(v_tail_14_) == 0)
{
lean_object* v_head_15_; lean_object* v_head_16_; lean_object* v_head_17_; lean_object* v___x_18_; 
lean_inc_ref(v_tail_10_);
lean_inc_ref(v_tail_7_);
lean_dec(v_h__5_6_);
lean_dec(v_h__4_5_);
v_head_15_ = lean_ctor_get(v_b_1_, 0);
lean_inc(v_head_15_);
lean_dec_ref_known(v_b_1_, 2);
v_head_16_ = lean_ctor_get(v_tail_7_, 0);
lean_inc(v_head_16_);
lean_dec_ref_known(v_tail_7_, 2);
v_head_17_ = lean_ctor_get(v_tail_10_, 0);
lean_inc(v_head_17_);
lean_dec_ref_known(v_tail_10_, 2);
v___x_18_ = lean_apply_3(v_h__3_4_, v_head_15_, v_head_16_, v_head_17_);
return v___x_18_;
}
else
{
lean_object* v_tail_19_; 
lean_dec(v_h__3_4_);
v_tail_19_ = lean_ctor_get(v_tail_14_, 1);
if (lean_obj_tag(v_tail_19_) == 0)
{
lean_object* v_head_20_; lean_object* v_head_21_; lean_object* v_head_22_; lean_object* v_head_23_; lean_object* v___x_24_; 
lean_inc_ref(v_tail_14_);
lean_inc_ref(v_tail_10_);
lean_inc_ref(v_tail_7_);
lean_dec(v_h__5_6_);
v_head_20_ = lean_ctor_get(v_b_1_, 0);
lean_inc(v_head_20_);
lean_dec_ref_known(v_b_1_, 2);
v_head_21_ = lean_ctor_get(v_tail_7_, 0);
lean_inc(v_head_21_);
lean_dec_ref_known(v_tail_7_, 2);
v_head_22_ = lean_ctor_get(v_tail_10_, 0);
lean_inc(v_head_22_);
lean_dec_ref_known(v_tail_10_, 2);
v_head_23_ = lean_ctor_get(v_tail_14_, 0);
lean_inc(v_head_23_);
lean_dec_ref_known(v_tail_14_, 2);
v___x_24_ = lean_apply_4(v_h__4_5_, v_head_20_, v_head_21_, v_head_22_, v_head_23_);
return v___x_24_;
}
else
{
lean_object* v___x_25_; 
lean_dec(v_h__4_5_);
v___x_25_ = lean_apply_5(v_h__5_6_, v_b_1_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_25_;
}
}
}
}
}
else
{
lean_object* v___x_26_; 
lean_dec(v_h__4_5_);
lean_dec(v_h__3_4_);
lean_dec(v_h__2_3_);
lean_dec(v_h__1_2_);
v___x_26_ = lean_apply_5(v_h__5_6_, v_b_1_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_26_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_utf8Decode_match__1_splitter(lean_object* v_motive_27_, lean_object* v_b_28_, lean_object* v_h__1_29_, lean_object* v_h__2_30_, lean_object* v_h__3_31_, lean_object* v_h__4_32_, lean_object* v_h__5_33_){
_start:
{
if (lean_obj_tag(v_b_28_) == 1)
{
lean_object* v_tail_34_; 
v_tail_34_ = lean_ctor_get(v_b_28_, 1);
if (lean_obj_tag(v_tail_34_) == 0)
{
lean_object* v_head_35_; lean_object* v___x_36_; 
lean_dec(v_h__5_33_);
lean_dec(v_h__4_32_);
lean_dec(v_h__3_31_);
lean_dec(v_h__2_30_);
v_head_35_ = lean_ctor_get(v_b_28_, 0);
lean_inc(v_head_35_);
lean_dec_ref_known(v_b_28_, 2);
v___x_36_ = lean_apply_1(v_h__1_29_, v_head_35_);
return v___x_36_;
}
else
{
lean_object* v_tail_37_; 
lean_dec(v_h__1_29_);
v_tail_37_ = lean_ctor_get(v_tail_34_, 1);
if (lean_obj_tag(v_tail_37_) == 0)
{
lean_object* v_head_38_; lean_object* v_head_39_; lean_object* v___x_40_; 
lean_inc_ref(v_tail_34_);
lean_dec(v_h__5_33_);
lean_dec(v_h__4_32_);
lean_dec(v_h__3_31_);
v_head_38_ = lean_ctor_get(v_b_28_, 0);
lean_inc(v_head_38_);
lean_dec_ref_known(v_b_28_, 2);
v_head_39_ = lean_ctor_get(v_tail_34_, 0);
lean_inc(v_head_39_);
lean_dec_ref_known(v_tail_34_, 2);
v___x_40_ = lean_apply_2(v_h__2_30_, v_head_38_, v_head_39_);
return v___x_40_;
}
else
{
lean_object* v_tail_41_; 
lean_dec(v_h__2_30_);
v_tail_41_ = lean_ctor_get(v_tail_37_, 1);
if (lean_obj_tag(v_tail_41_) == 0)
{
lean_object* v_head_42_; lean_object* v_head_43_; lean_object* v_head_44_; lean_object* v___x_45_; 
lean_inc_ref(v_tail_37_);
lean_inc_ref(v_tail_34_);
lean_dec(v_h__5_33_);
lean_dec(v_h__4_32_);
v_head_42_ = lean_ctor_get(v_b_28_, 0);
lean_inc(v_head_42_);
lean_dec_ref_known(v_b_28_, 2);
v_head_43_ = lean_ctor_get(v_tail_34_, 0);
lean_inc(v_head_43_);
lean_dec_ref_known(v_tail_34_, 2);
v_head_44_ = lean_ctor_get(v_tail_37_, 0);
lean_inc(v_head_44_);
lean_dec_ref_known(v_tail_37_, 2);
v___x_45_ = lean_apply_3(v_h__3_31_, v_head_42_, v_head_43_, v_head_44_);
return v___x_45_;
}
else
{
lean_object* v_tail_46_; 
lean_dec(v_h__3_31_);
v_tail_46_ = lean_ctor_get(v_tail_41_, 1);
if (lean_obj_tag(v_tail_46_) == 0)
{
lean_object* v_head_47_; lean_object* v_head_48_; lean_object* v_head_49_; lean_object* v_head_50_; lean_object* v___x_51_; 
lean_inc_ref(v_tail_41_);
lean_inc_ref(v_tail_37_);
lean_inc_ref(v_tail_34_);
lean_dec(v_h__5_33_);
v_head_47_ = lean_ctor_get(v_b_28_, 0);
lean_inc(v_head_47_);
lean_dec_ref_known(v_b_28_, 2);
v_head_48_ = lean_ctor_get(v_tail_34_, 0);
lean_inc(v_head_48_);
lean_dec_ref_known(v_tail_34_, 2);
v_head_49_ = lean_ctor_get(v_tail_37_, 0);
lean_inc(v_head_49_);
lean_dec_ref_known(v_tail_37_, 2);
v_head_50_ = lean_ctor_get(v_tail_41_, 0);
lean_inc(v_head_50_);
lean_dec_ref_known(v_tail_41_, 2);
v___x_51_ = lean_apply_4(v_h__4_32_, v_head_47_, v_head_48_, v_head_49_, v_head_50_);
return v___x_51_;
}
else
{
lean_object* v___x_52_; 
lean_dec(v_h__4_32_);
v___x_52_ = lean_apply_5(v_h__5_33_, v_b_28_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_52_;
}
}
}
}
}
else
{
lean_object* v___x_53_; 
lean_dec(v_h__4_32_);
lean_dec(v_h__3_31_);
lean_dec(v_h__2_30_);
lean_dec(v_h__1_29_);
v___x_53_ = lean_apply_5(v_h__5_33_, v_b_28_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_all2_match__1_splitter___redArg(lean_object* v_x_54_, lean_object* v_x_55_, lean_object* v_h__1_56_, lean_object* v_h__2_57_, lean_object* v_h__3_58_){
_start:
{
if (lean_obj_tag(v_x_54_) == 0)
{
lean_dec(v_h__2_57_);
if (lean_obj_tag(v_x_55_) == 0)
{
lean_object* v___x_59_; lean_object* v___x_60_; 
lean_dec(v_h__3_58_);
v___x_59_ = lean_box(0);
v___x_60_ = lean_apply_1(v_h__1_56_, v___x_59_);
return v___x_60_;
}
else
{
lean_object* v___x_61_; 
lean_dec(v_h__1_56_);
v___x_61_ = lean_apply_4(v_h__3_58_, v_x_54_, v_x_55_, lean_box(0), lean_box(0));
return v___x_61_;
}
}
else
{
lean_dec(v_h__1_56_);
if (lean_obj_tag(v_x_55_) == 1)
{
lean_object* v_head_62_; lean_object* v_tail_63_; lean_object* v_head_64_; lean_object* v_tail_65_; lean_object* v___x_66_; 
lean_dec(v_h__3_58_);
v_head_62_ = lean_ctor_get(v_x_54_, 0);
lean_inc(v_head_62_);
v_tail_63_ = lean_ctor_get(v_x_54_, 1);
lean_inc(v_tail_63_);
lean_dec_ref_known(v_x_54_, 2);
v_head_64_ = lean_ctor_get(v_x_55_, 0);
lean_inc(v_head_64_);
v_tail_65_ = lean_ctor_get(v_x_55_, 1);
lean_inc(v_tail_65_);
lean_dec_ref_known(v_x_55_, 2);
v___x_66_ = lean_apply_4(v_h__2_57_, v_head_62_, v_tail_63_, v_head_64_, v_tail_65_);
return v___x_66_;
}
else
{
lean_object* v___x_67_; 
lean_dec(v_h__2_57_);
v___x_67_ = lean_apply_4(v_h__3_58_, v_x_54_, v_x_55_, lean_box(0), lean_box(0));
return v___x_67_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_all2_match__1_splitter(lean_object* v_00_u03b1_68_, lean_object* v_motive_69_, lean_object* v_x_70_, lean_object* v_x_71_, lean_object* v_h__1_72_, lean_object* v_h__2_73_, lean_object* v_h__3_74_){
_start:
{
if (lean_obj_tag(v_x_70_) == 0)
{
lean_dec(v_h__2_73_);
if (lean_obj_tag(v_x_71_) == 0)
{
lean_object* v___x_75_; lean_object* v___x_76_; 
lean_dec(v_h__3_74_);
v___x_75_ = lean_box(0);
v___x_76_ = lean_apply_1(v_h__1_72_, v___x_75_);
return v___x_76_;
}
else
{
lean_object* v___x_77_; 
lean_dec(v_h__1_72_);
v___x_77_ = lean_apply_4(v_h__3_74_, v_x_70_, v_x_71_, lean_box(0), lean_box(0));
return v___x_77_;
}
}
else
{
lean_dec(v_h__1_72_);
if (lean_obj_tag(v_x_71_) == 1)
{
lean_object* v_head_78_; lean_object* v_tail_79_; lean_object* v_head_80_; lean_object* v_tail_81_; lean_object* v___x_82_; 
lean_dec(v_h__3_74_);
v_head_78_ = lean_ctor_get(v_x_70_, 0);
lean_inc(v_head_78_);
v_tail_79_ = lean_ctor_get(v_x_70_, 1);
lean_inc(v_tail_79_);
lean_dec_ref_known(v_x_70_, 2);
v_head_80_ = lean_ctor_get(v_x_71_, 0);
lean_inc(v_head_80_);
v_tail_81_ = lean_ctor_get(v_x_71_, 1);
lean_inc(v_tail_81_);
lean_dec_ref_known(v_x_71_, 2);
v___x_82_ = lean_apply_4(v_h__2_73_, v_head_78_, v_tail_79_, v_head_80_, v_tail_81_);
return v___x_82_;
}
else
{
lean_object* v___x_83_; 
lean_dec(v_h__2_73_);
v___x_83_ = lean_apply_4(v_h__3_74_, v_x_70_, v_x_71_, lean_box(0), lean_box(0));
return v___x_83_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_compareF_match__5_splitter___redArg(lean_object* v_x_84_, lean_object* v_x_85_, lean_object* v_x_86_, lean_object* v_h__1_87_, lean_object* v_h__2_88_){
_start:
{
lean_object* v_zero_89_; uint8_t v_isZero_90_; 
v_zero_89_ = lean_unsigned_to_nat(0u);
v_isZero_90_ = lean_nat_dec_eq(v_x_84_, v_zero_89_);
if (v_isZero_90_ == 1)
{
lean_object* v___x_91_; 
lean_dec(v_h__2_88_);
v___x_91_ = lean_apply_2(v_h__1_87_, v_x_85_, v_x_86_);
return v___x_91_;
}
else
{
lean_object* v_one_92_; lean_object* v_n_93_; lean_object* v___x_94_; 
lean_dec(v_h__1_87_);
v_one_92_ = lean_unsigned_to_nat(1u);
v_n_93_ = lean_nat_sub(v_x_84_, v_one_92_);
v___x_94_ = lean_apply_3(v_h__2_88_, v_n_93_, v_x_85_, v_x_86_);
return v___x_94_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_compareF_match__5_splitter___redArg___boxed(lean_object* v_x_95_, lean_object* v_x_96_, lean_object* v_x_97_, lean_object* v_h__1_98_, lean_object* v_h__2_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_compareF_match__5_splitter___redArg(v_x_95_, v_x_96_, v_x_97_, v_h__1_98_, v_h__2_99_);
lean_dec(v_x_95_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_compareF_match__5_splitter(lean_object* v_motive_101_, lean_object* v_x_102_, lean_object* v_x_103_, lean_object* v_x_104_, lean_object* v_h__1_105_, lean_object* v_h__2_106_){
_start:
{
lean_object* v_zero_107_; uint8_t v_isZero_108_; 
v_zero_107_ = lean_unsigned_to_nat(0u);
v_isZero_108_ = lean_nat_dec_eq(v_x_102_, v_zero_107_);
if (v_isZero_108_ == 1)
{
lean_object* v___x_109_; 
lean_dec(v_h__2_106_);
v___x_109_ = lean_apply_2(v_h__1_105_, v_x_103_, v_x_104_);
return v___x_109_;
}
else
{
lean_object* v_one_110_; lean_object* v_n_111_; lean_object* v___x_112_; 
lean_dec(v_h__1_105_);
v_one_110_ = lean_unsigned_to_nat(1u);
v_n_111_ = lean_nat_sub(v_x_102_, v_one_110_);
v___x_112_ = lean_apply_3(v_h__2_106_, v_n_111_, v_x_103_, v_x_104_);
return v___x_112_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_compareF_match__5_splitter___boxed(lean_object* v_motive_113_, lean_object* v_x_114_, lean_object* v_x_115_, lean_object* v_x_116_, lean_object* v_h__1_117_, lean_object* v_h__2_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_compareF_match__5_splitter(v_motive_113_, v_x_114_, v_x_115_, v_x_116_, v_h__1_117_, v_h__2_118_);
lean_dec(v_x_114_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_compareF_match__3_splitter___redArg(lean_object* v_a_120_, lean_object* v_b_121_, lean_object* v_h__1_122_, lean_object* v_h__2_123_, lean_object* v_h__3_124_, lean_object* v_h__4_125_, lean_object* v_h__5_126_, lean_object* v_h__6_127_, lean_object* v_h__7_128_){
_start:
{
switch(lean_obj_tag(v_a_120_))
{
case 0:
{
lean_dec(v_h__6_127_);
lean_dec(v_h__5_126_);
lean_dec(v_h__4_125_);
lean_dec(v_h__3_124_);
lean_dec(v_h__2_123_);
if (lean_obj_tag(v_b_121_) == 0)
{
lean_object* v___x_129_; lean_object* v___x_130_; 
lean_dec(v_h__7_128_);
v___x_129_ = lean_box(0);
v___x_130_ = lean_apply_1(v_h__1_122_, v___x_129_);
return v___x_130_;
}
else
{
lean_object* v___x_131_; 
lean_dec(v_h__1_122_);
v___x_131_ = lean_apply_8(v_h__7_128_, v_a_120_, v_b_121_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_131_;
}
}
case 1:
{
lean_dec(v_h__6_127_);
lean_dec(v_h__5_126_);
lean_dec(v_h__4_125_);
lean_dec(v_h__3_124_);
lean_dec(v_h__1_122_);
if (lean_obj_tag(v_b_121_) == 1)
{
uint8_t v_b_132_; uint8_t v_b_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
lean_dec(v_h__7_128_);
v_b_132_ = lean_ctor_get_uint8(v_a_120_, 0);
lean_dec_ref_known(v_a_120_, 0);
v_b_133_ = lean_ctor_get_uint8(v_b_121_, 0);
lean_dec_ref_known(v_b_121_, 0);
v___x_134_ = lean_box(v_b_132_);
v___x_135_ = lean_box(v_b_133_);
v___x_136_ = lean_apply_2(v_h__2_123_, v___x_134_, v___x_135_);
return v___x_136_;
}
else
{
lean_object* v___x_137_; 
lean_dec(v_h__2_123_);
v___x_137_ = lean_apply_8(v_h__7_128_, v_a_120_, v_b_121_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_137_;
}
}
case 2:
{
lean_dec(v_h__6_127_);
lean_dec(v_h__5_126_);
lean_dec(v_h__4_125_);
lean_dec(v_h__2_123_);
lean_dec(v_h__1_122_);
if (lean_obj_tag(v_b_121_) == 2)
{
lean_object* v_n_138_; lean_object* v_n_139_; lean_object* v___x_140_; 
lean_dec(v_h__7_128_);
v_n_138_ = lean_ctor_get(v_a_120_, 0);
lean_inc_ref(v_n_138_);
lean_dec_ref_known(v_a_120_, 1);
v_n_139_ = lean_ctor_get(v_b_121_, 0);
lean_inc_ref(v_n_139_);
lean_dec_ref_known(v_b_121_, 1);
v___x_140_ = lean_apply_2(v_h__3_124_, v_n_138_, v_n_139_);
return v___x_140_;
}
else
{
lean_object* v___x_141_; 
lean_dec(v_h__3_124_);
v___x_141_ = lean_apply_8(v_h__7_128_, v_a_120_, v_b_121_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_141_;
}
}
case 3:
{
lean_dec(v_h__6_127_);
lean_dec(v_h__5_126_);
lean_dec(v_h__3_124_);
lean_dec(v_h__2_123_);
lean_dec(v_h__1_122_);
if (lean_obj_tag(v_b_121_) == 3)
{
lean_object* v_s_142_; lean_object* v_s_143_; lean_object* v___x_144_; 
lean_dec(v_h__7_128_);
v_s_142_ = lean_ctor_get(v_a_120_, 0);
lean_inc(v_s_142_);
lean_dec_ref_known(v_a_120_, 1);
v_s_143_ = lean_ctor_get(v_b_121_, 0);
lean_inc(v_s_143_);
lean_dec_ref_known(v_b_121_, 1);
v___x_144_ = lean_apply_2(v_h__4_125_, v_s_142_, v_s_143_);
return v___x_144_;
}
else
{
lean_object* v___x_145_; 
lean_dec(v_h__4_125_);
v___x_145_ = lean_apply_8(v_h__7_128_, v_a_120_, v_b_121_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_145_;
}
}
case 4:
{
lean_dec(v_h__6_127_);
lean_dec(v_h__4_125_);
lean_dec(v_h__3_124_);
lean_dec(v_h__2_123_);
lean_dec(v_h__1_122_);
if (lean_obj_tag(v_b_121_) == 4)
{
lean_object* v_xs_146_; lean_object* v_xs_147_; lean_object* v___x_148_; 
lean_dec(v_h__7_128_);
v_xs_146_ = lean_ctor_get(v_a_120_, 0);
lean_inc(v_xs_146_);
lean_dec_ref_known(v_a_120_, 1);
v_xs_147_ = lean_ctor_get(v_b_121_, 0);
lean_inc(v_xs_147_);
lean_dec_ref_known(v_b_121_, 1);
v___x_148_ = lean_apply_2(v_h__5_126_, v_xs_146_, v_xs_147_);
return v___x_148_;
}
else
{
lean_object* v___x_149_; 
lean_dec(v_h__5_126_);
v___x_149_ = lean_apply_8(v_h__7_128_, v_a_120_, v_b_121_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_149_;
}
}
default: 
{
lean_dec(v_h__5_126_);
lean_dec(v_h__4_125_);
lean_dec(v_h__3_124_);
lean_dec(v_h__2_123_);
lean_dec(v_h__1_122_);
if (lean_obj_tag(v_b_121_) == 5)
{
lean_object* v_kvs_150_; lean_object* v_kvs_151_; lean_object* v___x_152_; 
lean_dec(v_h__7_128_);
v_kvs_150_ = lean_ctor_get(v_a_120_, 0);
lean_inc(v_kvs_150_);
lean_dec_ref_known(v_a_120_, 1);
v_kvs_151_ = lean_ctor_get(v_b_121_, 0);
lean_inc(v_kvs_151_);
lean_dec_ref_known(v_b_121_, 1);
v___x_152_ = lean_apply_2(v_h__6_127_, v_kvs_150_, v_kvs_151_);
return v___x_152_;
}
else
{
lean_object* v___x_153_; 
lean_dec(v_h__6_127_);
v___x_153_ = lean_apply_8(v_h__7_128_, v_a_120_, v_b_121_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_153_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_compareF_match__3_splitter(lean_object* v_motive_154_, lean_object* v_a_155_, lean_object* v_b_156_, lean_object* v_h__1_157_, lean_object* v_h__2_158_, lean_object* v_h__3_159_, lean_object* v_h__4_160_, lean_object* v_h__5_161_, lean_object* v_h__6_162_, lean_object* v_h__7_163_){
_start:
{
switch(lean_obj_tag(v_a_155_))
{
case 0:
{
lean_dec(v_h__6_162_);
lean_dec(v_h__5_161_);
lean_dec(v_h__4_160_);
lean_dec(v_h__3_159_);
lean_dec(v_h__2_158_);
if (lean_obj_tag(v_b_156_) == 0)
{
lean_object* v___x_164_; lean_object* v___x_165_; 
lean_dec(v_h__7_163_);
v___x_164_ = lean_box(0);
v___x_165_ = lean_apply_1(v_h__1_157_, v___x_164_);
return v___x_165_;
}
else
{
lean_object* v___x_166_; 
lean_dec(v_h__1_157_);
v___x_166_ = lean_apply_8(v_h__7_163_, v_a_155_, v_b_156_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_166_;
}
}
case 1:
{
lean_dec(v_h__6_162_);
lean_dec(v_h__5_161_);
lean_dec(v_h__4_160_);
lean_dec(v_h__3_159_);
lean_dec(v_h__1_157_);
if (lean_obj_tag(v_b_156_) == 1)
{
uint8_t v_b_167_; uint8_t v_b_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
lean_dec(v_h__7_163_);
v_b_167_ = lean_ctor_get_uint8(v_a_155_, 0);
lean_dec_ref_known(v_a_155_, 0);
v_b_168_ = lean_ctor_get_uint8(v_b_156_, 0);
lean_dec_ref_known(v_b_156_, 0);
v___x_169_ = lean_box(v_b_167_);
v___x_170_ = lean_box(v_b_168_);
v___x_171_ = lean_apply_2(v_h__2_158_, v___x_169_, v___x_170_);
return v___x_171_;
}
else
{
lean_object* v___x_172_; 
lean_dec(v_h__2_158_);
v___x_172_ = lean_apply_8(v_h__7_163_, v_a_155_, v_b_156_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_172_;
}
}
case 2:
{
lean_dec(v_h__6_162_);
lean_dec(v_h__5_161_);
lean_dec(v_h__4_160_);
lean_dec(v_h__2_158_);
lean_dec(v_h__1_157_);
if (lean_obj_tag(v_b_156_) == 2)
{
lean_object* v_n_173_; lean_object* v_n_174_; lean_object* v___x_175_; 
lean_dec(v_h__7_163_);
v_n_173_ = lean_ctor_get(v_a_155_, 0);
lean_inc_ref(v_n_173_);
lean_dec_ref_known(v_a_155_, 1);
v_n_174_ = lean_ctor_get(v_b_156_, 0);
lean_inc_ref(v_n_174_);
lean_dec_ref_known(v_b_156_, 1);
v___x_175_ = lean_apply_2(v_h__3_159_, v_n_173_, v_n_174_);
return v___x_175_;
}
else
{
lean_object* v___x_176_; 
lean_dec(v_h__3_159_);
v___x_176_ = lean_apply_8(v_h__7_163_, v_a_155_, v_b_156_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_176_;
}
}
case 3:
{
lean_dec(v_h__6_162_);
lean_dec(v_h__5_161_);
lean_dec(v_h__3_159_);
lean_dec(v_h__2_158_);
lean_dec(v_h__1_157_);
if (lean_obj_tag(v_b_156_) == 3)
{
lean_object* v_s_177_; lean_object* v_s_178_; lean_object* v___x_179_; 
lean_dec(v_h__7_163_);
v_s_177_ = lean_ctor_get(v_a_155_, 0);
lean_inc(v_s_177_);
lean_dec_ref_known(v_a_155_, 1);
v_s_178_ = lean_ctor_get(v_b_156_, 0);
lean_inc(v_s_178_);
lean_dec_ref_known(v_b_156_, 1);
v___x_179_ = lean_apply_2(v_h__4_160_, v_s_177_, v_s_178_);
return v___x_179_;
}
else
{
lean_object* v___x_180_; 
lean_dec(v_h__4_160_);
v___x_180_ = lean_apply_8(v_h__7_163_, v_a_155_, v_b_156_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_180_;
}
}
case 4:
{
lean_dec(v_h__6_162_);
lean_dec(v_h__4_160_);
lean_dec(v_h__3_159_);
lean_dec(v_h__2_158_);
lean_dec(v_h__1_157_);
if (lean_obj_tag(v_b_156_) == 4)
{
lean_object* v_xs_181_; lean_object* v_xs_182_; lean_object* v___x_183_; 
lean_dec(v_h__7_163_);
v_xs_181_ = lean_ctor_get(v_a_155_, 0);
lean_inc(v_xs_181_);
lean_dec_ref_known(v_a_155_, 1);
v_xs_182_ = lean_ctor_get(v_b_156_, 0);
lean_inc(v_xs_182_);
lean_dec_ref_known(v_b_156_, 1);
v___x_183_ = lean_apply_2(v_h__5_161_, v_xs_181_, v_xs_182_);
return v___x_183_;
}
else
{
lean_object* v___x_184_; 
lean_dec(v_h__5_161_);
v___x_184_ = lean_apply_8(v_h__7_163_, v_a_155_, v_b_156_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_184_;
}
}
default: 
{
lean_dec(v_h__5_161_);
lean_dec(v_h__4_160_);
lean_dec(v_h__3_159_);
lean_dec(v_h__2_158_);
lean_dec(v_h__1_157_);
if (lean_obj_tag(v_b_156_) == 5)
{
lean_object* v_kvs_185_; lean_object* v_kvs_186_; lean_object* v___x_187_; 
lean_dec(v_h__7_163_);
v_kvs_185_ = lean_ctor_get(v_a_155_, 0);
lean_inc(v_kvs_185_);
lean_dec_ref_known(v_a_155_, 1);
v_kvs_186_ = lean_ctor_get(v_b_156_, 0);
lean_inc(v_kvs_186_);
lean_dec_ref_known(v_b_156_, 1);
v___x_187_ = lean_apply_2(v_h__6_162_, v_kvs_185_, v_kvs_186_);
return v___x_187_;
}
else
{
lean_object* v___x_188_; 
lean_dec(v_h__6_162_);
v___x_188_ = lean_apply_8(v_h__7_163_, v_a_155_, v_b_156_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_188_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_compareF_match__1_splitter___redArg(lean_object* v_x_189_, lean_object* v_h__1_190_, lean_object* v_h__2_191_){
_start:
{
if (lean_obj_tag(v_x_189_) == 0)
{
lean_object* v___x_192_; lean_object* v___x_193_; 
lean_dec(v_h__1_190_);
v___x_192_ = lean_box(0);
v___x_193_ = lean_apply_1(v_h__2_191_, v___x_192_);
return v___x_193_;
}
else
{
lean_object* v_val_194_; lean_object* v___x_195_; 
lean_dec(v_h__2_191_);
v_val_194_ = lean_ctor_get(v_x_189_, 0);
lean_inc(v_val_194_);
lean_dec_ref_known(v_x_189_, 1);
v___x_195_ = lean_apply_1(v_h__1_190_, v_val_194_);
return v___x_195_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_compareF_match__1_splitter(lean_object* v_motive_196_, lean_object* v_x_197_, lean_object* v_h__1_198_, lean_object* v_h__2_199_){
_start:
{
if (lean_obj_tag(v_x_197_) == 0)
{
lean_object* v___x_200_; lean_object* v___x_201_; 
lean_dec(v_h__1_198_);
v___x_200_ = lean_box(0);
v___x_201_ = lean_apply_1(v_h__2_199_, v___x_200_);
return v___x_201_;
}
else
{
lean_object* v_val_202_; lean_object* v___x_203_; 
lean_dec(v_h__2_199_);
v_val_202_ = lean_ctor_get(v_x_197_, 0);
lean_inc(v_val_202_);
lean_dec_ref_known(v_x_197_, 1);
v___x_203_ = lean_apply_1(v_h__1_198_, v_val_202_);
return v___x_203_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_depth_match__1_splitter___redArg(lean_object* v_x_204_, lean_object* v_h__1_205_, lean_object* v_h__2_206_, lean_object* v_h__3_207_){
_start:
{
switch(lean_obj_tag(v_x_204_))
{
case 4:
{
lean_object* v_xs_208_; lean_object* v___x_209_; 
lean_dec(v_h__3_207_);
lean_dec(v_h__2_206_);
v_xs_208_ = lean_ctor_get(v_x_204_, 0);
lean_inc(v_xs_208_);
lean_dec_ref_known(v_x_204_, 1);
v___x_209_ = lean_apply_1(v_h__1_205_, v_xs_208_);
return v___x_209_;
}
case 5:
{
lean_object* v_kvs_210_; lean_object* v___x_211_; 
lean_dec(v_h__3_207_);
lean_dec(v_h__1_205_);
v_kvs_210_ = lean_ctor_get(v_x_204_, 0);
lean_inc(v_kvs_210_);
lean_dec_ref_known(v_x_204_, 1);
v___x_211_ = lean_apply_1(v_h__2_206_, v_kvs_210_);
return v___x_211_;
}
default: 
{
lean_object* v___x_212_; 
lean_dec(v_h__2_206_);
lean_dec(v_h__1_205_);
v___x_212_ = lean_apply_3(v_h__3_207_, v_x_204_, lean_box(0), lean_box(0));
return v___x_212_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_depth_match__1_splitter(lean_object* v_motive_213_, lean_object* v_x_214_, lean_object* v_h__1_215_, lean_object* v_h__2_216_, lean_object* v_h__3_217_){
_start:
{
switch(lean_obj_tag(v_x_214_))
{
case 4:
{
lean_object* v_xs_218_; lean_object* v___x_219_; 
lean_dec(v_h__3_217_);
lean_dec(v_h__2_216_);
v_xs_218_ = lean_ctor_get(v_x_214_, 0);
lean_inc(v_xs_218_);
lean_dec_ref_known(v_x_214_, 1);
v___x_219_ = lean_apply_1(v_h__1_215_, v_xs_218_);
return v___x_219_;
}
case 5:
{
lean_object* v_kvs_220_; lean_object* v___x_221_; 
lean_dec(v_h__3_217_);
lean_dec(v_h__1_215_);
v_kvs_220_ = lean_ctor_get(v_x_214_, 0);
lean_inc(v_kvs_220_);
lean_dec_ref_known(v_x_214_, 1);
v___x_221_ = lean_apply_1(v_h__2_216_, v_kvs_220_);
return v___x_221_;
}
default: 
{
lean_object* v___x_222_; 
lean_dec(v_h__2_216_);
lean_dec(v_h__1_215_);
v___x_222_ = lean_apply_3(v_h__3_217_, v_x_214_, lean_box(0), lean_box(0));
return v___x_222_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_arraySize_match__1_splitter___redArg(lean_object* v_x_223_, lean_object* v_h__1_224_, lean_object* v_h__2_225_, lean_object* v_h__3_226_){
_start:
{
switch(lean_obj_tag(v_x_223_))
{
case 4:
{
lean_object* v_xs_227_; lean_object* v___x_228_; 
lean_dec(v_h__3_226_);
lean_dec(v_h__2_225_);
v_xs_227_ = lean_ctor_get(v_x_223_, 0);
lean_inc(v_xs_227_);
lean_dec_ref_known(v_x_223_, 1);
v___x_228_ = lean_apply_1(v_h__1_224_, v_xs_227_);
return v___x_228_;
}
case 5:
{
lean_object* v_kvs_229_; lean_object* v___x_230_; 
lean_dec(v_h__3_226_);
lean_dec(v_h__1_224_);
v_kvs_229_ = lean_ctor_get(v_x_223_, 0);
lean_inc(v_kvs_229_);
lean_dec_ref_known(v_x_223_, 1);
v___x_230_ = lean_apply_1(v_h__2_225_, v_kvs_229_);
return v___x_230_;
}
default: 
{
lean_object* v___x_231_; 
lean_dec(v_h__2_225_);
lean_dec(v_h__1_224_);
v___x_231_ = lean_apply_3(v_h__3_226_, v_x_223_, lean_box(0), lean_box(0));
return v___x_231_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Api_0__CJson_JSON_arraySize_match__1_splitter(lean_object* v_motive_232_, lean_object* v_x_233_, lean_object* v_h__1_234_, lean_object* v_h__2_235_, lean_object* v_h__3_236_){
_start:
{
switch(lean_obj_tag(v_x_233_))
{
case 4:
{
lean_object* v_xs_237_; lean_object* v___x_238_; 
lean_dec(v_h__3_236_);
lean_dec(v_h__2_235_);
v_xs_237_ = lean_ctor_get(v_x_233_, 0);
lean_inc(v_xs_237_);
lean_dec_ref_known(v_x_233_, 1);
v___x_238_ = lean_apply_1(v_h__1_234_, v_xs_237_);
return v___x_238_;
}
case 5:
{
lean_object* v_kvs_239_; lean_object* v___x_240_; 
lean_dec(v_h__3_236_);
lean_dec(v_h__1_234_);
v_kvs_239_ = lean_ctor_get(v_x_233_, 0);
lean_inc(v_kvs_239_);
lean_dec_ref_known(v_x_233_, 1);
v___x_240_ = lean_apply_1(v_h__2_235_, v_kvs_239_);
return v___x_240_;
}
default: 
{
lean_object* v___x_241_; 
lean_dec(v_h__2_235_);
lean_dec(v_h__1_234_);
v___x_241_ = lean_apply_3(v_h__3_236_, v_x_233_, lean_box(0), lean_box(0));
return v___x_241_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Api(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Str(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Proofs_Number(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_leancjson_CJson_Proofs_Api(uint8_t builtin) {
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
res = initialize_leancjson_CJson_Api(builtin);
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
