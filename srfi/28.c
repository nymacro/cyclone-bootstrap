/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2017 Justin Ethier
 ** Version 0.4.1 
 **
 **/

#define closcall1(td, clo,a1) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 0, (closure)(a1), clo); \
} else { \
   ((clo)->fn)(td, 1, clo,a1);\
}
#define return_closcall1(td, clo,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td, clo, buf, 1); \
     return; \
 } else {\
     closcall1(td, (closure) (clo),a1); \
     return;\
 } \
}

#define return_direct1(td, _fn,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 1); \
     return; \
 } else { \
     (_fn)(td, 1, (closure)_fn,a1); \
 }}

#define closcall2(td, clo,a1,a2) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 1, (closure)(a1), clo,a2); \
} else { \
   ((clo)->fn)(td, 2, clo,a1,a2);\
}
#define return_closcall2(td, clo,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td, clo, buf, 2); \
     return; \
 } else {\
     closcall2(td, (closure) (clo),a1,a2); \
     return;\
 } \
}

#define return_direct2(td, _fn,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 2); \
     return; \
 } else { \
     (_fn)(td, 2, (closure)_fn,a1,a2); \
 }}

#define closcall3(td, clo,a1,a2,a3) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 2, (closure)(a1), clo,a2,a3); \
} else { \
   ((clo)->fn)(td, 3, clo,a1,a2,a3);\
}
#define return_closcall3(td, clo,a1,a2,a3) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3;\
     GC(td, clo, buf, 3); \
     return; \
 } else {\
     closcall3(td, (closure) (clo),a1,a2,a3); \
     return;\
 } \
}

#define return_direct3(td, _fn,a1,a2,a3) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 3); \
     return; \
 } else { \
     (_fn)(td, 3, (closure)_fn,a1,a2,a3); \
 }}

