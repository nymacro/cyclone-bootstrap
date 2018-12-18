/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2019 Justin Ethier
 ** Version 0.9.7 
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

#define continue_or_gc1(td, clo,a1) { \
 char *top = alloca(sizeof(char)); \
 if (stack_overflow(top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td, clo, buf, 1); \
     return; \
 } else {\
     continue;\
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

#define return_direct_with_clo1(td, clo, _fn,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td, clo, buf, 1); \
     return; \
 } else { \
     (_fn)(td, 1, (closure)(clo),a1); \
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

#define continue_or_gc2(td, clo,a1,a2) { \
 char *top = alloca(sizeof(char)); \
 if (stack_overflow(top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td, clo, buf, 2); \
     return; \
 } else {\
     continue;\
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

#define return_direct_with_clo2(td, clo, _fn,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td, clo, buf, 2); \
     return; \
 } else { \
     (_fn)(td, 2, (closure)(clo),a1,a2); \
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

#define continue_or_gc3(td, clo,a1,a2,a3) { \
 char *top = alloca(sizeof(char)); \
 if (stack_overflow(top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3;\
     GC(td, clo, buf, 3); \
     return; \
 } else {\
     continue;\
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

#define return_direct_with_clo3(td, clo, _fn,a1,a2,a3) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3;\
     GC(td, clo, buf, 3); \
     return; \
 } else { \
     (_fn)(td, 3, (closure)(clo),a1,a2,a3); \
 }}

#define closcall4(td, clo,a1,a2,a3,a4) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 3, (closure)(a1), clo,a2,a3,a4); \
} else { \
   ((clo)->fn)(td, 4, clo,a1,a2,a3,a4);\
}
#define return_closcall4(td, clo,a1,a2,a3,a4) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;\
     GC(td, clo, buf, 4); \
     return; \
 } else {\
     closcall4(td, (closure) (clo),a1,a2,a3,a4); \
     return;\
 } \
}

#define continue_or_gc4(td, clo,a1,a2,a3,a4) { \
 char *top = alloca(sizeof(char)); \
 if (stack_overflow(top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;\
     GC(td, clo, buf, 4); \
     return; \
 } else {\
     continue;\
 } \
}

#define return_direct4(td, _fn,a1,a2,a3,a4) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 4); \
     return; \
 } else { \
     (_fn)(td, 4, (closure)_fn,a1,a2,a3,a4); \
 }}

#define return_direct_with_clo4(td, clo, _fn,a1,a2,a3,a4) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;\
     GC(td, clo, buf, 4); \
     return; \
 } else { \
     (_fn)(td, 4, (closure)(clo),a1,a2,a3,a4); \
 }}

