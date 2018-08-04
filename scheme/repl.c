/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2018 Justin Ethier
 ** Version 0.9.1 
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
object __glo_lib_91init_117schemerepl_scheme_repl = NULL;
object __glo_repl_scheme_repl = NULL;
object __glo_interaction_91environment_scheme_repl = NULL;
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
extern object __glo_eval_scheme_eval;
extern object __glo_eval_91from_91c_scheme_eval;
extern object __glo_create_91environment_scheme_eval;
extern object __glo_setup_91environment_scheme_eval;
extern object __glo__75import_scheme_eval;
extern object __glo_imported_127_scheme_eval;
extern object __glo__75set_91import_91dirs_67_scheme_eval;
extern object __glo__85defined_91macros_85_scheme_eval;
extern object __glo_get_91macros_scheme_eval;
extern object __glo_macro_117macro_127_scheme_eval;
extern object __glo_macro_117expand_scheme_eval;
extern object __glo_macro_117add_67_scheme_eval;
extern object __glo_macro_117cleanup_scheme_eval;
extern object __glo_macro_117load_91env_67_scheme_eval;
extern object __glo_macro_117get_91env_scheme_eval;
extern object __glo_macro_117get_91defined_91macros_scheme_eval;
extern object __glo_expand_scheme_eval;
extern object __glo_expand_91lambda_91body_scheme_eval;
extern object __glo_read_scheme_read;
extern object __glo_read_91all_scheme_read;
extern object __glo_include_scheme_read;
extern object __glo_include_91ci_scheme_read;
extern object __glo_display_scheme_write;
extern object __glo_write_scheme_write;
extern object __glo_write_91shared_scheme_write;
extern object __glo_write_91simple_scheme_write;
extern object __glo_string_123_127_191_191inline_191_191_scheme_base;
extern object __glo_string_121_127_191_191inline_191_191_scheme_base;
extern object __glo_string_121_123_127_191_191inline_191_191_scheme_base;
extern object __glo_string_125_127_191_191inline_191_191_scheme_base;
extern object __glo_string_125_123_127_191_191inline_191_191_scheme_base;
extern object __glo_not_191_191inline_191_191_scheme_base;
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
extern object __glo_variable_127_191_191inline_191_191_scheme_eval;
extern object __glo_assignment_91variable_191_191inline_191_191_scheme_eval;
extern object __glo_assignment_91value_191_191inline_191_191_scheme_eval;
extern object __glo_definition_91variable_191_191inline_191_191_scheme_eval;
extern object __glo_lambda_91parameters_191_191inline_191_191_scheme_eval;
extern object __glo_lambda_91body_191_191inline_191_191_scheme_eval;
extern object __glo_if_91predicate_191_191inline_191_191_scheme_eval;
extern object __glo_if_91consequent_191_191inline_191_191_scheme_eval;
extern object __glo_if_91alternative_191_191inline_191_191_scheme_eval;
extern object __glo_application_127_191_191inline_191_191_scheme_eval;
extern object __glo_operator_191_191inline_191_191_scheme_eval;
extern object __glo_operands_191_191inline_191_191_scheme_eval;
extern object __glo_procedure_91parameters_191_191inline_191_191_scheme_eval;
extern object __glo_procedure_91body_191_191inline_191_191_scheme_eval;
extern object __glo_procedure_91environment_191_191inline_191_191_scheme_eval;
extern object __glo_primitive_91implementation_191_191inline_191_191_scheme_eval;
extern object __glo_macro_117macro_127_191_191inline_191_191_scheme_eval;
extern object __glo_Cyc_91opaque_91eq_127_191_191inline_191_191_scheme_read;
extern object __glo_Cyc_91opaque_91unsafe_91eq_127_191_191inline_191_191_scheme_read;
extern object __glo_Cyc_91opaque_91unsafe_91string_127_191_191inline_191_191_scheme_read;
#include "cyclone/runtime.h"
static void __lambda_38(void *data, int argc, closure _,object k_7375) ;
static void __lambda_37(void *data, int argc, closure _,object k_7329) ;
static void __lambda_36(void *data, int argc, object self_7376, object k_7331, object k_731_7318) ;
static void __lambda_35(void *data, int argc, object self_73105, object k_7334) ;
static void __lambda_34(void *data, int argc, object self_73106, object r_7335) ;
static void __lambda_33(void *data, int argc, object self_73107, object r_7340) ;
static void __lambda_32(void *data, int argc, object self_73108, object c_7313_7323) ;
static void __lambda_31(void *data, int argc, object self_73109, object r_7337) ;
static void __lambda_30(void *data, int argc, object self_73110, object r_7338) ;
static void __lambda_29(void *data, int argc, object self_73111, object r_7339) ;
static void __lambda_28(void *data, int argc, object self_7377, object k_7341, object obj_732_7319) ;
static void __lambda_27(void *data, int argc, object self_7378, object obj_733_7320) ;
static void __lambda_26(void *data, int argc, object self_7379, object obj_733_7320) ;
static void __lambda_25(void *data, int argc, object self_7380, object r_7343) ;
static void __lambda_24(void *data, int argc, object self_7381, object r_7344) ;
static void __lambda_23(void *data, int argc, object self_7382, object r_7345) ;
static void __lambda_22(void *data, int argc, object self_7383, object r_7342) ;
static void __lambda_21(void *data, int argc, object self_7384, object k_7346) ;
static void __lambda_20(void *data, int argc, object self_7385, object r_7347) ;
static void __lambda_19(void *data, int argc, object self_7394, object r_7358) ;
static void __lambda_18(void *data, int argc, object self_7395, object r_7359) ;
static void __lambda_17(void *data, int argc, object self_7396, object k_7361, object o_7311_7322) ;
static void __lambda_16(void *data, int argc, object self_7397, object r_7362) ;
static void __lambda_15(void *data, int argc, object self_7398, object k_7363) ;
static void __lambda_14(void *data, int argc, object self_7399, object r_7372) ;
static void __lambda_13(void *data, int argc, object self_73100, object r_7371) ;
static void __lambda_12(void *data, int argc, object self_73101, object r_7365) ;
static void __lambda_11(void *data, int argc, object self_73102, object r_7366) ;
static void __lambda_10(void *data, int argc, object self_73103, object r_7367) ;
static void __lambda_9(void *data, int argc, object self_73104, object k_7368) ;
static void __lambda_8(void *data, int argc, object self_7386, object r_7357) ;
static void __lambda_7(void *data, int argc, object self_7387, object r_7348) ;
static void __lambda_6(void *data, int argc, object self_7388, object r_7349) ;
static void __lambda_5(void *data, int argc, object self_7389, object r_7351) ;
static void __lambda_4(void *data, int argc, object self_7390, object k_7352, object o_737_7321) ;
static void __lambda_3(void *data, int argc, object self_7391, object r_7353) ;
static void __lambda_2(void *data, int argc, object self_7392, object k_7354) ;
static void __lambda_1(void *data, int argc, object self_7393, object r_7356) ;
static void __lambda_0(void *data, int argc, closure _,object k_7326) ;