#include "cyclone/types.h"
object __glo_lib_91init_117srfi28_srfi_28 = NULL;
object __glo_format_srfi_28 = NULL;
extern object __glo_member_scheme_base;
extern object __glo_assoc_scheme_base;
extern object __glo_cons_91source_scheme_base;
extern object __glo_syntax_91rules_scheme_base;
extern object __glo_letrec_85_scheme_base;
extern object __glo_guard_scheme_base;
extern object __glo_guard_91aux_scheme_base;
extern object __glo_define_91record_91type_scheme_base;
extern object __glo_record_127_scheme_base;
extern object __glo_register_91simple_91type_scheme_base;
extern object __glo_make_91type_91predicate_scheme_base;
extern object __glo_make_91constructor_scheme_base;
extern object __glo_make_91getter_scheme_base;
extern object __glo_make_91setter_scheme_base;
extern object __glo_slot_91set_67_scheme_base;
extern object __glo_type_91slot_91offset_scheme_base;
extern object __glo_receive_scheme_base;
extern object __glo_abs_scheme_base;
extern object __glo_max_scheme_base;
extern object __glo_min_scheme_base;
extern object __glo_modulo_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_even_127_scheme_base;
extern object __glo_exact_91integer_127_scheme_base;
extern object __glo_exact_91integer_91sqrt_scheme_base;
extern object __glo_exact_127_scheme_base;
extern object __glo_inexact_127_scheme_base;
extern object __glo_odd_127_scheme_base;
extern object __glo_complex_127_scheme_base;
extern object __glo_rational_127_scheme_base;
extern object __glo_bignum_127_scheme_base;
extern object __glo_gcd_scheme_base;
extern object __glo_lcm_scheme_base;
extern object __glo_quotient_scheme_base;
extern object __glo_remainder_scheme_base;
extern object __glo_truncate_91quotient_scheme_base;
extern object __glo_truncate_91remainder_scheme_base;
extern object __glo_truncate_95_scheme_base;
extern object __glo_floor_91quotient_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_floor_95_scheme_base;
extern object __glo_square_scheme_base;
extern object __glo_expt_scheme_base;
extern object __glo_call_91with_91current_91continuation_scheme_base;
extern object __glo_call_95cc_scheme_base;
extern object __glo_call_91with_91values_scheme_base;
extern object __glo_dynamic_91wind_scheme_base;
extern object __glo_values_scheme_base;
extern object __glo_char_123_127_scheme_base;
extern object __glo_char_121_127_scheme_base;
extern object __glo_char_125_127_scheme_base;
extern object __glo_char_121_123_127_scheme_base;
extern object __glo_char_125_123_127_scheme_base;
extern object __glo_string_123_127_scheme_base;
extern object __glo_string_121_127_scheme_base;
extern object __glo_string_121_123_127_scheme_base;
extern object __glo_string_125_127_scheme_base;
extern object __glo_string_125_123_127_scheme_base;
extern object __glo_foldl_scheme_base;
extern object __glo_foldr_scheme_base;
extern object __glo_not_scheme_base;
extern object __glo_list_127_scheme_base;
extern object __glo_zero_127_scheme_base;
extern object __glo_positive_127_scheme_base;
extern object __glo_negative_127_scheme_base;
extern object __glo_append_scheme_base;
extern object __glo__list_scheme_base;
extern object __glo_make_91list_scheme_base;
extern object __glo_list_91copy_scheme_base;
extern object __glo_map_scheme_base;
extern object __glo_for_91each_scheme_base;
extern object __glo_list_91tail_scheme_base;
extern object __glo_list_91ref_scheme_base;
extern object __glo_list_91set_67_scheme_base;
extern object __glo_reverse_scheme_base;
extern object __glo_boolean_123_127_scheme_base;
extern object __glo_symbol_123_127_scheme_base;
extern object __glo_Cyc_91obj_123_127_scheme_base;
extern object __glo_vector_scheme_base;
extern object __glo_vector_91append_scheme_base;
extern object __glo_vector_91copy_scheme_base;
extern object __glo_vector_91copy_67_scheme_base;
extern object __glo_vector_91fill_67_scheme_base;
extern object __glo_vector_91_125list_scheme_base;
extern object __glo_vector_91_125string_scheme_base;
extern object __glo_vector_91map_scheme_base;
extern object __glo_vector_91for_91each_scheme_base;
extern object __glo_make_91string_scheme_base;
extern object __glo_string_scheme_base;
extern object __glo_string_91copy_scheme_base;
extern object __glo_string_91copy_67_scheme_base;
extern object __glo_string_91fill_67_scheme_base;
extern object __glo_string_91_125list_scheme_base;
extern object __glo_string_91_125vector_scheme_base;
extern object __glo_string_91map_scheme_base;
extern object __glo_string_91for_91each_scheme_base;
extern object __glo_make_91parameter_scheme_base;
extern object __glo_current_91output_91port_scheme_base;
extern object __glo_current_91input_91port_scheme_base;
extern object __glo_current_91error_91port_scheme_base;
extern object __glo_call_91with_91port_scheme_base;
extern object __glo_error_scheme_base;
extern object __glo_raise_scheme_base;
extern object __glo_raise_91continuable_scheme_base;
extern object __glo_with_91handler_scheme_base;
extern object __glo_with_91exception_91handler_scheme_base;
extern object __glo_Cyc_91add_91exception_91handler_scheme_base;
extern object __glo_Cyc_91remove_91exception_91handler_scheme_base;
extern object __glo_newline_scheme_base;
extern object __glo_write_91char_scheme_base;
extern object __glo_write_91string_scheme_base;
extern object __glo_flush_91output_91port_scheme_base;
extern object __glo_read_91line_scheme_base;
extern object __glo_read_91string_scheme_base;
extern object __glo_input_91port_127_scheme_base;
extern object __glo_output_91port_127_scheme_base;
extern object __glo_input_91port_91open_127_scheme_base;
extern object __glo_output_91port_91open_127_scheme_base;
extern object __glo_get_91output_91string_scheme_base;
extern object __glo_open_91output_91string_scheme_base;
extern object __glo_open_91input_91string_scheme_base;
extern object __glo_get_91output_91bytevector_scheme_base;
extern object __glo_open_91input_91bytevector_scheme_base;
extern object __glo_open_91output_91bytevector_scheme_base;
extern object __glo_features_scheme_base;
extern object __glo_Cyc_91version_scheme_base;
extern object __glo_any_scheme_base;
extern object __glo_every_scheme_base;
extern object __glo_and_scheme_base;
extern object __glo_or_scheme_base;
extern object __glo_let_scheme_base;
extern object __glo_let_85_scheme_base;
extern object __glo_letrec_scheme_base;
extern object __glo_let_85_91values_scheme_base;
extern object __glo_let_91values_scheme_base;
extern object __glo_begin_scheme_base;
extern object __glo__case_scheme_base;
extern object __glo_cond_scheme_base;
extern object __glo_cond_91expand_scheme_base;
extern object __glo__do_scheme_base;
extern object __glo_when_scheme_base;
extern object __glo_unless_scheme_base;
extern object __glo_quasiquote_scheme_base;
extern object __glo_floor_scheme_base;
extern object __glo_ceiling_scheme_base;
extern object __glo_truncate_scheme_base;
extern object __glo_round_scheme_base;
extern object __glo_exact_scheme_base;
extern object __glo_inexact_scheme_base;
extern object __glo_eof_91object_scheme_base;
extern object __glo_syntax_91error_scheme_base;
extern object __glo_bytevector_91copy_scheme_base;
extern object __glo_bytevector_91copy_67_scheme_base;
extern object __glo_utf8_91_125string_scheme_base;
extern object __glo_string_91_125utf8_scheme_base;
extern object __glo_denominator_scheme_base;
extern object __glo_numerator_scheme_base;
extern object __glo_parameterize_scheme_base;
extern object __glo_display_scheme_write;
extern object __glo_write_scheme_write;
extern object __glo_write_91shared_scheme_write;
extern object __glo_write_91simple_scheme_write;
#include "cyclone/runtime.h"
static void __lambda_19(void *data, int argc, closure _,object k_7331) ;
static void __lambda_18(void *data, int argc, closure _,object k_7334, object format_91string_7312, object objects_7311_raw, ...) ;
static void __lambda_17(void *data, int argc, object self_7369, object buffer_7318, object fmt_91rec_7316) ;
static void __lambda_16(void *data, int argc, object self_7370, object buffer_7318) ;
static void __lambda_15(void *data, int argc, object self_7371, object fmt_91rec_7316) ;
static void __lambda_14(void *data, int argc, object self_7372, object r_7368) ;
static void __lambda_13(void *data, int argc, object self_7373, object r_7335) ;
static void __lambda_12(void *data, int argc, object self_7374, object k_7339, object format_91list_7322, object objs_7321) ;
static void __lambda_11(void *data, int argc, object self_7375, object escape_91write_7324, object raw_91write_7323) ;
static void __lambda_10(void *data, int argc, object self_7376, object escape_91write_7324) ;
static void __lambda_9(void *data, int argc, object self_7377, object raw_91write_7323) ;
static void __lambda_8(void *data, int argc, object self_7378, object k_7362, object how_7328) ;
static void __lambda_7(void *data, int argc, object self_7379, object r_7364) ;
static void __lambda_6(void *data, int argc, object self_7380, object r_7340) ;
static void __lambda_5(void *data, int argc, object self_7381, object k_7358, object what_7327, object next_7326) ;
static void __lambda_4(void *data, int argc, object self_7382, object r_7359) ;
static void __lambda_3(void *data, int argc, object self_7383, object r_7360) ;
static void __lambda_2(void *data, int argc, object self_7384, object r_7341) ;
static void __lambda_1(void *data, int argc, object self_7385, object r_7336) ;
static void __lambda_0(void *data, int argc, object self_7386, object r_7337) ;