#include "cyclone/types.h"
object __glo_lib_91init_117srfi111_srfi_111 = NULL;
object __glo_box_srfi_111 = NULL;
object __glo_set_91box_67_srfi_111 = NULL;
object __glo_unbox_srfi_111 = NULL;
object __glo_box_127_srfi_111 = NULL;
object __glo_box_91type_srfi_111 = NULL;
extern object __glo_member_scheme_base;
extern object __glo_assoc_scheme_base;
extern object __glo_cons_91source_scheme_base;
extern object __glo_syntax_91rules_scheme_base;
extern object __glo_letrec_85_scheme_base;
extern object __glo_guard_scheme_base;
extern object __glo_guard_91aux_scheme_base;
extern object __glo_define_91record_91type_scheme_base;
extern object __glo_record_127_scheme_base;
extern object __glo_is_91a_127_scheme_base;
extern object __glo_register_91simple_91type_scheme_base;
extern object __glo_make_91type_91predicate_scheme_base;
extern object __glo_make_91constructor_scheme_base;
extern object __glo_make_91getter_scheme_base;
extern object __glo_make_91setter_scheme_base;
extern object __glo_slot_91ref_scheme_base;
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
extern object __glo_Cyc_91map_91loop_911_scheme_base;
extern object __glo_Cyc_91for_91each_91loop_911_scheme_base;
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
extern object __glo_error_91object_127_scheme_base;
extern object __glo_error_91object_91message_scheme_base;
extern object __glo_error_91object_91irritants_scheme_base;
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
extern object __glo_peek_91char_scheme_base;
extern object __glo_read_91char_scheme_base;
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
extern object __glo_Cyc_91add_91feature_67_scheme_base;
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
extern object __glo_peek_91u8_scheme_base;
extern object __glo_read_91u8_scheme_base;
extern object __glo_write_91u8_scheme_base;
extern object __glo_string_123_127_191_191inline_191_191_scheme_base;
extern object __glo_string_121_127_191_191inline_191_191_scheme_base;
extern object __glo_string_121_123_127_191_191inline_191_191_scheme_base;
extern object __glo_string_125_127_191_191inline_191_191_scheme_base;
extern object __glo_string_125_123_127_191_191inline_191_191_scheme_base;
extern object __glo_not_191_191inline_191_191_scheme_base;
extern object __glo_list_127_191_191inline_191_191_scheme_base;
extern object __glo_zero_127_191_191inline_191_191_scheme_base;
extern object __glo_positive_127_191_191inline_191_191_scheme_base;
extern object __glo_negative_127_191_191inline_191_191_scheme_base;
extern object __glo_floor_191_191inline_191_191_scheme_base;
extern object __glo_ceiling_191_191inline_191_191_scheme_base;
extern object __glo_truncate_191_191inline_191_191_scheme_base;
extern object __glo_round_191_191inline_191_191_scheme_base;
extern object __glo_inexact_191_191inline_191_191_scheme_base;
extern object __glo_sqrt_191_191inline_191_191_scheme_base;
extern object __glo_exact_91integer_127_191_191inline_191_191_scheme_base;
extern object __glo_exact_127_191_191inline_191_191_scheme_base;
extern object __glo_complex_127_191_191inline_191_191_scheme_base;
extern object __glo_denominator_191_191inline_191_191_scheme_base;
extern object __glo_numerator_191_191inline_191_191_scheme_base;
extern object __glo_quotient_191_191inline_191_191_scheme_base;
extern object __glo_square_191_191inline_191_191_scheme_base;
extern object __glo_eof_91object_191_191inline_191_191_scheme_base;
#include "cyclone/runtime.h"
defsymbol(value);
static void __lambda_1(void *data, int argc, closure _,object k_7323) ;
static void __lambda_2(void *data, int argc, object self_7343, object r_7341) ;
static void __lambda_3(void *data, int argc, object self_7344, object r_7340) ;
static void __lambda_4(void *data, int argc, object self_7345, object r_7338) ;
static void __lambda_5(void *data, int argc, object self_7346, object r_7337) ;
static void __lambda_6(void *data, int argc, object self_7347, object r_7335) ;
static void __lambda_7(void *data, int argc, object self_7348, object r_7334) ;
static void __lambda_8(void *data, int argc, object self_7349, object _75make_732_735_738) ;
static void __lambda_9(void *data, int argc, object self_7350, object k_7331, object value_733_736_739) ;
static void __lambda_10(void *data, int argc, object self_7351, object res_734_737_7310) ;
static void __lambda_11(void *data, int argc, object self_7352, object r_7333) ;

static void __lambda_1(void *data, int argc, closure _,object k_7323) {
  Cyc_st_add(data, "srfi/111.sld:lib-init:srfi111");

closureN_type c_7355;
c_7355.hdr.mark = gc_color_red;
 c_7355.hdr.grayed = 0;
c_7355.tag = closureN_tag;
 c_7355.fn = (function_type)__lambda_2;
c_7355.num_args = 1;
c_7355.num_elements = 1;
c_7355.elements = (object *)alloca(sizeof(object) * 1);
c_7355.elements[0] = k_7323;


make_utf8_string_with_len(c_7397, "box-type", 8, 8);

make_pair(c_7398,quote_value,NULL);
return_closcall4(data,  __glo_register_91simple_91type_scheme_base,  &c_7355, &c_7397, boolean_f, &c_7398);; 
}

static void __lambda_2(void *data, int argc, object self_7343, object r_7341) {
  
  global_set(__glo_box_91type_srfi_111, r_7341);
closureN_type c_7358;
c_7358.hdr.mark = gc_color_red;
 c_7358.hdr.grayed = 0;
c_7358.tag = closureN_tag;
 c_7358.fn = (function_type)__lambda_3;
c_7358.num_args = 1;
c_7358.num_elements = 1;
c_7358.elements = (object *)alloca(sizeof(object) * 1);
c_7358.elements[0] = ((closureN)self_7343)->elements[0];

return_closcall3(data,  __glo_make_91type_91predicate_scheme_base,  &c_7358, __glo_box_127_srfi_111, __glo_box_91type_srfi_111);;; 
}