static void __lambda_38(void *data, int argc, closure _,object k_7375) {
  Cyc_st_add(data, "scheme/repl.sld:lib-init:schemerepl");
return_closcall1(data,  k_7375,  obj_int2obj(0));; 
}

static void __lambda_37(void *data, int argc, closure _,object k_7329) {
  Cyc_st_add(data, "scheme/repl.sld:repl");

mclosure0(c_73116, (function_type)__lambda_36);c_73116.num_args = 1;
return_closcall2(data,  __glo_call_95cc_scheme_base,  k_7329, &c_73116);; 
}

static void __lambda_36(void *data, int argc, object self_7376, object k_7331, object k_731_7318) {
  
closureN_type c_73118;
c_73118.hdr.mark = gc_color_red;
 c_73118.hdr.grayed = 0;
c_73118.tag = closureN_tag;
 c_73118.fn = (function_type)__lambda_28;
c_73118.num_args = 1;
c_73118.num_elements = 1;
c_73118.elements = (object *)alloca(sizeof(object) * 1);
c_73118.elements[0] = k_731_7318;


mclosure0(c_73250, (function_type)__lambda_35);c_73250.num_args = 0;
return_closcall3(data,  __glo_with_91exception_91handler_scheme_base,  k_7331, &c_73118, &c_73250);; 
}