static void __lambda_19(void *data, int argc, closure _,object k_7331) {
  Cyc_st_add(data, "srfi/28.sld:lib-init:srfi28");
return_closcall1(data,  k_7331,  obj_int2obj(0));; 
}

static void __lambda_18(void *data, int argc, closure _,object k_7334, object format_91string_7312, object objects_7311_raw, ...) {
load_varargs(objects_7311, objects_7311_raw, argc - 2);
  Cyc_st_add(data, "srfi/28.sld:format");

closureN_type c_7389;
c_7389.hdr.mark = gc_color_red;
 c_7389.hdr.grayed = 0;
c_7389.tag = closureN_tag;
 c_7389.fn = (function_type)__lambda_17;
c_7389.num_args = 2;
c_7389.num_elements = 3;
c_7389.elements = (object *)alloca(sizeof(object) * 3);
c_7389.elements[0] = format_91string_7312;
c_7389.elements[1] = k_7334;
c_7389.elements[2] = objects_7311;

return_closcall2(data,(closure)&c_7389,  boolean_f, boolean_f);; 
}

static void __lambda_17(void *data, int argc, object self_7369, object buffer_7318, object fmt_91rec_7316) {
  
closureN_type c_7391;
c_7391.hdr.mark = gc_color_red;
 c_7391.hdr.grayed = 0;
c_7391.tag = closureN_tag;
 c_7391.fn = (function_type)__lambda_16;
c_7391.num_args = 1;
c_7391.num_elements = 4;
c_7391.elements = (object *)alloca(sizeof(object) * 4);
c_7391.elements[0] = fmt_91rec_7316;
c_7391.elements[1] = ((closureN)self_7369)->elements[0];
c_7391.elements[2] = ((closureN)self_7369)->elements[1];
c_7391.elements[3] = ((closureN)self_7369)->elements[2];


make_cell(c_73259,buffer_7318);
return_closcall1(data,(closure)&c_7391,  &c_73259);; 
}