static void __lambda_3(void *data, int argc, object self_7344, object r_7340) {
  
  global_set(__glo_box_127_srfi_111, r_7340);
closureN_type c_7361;
c_7361.hdr.mark = gc_color_red;
 c_7361.hdr.grayed = 0;
c_7361.tag = closureN_tag;
 c_7361.fn = (function_type)__lambda_4;
c_7361.num_args = 1;
c_7361.num_elements = 1;
c_7361.elements = (object *)alloca(sizeof(object) * 1);
c_7361.elements[0] = ((closureN)self_7344)->elements[0];

return_closcall3(data,  __glo_type_91slot_91offset_scheme_base,  &c_7361, __glo_box_91type_srfi_111, quote_value);;; 
}

static void __lambda_4(void *data, int argc, object self_7345, object r_7338) {
  
closureN_type c_7363;
c_7363.hdr.mark = gc_color_red;
 c_7363.hdr.grayed = 0;
c_7363.tag = closureN_tag;
 c_7363.fn = (function_type)__lambda_5;
c_7363.num_args = 1;
c_7363.num_elements = 1;
c_7363.elements = (object *)alloca(sizeof(object) * 1);
c_7363.elements[0] = ((closureN)self_7345)->elements[0];


make_utf8_string_with_len(c_7392, "unbox", 5, 5);
return_closcall4(data,  __glo_make_91getter_scheme_base,  &c_7363, &c_7392, __glo_box_91type_srfi_111, r_7338);; 
}

static void __lambda_5(void *data, int argc, object self_7346, object r_7337) {
  
  global_set(__glo_unbox_srfi_111, r_7337);
closureN_type c_7366;
c_7366.hdr.mark = gc_color_red;
 c_7366.hdr.grayed = 0;
c_7366.tag = closureN_tag;
 c_7366.fn = (function_type)__lambda_6;
c_7366.num_args = 1;
c_7366.num_elements = 1;
c_7366.elements = (object *)alloca(sizeof(object) * 1);
c_7366.elements[0] = ((closureN)self_7346)->elements[0];

return_closcall3(data,  __glo_type_91slot_91offset_scheme_base,  &c_7366, __glo_box_91type_srfi_111, quote_value);;; 
}

static void __lambda_6(void *data, int argc, object self_7347, object r_7335) {
  
closureN_type c_7368;
c_7368.hdr.mark = gc_color_red;
 c_7368.hdr.grayed = 0;
c_7368.tag = closureN_tag;
 c_7368.fn = (function_type)__lambda_7;
c_7368.num_args = 1;
c_7368.num_elements = 1;
c_7368.elements = (object *)alloca(sizeof(object) * 1);
c_7368.elements[0] = ((closureN)self_7347)->elements[0];


make_utf8_string_with_len(c_7389, "set-box!", 8, 8);
return_closcall4(data,  __glo_make_91setter_scheme_base,  &c_7368, &c_7389, __glo_box_91type_srfi_111, r_7335);; 
}

static void __lambda_7(void *data, int argc, object self_7348, object r_7334) {
  
  global_set(__glo_set_91box_67_srfi_111, r_7334);
closureN_type c_7371;
c_7371.hdr.mark = gc_color_red;
 c_7371.hdr.grayed = 0;
c_7371.tag = closureN_tag;
 c_7371.fn = (function_type)__lambda_8;
c_7371.num_args = 1;
c_7371.num_elements = 1;
c_7371.elements = (object *)alloca(sizeof(object) * 1);
c_7371.elements[0] = ((closureN)self_7348)->elements[0];


make_utf8_string_with_len(c_7386, "box", 3, 3);
return_closcall3(data,  __glo_make_91constructor_scheme_base,  &c_7371, &c_7386, __glo_box_91type_srfi_111);;; 
}

static void __lambda_8(void *data, int argc, object self_7349, object _75make_732_735_738) {
  


closureN_type c_7376;
c_7376.hdr.mark = gc_color_red;
 c_7376.hdr.grayed = 0;
c_7376.tag = closureN_tag;
 c_7376.fn = (function_type)__lambda_9;
c_7376.num_args = 1;
c_7376.num_elements = 1;
c_7376.elements = (object *)alloca(sizeof(object) * 1);
c_7376.elements[0] = _75make_732_735_738;

return_closcall1(data,  ((closureN)self_7349)->elements[0],  global_set(__glo_box_srfi_111, &c_7376));; 
}