static void __lambda_35(void *data, int argc, object self_73105, object k_7334) {
  
closureN_type c_73252;
c_73252.hdr.mark = gc_color_red;
 c_73252.hdr.grayed = 0;
c_73252.tag = closureN_tag;
 c_73252.fn = (function_type)__lambda_34;
c_73252.num_args = 1;
c_73252.num_elements = 1;
c_73252.elements = (object *)alloca(sizeof(object) * 1);
c_73252.elements[0] = k_7334;


make_utf8_string_with_len(c_73271, "cyclone> ", 9, 9);
return_closcall2(data,  __glo_display_scheme_write,  &c_73252, &c_73271);; 
}

static void __lambda_34(void *data, int argc, object self_73106, object r_7335) {
  
closureN_type c_73254;
c_73254.hdr.mark = gc_color_red;
 c_73254.hdr.grayed = 0;
c_73254.tag = closureN_tag;
 c_73254.fn = (function_type)__lambda_33;
c_73254.num_args = 1;
c_73254.num_elements = 1;
c_73254.elements = (object *)alloca(sizeof(object) * 1);
c_73254.elements[0] = ((closureN)self_73106)->elements[0];

return_closcall1(data,  __glo_read_scheme_read,  &c_73254);; 
}

static void __lambda_33(void *data, int argc, object self_73107, object r_7340) {
  
closureN_type c_73256;
c_73256.hdr.mark = gc_color_red;
 c_73256.hdr.grayed = 0;
c_73256.tag = closureN_tag;
 c_73256.fn = (function_type)__lambda_32;
c_73256.num_args = 1;
c_73256.num_elements = 1;
c_73256.elements = (object *)alloca(sizeof(object) * 1);
c_73256.elements[0] = ((closureN)self_73107)->elements[0];

return_closcall2(data,  __glo_eval_scheme_eval,  &c_73256, r_7340);; 
}

static void __lambda_32(void *data, int argc, object self_73108, object c_7313_7323) {
  
closureN_type c_73258;
c_73258.hdr.mark = gc_color_red;
 c_73258.hdr.grayed = 0;
c_73258.tag = closureN_tag;
 c_73258.fn = (function_type)__lambda_31;
c_73258.num_args = 1;
c_73258.num_elements = 2;
c_73258.elements = (object *)alloca(sizeof(object) * 2);
c_73258.elements[0] = c_7313_7323;
c_73258.elements[1] = ((closureN)self_73108)->elements[0];

return_closcall1(data,(closure)&c_73258,  Cyc_is_eof_object(c_7313_7323));; 
}

static void __lambda_31(void *data, int argc, object self_73109, object r_7337) {
  if( (boolean_f != r_7337) ){ 
  
make_utf8_string_with_len(c_73261, "\n", 1, 1);
return_closcall2(data,  __glo_display_scheme_write,  ((closureN)self_73109)->elements[1], &c_73261);
} else { 
  
closureN_type c_73263;
c_73263.hdr.mark = gc_color_red;
 c_73263.hdr.grayed = 0;
c_73263.tag = closureN_tag;
 c_73263.fn = (function_type)__lambda_30;
c_73263.num_args = 1;
c_73263.num_elements = 1;
c_73263.elements = (object *)alloca(sizeof(object) * 1);
c_73263.elements[0] = ((closureN)self_73109)->elements[1];

return_closcall2(data,  __glo_write_scheme_write,  &c_73263, ((closureN)self_73109)->elements[0]);}
; 
}

static void __lambda_30(void *data, int argc, object self_73110, object r_7338) {
  
closureN_type c_73265;
c_73265.hdr.mark = gc_color_red;
 c_73265.hdr.grayed = 0;
c_73265.tag = closureN_tag;
 c_73265.fn = (function_type)__lambda_29;
c_73265.num_args = 1;
c_73265.num_elements = 1;
c_73265.elements = (object *)alloca(sizeof(object) * 1);
c_73265.elements[0] = ((closureN)self_73110)->elements[0];

return_closcall1(data,  __glo_newline_scheme_base,  &c_73265);; 
}

static void __lambda_29(void *data, int argc, object self_73111, object r_7339) {
  return_closcall1(data,  __glo_repl_scheme_repl,  ((closureN)self_73111)->elements[0]);; 
}