static void __lambda_16(void *data, int argc, object self_7370, object buffer_7318) {
  
closureN_type c_7393;
c_7393.hdr.mark = gc_color_red;
 c_7393.hdr.grayed = 0;
c_7393.tag = closureN_tag;
 c_7393.fn = (function_type)__lambda_15;
c_7393.num_args = 1;
c_7393.num_elements = 4;
c_7393.elements = (object *)alloca(sizeof(object) * 4);
c_7393.elements[0] = buffer_7318;
c_7393.elements[1] = ((closureN)self_7370)->elements[1];
c_7393.elements[2] = ((closureN)self_7370)->elements[2];
c_7393.elements[3] = ((closureN)self_7370)->elements[3];


make_cell(c_73255,((closureN)self_7370)->elements[0]);
return_closcall1(data,(closure)&c_7393,  &c_73255);; 
}

static void __lambda_15(void *data, int argc, object self_7371, object fmt_91rec_7316) {
  
closureN_type c_7395;
c_7395.hdr.mark = gc_color_red;
 c_7395.hdr.grayed = 0;
c_7395.tag = closureN_tag;
 c_7395.fn = (function_type)__lambda_14;
c_7395.num_args = 1;
c_7395.num_elements = 5;
c_7395.elements = (object *)alloca(sizeof(object) * 5);
c_7395.elements[0] = ((closureN)self_7371)->elements[0];
c_7395.elements[1] = fmt_91rec_7316;
c_7395.elements[2] = ((closureN)self_7371)->elements[1];
c_7395.elements[3] = ((closureN)self_7371)->elements[2];
c_7395.elements[4] = ((closureN)self_7371)->elements[3];

return_closcall1(data,  __glo_open_91output_91string_scheme_base,  &c_7395);; 
}

static void __lambda_14(void *data, int argc, object self_7372, object r_7368) {
  
closureN_type c_7397;
c_7397.hdr.mark = gc_color_red;
 c_7397.hdr.grayed = 0;
c_7397.tag = closureN_tag;
 c_7397.fn = (function_type)__lambda_13;
c_7397.num_args = 1;
c_7397.num_elements = 5;
c_7397.elements = (object *)alloca(sizeof(object) * 5);
c_7397.elements[0] = ((closureN)self_7372)->elements[0];
c_7397.elements[1] = ((closureN)self_7372)->elements[1];
c_7397.elements[2] = ((closureN)self_7372)->elements[2];
c_7397.elements[3] = ((closureN)self_7372)->elements[3];
c_7397.elements[4] = ((closureN)self_7372)->elements[4];

return_closcall1(data,(closure)&c_7397,  Cyc_set_cell(data, ((closureN)self_7372)->elements[0], r_7368));; 
}

