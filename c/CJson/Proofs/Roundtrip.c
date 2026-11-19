// Lean compiler output
// Module: CJson.Proofs.Roundtrip
// Imports: public import Init public meta import Init public import CJson.Print public import CJson.Parse public import CJson.Proofs.Str
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
lean_object* lean_uint8_to_nat(uint8_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
LEAN_EXPORT uint8_t lp_leancjson_CJson_instDecidableValueHead(uint8_t);
LEAN_EXPORT lean_object* lp_leancjson_CJson_instDecidableValueHead___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_JSON_NumsNormal_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_JSON_NumsNormal_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseScalar_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseScalar_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseScalar_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseScalar_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseScalar_match__5_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseScalar_match__5_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_JSON_depth_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_JSON_depth_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseValue_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseValue_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseValue_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseValue_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseScalar_match__8_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseScalar_match__8_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseElems_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseElems_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_skipBom_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_skipBom_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseElems_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseElems_match__3_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseElems_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseElems_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseMembers_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseMembers_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseMembers_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseMembers_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_leancjson_CJson_instDecidableValueHead(uint8_t v_c_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; uint8_t v___x_4_; 
v___x_2_ = lean_unsigned_to_nat(32u);
v___x_3_ = lean_uint8_to_nat(v_c_1_);
v___x_4_ = lean_nat_dec_lt(v___x_2_, v___x_3_);
if (v___x_4_ == 0)
{
return v___x_4_;
}
else
{
uint8_t v___x_5_; uint8_t v___x_6_; 
v___x_5_ = 93;
v___x_6_ = lean_uint8_dec_eq(v_c_1_, v___x_5_);
if (v___x_6_ == 0)
{
uint8_t v___x_7_; uint8_t v___x_8_; 
v___x_7_ = 125;
v___x_8_ = lean_uint8_dec_eq(v_c_1_, v___x_7_);
if (v___x_8_ == 0)
{
lean_object* v___x_9_; uint8_t v___x_10_; 
v___x_9_ = lean_unsigned_to_nat(128u);
v___x_10_ = lean_nat_dec_lt(v___x_3_, v___x_9_);
return v___x_10_;
}
else
{
return v___x_6_;
}
}
else
{
uint8_t v___x_11_; 
v___x_11_ = 0;
return v___x_11_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson_CJson_instDecidableValueHead___boxed(lean_object* v_c_12_){
_start:
{
uint8_t v_c_boxed_13_; uint8_t v_res_14_; lean_object* v_r_15_; 
v_c_boxed_13_ = lean_unbox(v_c_12_);
v_res_14_ = lp_leancjson_CJson_instDecidableValueHead(v_c_boxed_13_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_JSON_NumsNormal_match__1_splitter___redArg(lean_object* v_x_16_, lean_object* v_h__1_17_, lean_object* v_h__2_18_, lean_object* v_h__3_19_, lean_object* v_h__4_20_){
_start:
{
switch(lean_obj_tag(v_x_16_))
{
case 2:
{
lean_object* v_n_21_; lean_object* v___x_22_; 
lean_dec(v_h__4_20_);
lean_dec(v_h__3_19_);
lean_dec(v_h__2_18_);
v_n_21_ = lean_ctor_get(v_x_16_, 0);
lean_inc_ref(v_n_21_);
lean_dec_ref_known(v_x_16_, 1);
v___x_22_ = lean_apply_1(v_h__1_17_, v_n_21_);
return v___x_22_;
}
case 4:
{
lean_object* v_xs_23_; lean_object* v___x_24_; 
lean_dec(v_h__4_20_);
lean_dec(v_h__3_19_);
lean_dec(v_h__1_17_);
v_xs_23_ = lean_ctor_get(v_x_16_, 0);
lean_inc(v_xs_23_);
lean_dec_ref_known(v_x_16_, 1);
v___x_24_ = lean_apply_1(v_h__2_18_, v_xs_23_);
return v___x_24_;
}
case 5:
{
lean_object* v_kvs_25_; lean_object* v___x_26_; 
lean_dec(v_h__4_20_);
lean_dec(v_h__2_18_);
lean_dec(v_h__1_17_);
v_kvs_25_ = lean_ctor_get(v_x_16_, 0);
lean_inc(v_kvs_25_);
lean_dec_ref_known(v_x_16_, 1);
v___x_26_ = lean_apply_1(v_h__3_19_, v_kvs_25_);
return v___x_26_;
}
default: 
{
lean_object* v___x_27_; 
lean_dec(v_h__3_19_);
lean_dec(v_h__2_18_);
lean_dec(v_h__1_17_);
v___x_27_ = lean_apply_4(v_h__4_20_, v_x_16_, lean_box(0), lean_box(0), lean_box(0));
return v___x_27_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_JSON_NumsNormal_match__1_splitter(lean_object* v_motive_28_, lean_object* v_x_29_, lean_object* v_h__1_30_, lean_object* v_h__2_31_, lean_object* v_h__3_32_, lean_object* v_h__4_33_){
_start:
{
switch(lean_obj_tag(v_x_29_))
{
case 2:
{
lean_object* v_n_34_; lean_object* v___x_35_; 
lean_dec(v_h__4_33_);
lean_dec(v_h__3_32_);
lean_dec(v_h__2_31_);
v_n_34_ = lean_ctor_get(v_x_29_, 0);
lean_inc_ref(v_n_34_);
lean_dec_ref_known(v_x_29_, 1);
v___x_35_ = lean_apply_1(v_h__1_30_, v_n_34_);
return v___x_35_;
}
case 4:
{
lean_object* v_xs_36_; lean_object* v___x_37_; 
lean_dec(v_h__4_33_);
lean_dec(v_h__3_32_);
lean_dec(v_h__1_30_);
v_xs_36_ = lean_ctor_get(v_x_29_, 0);
lean_inc(v_xs_36_);
lean_dec_ref_known(v_x_29_, 1);
v___x_37_ = lean_apply_1(v_h__2_31_, v_xs_36_);
return v___x_37_;
}
case 5:
{
lean_object* v_kvs_38_; lean_object* v___x_39_; 
lean_dec(v_h__4_33_);
lean_dec(v_h__2_31_);
lean_dec(v_h__1_30_);
v_kvs_38_ = lean_ctor_get(v_x_29_, 0);
lean_inc(v_kvs_38_);
lean_dec_ref_known(v_x_29_, 1);
v___x_39_ = lean_apply_1(v_h__3_32_, v_kvs_38_);
return v___x_39_;
}
default: 
{
lean_object* v___x_40_; 
lean_dec(v_h__3_32_);
lean_dec(v_h__2_31_);
lean_dec(v_h__1_30_);
v___x_40_ = lean_apply_4(v_h__4_33_, v_x_29_, lean_box(0), lean_box(0), lean_box(0));
return v___x_40_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseScalar_match__1_splitter___redArg(lean_object* v_x_41_, lean_object* v_h__1_42_, lean_object* v_h__2_43_){
_start:
{
if (lean_obj_tag(v_x_41_) == 0)
{
lean_object* v___x_44_; lean_object* v___x_45_; 
lean_dec(v_h__2_43_);
v___x_44_ = lean_box(0);
v___x_45_ = lean_apply_1(v_h__1_42_, v___x_44_);
return v___x_45_;
}
else
{
lean_object* v_val_46_; lean_object* v_fst_47_; lean_object* v_snd_48_; lean_object* v___x_49_; 
lean_dec(v_h__1_42_);
v_val_46_ = lean_ctor_get(v_x_41_, 0);
lean_inc(v_val_46_);
lean_dec_ref_known(v_x_41_, 1);
v_fst_47_ = lean_ctor_get(v_val_46_, 0);
lean_inc(v_fst_47_);
v_snd_48_ = lean_ctor_get(v_val_46_, 1);
lean_inc(v_snd_48_);
lean_dec(v_val_46_);
v___x_49_ = lean_apply_2(v_h__2_43_, v_fst_47_, v_snd_48_);
return v___x_49_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseScalar_match__1_splitter(lean_object* v_motive_50_, lean_object* v_x_51_, lean_object* v_h__1_52_, lean_object* v_h__2_53_){
_start:
{
if (lean_obj_tag(v_x_51_) == 0)
{
lean_object* v___x_54_; lean_object* v___x_55_; 
lean_dec(v_h__2_53_);
v___x_54_ = lean_box(0);
v___x_55_ = lean_apply_1(v_h__1_52_, v___x_54_);
return v___x_55_;
}
else
{
lean_object* v_val_56_; lean_object* v_fst_57_; lean_object* v_snd_58_; lean_object* v___x_59_; 
lean_dec(v_h__1_52_);
v_val_56_ = lean_ctor_get(v_x_51_, 0);
lean_inc(v_val_56_);
lean_dec_ref_known(v_x_51_, 1);
v_fst_57_ = lean_ctor_get(v_val_56_, 0);
lean_inc(v_fst_57_);
v_snd_58_ = lean_ctor_get(v_val_56_, 1);
lean_inc(v_snd_58_);
lean_dec(v_val_56_);
v___x_59_ = lean_apply_2(v_h__2_53_, v_fst_57_, v_snd_58_);
return v___x_59_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseScalar_match__3_splitter___redArg(lean_object* v_x_60_, lean_object* v_h__1_61_, lean_object* v_h__2_62_){
_start:
{
if (lean_obj_tag(v_x_60_) == 0)
{
lean_object* v___x_63_; lean_object* v___x_64_; 
lean_dec(v_h__2_62_);
v___x_63_ = lean_box(0);
v___x_64_ = lean_apply_1(v_h__1_61_, v___x_63_);
return v___x_64_;
}
else
{
lean_object* v_val_65_; lean_object* v_fst_66_; lean_object* v_snd_67_; lean_object* v___x_68_; 
lean_dec(v_h__1_61_);
v_val_65_ = lean_ctor_get(v_x_60_, 0);
lean_inc(v_val_65_);
lean_dec_ref_known(v_x_60_, 1);
v_fst_66_ = lean_ctor_get(v_val_65_, 0);
lean_inc(v_fst_66_);
v_snd_67_ = lean_ctor_get(v_val_65_, 1);
lean_inc(v_snd_67_);
lean_dec(v_val_65_);
v___x_68_ = lean_apply_2(v_h__2_62_, v_fst_66_, v_snd_67_);
return v___x_68_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseScalar_match__3_splitter(lean_object* v_motive_69_, lean_object* v_x_70_, lean_object* v_h__1_71_, lean_object* v_h__2_72_){
_start:
{
if (lean_obj_tag(v_x_70_) == 0)
{
lean_object* v___x_73_; lean_object* v___x_74_; 
lean_dec(v_h__2_72_);
v___x_73_ = lean_box(0);
v___x_74_ = lean_apply_1(v_h__1_71_, v___x_73_);
return v___x_74_;
}
else
{
lean_object* v_val_75_; lean_object* v_fst_76_; lean_object* v_snd_77_; lean_object* v___x_78_; 
lean_dec(v_h__1_71_);
v_val_75_ = lean_ctor_get(v_x_70_, 0);
lean_inc(v_val_75_);
lean_dec_ref_known(v_x_70_, 1);
v_fst_76_ = lean_ctor_get(v_val_75_, 0);
lean_inc(v_fst_76_);
v_snd_77_ = lean_ctor_get(v_val_75_, 1);
lean_inc(v_snd_77_);
lean_dec(v_val_75_);
v___x_78_ = lean_apply_2(v_h__2_72_, v_fst_76_, v_snd_77_);
return v___x_78_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseScalar_match__5_splitter___redArg(lean_object* v_s_79_, lean_object* v_h__1_80_, lean_object* v_h__2_81_, lean_object* v_h__3_82_, lean_object* v_h__4_83_){
_start:
{
if (lean_obj_tag(v_s_79_) == 1)
{
lean_object* v_head_84_; lean_object* v_tail_85_; uint8_t v___x_86_; uint8_t v___x_87_; uint8_t v___x_88_; 
v_head_84_ = lean_ctor_get(v_s_79_, 0);
v_tail_85_ = lean_ctor_get(v_s_79_, 1);
lean_inc(v_tail_85_);
v___x_86_ = 110;
v___x_87_ = lean_unbox(v_head_84_);
v___x_88_ = lean_uint8_dec_eq(v___x_87_, v___x_86_);
if (v___x_88_ == 0)
{
uint8_t v___x_89_; uint8_t v___x_90_; uint8_t v___x_91_; 
lean_dec(v_h__1_80_);
v___x_89_ = 116;
v___x_90_ = lean_unbox(v_head_84_);
v___x_91_ = lean_uint8_dec_eq(v___x_90_, v___x_89_);
if (v___x_91_ == 0)
{
uint8_t v___x_92_; uint8_t v___x_93_; uint8_t v___x_94_; 
lean_dec(v_h__2_81_);
v___x_92_ = 102;
v___x_93_ = lean_unbox(v_head_84_);
v___x_94_ = lean_uint8_dec_eq(v___x_93_, v___x_92_);
if (v___x_94_ == 0)
{
lean_object* v___x_95_; 
lean_dec(v_tail_85_);
lean_dec(v_h__3_82_);
v___x_95_ = lean_apply_4(v_h__4_83_, v_s_79_, lean_box(0), lean_box(0), lean_box(0));
return v___x_95_;
}
else
{
lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_226_; 
v_isSharedCheck_226_ = !lean_is_exclusive(v_s_79_);
if (v_isSharedCheck_226_ == 0)
{
lean_object* v_unused_227_; lean_object* v_unused_228_; 
v_unused_227_ = lean_ctor_get(v_s_79_, 1);
lean_dec(v_unused_227_);
v_unused_228_ = lean_ctor_get(v_s_79_, 0);
lean_dec(v_unused_228_);
v___x_97_ = v_s_79_;
v_isShared_98_ = v_isSharedCheck_226_;
goto v_resetjp_96_;
}
else
{
lean_dec(v_s_79_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_226_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
if (lean_obj_tag(v_tail_85_) == 1)
{
lean_object* v_head_99_; lean_object* v_tail_100_; uint8_t v___x_101_; uint8_t v___x_102_; uint8_t v___x_103_; 
v_head_99_ = lean_ctor_get(v_tail_85_, 0);
v_tail_100_ = lean_ctor_get(v_tail_85_, 1);
lean_inc(v_tail_100_);
v___x_101_ = 97;
v___x_102_ = lean_unbox(v_head_99_);
v___x_103_ = lean_uint8_dec_eq(v___x_102_, v___x_101_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; lean_object* v___x_106_; 
lean_dec(v_tail_100_);
lean_dec(v_h__3_82_);
v___x_104_ = lean_box(v___x_92_);
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 0, v___x_104_);
v___x_106_ = v___x_97_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v___x_104_);
lean_ctor_set(v_reuseFailAlloc_108_, 1, v_tail_85_);
v___x_106_ = v_reuseFailAlloc_108_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
lean_object* v___x_107_; 
v___x_107_ = lean_apply_4(v_h__4_83_, v___x_106_, lean_box(0), lean_box(0), lean_box(0));
return v___x_107_;
}
}
else
{
lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_218_; 
v_isSharedCheck_218_ = !lean_is_exclusive(v_tail_85_);
if (v_isSharedCheck_218_ == 0)
{
lean_object* v_unused_219_; lean_object* v_unused_220_; 
v_unused_219_ = lean_ctor_get(v_tail_85_, 1);
lean_dec(v_unused_219_);
v_unused_220_ = lean_ctor_get(v_tail_85_, 0);
lean_dec(v_unused_220_);
v___x_110_ = v_tail_85_;
v_isShared_111_ = v_isSharedCheck_218_;
goto v_resetjp_109_;
}
else
{
lean_dec(v_tail_85_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_218_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
if (lean_obj_tag(v_tail_100_) == 1)
{
lean_object* v_head_112_; lean_object* v_tail_113_; uint8_t v___x_114_; uint8_t v___x_115_; uint8_t v___x_116_; 
v_head_112_ = lean_ctor_get(v_tail_100_, 0);
v_tail_113_ = lean_ctor_get(v_tail_100_, 1);
lean_inc(v_tail_113_);
v___x_114_ = 108;
v___x_115_ = lean_unbox(v_head_112_);
v___x_116_ = lean_uint8_dec_eq(v___x_115_, v___x_114_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; lean_object* v___x_119_; 
lean_dec(v_tail_113_);
lean_dec(v_h__3_82_);
v___x_117_ = lean_box(v___x_101_);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 0, v___x_117_);
v___x_119_ = v___x_110_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v___x_117_);
lean_ctor_set(v_reuseFailAlloc_125_, 1, v_tail_100_);
v___x_119_ = v_reuseFailAlloc_125_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
lean_object* v___x_120_; lean_object* v___x_122_; 
v___x_120_ = lean_box(v___x_92_);
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 1, v___x_119_);
lean_ctor_set(v___x_97_, 0, v___x_120_);
v___x_122_ = v___x_97_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v___x_120_);
lean_ctor_set(v_reuseFailAlloc_124_, 1, v___x_119_);
v___x_122_ = v_reuseFailAlloc_124_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
lean_object* v___x_123_; 
v___x_123_ = lean_apply_4(v_h__4_83_, v___x_122_, lean_box(0), lean_box(0), lean_box(0));
return v___x_123_;
}
}
}
else
{
lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_206_; 
v_isSharedCheck_206_ = !lean_is_exclusive(v_tail_100_);
if (v_isSharedCheck_206_ == 0)
{
lean_object* v_unused_207_; lean_object* v_unused_208_; 
v_unused_207_ = lean_ctor_get(v_tail_100_, 1);
lean_dec(v_unused_207_);
v_unused_208_ = lean_ctor_get(v_tail_100_, 0);
lean_dec(v_unused_208_);
v___x_127_ = v_tail_100_;
v_isShared_128_ = v_isSharedCheck_206_;
goto v_resetjp_126_;
}
else
{
lean_dec(v_tail_100_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_206_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
if (lean_obj_tag(v_tail_113_) == 1)
{
lean_object* v_head_129_; lean_object* v_tail_130_; uint8_t v___x_131_; uint8_t v___x_132_; uint8_t v___x_133_; 
v_head_129_ = lean_ctor_get(v_tail_113_, 0);
v_tail_130_ = lean_ctor_get(v_tail_113_, 1);
v___x_131_ = 115;
v___x_132_ = lean_unbox(v_head_129_);
v___x_133_ = lean_uint8_dec_eq(v___x_132_, v___x_131_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; lean_object* v___x_136_; 
lean_dec(v_h__3_82_);
v___x_134_ = lean_box(v___x_114_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v___x_134_);
v___x_136_ = v___x_127_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v___x_134_);
lean_ctor_set(v_reuseFailAlloc_146_, 1, v_tail_113_);
v___x_136_ = v_reuseFailAlloc_146_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
lean_object* v___x_137_; lean_object* v___x_139_; 
v___x_137_ = lean_box(v___x_101_);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 1, v___x_136_);
lean_ctor_set(v___x_110_, 0, v___x_137_);
v___x_139_ = v___x_110_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v___x_137_);
lean_ctor_set(v_reuseFailAlloc_145_, 1, v___x_136_);
v___x_139_ = v_reuseFailAlloc_145_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
lean_object* v___x_140_; lean_object* v___x_142_; 
v___x_140_ = lean_box(v___x_92_);
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 1, v___x_139_);
lean_ctor_set(v___x_97_, 0, v___x_140_);
v___x_142_ = v___x_97_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v___x_140_);
lean_ctor_set(v_reuseFailAlloc_144_, 1, v___x_139_);
v___x_142_ = v_reuseFailAlloc_144_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
lean_object* v___x_143_; 
v___x_143_ = lean_apply_4(v_h__4_83_, v___x_142_, lean_box(0), lean_box(0), lean_box(0));
return v___x_143_;
}
}
}
}
else
{
lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_190_; 
lean_inc(v_tail_130_);
v_isSharedCheck_190_ = !lean_is_exclusive(v_tail_113_);
if (v_isSharedCheck_190_ == 0)
{
lean_object* v_unused_191_; lean_object* v_unused_192_; 
v_unused_191_ = lean_ctor_get(v_tail_113_, 1);
lean_dec(v_unused_191_);
v_unused_192_ = lean_ctor_get(v_tail_113_, 0);
lean_dec(v_unused_192_);
v___x_148_ = v_tail_113_;
v_isShared_149_ = v_isSharedCheck_190_;
goto v_resetjp_147_;
}
else
{
lean_dec(v_tail_113_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_190_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
if (lean_obj_tag(v_tail_130_) == 1)
{
lean_object* v_head_150_; lean_object* v_tail_151_; uint8_t v___x_152_; uint8_t v___x_153_; uint8_t v___x_154_; 
v_head_150_ = lean_ctor_get(v_tail_130_, 0);
v_tail_151_ = lean_ctor_get(v_tail_130_, 1);
v___x_152_ = 101;
v___x_153_ = lean_unbox(v_head_150_);
v___x_154_ = lean_uint8_dec_eq(v___x_153_, v___x_152_);
if (v___x_154_ == 0)
{
lean_object* v___x_155_; lean_object* v___x_157_; 
lean_dec(v_h__3_82_);
v___x_155_ = lean_box(v___x_131_);
if (v_isShared_149_ == 0)
{
lean_ctor_set(v___x_148_, 0, v___x_155_);
v___x_157_ = v___x_148_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v___x_155_);
lean_ctor_set(v_reuseFailAlloc_171_, 1, v_tail_130_);
v___x_157_ = v_reuseFailAlloc_171_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
lean_object* v___x_158_; lean_object* v___x_160_; 
v___x_158_ = lean_box(v___x_114_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 1, v___x_157_);
lean_ctor_set(v___x_127_, 0, v___x_158_);
v___x_160_ = v___x_127_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_158_);
lean_ctor_set(v_reuseFailAlloc_170_, 1, v___x_157_);
v___x_160_ = v_reuseFailAlloc_170_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
lean_object* v___x_161_; lean_object* v___x_163_; 
v___x_161_ = lean_box(v___x_101_);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 1, v___x_160_);
lean_ctor_set(v___x_110_, 0, v___x_161_);
v___x_163_ = v___x_110_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v___x_161_);
lean_ctor_set(v_reuseFailAlloc_169_, 1, v___x_160_);
v___x_163_ = v_reuseFailAlloc_169_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
lean_object* v___x_164_; lean_object* v___x_166_; 
v___x_164_ = lean_box(v___x_92_);
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 1, v___x_163_);
lean_ctor_set(v___x_97_, 0, v___x_164_);
v___x_166_ = v___x_97_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v___x_164_);
lean_ctor_set(v_reuseFailAlloc_168_, 1, v___x_163_);
v___x_166_ = v_reuseFailAlloc_168_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
lean_object* v___x_167_; 
v___x_167_ = lean_apply_4(v_h__4_83_, v___x_166_, lean_box(0), lean_box(0), lean_box(0));
return v___x_167_;
}
}
}
}
}
else
{
lean_object* v___x_172_; 
lean_inc(v_tail_151_);
lean_dec_ref_known(v_tail_130_, 2);
lean_del_object(v___x_148_);
lean_del_object(v___x_127_);
lean_del_object(v___x_110_);
lean_del_object(v___x_97_);
lean_dec(v_h__4_83_);
v___x_172_ = lean_apply_1(v_h__3_82_, v_tail_151_);
return v___x_172_;
}
}
else
{
lean_object* v___x_173_; lean_object* v___x_175_; 
lean_dec(v_h__3_82_);
v___x_173_ = lean_box(v___x_131_);
if (v_isShared_149_ == 0)
{
lean_ctor_set(v___x_148_, 0, v___x_173_);
v___x_175_ = v___x_148_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v___x_173_);
lean_ctor_set(v_reuseFailAlloc_189_, 1, v_tail_130_);
v___x_175_ = v_reuseFailAlloc_189_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
lean_object* v___x_176_; lean_object* v___x_178_; 
v___x_176_ = lean_box(v___x_114_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 1, v___x_175_);
lean_ctor_set(v___x_127_, 0, v___x_176_);
v___x_178_ = v___x_127_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v___x_176_);
lean_ctor_set(v_reuseFailAlloc_188_, 1, v___x_175_);
v___x_178_ = v_reuseFailAlloc_188_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
lean_object* v___x_179_; lean_object* v___x_181_; 
v___x_179_ = lean_box(v___x_101_);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 1, v___x_178_);
lean_ctor_set(v___x_110_, 0, v___x_179_);
v___x_181_ = v___x_110_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v___x_179_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v___x_178_);
v___x_181_ = v_reuseFailAlloc_187_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
lean_object* v___x_182_; lean_object* v___x_184_; 
v___x_182_ = lean_box(v___x_92_);
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 1, v___x_181_);
lean_ctor_set(v___x_97_, 0, v___x_182_);
v___x_184_ = v___x_97_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v___x_182_);
lean_ctor_set(v_reuseFailAlloc_186_, 1, v___x_181_);
v___x_184_ = v_reuseFailAlloc_186_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
lean_object* v___x_185_; 
v___x_185_ = lean_apply_4(v_h__4_83_, v___x_184_, lean_box(0), lean_box(0), lean_box(0));
return v___x_185_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_193_; lean_object* v___x_195_; 
lean_dec(v_h__3_82_);
v___x_193_ = lean_box(v___x_114_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v___x_193_);
v___x_195_ = v___x_127_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v___x_193_);
lean_ctor_set(v_reuseFailAlloc_205_, 1, v_tail_113_);
v___x_195_ = v_reuseFailAlloc_205_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
lean_object* v___x_196_; lean_object* v___x_198_; 
v___x_196_ = lean_box(v___x_101_);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 1, v___x_195_);
lean_ctor_set(v___x_110_, 0, v___x_196_);
v___x_198_ = v___x_110_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v___x_196_);
lean_ctor_set(v_reuseFailAlloc_204_, 1, v___x_195_);
v___x_198_ = v_reuseFailAlloc_204_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
lean_object* v___x_199_; lean_object* v___x_201_; 
v___x_199_ = lean_box(v___x_92_);
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 1, v___x_198_);
lean_ctor_set(v___x_97_, 0, v___x_199_);
v___x_201_ = v___x_97_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v___x_199_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v___x_198_);
v___x_201_ = v_reuseFailAlloc_203_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
lean_object* v___x_202_; 
v___x_202_ = lean_apply_4(v_h__4_83_, v___x_201_, lean_box(0), lean_box(0), lean_box(0));
return v___x_202_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_209_; lean_object* v___x_211_; 
lean_dec(v_h__3_82_);
v___x_209_ = lean_box(v___x_101_);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 0, v___x_209_);
v___x_211_ = v___x_110_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v___x_209_);
lean_ctor_set(v_reuseFailAlloc_217_, 1, v_tail_100_);
v___x_211_ = v_reuseFailAlloc_217_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
lean_object* v___x_212_; lean_object* v___x_214_; 
v___x_212_ = lean_box(v___x_92_);
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 1, v___x_211_);
lean_ctor_set(v___x_97_, 0, v___x_212_);
v___x_214_ = v___x_97_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v___x_212_);
lean_ctor_set(v_reuseFailAlloc_216_, 1, v___x_211_);
v___x_214_ = v_reuseFailAlloc_216_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
lean_object* v___x_215_; 
v___x_215_ = lean_apply_4(v_h__4_83_, v___x_214_, lean_box(0), lean_box(0), lean_box(0));
return v___x_215_;
}
}
}
}
}
}
else
{
lean_object* v___x_221_; lean_object* v___x_223_; 
lean_dec(v_h__3_82_);
v___x_221_ = lean_box(v___x_92_);
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 0, v___x_221_);
v___x_223_ = v___x_97_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_221_);
lean_ctor_set(v_reuseFailAlloc_225_, 1, v_tail_85_);
v___x_223_ = v_reuseFailAlloc_225_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
lean_object* v___x_224_; 
v___x_224_ = lean_apply_4(v_h__4_83_, v___x_223_, lean_box(0), lean_box(0), lean_box(0));
return v___x_224_;
}
}
}
}
}
else
{
lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_314_; 
lean_dec(v_h__3_82_);
v_isSharedCheck_314_ = !lean_is_exclusive(v_s_79_);
if (v_isSharedCheck_314_ == 0)
{
lean_object* v_unused_315_; lean_object* v_unused_316_; 
v_unused_315_ = lean_ctor_get(v_s_79_, 1);
lean_dec(v_unused_315_);
v_unused_316_ = lean_ctor_get(v_s_79_, 0);
lean_dec(v_unused_316_);
v___x_230_ = v_s_79_;
v_isShared_231_ = v_isSharedCheck_314_;
goto v_resetjp_229_;
}
else
{
lean_dec(v_s_79_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_314_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
if (lean_obj_tag(v_tail_85_) == 1)
{
lean_object* v_head_232_; lean_object* v_tail_233_; uint8_t v___x_234_; uint8_t v___x_235_; uint8_t v___x_236_; 
v_head_232_ = lean_ctor_get(v_tail_85_, 0);
v_tail_233_ = lean_ctor_get(v_tail_85_, 1);
lean_inc(v_tail_233_);
v___x_234_ = 114;
v___x_235_ = lean_unbox(v_head_232_);
v___x_236_ = lean_uint8_dec_eq(v___x_235_, v___x_234_);
if (v___x_236_ == 0)
{
lean_object* v___x_237_; lean_object* v___x_239_; 
lean_dec(v_tail_233_);
lean_dec(v_h__2_81_);
v___x_237_ = lean_box(v___x_89_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 0, v___x_237_);
v___x_239_ = v___x_230_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v___x_237_);
lean_ctor_set(v_reuseFailAlloc_241_, 1, v_tail_85_);
v___x_239_ = v_reuseFailAlloc_241_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
lean_object* v___x_240_; 
v___x_240_ = lean_apply_4(v_h__4_83_, v___x_239_, lean_box(0), lean_box(0), lean_box(0));
return v___x_240_;
}
}
else
{
lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_306_; 
v_isSharedCheck_306_ = !lean_is_exclusive(v_tail_85_);
if (v_isSharedCheck_306_ == 0)
{
lean_object* v_unused_307_; lean_object* v_unused_308_; 
v_unused_307_ = lean_ctor_get(v_tail_85_, 1);
lean_dec(v_unused_307_);
v_unused_308_ = lean_ctor_get(v_tail_85_, 0);
lean_dec(v_unused_308_);
v___x_243_ = v_tail_85_;
v_isShared_244_ = v_isSharedCheck_306_;
goto v_resetjp_242_;
}
else
{
lean_dec(v_tail_85_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_306_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
if (lean_obj_tag(v_tail_233_) == 1)
{
lean_object* v_head_245_; lean_object* v_tail_246_; uint8_t v___x_247_; uint8_t v___x_248_; uint8_t v___x_249_; 
v_head_245_ = lean_ctor_get(v_tail_233_, 0);
v_tail_246_ = lean_ctor_get(v_tail_233_, 1);
v___x_247_ = 117;
v___x_248_ = lean_unbox(v_head_245_);
v___x_249_ = lean_uint8_dec_eq(v___x_248_, v___x_247_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; lean_object* v___x_252_; 
lean_dec(v_h__2_81_);
v___x_250_ = lean_box(v___x_234_);
if (v_isShared_244_ == 0)
{
lean_ctor_set(v___x_243_, 0, v___x_250_);
v___x_252_ = v___x_243_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v___x_250_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v_tail_233_);
v___x_252_ = v_reuseFailAlloc_258_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
lean_object* v___x_253_; lean_object* v___x_255_; 
v___x_253_ = lean_box(v___x_89_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 1, v___x_252_);
lean_ctor_set(v___x_230_, 0, v___x_253_);
v___x_255_ = v___x_230_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v___x_253_);
lean_ctor_set(v_reuseFailAlloc_257_, 1, v___x_252_);
v___x_255_ = v_reuseFailAlloc_257_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
lean_object* v___x_256_; 
v___x_256_ = lean_apply_4(v_h__4_83_, v___x_255_, lean_box(0), lean_box(0), lean_box(0));
return v___x_256_;
}
}
}
else
{
lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_294_; 
lean_inc(v_tail_246_);
v_isSharedCheck_294_ = !lean_is_exclusive(v_tail_233_);
if (v_isSharedCheck_294_ == 0)
{
lean_object* v_unused_295_; lean_object* v_unused_296_; 
v_unused_295_ = lean_ctor_get(v_tail_233_, 1);
lean_dec(v_unused_295_);
v_unused_296_ = lean_ctor_get(v_tail_233_, 0);
lean_dec(v_unused_296_);
v___x_260_ = v_tail_233_;
v_isShared_261_ = v_isSharedCheck_294_;
goto v_resetjp_259_;
}
else
{
lean_dec(v_tail_233_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_294_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
if (lean_obj_tag(v_tail_246_) == 1)
{
lean_object* v_head_262_; lean_object* v_tail_263_; uint8_t v___x_264_; uint8_t v___x_265_; uint8_t v___x_266_; 
v_head_262_ = lean_ctor_get(v_tail_246_, 0);
v_tail_263_ = lean_ctor_get(v_tail_246_, 1);
v___x_264_ = 101;
v___x_265_ = lean_unbox(v_head_262_);
v___x_266_ = lean_uint8_dec_eq(v___x_265_, v___x_264_);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; lean_object* v___x_269_; 
lean_dec(v_h__2_81_);
v___x_267_ = lean_box(v___x_247_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 0, v___x_267_);
v___x_269_ = v___x_260_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v___x_267_);
lean_ctor_set(v_reuseFailAlloc_279_, 1, v_tail_246_);
v___x_269_ = v_reuseFailAlloc_279_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
lean_object* v___x_270_; lean_object* v___x_272_; 
v___x_270_ = lean_box(v___x_234_);
if (v_isShared_244_ == 0)
{
lean_ctor_set(v___x_243_, 1, v___x_269_);
lean_ctor_set(v___x_243_, 0, v___x_270_);
v___x_272_ = v___x_243_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v___x_270_);
lean_ctor_set(v_reuseFailAlloc_278_, 1, v___x_269_);
v___x_272_ = v_reuseFailAlloc_278_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
lean_object* v___x_273_; lean_object* v___x_275_; 
v___x_273_ = lean_box(v___x_89_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 1, v___x_272_);
lean_ctor_set(v___x_230_, 0, v___x_273_);
v___x_275_ = v___x_230_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_273_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v___x_272_);
v___x_275_ = v_reuseFailAlloc_277_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
lean_object* v___x_276_; 
v___x_276_ = lean_apply_4(v_h__4_83_, v___x_275_, lean_box(0), lean_box(0), lean_box(0));
return v___x_276_;
}
}
}
}
else
{
lean_object* v___x_280_; 
lean_inc(v_tail_263_);
lean_dec_ref_known(v_tail_246_, 2);
lean_del_object(v___x_260_);
lean_del_object(v___x_243_);
lean_del_object(v___x_230_);
lean_dec(v_h__4_83_);
v___x_280_ = lean_apply_1(v_h__2_81_, v_tail_263_);
return v___x_280_;
}
}
else
{
lean_object* v___x_281_; lean_object* v___x_283_; 
lean_dec(v_h__2_81_);
v___x_281_ = lean_box(v___x_247_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 0, v___x_281_);
v___x_283_ = v___x_260_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v___x_281_);
lean_ctor_set(v_reuseFailAlloc_293_, 1, v_tail_246_);
v___x_283_ = v_reuseFailAlloc_293_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
lean_object* v___x_284_; lean_object* v___x_286_; 
v___x_284_ = lean_box(v___x_234_);
if (v_isShared_244_ == 0)
{
lean_ctor_set(v___x_243_, 1, v___x_283_);
lean_ctor_set(v___x_243_, 0, v___x_284_);
v___x_286_ = v___x_243_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v___x_284_);
lean_ctor_set(v_reuseFailAlloc_292_, 1, v___x_283_);
v___x_286_ = v_reuseFailAlloc_292_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
lean_object* v___x_287_; lean_object* v___x_289_; 
v___x_287_ = lean_box(v___x_89_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 1, v___x_286_);
lean_ctor_set(v___x_230_, 0, v___x_287_);
v___x_289_ = v___x_230_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v___x_287_);
lean_ctor_set(v_reuseFailAlloc_291_, 1, v___x_286_);
v___x_289_ = v_reuseFailAlloc_291_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
lean_object* v___x_290_; 
v___x_290_ = lean_apply_4(v_h__4_83_, v___x_289_, lean_box(0), lean_box(0), lean_box(0));
return v___x_290_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_297_; lean_object* v___x_299_; 
lean_dec(v_h__2_81_);
v___x_297_ = lean_box(v___x_234_);
if (v_isShared_244_ == 0)
{
lean_ctor_set(v___x_243_, 0, v___x_297_);
v___x_299_ = v___x_243_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_297_);
lean_ctor_set(v_reuseFailAlloc_305_, 1, v_tail_233_);
v___x_299_ = v_reuseFailAlloc_305_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
lean_object* v___x_300_; lean_object* v___x_302_; 
v___x_300_ = lean_box(v___x_89_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 1, v___x_299_);
lean_ctor_set(v___x_230_, 0, v___x_300_);
v___x_302_ = v___x_230_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_300_);
lean_ctor_set(v_reuseFailAlloc_304_, 1, v___x_299_);
v___x_302_ = v_reuseFailAlloc_304_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
lean_object* v___x_303_; 
v___x_303_ = lean_apply_4(v_h__4_83_, v___x_302_, lean_box(0), lean_box(0), lean_box(0));
return v___x_303_;
}
}
}
}
}
}
else
{
lean_object* v___x_309_; lean_object* v___x_311_; 
lean_dec(v_h__2_81_);
v___x_309_ = lean_box(v___x_89_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 0, v___x_309_);
v___x_311_ = v___x_230_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v___x_309_);
lean_ctor_set(v_reuseFailAlloc_313_, 1, v_tail_85_);
v___x_311_ = v_reuseFailAlloc_313_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
lean_object* v___x_312_; 
v___x_312_ = lean_apply_4(v_h__4_83_, v___x_311_, lean_box(0), lean_box(0), lean_box(0));
return v___x_312_;
}
}
}
}
}
else
{
lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_401_; 
lean_dec(v_h__3_82_);
lean_dec(v_h__2_81_);
v_isSharedCheck_401_ = !lean_is_exclusive(v_s_79_);
if (v_isSharedCheck_401_ == 0)
{
lean_object* v_unused_402_; lean_object* v_unused_403_; 
v_unused_402_ = lean_ctor_get(v_s_79_, 1);
lean_dec(v_unused_402_);
v_unused_403_ = lean_ctor_get(v_s_79_, 0);
lean_dec(v_unused_403_);
v___x_318_ = v_s_79_;
v_isShared_319_ = v_isSharedCheck_401_;
goto v_resetjp_317_;
}
else
{
lean_dec(v_s_79_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_401_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
if (lean_obj_tag(v_tail_85_) == 1)
{
lean_object* v_head_320_; lean_object* v_tail_321_; uint8_t v___x_322_; uint8_t v___x_323_; uint8_t v___x_324_; 
v_head_320_ = lean_ctor_get(v_tail_85_, 0);
v_tail_321_ = lean_ctor_get(v_tail_85_, 1);
lean_inc(v_tail_321_);
v___x_322_ = 117;
v___x_323_ = lean_unbox(v_head_320_);
v___x_324_ = lean_uint8_dec_eq(v___x_323_, v___x_322_);
if (v___x_324_ == 0)
{
lean_object* v___x_325_; lean_object* v___x_327_; 
lean_dec(v_tail_321_);
lean_dec(v_h__1_80_);
v___x_325_ = lean_box(v___x_86_);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 0, v___x_325_);
v___x_327_ = v___x_318_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v___x_325_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v_tail_85_);
v___x_327_ = v_reuseFailAlloc_329_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
lean_object* v___x_328_; 
v___x_328_ = lean_apply_4(v_h__4_83_, v___x_327_, lean_box(0), lean_box(0), lean_box(0));
return v___x_328_;
}
}
else
{
lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_393_; 
v_isSharedCheck_393_ = !lean_is_exclusive(v_tail_85_);
if (v_isSharedCheck_393_ == 0)
{
lean_object* v_unused_394_; lean_object* v_unused_395_; 
v_unused_394_ = lean_ctor_get(v_tail_85_, 1);
lean_dec(v_unused_394_);
v_unused_395_ = lean_ctor_get(v_tail_85_, 0);
lean_dec(v_unused_395_);
v___x_331_ = v_tail_85_;
v_isShared_332_ = v_isSharedCheck_393_;
goto v_resetjp_330_;
}
else
{
lean_dec(v_tail_85_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_393_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
if (lean_obj_tag(v_tail_321_) == 1)
{
lean_object* v_head_333_; lean_object* v_tail_334_; uint8_t v___x_335_; uint8_t v___x_336_; uint8_t v___x_337_; 
v_head_333_ = lean_ctor_get(v_tail_321_, 0);
v_tail_334_ = lean_ctor_get(v_tail_321_, 1);
v___x_335_ = 108;
v___x_336_ = lean_unbox(v_head_333_);
v___x_337_ = lean_uint8_dec_eq(v___x_336_, v___x_335_);
if (v___x_337_ == 0)
{
lean_object* v___x_338_; lean_object* v___x_340_; 
lean_dec(v_h__1_80_);
v___x_338_ = lean_box(v___x_322_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 0, v___x_338_);
v___x_340_ = v___x_331_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v___x_338_);
lean_ctor_set(v_reuseFailAlloc_346_, 1, v_tail_321_);
v___x_340_ = v_reuseFailAlloc_346_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
lean_object* v___x_341_; lean_object* v___x_343_; 
v___x_341_ = lean_box(v___x_86_);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 1, v___x_340_);
lean_ctor_set(v___x_318_, 0, v___x_341_);
v___x_343_ = v___x_318_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v___x_341_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v___x_340_);
v___x_343_ = v_reuseFailAlloc_345_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
lean_object* v___x_344_; 
v___x_344_ = lean_apply_4(v_h__4_83_, v___x_343_, lean_box(0), lean_box(0), lean_box(0));
return v___x_344_;
}
}
}
else
{
lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_381_; 
lean_inc(v_tail_334_);
v_isSharedCheck_381_ = !lean_is_exclusive(v_tail_321_);
if (v_isSharedCheck_381_ == 0)
{
lean_object* v_unused_382_; lean_object* v_unused_383_; 
v_unused_382_ = lean_ctor_get(v_tail_321_, 1);
lean_dec(v_unused_382_);
v_unused_383_ = lean_ctor_get(v_tail_321_, 0);
lean_dec(v_unused_383_);
v___x_348_ = v_tail_321_;
v_isShared_349_ = v_isSharedCheck_381_;
goto v_resetjp_347_;
}
else
{
lean_dec(v_tail_321_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_381_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
if (lean_obj_tag(v_tail_334_) == 1)
{
lean_object* v_head_350_; lean_object* v_tail_351_; uint8_t v___x_352_; uint8_t v___x_353_; 
v_head_350_ = lean_ctor_get(v_tail_334_, 0);
v_tail_351_ = lean_ctor_get(v_tail_334_, 1);
v___x_352_ = lean_unbox(v_head_350_);
v___x_353_ = lean_uint8_dec_eq(v___x_352_, v___x_335_);
if (v___x_353_ == 0)
{
lean_object* v___x_354_; lean_object* v___x_356_; 
lean_dec(v_h__1_80_);
v___x_354_ = lean_box(v___x_335_);
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 0, v___x_354_);
v___x_356_ = v___x_348_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v___x_354_);
lean_ctor_set(v_reuseFailAlloc_366_, 1, v_tail_334_);
v___x_356_ = v_reuseFailAlloc_366_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
lean_object* v___x_357_; lean_object* v___x_359_; 
v___x_357_ = lean_box(v___x_322_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 1, v___x_356_);
lean_ctor_set(v___x_331_, 0, v___x_357_);
v___x_359_ = v___x_331_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v___x_357_);
lean_ctor_set(v_reuseFailAlloc_365_, 1, v___x_356_);
v___x_359_ = v_reuseFailAlloc_365_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
lean_object* v___x_360_; lean_object* v___x_362_; 
v___x_360_ = lean_box(v___x_86_);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 1, v___x_359_);
lean_ctor_set(v___x_318_, 0, v___x_360_);
v___x_362_ = v___x_318_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v___x_360_);
lean_ctor_set(v_reuseFailAlloc_364_, 1, v___x_359_);
v___x_362_ = v_reuseFailAlloc_364_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
lean_object* v___x_363_; 
v___x_363_ = lean_apply_4(v_h__4_83_, v___x_362_, lean_box(0), lean_box(0), lean_box(0));
return v___x_363_;
}
}
}
}
else
{
lean_object* v___x_367_; 
lean_inc(v_tail_351_);
lean_dec_ref_known(v_tail_334_, 2);
lean_del_object(v___x_348_);
lean_del_object(v___x_331_);
lean_del_object(v___x_318_);
lean_dec(v_h__4_83_);
v___x_367_ = lean_apply_1(v_h__1_80_, v_tail_351_);
return v___x_367_;
}
}
else
{
lean_object* v___x_368_; lean_object* v___x_370_; 
lean_dec(v_h__1_80_);
v___x_368_ = lean_box(v___x_335_);
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 0, v___x_368_);
v___x_370_ = v___x_348_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v___x_368_);
lean_ctor_set(v_reuseFailAlloc_380_, 1, v_tail_334_);
v___x_370_ = v_reuseFailAlloc_380_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
lean_object* v___x_371_; lean_object* v___x_373_; 
v___x_371_ = lean_box(v___x_322_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 1, v___x_370_);
lean_ctor_set(v___x_331_, 0, v___x_371_);
v___x_373_ = v___x_331_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v___x_371_);
lean_ctor_set(v_reuseFailAlloc_379_, 1, v___x_370_);
v___x_373_ = v_reuseFailAlloc_379_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
lean_object* v___x_374_; lean_object* v___x_376_; 
v___x_374_ = lean_box(v___x_86_);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 1, v___x_373_);
lean_ctor_set(v___x_318_, 0, v___x_374_);
v___x_376_ = v___x_318_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v___x_374_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v___x_373_);
v___x_376_ = v_reuseFailAlloc_378_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
lean_object* v___x_377_; 
v___x_377_ = lean_apply_4(v_h__4_83_, v___x_376_, lean_box(0), lean_box(0), lean_box(0));
return v___x_377_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_384_; lean_object* v___x_386_; 
lean_dec(v_h__1_80_);
v___x_384_ = lean_box(v___x_322_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 0, v___x_384_);
v___x_386_ = v___x_331_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_384_);
lean_ctor_set(v_reuseFailAlloc_392_, 1, v_tail_321_);
v___x_386_ = v_reuseFailAlloc_392_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
lean_object* v___x_387_; lean_object* v___x_389_; 
v___x_387_ = lean_box(v___x_86_);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 1, v___x_386_);
lean_ctor_set(v___x_318_, 0, v___x_387_);
v___x_389_ = v___x_318_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v___x_387_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v___x_386_);
v___x_389_ = v_reuseFailAlloc_391_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
lean_object* v___x_390_; 
v___x_390_ = lean_apply_4(v_h__4_83_, v___x_389_, lean_box(0), lean_box(0), lean_box(0));
return v___x_390_;
}
}
}
}
}
}
else
{
lean_object* v___x_396_; lean_object* v___x_398_; 
lean_dec(v_h__1_80_);
v___x_396_ = lean_box(v___x_86_);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 0, v___x_396_);
v___x_398_ = v___x_318_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v___x_396_);
lean_ctor_set(v_reuseFailAlloc_400_, 1, v_tail_85_);
v___x_398_ = v_reuseFailAlloc_400_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
lean_object* v___x_399_; 
v___x_399_ = lean_apply_4(v_h__4_83_, v___x_398_, lean_box(0), lean_box(0), lean_box(0));
return v___x_399_;
}
}
}
}
}
else
{
lean_object* v___x_404_; 
lean_dec(v_h__3_82_);
lean_dec(v_h__2_81_);
lean_dec(v_h__1_80_);
v___x_404_ = lean_apply_4(v_h__4_83_, v_s_79_, lean_box(0), lean_box(0), lean_box(0));
return v___x_404_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseScalar_match__5_splitter(lean_object* v_motive_405_, lean_object* v_s_406_, lean_object* v_h__1_407_, lean_object* v_h__2_408_, lean_object* v_h__3_409_, lean_object* v_h__4_410_){
_start:
{
if (lean_obj_tag(v_s_406_) == 1)
{
lean_object* v_head_411_; lean_object* v_tail_412_; uint8_t v___x_413_; uint8_t v___x_414_; uint8_t v___x_415_; 
v_head_411_ = lean_ctor_get(v_s_406_, 0);
v_tail_412_ = lean_ctor_get(v_s_406_, 1);
lean_inc(v_tail_412_);
v___x_413_ = 110;
v___x_414_ = lean_unbox(v_head_411_);
v___x_415_ = lean_uint8_dec_eq(v___x_414_, v___x_413_);
if (v___x_415_ == 0)
{
uint8_t v___x_416_; uint8_t v___x_417_; uint8_t v___x_418_; 
lean_dec(v_h__1_407_);
v___x_416_ = 116;
v___x_417_ = lean_unbox(v_head_411_);
v___x_418_ = lean_uint8_dec_eq(v___x_417_, v___x_416_);
if (v___x_418_ == 0)
{
uint8_t v___x_419_; uint8_t v___x_420_; uint8_t v___x_421_; 
lean_dec(v_h__2_408_);
v___x_419_ = 102;
v___x_420_ = lean_unbox(v_head_411_);
v___x_421_ = lean_uint8_dec_eq(v___x_420_, v___x_419_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; 
lean_dec(v_tail_412_);
lean_dec(v_h__3_409_);
v___x_422_ = lean_apply_4(v_h__4_410_, v_s_406_, lean_box(0), lean_box(0), lean_box(0));
return v___x_422_;
}
else
{
lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_553_; 
v_isSharedCheck_553_ = !lean_is_exclusive(v_s_406_);
if (v_isSharedCheck_553_ == 0)
{
lean_object* v_unused_554_; lean_object* v_unused_555_; 
v_unused_554_ = lean_ctor_get(v_s_406_, 1);
lean_dec(v_unused_554_);
v_unused_555_ = lean_ctor_get(v_s_406_, 0);
lean_dec(v_unused_555_);
v___x_424_ = v_s_406_;
v_isShared_425_ = v_isSharedCheck_553_;
goto v_resetjp_423_;
}
else
{
lean_dec(v_s_406_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_553_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
if (lean_obj_tag(v_tail_412_) == 1)
{
lean_object* v_head_426_; lean_object* v_tail_427_; uint8_t v___x_428_; uint8_t v___x_429_; uint8_t v___x_430_; 
v_head_426_ = lean_ctor_get(v_tail_412_, 0);
v_tail_427_ = lean_ctor_get(v_tail_412_, 1);
lean_inc(v_tail_427_);
v___x_428_ = 97;
v___x_429_ = lean_unbox(v_head_426_);
v___x_430_ = lean_uint8_dec_eq(v___x_429_, v___x_428_);
if (v___x_430_ == 0)
{
lean_object* v___x_431_; lean_object* v___x_433_; 
lean_dec(v_tail_427_);
lean_dec(v_h__3_409_);
v___x_431_ = lean_box(v___x_419_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 0, v___x_431_);
v___x_433_ = v___x_424_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v___x_431_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v_tail_412_);
v___x_433_ = v_reuseFailAlloc_435_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
lean_object* v___x_434_; 
v___x_434_ = lean_apply_4(v_h__4_410_, v___x_433_, lean_box(0), lean_box(0), lean_box(0));
return v___x_434_;
}
}
else
{
lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_545_; 
v_isSharedCheck_545_ = !lean_is_exclusive(v_tail_412_);
if (v_isSharedCheck_545_ == 0)
{
lean_object* v_unused_546_; lean_object* v_unused_547_; 
v_unused_546_ = lean_ctor_get(v_tail_412_, 1);
lean_dec(v_unused_546_);
v_unused_547_ = lean_ctor_get(v_tail_412_, 0);
lean_dec(v_unused_547_);
v___x_437_ = v_tail_412_;
v_isShared_438_ = v_isSharedCheck_545_;
goto v_resetjp_436_;
}
else
{
lean_dec(v_tail_412_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_545_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
if (lean_obj_tag(v_tail_427_) == 1)
{
lean_object* v_head_439_; lean_object* v_tail_440_; uint8_t v___x_441_; uint8_t v___x_442_; uint8_t v___x_443_; 
v_head_439_ = lean_ctor_get(v_tail_427_, 0);
v_tail_440_ = lean_ctor_get(v_tail_427_, 1);
lean_inc(v_tail_440_);
v___x_441_ = 108;
v___x_442_ = lean_unbox(v_head_439_);
v___x_443_ = lean_uint8_dec_eq(v___x_442_, v___x_441_);
if (v___x_443_ == 0)
{
lean_object* v___x_444_; lean_object* v___x_446_; 
lean_dec(v_tail_440_);
lean_dec(v_h__3_409_);
v___x_444_ = lean_box(v___x_428_);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 0, v___x_444_);
v___x_446_ = v___x_437_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v___x_444_);
lean_ctor_set(v_reuseFailAlloc_452_, 1, v_tail_427_);
v___x_446_ = v_reuseFailAlloc_452_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
lean_object* v___x_447_; lean_object* v___x_449_; 
v___x_447_ = lean_box(v___x_419_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 1, v___x_446_);
lean_ctor_set(v___x_424_, 0, v___x_447_);
v___x_449_ = v___x_424_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v___x_447_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v___x_446_);
v___x_449_ = v_reuseFailAlloc_451_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
lean_object* v___x_450_; 
v___x_450_ = lean_apply_4(v_h__4_410_, v___x_449_, lean_box(0), lean_box(0), lean_box(0));
return v___x_450_;
}
}
}
else
{
lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_533_; 
v_isSharedCheck_533_ = !lean_is_exclusive(v_tail_427_);
if (v_isSharedCheck_533_ == 0)
{
lean_object* v_unused_534_; lean_object* v_unused_535_; 
v_unused_534_ = lean_ctor_get(v_tail_427_, 1);
lean_dec(v_unused_534_);
v_unused_535_ = lean_ctor_get(v_tail_427_, 0);
lean_dec(v_unused_535_);
v___x_454_ = v_tail_427_;
v_isShared_455_ = v_isSharedCheck_533_;
goto v_resetjp_453_;
}
else
{
lean_dec(v_tail_427_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_533_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
if (lean_obj_tag(v_tail_440_) == 1)
{
lean_object* v_head_456_; lean_object* v_tail_457_; uint8_t v___x_458_; uint8_t v___x_459_; uint8_t v___x_460_; 
v_head_456_ = lean_ctor_get(v_tail_440_, 0);
v_tail_457_ = lean_ctor_get(v_tail_440_, 1);
v___x_458_ = 115;
v___x_459_ = lean_unbox(v_head_456_);
v___x_460_ = lean_uint8_dec_eq(v___x_459_, v___x_458_);
if (v___x_460_ == 0)
{
lean_object* v___x_461_; lean_object* v___x_463_; 
lean_dec(v_h__3_409_);
v___x_461_ = lean_box(v___x_441_);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 0, v___x_461_);
v___x_463_ = v___x_454_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v___x_461_);
lean_ctor_set(v_reuseFailAlloc_473_, 1, v_tail_440_);
v___x_463_ = v_reuseFailAlloc_473_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
lean_object* v___x_464_; lean_object* v___x_466_; 
v___x_464_ = lean_box(v___x_428_);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 1, v___x_463_);
lean_ctor_set(v___x_437_, 0, v___x_464_);
v___x_466_ = v___x_437_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v___x_464_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v___x_463_);
v___x_466_ = v_reuseFailAlloc_472_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
lean_object* v___x_467_; lean_object* v___x_469_; 
v___x_467_ = lean_box(v___x_419_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 1, v___x_466_);
lean_ctor_set(v___x_424_, 0, v___x_467_);
v___x_469_ = v___x_424_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v___x_467_);
lean_ctor_set(v_reuseFailAlloc_471_, 1, v___x_466_);
v___x_469_ = v_reuseFailAlloc_471_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
lean_object* v___x_470_; 
v___x_470_ = lean_apply_4(v_h__4_410_, v___x_469_, lean_box(0), lean_box(0), lean_box(0));
return v___x_470_;
}
}
}
}
else
{
lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_517_; 
lean_inc(v_tail_457_);
v_isSharedCheck_517_ = !lean_is_exclusive(v_tail_440_);
if (v_isSharedCheck_517_ == 0)
{
lean_object* v_unused_518_; lean_object* v_unused_519_; 
v_unused_518_ = lean_ctor_get(v_tail_440_, 1);
lean_dec(v_unused_518_);
v_unused_519_ = lean_ctor_get(v_tail_440_, 0);
lean_dec(v_unused_519_);
v___x_475_ = v_tail_440_;
v_isShared_476_ = v_isSharedCheck_517_;
goto v_resetjp_474_;
}
else
{
lean_dec(v_tail_440_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_517_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
if (lean_obj_tag(v_tail_457_) == 1)
{
lean_object* v_head_477_; lean_object* v_tail_478_; uint8_t v___x_479_; uint8_t v___x_480_; uint8_t v___x_481_; 
v_head_477_ = lean_ctor_get(v_tail_457_, 0);
v_tail_478_ = lean_ctor_get(v_tail_457_, 1);
v___x_479_ = 101;
v___x_480_ = lean_unbox(v_head_477_);
v___x_481_ = lean_uint8_dec_eq(v___x_480_, v___x_479_);
if (v___x_481_ == 0)
{
lean_object* v___x_482_; lean_object* v___x_484_; 
lean_dec(v_h__3_409_);
v___x_482_ = lean_box(v___x_458_);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 0, v___x_482_);
v___x_484_ = v___x_475_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v___x_482_);
lean_ctor_set(v_reuseFailAlloc_498_, 1, v_tail_457_);
v___x_484_ = v_reuseFailAlloc_498_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
lean_object* v___x_485_; lean_object* v___x_487_; 
v___x_485_ = lean_box(v___x_441_);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 1, v___x_484_);
lean_ctor_set(v___x_454_, 0, v___x_485_);
v___x_487_ = v___x_454_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v___x_485_);
lean_ctor_set(v_reuseFailAlloc_497_, 1, v___x_484_);
v___x_487_ = v_reuseFailAlloc_497_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
lean_object* v___x_488_; lean_object* v___x_490_; 
v___x_488_ = lean_box(v___x_428_);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 1, v___x_487_);
lean_ctor_set(v___x_437_, 0, v___x_488_);
v___x_490_ = v___x_437_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_488_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v___x_487_);
v___x_490_ = v_reuseFailAlloc_496_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
lean_object* v___x_491_; lean_object* v___x_493_; 
v___x_491_ = lean_box(v___x_419_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 1, v___x_490_);
lean_ctor_set(v___x_424_, 0, v___x_491_);
v___x_493_ = v___x_424_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v___x_491_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v___x_490_);
v___x_493_ = v_reuseFailAlloc_495_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
lean_object* v___x_494_; 
v___x_494_ = lean_apply_4(v_h__4_410_, v___x_493_, lean_box(0), lean_box(0), lean_box(0));
return v___x_494_;
}
}
}
}
}
else
{
lean_object* v___x_499_; 
lean_inc(v_tail_478_);
lean_dec_ref_known(v_tail_457_, 2);
lean_del_object(v___x_475_);
lean_del_object(v___x_454_);
lean_del_object(v___x_437_);
lean_del_object(v___x_424_);
lean_dec(v_h__4_410_);
v___x_499_ = lean_apply_1(v_h__3_409_, v_tail_478_);
return v___x_499_;
}
}
else
{
lean_object* v___x_500_; lean_object* v___x_502_; 
lean_dec(v_h__3_409_);
v___x_500_ = lean_box(v___x_458_);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 0, v___x_500_);
v___x_502_ = v___x_475_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v___x_500_);
lean_ctor_set(v_reuseFailAlloc_516_, 1, v_tail_457_);
v___x_502_ = v_reuseFailAlloc_516_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
lean_object* v___x_503_; lean_object* v___x_505_; 
v___x_503_ = lean_box(v___x_441_);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 1, v___x_502_);
lean_ctor_set(v___x_454_, 0, v___x_503_);
v___x_505_ = v___x_454_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v___x_503_);
lean_ctor_set(v_reuseFailAlloc_515_, 1, v___x_502_);
v___x_505_ = v_reuseFailAlloc_515_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
lean_object* v___x_506_; lean_object* v___x_508_; 
v___x_506_ = lean_box(v___x_428_);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 1, v___x_505_);
lean_ctor_set(v___x_437_, 0, v___x_506_);
v___x_508_ = v___x_437_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v___x_506_);
lean_ctor_set(v_reuseFailAlloc_514_, 1, v___x_505_);
v___x_508_ = v_reuseFailAlloc_514_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
lean_object* v___x_509_; lean_object* v___x_511_; 
v___x_509_ = lean_box(v___x_419_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 1, v___x_508_);
lean_ctor_set(v___x_424_, 0, v___x_509_);
v___x_511_ = v___x_424_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___x_509_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v___x_508_);
v___x_511_ = v_reuseFailAlloc_513_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
lean_object* v___x_512_; 
v___x_512_ = lean_apply_4(v_h__4_410_, v___x_511_, lean_box(0), lean_box(0), lean_box(0));
return v___x_512_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_520_; lean_object* v___x_522_; 
lean_dec(v_h__3_409_);
v___x_520_ = lean_box(v___x_441_);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 0, v___x_520_);
v___x_522_ = v___x_454_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v___x_520_);
lean_ctor_set(v_reuseFailAlloc_532_, 1, v_tail_440_);
v___x_522_ = v_reuseFailAlloc_532_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
lean_object* v___x_523_; lean_object* v___x_525_; 
v___x_523_ = lean_box(v___x_428_);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 1, v___x_522_);
lean_ctor_set(v___x_437_, 0, v___x_523_);
v___x_525_ = v___x_437_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_523_);
lean_ctor_set(v_reuseFailAlloc_531_, 1, v___x_522_);
v___x_525_ = v_reuseFailAlloc_531_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
lean_object* v___x_526_; lean_object* v___x_528_; 
v___x_526_ = lean_box(v___x_419_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 1, v___x_525_);
lean_ctor_set(v___x_424_, 0, v___x_526_);
v___x_528_ = v___x_424_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_526_);
lean_ctor_set(v_reuseFailAlloc_530_, 1, v___x_525_);
v___x_528_ = v_reuseFailAlloc_530_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
lean_object* v___x_529_; 
v___x_529_ = lean_apply_4(v_h__4_410_, v___x_528_, lean_box(0), lean_box(0), lean_box(0));
return v___x_529_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_536_; lean_object* v___x_538_; 
lean_dec(v_h__3_409_);
v___x_536_ = lean_box(v___x_428_);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 0, v___x_536_);
v___x_538_ = v___x_437_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_536_);
lean_ctor_set(v_reuseFailAlloc_544_, 1, v_tail_427_);
v___x_538_ = v_reuseFailAlloc_544_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
lean_object* v___x_539_; lean_object* v___x_541_; 
v___x_539_ = lean_box(v___x_419_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 1, v___x_538_);
lean_ctor_set(v___x_424_, 0, v___x_539_);
v___x_541_ = v___x_424_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v___x_539_);
lean_ctor_set(v_reuseFailAlloc_543_, 1, v___x_538_);
v___x_541_ = v_reuseFailAlloc_543_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_542_; 
v___x_542_ = lean_apply_4(v_h__4_410_, v___x_541_, lean_box(0), lean_box(0), lean_box(0));
return v___x_542_;
}
}
}
}
}
}
else
{
lean_object* v___x_548_; lean_object* v___x_550_; 
lean_dec(v_h__3_409_);
v___x_548_ = lean_box(v___x_419_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 0, v___x_548_);
v___x_550_ = v___x_424_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v___x_548_);
lean_ctor_set(v_reuseFailAlloc_552_, 1, v_tail_412_);
v___x_550_ = v_reuseFailAlloc_552_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
lean_object* v___x_551_; 
v___x_551_ = lean_apply_4(v_h__4_410_, v___x_550_, lean_box(0), lean_box(0), lean_box(0));
return v___x_551_;
}
}
}
}
}
else
{
lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_641_; 
lean_dec(v_h__3_409_);
v_isSharedCheck_641_ = !lean_is_exclusive(v_s_406_);
if (v_isSharedCheck_641_ == 0)
{
lean_object* v_unused_642_; lean_object* v_unused_643_; 
v_unused_642_ = lean_ctor_get(v_s_406_, 1);
lean_dec(v_unused_642_);
v_unused_643_ = lean_ctor_get(v_s_406_, 0);
lean_dec(v_unused_643_);
v___x_557_ = v_s_406_;
v_isShared_558_ = v_isSharedCheck_641_;
goto v_resetjp_556_;
}
else
{
lean_dec(v_s_406_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_641_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
if (lean_obj_tag(v_tail_412_) == 1)
{
lean_object* v_head_559_; lean_object* v_tail_560_; uint8_t v___x_561_; uint8_t v___x_562_; uint8_t v___x_563_; 
v_head_559_ = lean_ctor_get(v_tail_412_, 0);
v_tail_560_ = lean_ctor_get(v_tail_412_, 1);
lean_inc(v_tail_560_);
v___x_561_ = 114;
v___x_562_ = lean_unbox(v_head_559_);
v___x_563_ = lean_uint8_dec_eq(v___x_562_, v___x_561_);
if (v___x_563_ == 0)
{
lean_object* v___x_564_; lean_object* v___x_566_; 
lean_dec(v_tail_560_);
lean_dec(v_h__2_408_);
v___x_564_ = lean_box(v___x_416_);
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 0, v___x_564_);
v___x_566_ = v___x_557_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v___x_564_);
lean_ctor_set(v_reuseFailAlloc_568_, 1, v_tail_412_);
v___x_566_ = v_reuseFailAlloc_568_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
lean_object* v___x_567_; 
v___x_567_ = lean_apply_4(v_h__4_410_, v___x_566_, lean_box(0), lean_box(0), lean_box(0));
return v___x_567_;
}
}
else
{
lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_633_; 
v_isSharedCheck_633_ = !lean_is_exclusive(v_tail_412_);
if (v_isSharedCheck_633_ == 0)
{
lean_object* v_unused_634_; lean_object* v_unused_635_; 
v_unused_634_ = lean_ctor_get(v_tail_412_, 1);
lean_dec(v_unused_634_);
v_unused_635_ = lean_ctor_get(v_tail_412_, 0);
lean_dec(v_unused_635_);
v___x_570_ = v_tail_412_;
v_isShared_571_ = v_isSharedCheck_633_;
goto v_resetjp_569_;
}
else
{
lean_dec(v_tail_412_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_633_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
if (lean_obj_tag(v_tail_560_) == 1)
{
lean_object* v_head_572_; lean_object* v_tail_573_; uint8_t v___x_574_; uint8_t v___x_575_; uint8_t v___x_576_; 
v_head_572_ = lean_ctor_get(v_tail_560_, 0);
v_tail_573_ = lean_ctor_get(v_tail_560_, 1);
v___x_574_ = 117;
v___x_575_ = lean_unbox(v_head_572_);
v___x_576_ = lean_uint8_dec_eq(v___x_575_, v___x_574_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; lean_object* v___x_579_; 
lean_dec(v_h__2_408_);
v___x_577_ = lean_box(v___x_561_);
if (v_isShared_571_ == 0)
{
lean_ctor_set(v___x_570_, 0, v___x_577_);
v___x_579_ = v___x_570_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v___x_577_);
lean_ctor_set(v_reuseFailAlloc_585_, 1, v_tail_560_);
v___x_579_ = v_reuseFailAlloc_585_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
lean_object* v___x_580_; lean_object* v___x_582_; 
v___x_580_ = lean_box(v___x_416_);
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 1, v___x_579_);
lean_ctor_set(v___x_557_, 0, v___x_580_);
v___x_582_ = v___x_557_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v___x_580_);
lean_ctor_set(v_reuseFailAlloc_584_, 1, v___x_579_);
v___x_582_ = v_reuseFailAlloc_584_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
lean_object* v___x_583_; 
v___x_583_ = lean_apply_4(v_h__4_410_, v___x_582_, lean_box(0), lean_box(0), lean_box(0));
return v___x_583_;
}
}
}
else
{
lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_621_; 
lean_inc(v_tail_573_);
v_isSharedCheck_621_ = !lean_is_exclusive(v_tail_560_);
if (v_isSharedCheck_621_ == 0)
{
lean_object* v_unused_622_; lean_object* v_unused_623_; 
v_unused_622_ = lean_ctor_get(v_tail_560_, 1);
lean_dec(v_unused_622_);
v_unused_623_ = lean_ctor_get(v_tail_560_, 0);
lean_dec(v_unused_623_);
v___x_587_ = v_tail_560_;
v_isShared_588_ = v_isSharedCheck_621_;
goto v_resetjp_586_;
}
else
{
lean_dec(v_tail_560_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_621_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
if (lean_obj_tag(v_tail_573_) == 1)
{
lean_object* v_head_589_; lean_object* v_tail_590_; uint8_t v___x_591_; uint8_t v___x_592_; uint8_t v___x_593_; 
v_head_589_ = lean_ctor_get(v_tail_573_, 0);
v_tail_590_ = lean_ctor_get(v_tail_573_, 1);
v___x_591_ = 101;
v___x_592_ = lean_unbox(v_head_589_);
v___x_593_ = lean_uint8_dec_eq(v___x_592_, v___x_591_);
if (v___x_593_ == 0)
{
lean_object* v___x_594_; lean_object* v___x_596_; 
lean_dec(v_h__2_408_);
v___x_594_ = lean_box(v___x_574_);
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 0, v___x_594_);
v___x_596_ = v___x_587_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v___x_594_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v_tail_573_);
v___x_596_ = v_reuseFailAlloc_606_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
lean_object* v___x_597_; lean_object* v___x_599_; 
v___x_597_ = lean_box(v___x_561_);
if (v_isShared_571_ == 0)
{
lean_ctor_set(v___x_570_, 1, v___x_596_);
lean_ctor_set(v___x_570_, 0, v___x_597_);
v___x_599_ = v___x_570_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v___x_597_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v___x_596_);
v___x_599_ = v_reuseFailAlloc_605_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
lean_object* v___x_600_; lean_object* v___x_602_; 
v___x_600_ = lean_box(v___x_416_);
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 1, v___x_599_);
lean_ctor_set(v___x_557_, 0, v___x_600_);
v___x_602_ = v___x_557_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_600_);
lean_ctor_set(v_reuseFailAlloc_604_, 1, v___x_599_);
v___x_602_ = v_reuseFailAlloc_604_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
lean_object* v___x_603_; 
v___x_603_ = lean_apply_4(v_h__4_410_, v___x_602_, lean_box(0), lean_box(0), lean_box(0));
return v___x_603_;
}
}
}
}
else
{
lean_object* v___x_607_; 
lean_inc(v_tail_590_);
lean_dec_ref_known(v_tail_573_, 2);
lean_del_object(v___x_587_);
lean_del_object(v___x_570_);
lean_del_object(v___x_557_);
lean_dec(v_h__4_410_);
v___x_607_ = lean_apply_1(v_h__2_408_, v_tail_590_);
return v___x_607_;
}
}
else
{
lean_object* v___x_608_; lean_object* v___x_610_; 
lean_dec(v_h__2_408_);
v___x_608_ = lean_box(v___x_574_);
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 0, v___x_608_);
v___x_610_ = v___x_587_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v___x_608_);
lean_ctor_set(v_reuseFailAlloc_620_, 1, v_tail_573_);
v___x_610_ = v_reuseFailAlloc_620_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
lean_object* v___x_611_; lean_object* v___x_613_; 
v___x_611_ = lean_box(v___x_561_);
if (v_isShared_571_ == 0)
{
lean_ctor_set(v___x_570_, 1, v___x_610_);
lean_ctor_set(v___x_570_, 0, v___x_611_);
v___x_613_ = v___x_570_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v___x_611_);
lean_ctor_set(v_reuseFailAlloc_619_, 1, v___x_610_);
v___x_613_ = v_reuseFailAlloc_619_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
lean_object* v___x_614_; lean_object* v___x_616_; 
v___x_614_ = lean_box(v___x_416_);
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 1, v___x_613_);
lean_ctor_set(v___x_557_, 0, v___x_614_);
v___x_616_ = v___x_557_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v___x_614_);
lean_ctor_set(v_reuseFailAlloc_618_, 1, v___x_613_);
v___x_616_ = v_reuseFailAlloc_618_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
lean_object* v___x_617_; 
v___x_617_ = lean_apply_4(v_h__4_410_, v___x_616_, lean_box(0), lean_box(0), lean_box(0));
return v___x_617_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_624_; lean_object* v___x_626_; 
lean_dec(v_h__2_408_);
v___x_624_ = lean_box(v___x_561_);
if (v_isShared_571_ == 0)
{
lean_ctor_set(v___x_570_, 0, v___x_624_);
v___x_626_ = v___x_570_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v___x_624_);
lean_ctor_set(v_reuseFailAlloc_632_, 1, v_tail_560_);
v___x_626_ = v_reuseFailAlloc_632_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
lean_object* v___x_627_; lean_object* v___x_629_; 
v___x_627_ = lean_box(v___x_416_);
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 1, v___x_626_);
lean_ctor_set(v___x_557_, 0, v___x_627_);
v___x_629_ = v___x_557_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v___x_627_);
lean_ctor_set(v_reuseFailAlloc_631_, 1, v___x_626_);
v___x_629_ = v_reuseFailAlloc_631_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
lean_object* v___x_630_; 
v___x_630_ = lean_apply_4(v_h__4_410_, v___x_629_, lean_box(0), lean_box(0), lean_box(0));
return v___x_630_;
}
}
}
}
}
}
else
{
lean_object* v___x_636_; lean_object* v___x_638_; 
lean_dec(v_h__2_408_);
v___x_636_ = lean_box(v___x_416_);
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 0, v___x_636_);
v___x_638_ = v___x_557_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v___x_636_);
lean_ctor_set(v_reuseFailAlloc_640_, 1, v_tail_412_);
v___x_638_ = v_reuseFailAlloc_640_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
lean_object* v___x_639_; 
v___x_639_ = lean_apply_4(v_h__4_410_, v___x_638_, lean_box(0), lean_box(0), lean_box(0));
return v___x_639_;
}
}
}
}
}
else
{
lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_728_; 
lean_dec(v_h__3_409_);
lean_dec(v_h__2_408_);
v_isSharedCheck_728_ = !lean_is_exclusive(v_s_406_);
if (v_isSharedCheck_728_ == 0)
{
lean_object* v_unused_729_; lean_object* v_unused_730_; 
v_unused_729_ = lean_ctor_get(v_s_406_, 1);
lean_dec(v_unused_729_);
v_unused_730_ = lean_ctor_get(v_s_406_, 0);
lean_dec(v_unused_730_);
v___x_645_ = v_s_406_;
v_isShared_646_ = v_isSharedCheck_728_;
goto v_resetjp_644_;
}
else
{
lean_dec(v_s_406_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_728_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
if (lean_obj_tag(v_tail_412_) == 1)
{
lean_object* v_head_647_; lean_object* v_tail_648_; uint8_t v___x_649_; uint8_t v___x_650_; uint8_t v___x_651_; 
v_head_647_ = lean_ctor_get(v_tail_412_, 0);
v_tail_648_ = lean_ctor_get(v_tail_412_, 1);
lean_inc(v_tail_648_);
v___x_649_ = 117;
v___x_650_ = lean_unbox(v_head_647_);
v___x_651_ = lean_uint8_dec_eq(v___x_650_, v___x_649_);
if (v___x_651_ == 0)
{
lean_object* v___x_652_; lean_object* v___x_654_; 
lean_dec(v_tail_648_);
lean_dec(v_h__1_407_);
v___x_652_ = lean_box(v___x_413_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 0, v___x_652_);
v___x_654_ = v___x_645_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v___x_652_);
lean_ctor_set(v_reuseFailAlloc_656_, 1, v_tail_412_);
v___x_654_ = v_reuseFailAlloc_656_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
lean_object* v___x_655_; 
v___x_655_ = lean_apply_4(v_h__4_410_, v___x_654_, lean_box(0), lean_box(0), lean_box(0));
return v___x_655_;
}
}
else
{
lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_720_; 
v_isSharedCheck_720_ = !lean_is_exclusive(v_tail_412_);
if (v_isSharedCheck_720_ == 0)
{
lean_object* v_unused_721_; lean_object* v_unused_722_; 
v_unused_721_ = lean_ctor_get(v_tail_412_, 1);
lean_dec(v_unused_721_);
v_unused_722_ = lean_ctor_get(v_tail_412_, 0);
lean_dec(v_unused_722_);
v___x_658_ = v_tail_412_;
v_isShared_659_ = v_isSharedCheck_720_;
goto v_resetjp_657_;
}
else
{
lean_dec(v_tail_412_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_720_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
if (lean_obj_tag(v_tail_648_) == 1)
{
lean_object* v_head_660_; lean_object* v_tail_661_; uint8_t v___x_662_; uint8_t v___x_663_; uint8_t v___x_664_; 
v_head_660_ = lean_ctor_get(v_tail_648_, 0);
v_tail_661_ = lean_ctor_get(v_tail_648_, 1);
v___x_662_ = 108;
v___x_663_ = lean_unbox(v_head_660_);
v___x_664_ = lean_uint8_dec_eq(v___x_663_, v___x_662_);
if (v___x_664_ == 0)
{
lean_object* v___x_665_; lean_object* v___x_667_; 
lean_dec(v_h__1_407_);
v___x_665_ = lean_box(v___x_649_);
if (v_isShared_659_ == 0)
{
lean_ctor_set(v___x_658_, 0, v___x_665_);
v___x_667_ = v___x_658_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v___x_665_);
lean_ctor_set(v_reuseFailAlloc_673_, 1, v_tail_648_);
v___x_667_ = v_reuseFailAlloc_673_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
lean_object* v___x_668_; lean_object* v___x_670_; 
v___x_668_ = lean_box(v___x_413_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 1, v___x_667_);
lean_ctor_set(v___x_645_, 0, v___x_668_);
v___x_670_ = v___x_645_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v___x_668_);
lean_ctor_set(v_reuseFailAlloc_672_, 1, v___x_667_);
v___x_670_ = v_reuseFailAlloc_672_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
lean_object* v___x_671_; 
v___x_671_ = lean_apply_4(v_h__4_410_, v___x_670_, lean_box(0), lean_box(0), lean_box(0));
return v___x_671_;
}
}
}
else
{
lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_708_; 
lean_inc(v_tail_661_);
v_isSharedCheck_708_ = !lean_is_exclusive(v_tail_648_);
if (v_isSharedCheck_708_ == 0)
{
lean_object* v_unused_709_; lean_object* v_unused_710_; 
v_unused_709_ = lean_ctor_get(v_tail_648_, 1);
lean_dec(v_unused_709_);
v_unused_710_ = lean_ctor_get(v_tail_648_, 0);
lean_dec(v_unused_710_);
v___x_675_ = v_tail_648_;
v_isShared_676_ = v_isSharedCheck_708_;
goto v_resetjp_674_;
}
else
{
lean_dec(v_tail_648_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_708_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
if (lean_obj_tag(v_tail_661_) == 1)
{
lean_object* v_head_677_; lean_object* v_tail_678_; uint8_t v___x_679_; uint8_t v___x_680_; 
v_head_677_ = lean_ctor_get(v_tail_661_, 0);
v_tail_678_ = lean_ctor_get(v_tail_661_, 1);
v___x_679_ = lean_unbox(v_head_677_);
v___x_680_ = lean_uint8_dec_eq(v___x_679_, v___x_662_);
if (v___x_680_ == 0)
{
lean_object* v___x_681_; lean_object* v___x_683_; 
lean_dec(v_h__1_407_);
v___x_681_ = lean_box(v___x_662_);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 0, v___x_681_);
v___x_683_ = v___x_675_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v___x_681_);
lean_ctor_set(v_reuseFailAlloc_693_, 1, v_tail_661_);
v___x_683_ = v_reuseFailAlloc_693_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
lean_object* v___x_684_; lean_object* v___x_686_; 
v___x_684_ = lean_box(v___x_649_);
if (v_isShared_659_ == 0)
{
lean_ctor_set(v___x_658_, 1, v___x_683_);
lean_ctor_set(v___x_658_, 0, v___x_684_);
v___x_686_ = v___x_658_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v___x_684_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v___x_683_);
v___x_686_ = v_reuseFailAlloc_692_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
lean_object* v___x_687_; lean_object* v___x_689_; 
v___x_687_ = lean_box(v___x_413_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 1, v___x_686_);
lean_ctor_set(v___x_645_, 0, v___x_687_);
v___x_689_ = v___x_645_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v___x_687_);
lean_ctor_set(v_reuseFailAlloc_691_, 1, v___x_686_);
v___x_689_ = v_reuseFailAlloc_691_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
lean_object* v___x_690_; 
v___x_690_ = lean_apply_4(v_h__4_410_, v___x_689_, lean_box(0), lean_box(0), lean_box(0));
return v___x_690_;
}
}
}
}
else
{
lean_object* v___x_694_; 
lean_inc(v_tail_678_);
lean_dec_ref_known(v_tail_661_, 2);
lean_del_object(v___x_675_);
lean_del_object(v___x_658_);
lean_del_object(v___x_645_);
lean_dec(v_h__4_410_);
v___x_694_ = lean_apply_1(v_h__1_407_, v_tail_678_);
return v___x_694_;
}
}
else
{
lean_object* v___x_695_; lean_object* v___x_697_; 
lean_dec(v_h__1_407_);
v___x_695_ = lean_box(v___x_662_);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 0, v___x_695_);
v___x_697_ = v___x_675_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v___x_695_);
lean_ctor_set(v_reuseFailAlloc_707_, 1, v_tail_661_);
v___x_697_ = v_reuseFailAlloc_707_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
lean_object* v___x_698_; lean_object* v___x_700_; 
v___x_698_ = lean_box(v___x_649_);
if (v_isShared_659_ == 0)
{
lean_ctor_set(v___x_658_, 1, v___x_697_);
lean_ctor_set(v___x_658_, 0, v___x_698_);
v___x_700_ = v___x_658_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v___x_698_);
lean_ctor_set(v_reuseFailAlloc_706_, 1, v___x_697_);
v___x_700_ = v_reuseFailAlloc_706_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
lean_object* v___x_701_; lean_object* v___x_703_; 
v___x_701_ = lean_box(v___x_413_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 1, v___x_700_);
lean_ctor_set(v___x_645_, 0, v___x_701_);
v___x_703_ = v___x_645_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v___x_701_);
lean_ctor_set(v_reuseFailAlloc_705_, 1, v___x_700_);
v___x_703_ = v_reuseFailAlloc_705_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
lean_object* v___x_704_; 
v___x_704_ = lean_apply_4(v_h__4_410_, v___x_703_, lean_box(0), lean_box(0), lean_box(0));
return v___x_704_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_711_; lean_object* v___x_713_; 
lean_dec(v_h__1_407_);
v___x_711_ = lean_box(v___x_649_);
if (v_isShared_659_ == 0)
{
lean_ctor_set(v___x_658_, 0, v___x_711_);
v___x_713_ = v___x_658_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v___x_711_);
lean_ctor_set(v_reuseFailAlloc_719_, 1, v_tail_648_);
v___x_713_ = v_reuseFailAlloc_719_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
lean_object* v___x_714_; lean_object* v___x_716_; 
v___x_714_ = lean_box(v___x_413_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 1, v___x_713_);
lean_ctor_set(v___x_645_, 0, v___x_714_);
v___x_716_ = v___x_645_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v___x_714_);
lean_ctor_set(v_reuseFailAlloc_718_, 1, v___x_713_);
v___x_716_ = v_reuseFailAlloc_718_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
lean_object* v___x_717_; 
v___x_717_ = lean_apply_4(v_h__4_410_, v___x_716_, lean_box(0), lean_box(0), lean_box(0));
return v___x_717_;
}
}
}
}
}
}
else
{
lean_object* v___x_723_; lean_object* v___x_725_; 
lean_dec(v_h__1_407_);
v___x_723_ = lean_box(v___x_413_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 0, v___x_723_);
v___x_725_ = v___x_645_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v___x_723_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v_tail_412_);
v___x_725_ = v_reuseFailAlloc_727_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
lean_object* v___x_726_; 
v___x_726_ = lean_apply_4(v_h__4_410_, v___x_725_, lean_box(0), lean_box(0), lean_box(0));
return v___x_726_;
}
}
}
}
}
else
{
lean_object* v___x_731_; 
lean_dec(v_h__3_409_);
lean_dec(v_h__2_408_);
lean_dec(v_h__1_407_);
v___x_731_ = lean_apply_4(v_h__4_410_, v_s_406_, lean_box(0), lean_box(0), lean_box(0));
return v___x_731_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_JSON_depth_match__1_splitter___redArg(lean_object* v_x_732_, lean_object* v_h__1_733_, lean_object* v_h__2_734_, lean_object* v_h__3_735_){
_start:
{
switch(lean_obj_tag(v_x_732_))
{
case 4:
{
lean_object* v_xs_736_; lean_object* v___x_737_; 
lean_dec(v_h__3_735_);
lean_dec(v_h__2_734_);
v_xs_736_ = lean_ctor_get(v_x_732_, 0);
lean_inc(v_xs_736_);
lean_dec_ref_known(v_x_732_, 1);
v___x_737_ = lean_apply_1(v_h__1_733_, v_xs_736_);
return v___x_737_;
}
case 5:
{
lean_object* v_kvs_738_; lean_object* v___x_739_; 
lean_dec(v_h__3_735_);
lean_dec(v_h__1_733_);
v_kvs_738_ = lean_ctor_get(v_x_732_, 0);
lean_inc(v_kvs_738_);
lean_dec_ref_known(v_x_732_, 1);
v___x_739_ = lean_apply_1(v_h__2_734_, v_kvs_738_);
return v___x_739_;
}
default: 
{
lean_object* v___x_740_; 
lean_dec(v_h__2_734_);
lean_dec(v_h__1_733_);
v___x_740_ = lean_apply_3(v_h__3_735_, v_x_732_, lean_box(0), lean_box(0));
return v___x_740_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_JSON_depth_match__1_splitter(lean_object* v_motive_741_, lean_object* v_x_742_, lean_object* v_h__1_743_, lean_object* v_h__2_744_, lean_object* v_h__3_745_){
_start:
{
switch(lean_obj_tag(v_x_742_))
{
case 4:
{
lean_object* v_xs_746_; lean_object* v___x_747_; 
lean_dec(v_h__3_745_);
lean_dec(v_h__2_744_);
v_xs_746_ = lean_ctor_get(v_x_742_, 0);
lean_inc(v_xs_746_);
lean_dec_ref_known(v_x_742_, 1);
v___x_747_ = lean_apply_1(v_h__1_743_, v_xs_746_);
return v___x_747_;
}
case 5:
{
lean_object* v_kvs_748_; lean_object* v___x_749_; 
lean_dec(v_h__3_745_);
lean_dec(v_h__1_743_);
v_kvs_748_ = lean_ctor_get(v_x_742_, 0);
lean_inc(v_kvs_748_);
lean_dec_ref_known(v_x_742_, 1);
v___x_749_ = lean_apply_1(v_h__2_744_, v_kvs_748_);
return v___x_749_;
}
default: 
{
lean_object* v___x_750_; 
lean_dec(v_h__2_744_);
lean_dec(v_h__1_743_);
v___x_750_ = lean_apply_3(v_h__3_745_, v_x_742_, lean_box(0), lean_box(0));
return v___x_750_;
}
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseValue_match__1_splitter___redArg(lean_object* v_x_751_, lean_object* v_h__1_752_, lean_object* v_h__2_753_){
_start:
{
if (lean_obj_tag(v_x_751_) == 0)
{
lean_object* v___x_754_; lean_object* v___x_755_; 
lean_dec(v_h__2_753_);
v___x_754_ = lean_box(0);
v___x_755_ = lean_apply_1(v_h__1_752_, v___x_754_);
return v___x_755_;
}
else
{
lean_object* v_val_756_; lean_object* v_fst_757_; lean_object* v_snd_758_; lean_object* v___x_759_; 
lean_dec(v_h__1_752_);
v_val_756_ = lean_ctor_get(v_x_751_, 0);
lean_inc(v_val_756_);
lean_dec_ref_known(v_x_751_, 1);
v_fst_757_ = lean_ctor_get(v_val_756_, 0);
lean_inc(v_fst_757_);
v_snd_758_ = lean_ctor_get(v_val_756_, 1);
lean_inc(v_snd_758_);
lean_dec(v_val_756_);
v___x_759_ = lean_apply_2(v_h__2_753_, v_fst_757_, v_snd_758_);
return v___x_759_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseValue_match__1_splitter(lean_object* v_motive_760_, lean_object* v_x_761_, lean_object* v_h__1_762_, lean_object* v_h__2_763_){
_start:
{
if (lean_obj_tag(v_x_761_) == 0)
{
lean_object* v___x_764_; lean_object* v___x_765_; 
lean_dec(v_h__2_763_);
v___x_764_ = lean_box(0);
v___x_765_ = lean_apply_1(v_h__1_762_, v___x_764_);
return v___x_765_;
}
else
{
lean_object* v_val_766_; lean_object* v_fst_767_; lean_object* v_snd_768_; lean_object* v___x_769_; 
lean_dec(v_h__1_762_);
v_val_766_ = lean_ctor_get(v_x_761_, 0);
lean_inc(v_val_766_);
lean_dec_ref_known(v_x_761_, 1);
v_fst_767_ = lean_ctor_get(v_val_766_, 0);
lean_inc(v_fst_767_);
v_snd_768_ = lean_ctor_get(v_val_766_, 1);
lean_inc(v_snd_768_);
lean_dec(v_val_766_);
v___x_769_ = lean_apply_2(v_h__2_763_, v_fst_767_, v_snd_768_);
return v___x_769_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseValue_match__3_splitter___redArg(lean_object* v_x_770_, lean_object* v_h__1_771_, lean_object* v_h__2_772_){
_start:
{
if (lean_obj_tag(v_x_770_) == 0)
{
lean_object* v___x_773_; lean_object* v___x_774_; 
lean_dec(v_h__2_772_);
v___x_773_ = lean_box(0);
v___x_774_ = lean_apply_1(v_h__1_771_, v___x_773_);
return v___x_774_;
}
else
{
lean_object* v_val_775_; lean_object* v_fst_776_; lean_object* v_snd_777_; lean_object* v___x_778_; 
lean_dec(v_h__1_771_);
v_val_775_ = lean_ctor_get(v_x_770_, 0);
lean_inc(v_val_775_);
lean_dec_ref_known(v_x_770_, 1);
v_fst_776_ = lean_ctor_get(v_val_775_, 0);
lean_inc(v_fst_776_);
v_snd_777_ = lean_ctor_get(v_val_775_, 1);
lean_inc(v_snd_777_);
lean_dec(v_val_775_);
v___x_778_ = lean_apply_2(v_h__2_772_, v_fst_776_, v_snd_777_);
return v___x_778_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseValue_match__3_splitter(lean_object* v_motive_779_, lean_object* v_x_780_, lean_object* v_h__1_781_, lean_object* v_h__2_782_){
_start:
{
if (lean_obj_tag(v_x_780_) == 0)
{
lean_object* v___x_783_; lean_object* v___x_784_; 
lean_dec(v_h__2_782_);
v___x_783_ = lean_box(0);
v___x_784_ = lean_apply_1(v_h__1_781_, v___x_783_);
return v___x_784_;
}
else
{
lean_object* v_val_785_; lean_object* v_fst_786_; lean_object* v_snd_787_; lean_object* v___x_788_; 
lean_dec(v_h__1_781_);
v_val_785_ = lean_ctor_get(v_x_780_, 0);
lean_inc(v_val_785_);
lean_dec_ref_known(v_x_780_, 1);
v_fst_786_ = lean_ctor_get(v_val_785_, 0);
lean_inc(v_fst_786_);
v_snd_787_ = lean_ctor_get(v_val_785_, 1);
lean_inc(v_snd_787_);
lean_dec(v_val_785_);
v___x_788_ = lean_apply_2(v_h__2_782_, v_fst_786_, v_snd_787_);
return v___x_788_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseScalar_match__8_splitter___redArg(lean_object* v_s_789_, lean_object* v_h__1_790_, lean_object* v_h__2_791_){
_start:
{
if (lean_obj_tag(v_s_789_) == 0)
{
lean_object* v___x_792_; lean_object* v___x_793_; 
lean_dec(v_h__2_791_);
v___x_792_ = lean_box(0);
v___x_793_ = lean_apply_1(v_h__1_790_, v___x_792_);
return v___x_793_;
}
else
{
lean_object* v_head_794_; lean_object* v_tail_795_; lean_object* v___x_796_; 
lean_dec(v_h__1_790_);
v_head_794_ = lean_ctor_get(v_s_789_, 0);
lean_inc(v_head_794_);
v_tail_795_ = lean_ctor_get(v_s_789_, 1);
lean_inc(v_tail_795_);
lean_dec_ref_known(v_s_789_, 2);
v___x_796_ = lean_apply_2(v_h__2_791_, v_head_794_, v_tail_795_);
return v___x_796_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseScalar_match__8_splitter(lean_object* v_motive_797_, lean_object* v_s_798_, lean_object* v_h__1_799_, lean_object* v_h__2_800_){
_start:
{
if (lean_obj_tag(v_s_798_) == 0)
{
lean_object* v___x_801_; lean_object* v___x_802_; 
lean_dec(v_h__2_800_);
v___x_801_ = lean_box(0);
v___x_802_ = lean_apply_1(v_h__1_799_, v___x_801_);
return v___x_802_;
}
else
{
lean_object* v_head_803_; lean_object* v_tail_804_; lean_object* v___x_805_; 
lean_dec(v_h__1_799_);
v_head_803_ = lean_ctor_get(v_s_798_, 0);
lean_inc(v_head_803_);
v_tail_804_ = lean_ctor_get(v_s_798_, 1);
lean_inc(v_tail_804_);
lean_dec_ref_known(v_s_798_, 2);
v___x_805_ = lean_apply_2(v_h__2_800_, v_head_803_, v_tail_804_);
return v___x_805_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseElems_match__1_splitter___redArg(lean_object* v_x_806_, lean_object* v_h__1_807_, lean_object* v_h__2_808_){
_start:
{
if (lean_obj_tag(v_x_806_) == 0)
{
lean_object* v___x_809_; lean_object* v___x_810_; 
lean_dec(v_h__2_808_);
v___x_809_ = lean_box(0);
v___x_810_ = lean_apply_1(v_h__1_807_, v___x_809_);
return v___x_810_;
}
else
{
lean_object* v_val_811_; lean_object* v_fst_812_; lean_object* v_snd_813_; lean_object* v___x_814_; 
lean_dec(v_h__1_807_);
v_val_811_ = lean_ctor_get(v_x_806_, 0);
lean_inc(v_val_811_);
lean_dec_ref_known(v_x_806_, 1);
v_fst_812_ = lean_ctor_get(v_val_811_, 0);
lean_inc(v_fst_812_);
v_snd_813_ = lean_ctor_get(v_val_811_, 1);
lean_inc(v_snd_813_);
lean_dec(v_val_811_);
v___x_814_ = lean_apply_2(v_h__2_808_, v_fst_812_, v_snd_813_);
return v___x_814_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseElems_match__1_splitter(lean_object* v_motive_815_, lean_object* v_x_816_, lean_object* v_h__1_817_, lean_object* v_h__2_818_){
_start:
{
if (lean_obj_tag(v_x_816_) == 0)
{
lean_object* v___x_819_; lean_object* v___x_820_; 
lean_dec(v_h__2_818_);
v___x_819_ = lean_box(0);
v___x_820_ = lean_apply_1(v_h__1_817_, v___x_819_);
return v___x_820_;
}
else
{
lean_object* v_val_821_; lean_object* v_fst_822_; lean_object* v_snd_823_; lean_object* v___x_824_; 
lean_dec(v_h__1_817_);
v_val_821_ = lean_ctor_get(v_x_816_, 0);
lean_inc(v_val_821_);
lean_dec_ref_known(v_x_816_, 1);
v_fst_822_ = lean_ctor_get(v_val_821_, 0);
lean_inc(v_fst_822_);
v_snd_823_ = lean_ctor_get(v_val_821_, 1);
lean_inc(v_snd_823_);
lean_dec(v_val_821_);
v___x_824_ = lean_apply_2(v_h__2_818_, v_fst_822_, v_snd_823_);
return v___x_824_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_skipBom_match__1_splitter___redArg(lean_object* v_s_825_, lean_object* v_h__1_826_, lean_object* v_h__2_827_){
_start:
{
if (lean_obj_tag(v_s_825_) == 1)
{
lean_object* v_head_828_; lean_object* v_tail_829_; uint8_t v___x_830_; uint8_t v___x_831_; uint8_t v___x_832_; 
v_head_828_ = lean_ctor_get(v_s_825_, 0);
v_tail_829_ = lean_ctor_get(v_s_825_, 1);
lean_inc(v_tail_829_);
v___x_830_ = 239;
v___x_831_ = lean_unbox(v_head_828_);
v___x_832_ = lean_uint8_dec_eq(v___x_831_, v___x_830_);
if (v___x_832_ == 0)
{
lean_object* v___x_833_; 
lean_dec(v_tail_829_);
lean_dec(v_h__1_826_);
v___x_833_ = lean_apply_2(v_h__2_827_, v_s_825_, lean_box(0));
return v___x_833_;
}
else
{
lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_882_; 
v_isSharedCheck_882_ = !lean_is_exclusive(v_s_825_);
if (v_isSharedCheck_882_ == 0)
{
lean_object* v_unused_883_; lean_object* v_unused_884_; 
v_unused_883_ = lean_ctor_get(v_s_825_, 1);
lean_dec(v_unused_883_);
v_unused_884_ = lean_ctor_get(v_s_825_, 0);
lean_dec(v_unused_884_);
v___x_835_ = v_s_825_;
v_isShared_836_ = v_isSharedCheck_882_;
goto v_resetjp_834_;
}
else
{
lean_dec(v_s_825_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_882_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
if (lean_obj_tag(v_tail_829_) == 1)
{
lean_object* v_head_837_; lean_object* v_tail_838_; uint8_t v___x_839_; uint8_t v___x_840_; uint8_t v___x_841_; 
v_head_837_ = lean_ctor_get(v_tail_829_, 0);
v_tail_838_ = lean_ctor_get(v_tail_829_, 1);
v___x_839_ = 187;
v___x_840_ = lean_unbox(v_head_837_);
v___x_841_ = lean_uint8_dec_eq(v___x_840_, v___x_839_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; lean_object* v___x_844_; 
lean_dec(v_h__1_826_);
v___x_842_ = lean_box(v___x_830_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 0, v___x_842_);
v___x_844_ = v___x_835_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_842_);
lean_ctor_set(v_reuseFailAlloc_846_, 1, v_tail_829_);
v___x_844_ = v_reuseFailAlloc_846_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
lean_object* v___x_845_; 
v___x_845_ = lean_apply_2(v_h__2_827_, v___x_844_, lean_box(0));
return v___x_845_;
}
}
else
{
lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_874_; 
lean_inc(v_tail_838_);
v_isSharedCheck_874_ = !lean_is_exclusive(v_tail_829_);
if (v_isSharedCheck_874_ == 0)
{
lean_object* v_unused_875_; lean_object* v_unused_876_; 
v_unused_875_ = lean_ctor_get(v_tail_829_, 1);
lean_dec(v_unused_875_);
v_unused_876_ = lean_ctor_get(v_tail_829_, 0);
lean_dec(v_unused_876_);
v___x_848_ = v_tail_829_;
v_isShared_849_ = v_isSharedCheck_874_;
goto v_resetjp_847_;
}
else
{
lean_dec(v_tail_829_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_874_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
if (lean_obj_tag(v_tail_838_) == 1)
{
lean_object* v_head_850_; lean_object* v_tail_851_; uint8_t v___x_852_; uint8_t v___x_853_; uint8_t v___x_854_; 
v_head_850_ = lean_ctor_get(v_tail_838_, 0);
v_tail_851_ = lean_ctor_get(v_tail_838_, 1);
v___x_852_ = 191;
v___x_853_ = lean_unbox(v_head_850_);
v___x_854_ = lean_uint8_dec_eq(v___x_853_, v___x_852_);
if (v___x_854_ == 0)
{
lean_object* v___x_855_; lean_object* v___x_857_; 
lean_dec(v_h__1_826_);
v___x_855_ = lean_box(v___x_839_);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 0, v___x_855_);
v___x_857_ = v___x_848_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v___x_855_);
lean_ctor_set(v_reuseFailAlloc_863_, 1, v_tail_838_);
v___x_857_ = v_reuseFailAlloc_863_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
lean_object* v___x_858_; lean_object* v___x_860_; 
v___x_858_ = lean_box(v___x_830_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 1, v___x_857_);
lean_ctor_set(v___x_835_, 0, v___x_858_);
v___x_860_ = v___x_835_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v___x_858_);
lean_ctor_set(v_reuseFailAlloc_862_, 1, v___x_857_);
v___x_860_ = v_reuseFailAlloc_862_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
lean_object* v___x_861_; 
v___x_861_ = lean_apply_2(v_h__2_827_, v___x_860_, lean_box(0));
return v___x_861_;
}
}
}
else
{
lean_object* v___x_864_; 
lean_inc(v_tail_851_);
lean_dec_ref_known(v_tail_838_, 2);
lean_del_object(v___x_848_);
lean_del_object(v___x_835_);
lean_dec(v_h__2_827_);
v___x_864_ = lean_apply_1(v_h__1_826_, v_tail_851_);
return v___x_864_;
}
}
else
{
lean_object* v___x_865_; lean_object* v___x_867_; 
lean_dec(v_h__1_826_);
v___x_865_ = lean_box(v___x_839_);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 0, v___x_865_);
v___x_867_ = v___x_848_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v___x_865_);
lean_ctor_set(v_reuseFailAlloc_873_, 1, v_tail_838_);
v___x_867_ = v_reuseFailAlloc_873_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
lean_object* v___x_868_; lean_object* v___x_870_; 
v___x_868_ = lean_box(v___x_830_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 1, v___x_867_);
lean_ctor_set(v___x_835_, 0, v___x_868_);
v___x_870_ = v___x_835_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v___x_868_);
lean_ctor_set(v_reuseFailAlloc_872_, 1, v___x_867_);
v___x_870_ = v_reuseFailAlloc_872_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
lean_object* v___x_871_; 
v___x_871_ = lean_apply_2(v_h__2_827_, v___x_870_, lean_box(0));
return v___x_871_;
}
}
}
}
}
}
else
{
lean_object* v___x_877_; lean_object* v___x_879_; 
lean_dec(v_h__1_826_);
v___x_877_ = lean_box(v___x_830_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 0, v___x_877_);
v___x_879_ = v___x_835_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v___x_877_);
lean_ctor_set(v_reuseFailAlloc_881_, 1, v_tail_829_);
v___x_879_ = v_reuseFailAlloc_881_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
lean_object* v___x_880_; 
v___x_880_ = lean_apply_2(v_h__2_827_, v___x_879_, lean_box(0));
return v___x_880_;
}
}
}
}
}
else
{
lean_object* v___x_885_; 
lean_dec(v_h__1_826_);
v___x_885_ = lean_apply_2(v_h__2_827_, v_s_825_, lean_box(0));
return v___x_885_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_skipBom_match__1_splitter(lean_object* v_motive_886_, lean_object* v_s_887_, lean_object* v_h__1_888_, lean_object* v_h__2_889_){
_start:
{
if (lean_obj_tag(v_s_887_) == 1)
{
lean_object* v_head_890_; lean_object* v_tail_891_; uint8_t v___x_892_; uint8_t v___x_893_; uint8_t v___x_894_; 
v_head_890_ = lean_ctor_get(v_s_887_, 0);
v_tail_891_ = lean_ctor_get(v_s_887_, 1);
lean_inc(v_tail_891_);
v___x_892_ = 239;
v___x_893_ = lean_unbox(v_head_890_);
v___x_894_ = lean_uint8_dec_eq(v___x_893_, v___x_892_);
if (v___x_894_ == 0)
{
lean_object* v___x_895_; 
lean_dec(v_tail_891_);
lean_dec(v_h__1_888_);
v___x_895_ = lean_apply_2(v_h__2_889_, v_s_887_, lean_box(0));
return v___x_895_;
}
else
{
lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_944_; 
v_isSharedCheck_944_ = !lean_is_exclusive(v_s_887_);
if (v_isSharedCheck_944_ == 0)
{
lean_object* v_unused_945_; lean_object* v_unused_946_; 
v_unused_945_ = lean_ctor_get(v_s_887_, 1);
lean_dec(v_unused_945_);
v_unused_946_ = lean_ctor_get(v_s_887_, 0);
lean_dec(v_unused_946_);
v___x_897_ = v_s_887_;
v_isShared_898_ = v_isSharedCheck_944_;
goto v_resetjp_896_;
}
else
{
lean_dec(v_s_887_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_944_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
if (lean_obj_tag(v_tail_891_) == 1)
{
lean_object* v_head_899_; lean_object* v_tail_900_; uint8_t v___x_901_; uint8_t v___x_902_; uint8_t v___x_903_; 
v_head_899_ = lean_ctor_get(v_tail_891_, 0);
v_tail_900_ = lean_ctor_get(v_tail_891_, 1);
v___x_901_ = 187;
v___x_902_ = lean_unbox(v_head_899_);
v___x_903_ = lean_uint8_dec_eq(v___x_902_, v___x_901_);
if (v___x_903_ == 0)
{
lean_object* v___x_904_; lean_object* v___x_906_; 
lean_dec(v_h__1_888_);
v___x_904_ = lean_box(v___x_892_);
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 0, v___x_904_);
v___x_906_ = v___x_897_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v___x_904_);
lean_ctor_set(v_reuseFailAlloc_908_, 1, v_tail_891_);
v___x_906_ = v_reuseFailAlloc_908_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
lean_object* v___x_907_; 
v___x_907_ = lean_apply_2(v_h__2_889_, v___x_906_, lean_box(0));
return v___x_907_;
}
}
else
{
lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_936_; 
lean_inc(v_tail_900_);
v_isSharedCheck_936_ = !lean_is_exclusive(v_tail_891_);
if (v_isSharedCheck_936_ == 0)
{
lean_object* v_unused_937_; lean_object* v_unused_938_; 
v_unused_937_ = lean_ctor_get(v_tail_891_, 1);
lean_dec(v_unused_937_);
v_unused_938_ = lean_ctor_get(v_tail_891_, 0);
lean_dec(v_unused_938_);
v___x_910_ = v_tail_891_;
v_isShared_911_ = v_isSharedCheck_936_;
goto v_resetjp_909_;
}
else
{
lean_dec(v_tail_891_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_936_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
if (lean_obj_tag(v_tail_900_) == 1)
{
lean_object* v_head_912_; lean_object* v_tail_913_; uint8_t v___x_914_; uint8_t v___x_915_; uint8_t v___x_916_; 
v_head_912_ = lean_ctor_get(v_tail_900_, 0);
v_tail_913_ = lean_ctor_get(v_tail_900_, 1);
v___x_914_ = 191;
v___x_915_ = lean_unbox(v_head_912_);
v___x_916_ = lean_uint8_dec_eq(v___x_915_, v___x_914_);
if (v___x_916_ == 0)
{
lean_object* v___x_917_; lean_object* v___x_919_; 
lean_dec(v_h__1_888_);
v___x_917_ = lean_box(v___x_901_);
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 0, v___x_917_);
v___x_919_ = v___x_910_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v___x_917_);
lean_ctor_set(v_reuseFailAlloc_925_, 1, v_tail_900_);
v___x_919_ = v_reuseFailAlloc_925_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
lean_object* v___x_920_; lean_object* v___x_922_; 
v___x_920_ = lean_box(v___x_892_);
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 1, v___x_919_);
lean_ctor_set(v___x_897_, 0, v___x_920_);
v___x_922_ = v___x_897_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v___x_920_);
lean_ctor_set(v_reuseFailAlloc_924_, 1, v___x_919_);
v___x_922_ = v_reuseFailAlloc_924_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
lean_object* v___x_923_; 
v___x_923_ = lean_apply_2(v_h__2_889_, v___x_922_, lean_box(0));
return v___x_923_;
}
}
}
else
{
lean_object* v___x_926_; 
lean_inc(v_tail_913_);
lean_dec_ref_known(v_tail_900_, 2);
lean_del_object(v___x_910_);
lean_del_object(v___x_897_);
lean_dec(v_h__2_889_);
v___x_926_ = lean_apply_1(v_h__1_888_, v_tail_913_);
return v___x_926_;
}
}
else
{
lean_object* v___x_927_; lean_object* v___x_929_; 
lean_dec(v_h__1_888_);
v___x_927_ = lean_box(v___x_901_);
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 0, v___x_927_);
v___x_929_ = v___x_910_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v___x_927_);
lean_ctor_set(v_reuseFailAlloc_935_, 1, v_tail_900_);
v___x_929_ = v_reuseFailAlloc_935_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
lean_object* v___x_930_; lean_object* v___x_932_; 
v___x_930_ = lean_box(v___x_892_);
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 1, v___x_929_);
lean_ctor_set(v___x_897_, 0, v___x_930_);
v___x_932_ = v___x_897_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v___x_930_);
lean_ctor_set(v_reuseFailAlloc_934_, 1, v___x_929_);
v___x_932_ = v_reuseFailAlloc_934_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
lean_object* v___x_933_; 
v___x_933_ = lean_apply_2(v_h__2_889_, v___x_932_, lean_box(0));
return v___x_933_;
}
}
}
}
}
}
else
{
lean_object* v___x_939_; lean_object* v___x_941_; 
lean_dec(v_h__1_888_);
v___x_939_ = lean_box(v___x_892_);
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 0, v___x_939_);
v___x_941_ = v___x_897_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v___x_939_);
lean_ctor_set(v_reuseFailAlloc_943_, 1, v_tail_891_);
v___x_941_ = v_reuseFailAlloc_943_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
lean_object* v___x_942_; 
v___x_942_ = lean_apply_2(v_h__2_889_, v___x_941_, lean_box(0));
return v___x_942_;
}
}
}
}
}
else
{
lean_object* v___x_947_; 
lean_dec(v_h__1_888_);
v___x_947_ = lean_apply_2(v_h__2_889_, v_s_887_, lean_box(0));
return v___x_947_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseElems_match__3_splitter___redArg(lean_object* v_x_948_, lean_object* v_x_949_, lean_object* v_x_950_, lean_object* v_h__1_951_, lean_object* v_h__2_952_){
_start:
{
lean_object* v_zero_953_; uint8_t v_isZero_954_; 
v_zero_953_ = lean_unsigned_to_nat(0u);
v_isZero_954_ = lean_nat_dec_eq(v_x_948_, v_zero_953_);
if (v_isZero_954_ == 1)
{
lean_object* v___x_955_; 
lean_dec(v_h__2_952_);
v___x_955_ = lean_apply_2(v_h__1_951_, v_x_949_, v_x_950_);
return v___x_955_;
}
else
{
lean_object* v_one_956_; lean_object* v_n_957_; lean_object* v___x_958_; 
lean_dec(v_h__1_951_);
v_one_956_ = lean_unsigned_to_nat(1u);
v_n_957_ = lean_nat_sub(v_x_948_, v_one_956_);
v___x_958_ = lean_apply_3(v_h__2_952_, v_n_957_, v_x_949_, v_x_950_);
return v___x_958_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseElems_match__3_splitter___redArg___boxed(lean_object* v_x_959_, lean_object* v_x_960_, lean_object* v_x_961_, lean_object* v_h__1_962_, lean_object* v_h__2_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseElems_match__3_splitter___redArg(v_x_959_, v_x_960_, v_x_961_, v_h__1_962_, v_h__2_963_);
lean_dec(v_x_959_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseElems_match__3_splitter(lean_object* v_motive_965_, lean_object* v_x_966_, lean_object* v_x_967_, lean_object* v_x_968_, lean_object* v_h__1_969_, lean_object* v_h__2_970_){
_start:
{
lean_object* v_zero_971_; uint8_t v_isZero_972_; 
v_zero_971_ = lean_unsigned_to_nat(0u);
v_isZero_972_ = lean_nat_dec_eq(v_x_966_, v_zero_971_);
if (v_isZero_972_ == 1)
{
lean_object* v___x_973_; 
lean_dec(v_h__2_970_);
v___x_973_ = lean_apply_2(v_h__1_969_, v_x_967_, v_x_968_);
return v___x_973_;
}
else
{
lean_object* v_one_974_; lean_object* v_n_975_; lean_object* v___x_976_; 
lean_dec(v_h__1_969_);
v_one_974_ = lean_unsigned_to_nat(1u);
v_n_975_ = lean_nat_sub(v_x_966_, v_one_974_);
v___x_976_ = lean_apply_3(v_h__2_970_, v_n_975_, v_x_967_, v_x_968_);
return v___x_976_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseElems_match__3_splitter___boxed(lean_object* v_motive_977_, lean_object* v_x_978_, lean_object* v_x_979_, lean_object* v_x_980_, lean_object* v_h__1_981_, lean_object* v_h__2_982_){
_start:
{
lean_object* v_res_983_; 
v_res_983_ = lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseElems_match__3_splitter(v_motive_977_, v_x_978_, v_x_979_, v_x_980_, v_h__1_981_, v_h__2_982_);
lean_dec(v_x_978_);
return v_res_983_;
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseMembers_match__1_splitter___redArg(lean_object* v_x_984_, lean_object* v_x_985_, lean_object* v_x_986_, lean_object* v_h__1_987_, lean_object* v_h__2_988_){
_start:
{
lean_object* v_zero_989_; uint8_t v_isZero_990_; 
v_zero_989_ = lean_unsigned_to_nat(0u);
v_isZero_990_ = lean_nat_dec_eq(v_x_984_, v_zero_989_);
if (v_isZero_990_ == 1)
{
lean_object* v___x_991_; 
lean_dec(v_h__2_988_);
v___x_991_ = lean_apply_2(v_h__1_987_, v_x_985_, v_x_986_);
return v___x_991_;
}
else
{
lean_object* v_one_992_; lean_object* v_n_993_; lean_object* v___x_994_; 
lean_dec(v_h__1_987_);
v_one_992_ = lean_unsigned_to_nat(1u);
v_n_993_ = lean_nat_sub(v_x_984_, v_one_992_);
v___x_994_ = lean_apply_3(v_h__2_988_, v_n_993_, v_x_985_, v_x_986_);
return v___x_994_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseMembers_match__1_splitter___redArg___boxed(lean_object* v_x_995_, lean_object* v_x_996_, lean_object* v_x_997_, lean_object* v_h__1_998_, lean_object* v_h__2_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseMembers_match__1_splitter___redArg(v_x_995_, v_x_996_, v_x_997_, v_h__1_998_, v_h__2_999_);
lean_dec(v_x_995_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseMembers_match__1_splitter(lean_object* v_motive_1001_, lean_object* v_x_1002_, lean_object* v_x_1003_, lean_object* v_x_1004_, lean_object* v_h__1_1005_, lean_object* v_h__2_1006_){
_start:
{
lean_object* v_zero_1007_; uint8_t v_isZero_1008_; 
v_zero_1007_ = lean_unsigned_to_nat(0u);
v_isZero_1008_ = lean_nat_dec_eq(v_x_1002_, v_zero_1007_);
if (v_isZero_1008_ == 1)
{
lean_object* v___x_1009_; 
lean_dec(v_h__2_1006_);
v___x_1009_ = lean_apply_2(v_h__1_1005_, v_x_1003_, v_x_1004_);
return v___x_1009_;
}
else
{
lean_object* v_one_1010_; lean_object* v_n_1011_; lean_object* v___x_1012_; 
lean_dec(v_h__1_1005_);
v_one_1010_ = lean_unsigned_to_nat(1u);
v_n_1011_ = lean_nat_sub(v_x_1002_, v_one_1010_);
v___x_1012_ = lean_apply_3(v_h__2_1006_, v_n_1011_, v_x_1003_, v_x_1004_);
return v___x_1012_;
}
}
}
LEAN_EXPORT lean_object* lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseMembers_match__1_splitter___boxed(lean_object* v_motive_1013_, lean_object* v_x_1014_, lean_object* v_x_1015_, lean_object* v_x_1016_, lean_object* v_h__1_1017_, lean_object* v_h__2_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = lp_leancjson___private_CJson_Proofs_Roundtrip_0__CJson_parseMembers_match__1_splitter(v_motive_1013_, v_x_1014_, v_x_1015_, v_x_1016_, v_h__1_1017_, v_h__2_1018_);
lean_dec(v_x_1014_);
return v_res_1019_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Print(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Parse(uint8_t builtin);
lean_object* initialize_leancjson_CJson_Proofs_Str(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_leancjson_CJson_Proofs_Roundtrip(uint8_t builtin) {
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
res = initialize_leancjson_CJson_Print(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_leancjson_CJson_Parse(builtin);
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