static void __lambda_28(void *data, int argc, object self_7377, object k_7341, object obj_732_7319) {
  
closureN_type c_73120;
c_73120.hdr.mark = gc_color_red;
 c_73120.hdr.grayed = 0;
c_73120.tag = closureN_tag;
 c_73120.fn = (function_type)__lambda_27;
c_73120.num_args = 1;
c_73120.num_elements = 2;
c_73120.elements = (object *)alloca(sizeof(object) * 2);
c_73120.elements[0] = ((closureN)self_7377)->elements[0];
c_73120.elements[1] = k_7341;

return_closcall1(data,(closure)&c_73120,  obj_732_7319);; 
}

static void __lambda_27(void *data, int argc, object self_7378, object obj_733_7320) {
  
closureN_type c_73122;
c_73122.hdr.mark = gc_color_red;
 c_73122.hdr.grayed = 0;
c_73122.tag = closureN_tag;
 c_73122.fn = (function_type)__lambda_26;
c_73122.num_args = 1;
c_73122.num_elements = 2;
c_73122.elements = (object *)alloca(sizeof(object) * 2);
c_73122.elements[0] = ((closureN)self_7378)->elements[0];
c_73122.elements[1] = ((closureN)self_7378)->elements[1];


make_cell(c_73249,obj_733_7320);
return_closcall1(data,(closure)&c_73122,  &c_73249);; 
}

static void __lambda_26(void *data, int argc, object self_7379, object obj_733_7320) {
  
closureN_type c_73124;
c_73124.hdr.mark = gc_color_red;
 c_73124.hdr.grayed = 0;
c_73124.tag = closureN_tag;
 c_73124.fn = (function_type)__lambda_25;
c_73124.num_args = 1;
c_73124.num_elements = 3;
c_73124.elements = (object *)alloca(sizeof(object) * 3);
c_73124.elements[0] = ((closureN)self_7379)->elements[0];
c_73124.elements[1] = ((closureN)self_7379)->elements[1];
c_73124.elements[2] = obj_733_7320;


make_utf8_string_with_len(c_73246, "Error: ", 7, 7);
return_closcall2(data,  __glo_display_scheme_write,  &c_73124, &c_73246);; 
}

static void __lambda_25(void *data, int argc, object self_7380, object r_7343) {
  
closureN_type c_73126;
c_73126.hdr.mark = gc_color_red;
 c_73126.hdr.grayed = 0;
c_73126.tag = closureN_tag;
 c_73126.fn = (function_type)__lambda_21;
c_73126.num_args = 0;
c_73126.num_elements = 1;
c_73126.elements = (object *)alloca(sizeof(object) * 1);
c_73126.elements[0] = ((closureN)self_7380)->elements[2];


closureN_type c_73238;
c_73238.hdr.mark = gc_color_red;
 c_73238.hdr.grayed = 0;
c_73238.tag = closureN_tag;
 c_73238.fn = (function_type)__lambda_24;
c_73238.num_args = 1;
c_73238.num_elements = 2;
c_73238.elements = (object *)alloca(sizeof(object) * 2);
c_73238.elements[0] = ((closureN)self_7380)->elements[0];
c_73238.elements[1] = ((closureN)self_7380)->elements[1];

return_closcall1(data,(closure)&c_73126,  &c_73238);; 
}

static void __lambda_24(void *data, int argc, object self_7381, object r_7344) {
  
closureN_type c_73240;
c_73240.hdr.mark = gc_color_red;
 c_73240.hdr.grayed = 0;
c_73240.tag = closureN_tag;
 c_73240.fn = (function_type)__lambda_23;
c_73240.num_args = 1;
c_73240.num_elements = 2;
c_73240.elements = (object *)alloca(sizeof(object) * 2);
c_73240.elements[0] = ((closureN)self_7381)->elements[0];
c_73240.elements[1] = ((closureN)self_7381)->elements[1];

return_closcall1(data,  __glo_newline_scheme_base,  &c_73240);; 
}

static void __lambda_23(void *data, int argc, object self_7382, object r_7345) {
  
closureN_type c_73242;
c_73242.hdr.mark = gc_color_red;
 c_73242.hdr.grayed = 0;
c_73242.tag = closureN_tag;
 c_73242.fn = (function_type)__lambda_22;
c_73242.num_args = 1;
c_73242.num_elements = 2;
c_73242.elements = (object *)alloca(sizeof(object) * 2);
c_73242.elements[0] = ((closureN)self_7382)->elements[0];
c_73242.elements[1] = ((closureN)self_7382)->elements[1];

return_closcall1(data,  __glo_repl_scheme_repl,  &c_73242);; 
}