static void __lambda_13(void *data, int argc, object self_7373, object r_7335) {
  
closureN_type c_7399;
c_7399.hdr.mark = gc_color_red;
 c_7399.hdr.grayed = 0;
c_7399.tag = closureN_tag;
 c_7399.fn = (function_type)__lambda_1;
c_7399.num_args = 1;
c_7399.num_elements = 4;
c_7399.elements = (object *)alloca(sizeof(object) * 4);
c_7399.elements[0] = ((closureN)self_7373)->elements[1];
c_7399.elements[1] = ((closureN)self_7373)->elements[2];
c_7399.elements[2] = ((closureN)self_7373)->elements[3];
c_7399.elements[3] = ((closureN)self_7373)->elements[4];


closureN_type c_73112;
c_73112.hdr.mark = gc_color_red;
 c_73112.hdr.grayed = 0;
c_73112.tag = closureN_tag;
 c_73112.fn = (function_type)__lambda_12;
c_73112.num_args = 2;
c_73112.num_elements = 2;
c_73112.elements = (object *)alloca(sizeof(object) * 2);
c_73112.elements[0] = ((closureN)self_7373)->elements[0];
c_73112.elements[1] = ((closureN)self_7373)->elements[1];

return_closcall1(data,(closure)&c_7399,  Cyc_set_cell(data, ((closureN)self_7373)->elements[1], &c_73112));; 
}

static void __lambda_12(void *data, int argc, object self_7374, object k_7339, object format_91list_7322, object objs_7321) {
  
closureN_type c_73114;
c_73114.hdr.mark = gc_color_red;
 c_73114.hdr.grayed = 0;
c_73114.tag = closureN_tag;
 c_73114.fn = (function_type)__lambda_11;
c_73114.num_args = 2;
c_73114.num_elements = 5;
c_73114.elements = (object *)alloca(sizeof(object) * 5);
c_73114.elements[0] = ((closureN)self_7374)->elements[0];
c_73114.elements[1] = ((closureN)self_7374)->elements[1];
c_73114.elements[2] = format_91list_7322;
c_73114.elements[3] = k_7339;
c_73114.elements[4] = objs_7321;

return_closcall2(data,(closure)&c_73114,  boolean_f, boolean_f);; 
}

static void __lambda_11(void *data, int argc, object self_7375, object escape_91write_7324, object raw_91write_7323) {
  
closureN_type c_73116;
c_73116.hdr.mark = gc_color_red;
 c_73116.hdr.grayed = 0;
c_73116.tag = closureN_tag;
 c_73116.fn = (function_type)__lambda_10;
c_73116.num_args = 1;
c_73116.num_elements = 6;
c_73116.elements = (object *)alloca(sizeof(object) * 6);
c_73116.elements[0] = ((closureN)self_7375)->elements[0];
c_73116.elements[1] = ((closureN)self_7375)->elements[1];
c_73116.elements[2] = ((closureN)self_7375)->elements[2];
c_73116.elements[3] = ((closureN)self_7375)->elements[3];
c_73116.elements[4] = ((closureN)self_7375)->elements[4];
c_73116.elements[5] = raw_91write_7323;


make_cell(c_73249,escape_91write_7324);
return_closcall1(data,(closure)&c_73116,  &c_73249);; 
}

static void __lambda_10(void *data, int argc, object self_7376, object escape_91write_7324) {
  
closureN_type c_73118;
c_73118.hdr.mark = gc_color_red;
 c_73118.hdr.grayed = 0;
c_73118.tag = closureN_tag;
 c_73118.fn = (function_type)__lambda_9;
c_73118.num_args = 1;
c_73118.num_elements = 6;
c_73118.elements = (object *)alloca(sizeof(object) * 6);
c_73118.elements[0] = ((closureN)self_7376)->elements[0];
c_73118.elements[1] = escape_91write_7324;
c_73118.elements[2] = ((closureN)self_7376)->elements[1];
c_73118.elements[3] = ((closureN)self_7376)->elements[2];
c_73118.elements[4] = ((closureN)self_7376)->elements[3];
c_73118.elements[5] = ((closureN)self_7376)->elements[4];


make_cell(c_73245,((closureN)self_7376)->elements[5]);
return_closcall1(data,(closure)&c_73118,  &c_73245);; 
}