static void __lambda_9(void *data, int argc, object self_7350, object k_7331, object value_733_736_739) {
  
closureN_type c_7379;
c_7379.hdr.mark = gc_color_red;
 c_7379.hdr.grayed = 0;
c_7379.tag = closureN_tag;
 c_7379.fn = (function_type)__lambda_10;
c_7379.num_args = 1;
c_7379.num_elements = 2;
c_7379.elements = (object *)alloca(sizeof(object) * 2);
c_7379.elements[0] = k_7331;
c_7379.elements[1] = value_733_736_739;

return_closcall1(data,  ((closureN)self_7350)->elements[0],  &c_7379);; 
}

static void __lambda_10(void *data, int argc, object self_7351, object res_734_737_7310) {
  
closureN_type c_7381;
c_7381.hdr.mark = gc_color_red;
 c_7381.hdr.grayed = 0;
c_7381.tag = closureN_tag;
 c_7381.fn = (function_type)__lambda_11;
c_7381.num_args = 1;
c_7381.num_elements = 2;
c_7381.elements = (object *)alloca(sizeof(object) * 2);
c_7381.elements[0] = ((closureN)self_7351)->elements[0];
c_7381.elements[1] = res_734_737_7310;

return_closcall3(data,  __glo_set_91box_67_srfi_111,  &c_7381, res_734_737_7310, ((closureN)self_7351)->elements[1]);; 
}

static void __lambda_11(void *data, int argc, object self_7352, object r_7333) {
  return_closcall1(data,  ((closureN)self_7352)->elements[0],  ((closureN)self_7352)->elements[1]);; 
}

void c_srfi111_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
(((closure)cont)->fn)(data, 1, cont, NULL);
 } 
void c_srfi111_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);
  quote_value = find_or_add_symbol("value");

  add_global((object *) &__glo_lib_91init_117srfi111_srfi_111);
  add_global((object *) &__glo_box_srfi_111);
  add_global((object *) &__glo_set_91box_67_srfi_111);
  add_global((object *) &__glo_unbox_srfi_111);
  add_global((object *) &__glo_box_127_srfi_111);
  add_global((object *) &__glo_box_91type_srfi_111);
  add_symbol(quote_value);
  mclosure0(c_7353, (function_type)__lambda_1);c_7353.num_args = 0; 
  __glo_lib_91init_117srfi111_srfi_111 = &c_7353; 
  __glo_box_srfi_111 = boolean_f; 
  __glo_set_91box_67_srfi_111 = boolean_f; 
  __glo_unbox_srfi_111 = boolean_f; 
  __glo_box_127_srfi_111 = boolean_f; 
  __glo_box_91type_srfi_111 = boolean_f; 

  mclosure0(clo_73100, c_srfi111_inlinable_lambdas); make_pair(pair_7399, find_or_add_symbol("c_srfi111_inlinable_lambdas"), &clo_73100);
  make_cvar(cvar_73101, (object *)&__glo_lib_91init_117srfi111_srfi_111);make_pair(pair_73102, find_or_add_symbol("lib-init:srfi111"), &cvar_73101);
  make_cvar(cvar_73103, (object *)&__glo_box_srfi_111);make_pair(pair_73104, find_or_add_symbol("box"), &cvar_73103);
  make_cvar(cvar_73105, (object *)&__glo_set_91box_67_srfi_111);make_pair(pair_73106, find_or_add_symbol("set-box!"), &cvar_73105);
  make_cvar(cvar_73107, (object *)&__glo_unbox_srfi_111);make_pair(pair_73108, find_or_add_symbol("unbox"), &cvar_73107);
  make_cvar(cvar_73109, (object *)&__glo_box_127_srfi_111);make_pair(pair_73110, find_or_add_symbol("box?"), &cvar_73109);
  make_cvar(cvar_73111, (object *)&__glo_box_91type_srfi_111);make_pair(pair_73112, find_or_add_symbol("box-type"), &cvar_73111);
make_pair(c_73119, &pair_7399,Cyc_global_variables);
make_pair(c_73118, &pair_73102, &c_73119);
make_pair(c_73117, &pair_73104, &c_73118);
make_pair(c_73116, &pair_73106, &c_73117);
make_pair(c_73115, &pair_73108, &c_73116);
make_pair(c_73114, &pair_73110, &c_73115);
make_pair(c_73113, &pair_73112, &c_73114);
Cyc_global_variables = &c_73113;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117srfi111_srfi_111)->fn)(data, 1, cont, cont);
}
void c_srfi111_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("srfi_111");
  c_srfi111_entry_pt_first_lambda(data, argc, cont,value);
}