static void __lambda_22(void *data, int argc, object self_7383, object r_7342) {
  return_closcall2(data,  ((closureN)self_7383)->elements[0],  ((closureN)self_7383)->elements[1], r_7342);; 
}

static void __lambda_21(void *data, int argc, object self_7384, object k_7346) {
  
closureN_type c_73128;
c_73128.hdr.mark = gc_color_red;
 c_73128.hdr.grayed = 0;
c_73128.tag = closureN_tag;
 c_73128.fn = (function_type)__lambda_20;
c_73128.num_args = 1;
c_73128.num_elements = 2;
c_73128.elements = (object *)alloca(sizeof(object) * 2);
c_73128.elements[0] = k_7346;
c_73128.elements[1] = ((closureN)self_7384)->elements[0];

return_closcall2(data,  __glo_error_91object_127_scheme_base,  &c_73128, car(((closureN)self_7384)->elements[0]));; 
}

static void __lambda_20(void *data, int argc, object self_7385, object r_7347) {
  if( (boolean_f != r_7347) ){ 
  
closureN_type c_73130;
c_73130.hdr.mark = gc_color_red;
 c_73130.hdr.grayed = 0;
c_73130.tag = closureN_tag;
 c_73130.fn = (function_type)__lambda_8;
c_73130.num_args = 1;
c_73130.num_elements = 2;
c_73130.elements = (object *)alloca(sizeof(object) * 2);
c_73130.elements[0] = ((closureN)self_7385)->elements[0];
c_73130.elements[1] = ((closureN)self_7385)->elements[1];

return_closcall2(data,  __glo_error_91object_91message_scheme_base,  &c_73130, car(((closureN)self_7385)->elements[1]));
} else { 
  
closureN_type c_73165;
c_73165.hdr.mark = gc_color_red;
 c_73165.hdr.grayed = 0;
c_73165.tag = closureN_tag;
 c_73165.fn = (function_type)__lambda_19;
c_73165.num_args = 1;
c_73165.num_elements = 2;
c_73165.elements = (object *)alloca(sizeof(object) * 2);
c_73165.elements[0] = ((closureN)self_7385)->elements[0];
c_73165.elements[1] = ((closureN)self_7385)->elements[1];

return_closcall1(data,(closure)&c_73165,  Cyc_is_pair(car(((closureN)self_7385)->elements[1])));}
; 
}

static void __lambda_19(void *data, int argc, object self_7394, object r_7358) {
  if( (boolean_f != r_7358) ){ 
  
closureN_type c_73167;
c_73167.hdr.mark = gc_color_red;
 c_73167.hdr.grayed = 0;
c_73167.tag = closureN_tag;
 c_73167.fn = (function_type)__lambda_15;
c_73167.num_args = 0;
c_73167.num_elements = 1;
c_73167.elements = (object *)alloca(sizeof(object) * 1);
c_73167.elements[0] = ((closureN)self_7394)->elements[1];


closureN_type c_73213;
c_73213.hdr.mark = gc_color_red;
 c_73213.hdr.grayed = 0;
c_73213.tag = closureN_tag;
 c_73213.fn = (function_type)__lambda_18;
c_73213.num_args = 1;
c_73213.num_elements = 2;
c_73213.elements = (object *)alloca(sizeof(object) * 2);
c_73213.elements[0] = ((closureN)self_7394)->elements[0];
c_73213.elements[1] = ((closureN)self_7394)->elements[1];

return_closcall1(data,(closure)&c_73167,  &c_73213);
} else { 
  return_closcall2(data,  __glo_display_scheme_write,  ((closureN)self_7394)->elements[0], car(((closureN)self_7394)->elements[1]));}
; 
}

static void __lambda_18(void *data, int argc, object self_7395, object r_7359) {
  
mclosure0(c_73216, (function_type)__lambda_17);c_73216.num_args = 1;
return_closcall3(data,  __glo_Cyc_91for_91each_91loop_911_scheme_base,  ((closureN)self_7395)->elements[0], &c_73216, car(((closureN)self_7395)->elements[1]));; 
}