static void __lambda_9(void *data, int argc, object self_7377, object raw_91write_7323) {
  
closureN_type c_73120;
c_73120.hdr.mark = gc_color_red;
 c_73120.hdr.grayed = 0;
c_73120.tag = closureN_tag;
 c_73120.fn = (function_type)__lambda_6;
c_73120.num_args = 1;
c_73120.num_elements = 7;
c_73120.elements = (object *)alloca(sizeof(object) * 7);
c_73120.elements[0] = ((closureN)self_7377)->elements[0];
c_73120.elements[1] = ((closureN)self_7377)->elements[1];
c_73120.elements[2] = ((closureN)self_7377)->elements[2];
c_73120.elements[3] = ((closureN)self_7377)->elements[3];
c_73120.elements[4] = ((closureN)self_7377)->elements[4];
c_73120.elements[5] = ((closureN)self_7377)->elements[5];
c_73120.elements[6] = raw_91write_7323;


closureN_type c_73218;
c_73218.hdr.mark = gc_color_red;
 c_73218.hdr.grayed = 0;
c_73218.tag = closureN_tag;
 c_73218.fn = (function_type)__lambda_8;
c_73218.num_args = 1;
c_73218.num_elements = 4;
c_73218.elements = (object *)alloca(sizeof(object) * 4);
c_73218.elements[0] = ((closureN)self_7377)->elements[0];
c_73218.elements[1] = ((closureN)self_7377)->elements[2];
c_73218.elements[2] = ((closureN)self_7377)->elements[3];
c_73218.elements[3] = ((closureN)self_7377)->elements[5];

return_closcall1(data,(closure)&c_73120,  Cyc_set_cell(data, ((closureN)self_7377)->elements[1], &c_73218));; 
}

static void __lambda_8(void *data, int argc, object self_7378, object k_7362, object how_7328) {
  if( (boolean_f != Cyc_is_null(((closureN)self_7378)->elements[3])) ){ 
  
make_string(c_73223, "No value for escape sequence");
return_closcall2(data,  __glo_error_scheme_base,  k_7362, &c_73223);
} else { 
  
closureN_type c_73225;
c_73225.hdr.mark = gc_color_red;
 c_73225.hdr.grayed = 0;
c_73225.tag = closureN_tag;
 c_73225.fn = (function_type)__lambda_7;
c_73225.num_args = 1;
c_73225.num_elements = 4;
c_73225.elements = (object *)alloca(sizeof(object) * 4);
c_73225.elements[0] = ((closureN)self_7378)->elements[1];
c_73225.elements[1] = ((closureN)self_7378)->elements[2];
c_73225.elements[2] = k_7362;
c_73225.elements[3] = ((closureN)self_7378)->elements[3];

return_closcall3(data,  how_7328,  &c_73225, Cyc_car(data, ((closureN)self_7378)->elements[3]), cell_get(((closureN)self_7378)->elements[0]));}
; 
}

static void __lambda_7(void *data, int argc, object self_7379, object r_7364) {
  return_closcall3(data,  cell_get(((closureN)self_7379)->elements[0]),  ((closureN)self_7379)->elements[2], Cyc_cddr(data, ((closureN)self_7379)->elements[1]), Cyc_cdr(data, ((closureN)self_7379)->elements[3]));; 
}