static void __lambda_17(void *data, int argc, object self_7396, object k_7361, object o_7311_7322) {
  
closureN_type c_73218;
c_73218.hdr.mark = gc_color_red;
 c_73218.hdr.grayed = 0;
c_73218.tag = closureN_tag;
 c_73218.fn = (function_type)__lambda_16;
c_73218.num_args = 1;
c_73218.num_elements = 1;
c_73218.elements = (object *)alloca(sizeof(object) * 1);
c_73218.elements[0] = k_7361;

return_closcall2(data,  __glo_write_scheme_write,  &c_73218, o_7311_7322);; 
}

static void __lambda_16(void *data, int argc, object self_7397, object r_7362) {
  
make_utf8_string_with_len(c_73221, " ", 1, 1);
return_closcall2(data,  __glo_display_scheme_write,  ((closureN)self_7397)->elements[0], &c_73221);; 
}

static void __lambda_15(void *data, int argc, object self_7398, object k_7363) {
  
closureN_type c_73169;
c_73169.hdr.mark = gc_color_red;
 c_73169.hdr.grayed = 0;
c_73169.tag = closureN_tag;
 c_73169.fn = (function_type)__lambda_14;
c_73169.num_args = 1;
c_73169.num_elements = 2;
c_73169.elements = (object *)alloca(sizeof(object) * 2);
c_73169.elements[0] = k_7363;
c_73169.elements[1] = ((closureN)self_7398)->elements[0];

return_closcall1(data,(closure)&c_73169,  Cyc_car(data, car(((closureN)self_7398)->elements[0])));; 
}

static void __lambda_14(void *data, int argc, object self_7399, object r_7372) {
  if( (boolean_f != Cyc_is_string(r_7372)) ){ 
  
closureN_type c_73173;
c_73173.hdr.mark = gc_color_red;
 c_73173.hdr.grayed = 0;
c_73173.tag = closureN_tag;
 c_73173.fn = (function_type)__lambda_13;
c_73173.num_args = 1;
c_73173.num_elements = 2;
c_73173.elements = (object *)alloca(sizeof(object) * 2);
c_73173.elements[0] = ((closureN)self_7399)->elements[0];
c_73173.elements[1] = ((closureN)self_7399)->elements[1];

return_closcall1(data,(closure)&c_73173,  Cyc_car(data, car(((closureN)self_7399)->elements[1])));
} else { 
  return_closcall1(data,  ((closureN)self_7399)->elements[0],  boolean_f);}
; 
}

static void __lambda_13(void *data, int argc, object self_73100, object r_7371) {
  
closureN_type c_73175;
c_73175.hdr.mark = gc_color_red;
 c_73175.hdr.grayed = 0;
c_73175.tag = closureN_tag;
 c_73175.fn = (function_type)__lambda_12;
c_73175.num_args = 1;
c_73175.num_elements = 2;
c_73175.elements = (object *)alloca(sizeof(object) * 2);
c_73175.elements[0] = ((closureN)self_73100)->elements[0];
c_73175.elements[1] = ((closureN)self_73100)->elements[1];

return_closcall2(data,  __glo_display_scheme_write,  &c_73175, r_7371);; 
}

static void __lambda_12(void *data, int argc, object self_73101, object r_7365) {
  
closureN_type c_73177;
c_73177.hdr.mark = gc_color_red;
 c_73177.hdr.grayed = 0;
c_73177.tag = closureN_tag;
 c_73177.fn = (function_type)__lambda_9;
c_73177.num_args = 0;
c_73177.num_elements = 1;
c_73177.elements = (object *)alloca(sizeof(object) * 1);
c_73177.elements[0] = ((closureN)self_73101)->elements[1];


closureN_type c_73188;
c_73188.hdr.mark = gc_color_red;
 c_73188.hdr.grayed = 0;
c_73188.tag = closureN_tag;
 c_73188.fn = (function_type)__lambda_11;
c_73188.num_args = 1;
c_73188.num_elements = 2;
c_73188.elements = (object *)alloca(sizeof(object) * 2);
c_73188.elements[0] = ((closureN)self_73101)->elements[0];
c_73188.elements[1] = ((closureN)self_73101)->elements[1];

return_closcall1(data,(closure)&c_73177,  &c_73188);; 
}

static void __lambda_11(void *data, int argc, object self_73102, object r_7366) {
  
closureN_type c_73190;
c_73190.hdr.mark = gc_color_red;
 c_73190.hdr.grayed = 0;
c_73190.tag = closureN_tag;
 c_73190.fn = (function_type)__lambda_10;
c_73190.num_args = 1;
c_73190.num_elements = 2;
c_73190.elements = (object *)alloca(sizeof(object) * 2);
c_73190.elements[0] = ((closureN)self_73102)->elements[0];
c_73190.elements[1] = ((closureN)self_73102)->elements[1];

return_closcall1(data,(closure)&c_73190,  Cyc_cdr(data, car(((closureN)self_73102)->elements[1])));; 
}

static void __lambda_10(void *data, int argc, object self_73103, object r_7367) {
  return_closcall1(data,  ((closureN)self_73103)->elements[0],  Cyc_set_cell(data, ((closureN)self_73103)->elements[1], r_7367));; 
}

static void __lambda_9(void *data, int argc, object self_73104, object k_7368) {
  if( (boolean_f != Cyc_is_null(Cyc_cdr(data, car(((closureN)self_73104)->elements[0])))) ){ 
  return_closcall1(data,  k_7368,  boolean_f);
} else { 
  
make_utf8_string_with_len(c_73187, ": ", 2, 2);
return_closcall2(data,  __glo_display_scheme_write,  k_7368, &c_73187);}
; 
}

static void __lambda_8(void *data, int argc, object self_7386, object r_7357) {
  
closureN_type c_73132;
c_73132.hdr.mark = gc_color_red;
 c_73132.hdr.grayed = 0;
c_73132.tag = closureN_tag;
 c_73132.fn = (function_type)__lambda_7;
c_73132.num_args = 1;
c_73132.num_elements = 2;
c_73132.elements = (object *)alloca(sizeof(object) * 2);
c_73132.elements[0] = ((closureN)self_7386)->elements[0];
c_73132.elements[1] = ((closureN)self_7386)->elements[1];

return_closcall2(data,  __glo_display_scheme_write,  &c_73132, r_7357);; 
}

static void __lambda_7(void *data, int argc, object self_7387, object r_7348) {
  
closureN_type c_73134;
c_73134.hdr.mark = gc_color_red;
 c_73134.hdr.grayed = 0;
c_73134.tag = closureN_tag;
 c_73134.fn = (function_type)__lambda_2;
c_73134.num_args = 0;
c_73134.num_elements = 1;
c_73134.elements = (object *)alloca(sizeof(object) * 1);
c_73134.elements[0] = ((closureN)self_7387)->elements[1];


closureN_type c_73147;
c_73147.hdr.mark = gc_color_red;
 c_73147.hdr.grayed = 0;
c_73147.tag = closureN_tag;
 c_73147.fn = (function_type)__lambda_6;
c_73147.num_args = 1;
c_73147.num_elements = 2;
c_73147.elements = (object *)alloca(sizeof(object) * 2);
c_73147.elements[0] = ((closureN)self_7387)->elements[0];
c_73147.elements[1] = ((closureN)self_7387)->elements[1];

return_closcall1(data,(closure)&c_73134,  &c_73147);; 
}

static void __lambda_6(void *data, int argc, object self_7388, object r_7349) {
  
closureN_type c_73149;
c_73149.hdr.mark = gc_color_red;
 c_73149.hdr.grayed = 0;
c_73149.tag = closureN_tag;
 c_73149.fn = (function_type)__lambda_5;
c_73149.num_args = 1;
c_73149.num_elements = 1;
c_73149.elements = (object *)alloca(sizeof(object) * 1);
c_73149.elements[0] = ((closureN)self_7388)->elements[0];

return_closcall2(data,  __glo_error_91object_91irritants_scheme_base,  &c_73149, car(((closureN)self_7388)->elements[1]));; 
}

static void __lambda_5(void *data, int argc, object self_7389, object r_7351) {
  
mclosure0(c_73152, (function_type)__lambda_4);c_73152.num_args = 1;
return_closcall3(data,  __glo_Cyc_91for_91each_91loop_911_scheme_base,  ((closureN)self_7389)->elements[0], &c_73152, r_7351);; 
}