static void __lambda_6(void *data, int argc, object self_7380, object r_7340) {
  
closureN_type c_73122;
c_73122.hdr.mark = gc_color_red;
 c_73122.hdr.grayed = 0;
c_73122.tag = closureN_tag;
 c_73122.fn = (function_type)__lambda_2;
c_73122.num_args = 1;
c_73122.num_elements = 5;
c_73122.elements = (object *)alloca(sizeof(object) * 5);
c_73122.elements[0] = ((closureN)self_7380)->elements[0];
c_73122.elements[1] = ((closureN)self_7380)->elements[1];
c_73122.elements[2] = ((closureN)self_7380)->elements[3];
c_73122.elements[3] = ((closureN)self_7380)->elements[4];
c_73122.elements[4] = ((closureN)self_7380)->elements[6];


closureN_type c_73199;
c_73199.hdr.mark = gc_color_red;
 c_73199.hdr.grayed = 0;
c_73199.tag = closureN_tag;
 c_73199.fn = (function_type)__lambda_5;
c_73199.num_args = 2;
c_73199.num_elements = 4;
c_73199.elements = (object *)alloca(sizeof(object) * 4);
c_73199.elements[0] = ((closureN)self_7380)->elements[0];
c_73199.elements[1] = ((closureN)self_7380)->elements[2];
c_73199.elements[2] = ((closureN)self_7380)->elements[3];
c_73199.elements[3] = ((closureN)self_7380)->elements[5];

return_closcall1(data,(closure)&c_73122,  Cyc_set_cell(data, ((closureN)self_7380)->elements[6], &c_73199));; 
}

static void __lambda_5(void *data, int argc, object self_7381, object k_7358, object what_7327, object next_7326) {
  
closureN_type c_73201;
c_73201.hdr.mark = gc_color_red;
 c_73201.hdr.grayed = 0;
c_73201.tag = closureN_tag;
 c_73201.fn = (function_type)__lambda_4;
c_73201.num_args = 1;
c_73201.num_elements = 5;
c_73201.elements = (object *)alloca(sizeof(object) * 5);
c_73201.elements[0] = ((closureN)self_7381)->elements[1];
c_73201.elements[1] = ((closureN)self_7381)->elements[2];
c_73201.elements[2] = k_7358;
c_73201.elements[3] = next_7326;
c_73201.elements[4] = ((closureN)self_7381)->elements[3];

return_closcall3(data,  __glo_write_91char_scheme_base,  &c_73201, what_7327, cell_get(((closureN)self_7381)->elements[0]));; 
}

static void __lambda_4(void *data, int argc, object self_7382, object r_7359) {
  
closureN_type c_73204;
c_73204.hdr.mark = gc_color_red;
 c_73204.hdr.grayed = 0;
c_73204.tag = closureN_tag;
 c_73204.fn = (function_type)__lambda_3;
c_73204.num_args = 1;
c_73204.num_elements = 3;
c_73204.elements = (object *)alloca(sizeof(object) * 3);
c_73204.elements[0] = ((closureN)self_7382)->elements[0];
c_73204.elements[1] = ((closureN)self_7382)->elements[2];
c_73204.elements[2] = ((closureN)self_7382)->elements[4];

return_closcall2(data,  ((closureN)self_7382)->elements[3],  &c_73204, ((closureN)self_7382)->elements[1]);; 
}

static void __lambda_3(void *data, int argc, object self_7383, object r_7360) {
  return_closcall3(data,  cell_get(((closureN)self_7383)->elements[0]),  ((closureN)self_7383)->elements[1], r_7360, ((closureN)self_7383)->elements[2]);; 
}