static void __lambda_4(void *data, int argc, object self_7390, object k_7352, object o_737_7321) {
  
closureN_type c_73154;
c_73154.hdr.mark = gc_color_red;
 c_73154.hdr.grayed = 0;
c_73154.tag = closureN_tag;
 c_73154.fn = (function_type)__lambda_3;
c_73154.num_args = 1;
c_73154.num_elements = 1;
c_73154.elements = (object *)alloca(sizeof(object) * 1);
c_73154.elements[0] = k_7352;

return_closcall2(data,  __glo_write_scheme_write,  &c_73154, o_737_7321);; 
}

static void __lambda_3(void *data, int argc, object self_7391, object r_7353) {
  
make_utf8_string_with_len(c_73157, " ", 1, 1);
return_closcall2(data,  __glo_display_scheme_write,  ((closureN)self_7391)->elements[0], &c_73157);; 
}

static void __lambda_2(void *data, int argc, object self_7392, object k_7354) {
  
closureN_type c_73136;
c_73136.hdr.mark = gc_color_red;
 c_73136.hdr.grayed = 0;
c_73136.tag = closureN_tag;
 c_73136.fn = (function_type)__lambda_1;
c_73136.num_args = 1;
c_73136.num_elements = 1;
c_73136.elements = (object *)alloca(sizeof(object) * 1);
c_73136.elements[0] = k_7354;

return_closcall2(data,  __glo_error_91object_91irritants_scheme_base,  &c_73136, car(((closureN)self_7392)->elements[0]));; 
}

static void __lambda_1(void *data, int argc, object self_7393, object r_7356) {
  if( (boolean_f != Cyc_is_null(r_7356)) ){ 
  return_closcall1(data,  ((closureN)self_7393)->elements[0],  boolean_f);
} else { 
  
make_utf8_string_with_len(c_73143, ": ", 2, 2);
return_closcall2(data,  __glo_display_scheme_write,  ((closureN)self_7393)->elements[0], &c_73143);}
; 
}

static void __lambda_0(void *data, int argc, closure _,object k_7326) {
  Cyc_st_add(data, "scheme/repl.sld:interaction-environment");
return_closcall1(data,  __glo_setup_91environment_scheme_eval,  k_7326);; 
}

void c_schemerepl_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
(((closure)cont)->fn)(data, 1, cont, NULL);
 } 
void c_schemerepl_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);

  add_global((object *) &__glo_lib_91init_117schemerepl_scheme_repl);
  add_global((object *) &__glo_repl_scheme_repl);
  add_global((object *) &__glo_interaction_91environment_scheme_repl);
  mclosure0(c_73272, (function_type)__lambda_38);c_73272.num_args = 0; 
  __glo_lib_91init_117schemerepl_scheme_repl = &c_73272; 
  mclosure0(c_73114, (function_type)__lambda_37);c_73114.num_args = 0; 
  __glo_repl_scheme_repl = &c_73114; 
  mclosure0(c_73112, (function_type)__lambda_0);c_73112.num_args = 0; 
  __glo_interaction_91environment_scheme_repl = &c_73112; 

  mclosure0(clo_73275, c_schemerepl_inlinable_lambdas); make_pair(pair_73274, find_or_add_symbol("c_schemerepl_inlinable_lambdas"), &clo_73275);
  make_cvar(cvar_73276, (object *)&__glo_lib_91init_117schemerepl_scheme_repl);make_pair(pair_73277, find_or_add_symbol("lib-init:schemerepl"), &cvar_73276);
  make_cvar(cvar_73278, (object *)&__glo_repl_scheme_repl);make_pair(pair_73279, find_or_add_symbol("repl"), &cvar_73278);
  make_cvar(cvar_73280, (object *)&__glo_interaction_91environment_scheme_repl);make_pair(pair_73281, find_or_add_symbol("interaction-environment"), &cvar_73280);
make_pair(c_73285, &pair_73274,Cyc_global_variables);
make_pair(c_73284, &pair_73277, &c_73285);
make_pair(c_73283, &pair_73279, &c_73284);
make_pair(c_73282, &pair_73281, &c_73283);
Cyc_global_variables = &c_73282;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemerepl_scheme_repl)->fn)(data, 1, cont, cont);
}
void c_schemerepl_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_repl");
  c_schemerepl_entry_pt_first_lambda(data, argc, cont,value);
}