static void __lambda_2(void *data, int argc, object self_7384, object r_7341) {
  if( (boolean_f != Cyc_is_null(((closureN)self_7384)->elements[2])) ){ 
  return_closcall2(data,  __glo_get_91output_91string_scheme_base,  ((closureN)self_7384)->elements[3], cell_get(((closureN)self_7384)->elements[0]));
} else { 
    object c_73133 = Cyc_char_eq_op(data,Cyc_car(data, ((closureN)self_7384)->elements[2]), obj_char2obj(126));
if( (boolean_f != c_73133) ){ 
  if( (boolean_f != Cyc_is_null(Cyc_cdr(data, ((closureN)self_7384)->elements[2]))) ){ 
  
make_string(c_73144, "Incomplete escape sequence");
return_closcall2(data,  __glo_error_scheme_base,  ((closureN)self_7384)->elements[3], &c_73144);
} else { 
  if( (boolean_f != Cyc_eq(Cyc_cadr(data, ((closureN)self_7384)->elements[2]), obj_char2obj(97))) ){ 
  return_closcall2(data,  cell_get(((closureN)self_7384)->elements[1]),  ((closureN)self_7384)->elements[3], __glo_display_scheme_write);
} else { 
  if( (boolean_f != Cyc_eq(Cyc_cadr(data, ((closureN)self_7384)->elements[2]), obj_char2obj(115))) ){ 
  return_closcall2(data,  cell_get(((closureN)self_7384)->elements[1]),  ((closureN)self_7384)->elements[3], __glo_write_scheme_write);
} else { 
  if( (boolean_f != Cyc_eq(Cyc_cadr(data, ((closureN)self_7384)->elements[2]), obj_char2obj(37))) ){ 
  return_closcall3(data,  cell_get(((closureN)self_7384)->elements[4]),  ((closureN)self_7384)->elements[3], obj_char2obj(10), primitive_cddr);
} else { 
  if( (boolean_f != Cyc_eq(Cyc_cadr(data, ((closureN)self_7384)->elements[2]), obj_char2obj(126))) ){ 
  return_closcall3(data,  cell_get(((closureN)self_7384)->elements[4]),  ((closureN)self_7384)->elements[3], obj_char2obj(126), primitive_cddr);
} else { 
  
make_string(c_73187, "Unrecognized escape sequence");
return_closcall2(data,  __glo_error_scheme_base,  ((closureN)self_7384)->elements[3], &c_73187);}
}
}
}
}

} else { 
  return_closcall3(data,  cell_get(((closureN)self_7384)->elements[4]),  ((closureN)self_7384)->elements[3], Cyc_car(data, ((closureN)self_7384)->elements[2]), primitive_cdr);}
}
; 
}

static void __lambda_1(void *data, int argc, object self_7385, object r_7336) {
  
closureN_type c_73101;
c_73101.hdr.mark = gc_color_red;
 c_73101.hdr.grayed = 0;
c_73101.tag = closureN_tag;
 c_73101.fn = (function_type)__lambda_0;
c_73101.num_args = 1;
c_73101.num_elements = 3;
c_73101.elements = (object *)alloca(sizeof(object) * 3);
c_73101.elements[0] = ((closureN)self_7385)->elements[0];
c_73101.elements[1] = ((closureN)self_7385)->elements[2];
c_73101.elements[2] = ((closureN)self_7385)->elements[3];

return_closcall2(data,  __glo_string_91_125list_scheme_base,  &c_73101, ((closureN)self_7385)->elements[1]);; 
}

static void __lambda_0(void *data, int argc, object self_7386, object r_7337) {
  return_closcall3(data,  cell_get(((closureN)self_7386)->elements[0]),  ((closureN)self_7386)->elements[1], r_7337, ((closureN)self_7386)->elements[2]);; 
}

void c_srfi28_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117srfi28_srfi_28);
  add_global((object *) &__glo_format_srfi_28);
  mclosure0(c_73260, (function_type)__lambda_19);c_73260.num_args = 0; 
  __glo_lib_91init_117srfi28_srfi_28 = &c_73260; 
  mclosure0(c_7387, (function_type)__lambda_18);c_7387.num_args = 1; 
  __glo_format_srfi_28 = &c_7387; 

  make_cvar(cvar_73262, (object *)&__glo_lib_91init_117srfi28_srfi_28);make_pair(pair_73263, find_or_add_symbol("lib-init:srfi28"), &cvar_73262);
  make_cvar(cvar_73264, (object *)&__glo_format_srfi_28);make_pair(pair_73265, find_or_add_symbol("format"), &cvar_73264);
make_pair(c_73266, &pair_73263,Cyc_global_variables);
make_pair(c_73267, &pair_73265, &c_73266);
Cyc_global_variables = &c_73267;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117srfi28_srfi_28)->fn)(data, 1, cont, cont);
}
