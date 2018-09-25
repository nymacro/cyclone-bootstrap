/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2018 Justin Ethier
 ** Version 0.9.3 
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

#define return_direct_with_clo1(td, clo, _clo_fn, _fn,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     mclosure1(c1, (function_type) _clo_fn, clo); \
     GC(td, (closure)(&c1), buf, 1); \
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

#define return_direct_with_clo2(td, clo, _clo_fn, _fn,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     mclosure1(c1, (function_type) _clo_fn, clo); \
     GC(td, (closure)(&c1), buf, 2); \
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

#define return_direct_with_clo3(td, clo, _clo_fn, _fn,a1,a2,a3) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3;\
     mclosure1(c1, (function_type) _clo_fn, clo); \
     GC(td, (closure)(&c1), buf, 3); \
     return; \
 } else { \
     (_fn)(td, 3, (closure)(clo),a1,a2,a3); \
 }}

#include "cyclone/types.h"
object __glo_lib_91init_117schemeload_scheme_load = NULL;
object __glo_load_scheme_load = NULL;
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
extern object __glo_call_91with_91input_91file_scheme_file;
extern object __glo_call_91with_91output_91file_scheme_file;
extern object __glo_with_91input_91from_91file_scheme_file;
extern object __glo_with_91output_91to_91file_scheme_file;
extern object __glo_read_scheme_read;
extern object __glo_read_91all_scheme_read;
extern object __glo_include_scheme_read;
extern object __glo_include_91ci_scheme_read;
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
static void __lambda_4(void *data, int argc, closure _,object k_7322) ;
static void __lambda_3(void *data, int argc, closure _,object k_7313, object filename_731_736, object env_732_737_raw, ...) ;
static void __lambda_2(void *data, int argc, object self_7325, object k_7319, object port_735_7310) ;
static void __lambda_1(void *data, int argc, object self_7323, object exprs_733_738) ;
static void __lambda_0(void *data, int argc, object self_7324, object k_7316, object expr_734_739) ;

static void __lambda_4(void *data, int argc, closure _,object k_7322) {
  Cyc_st_add(data, "scheme/load.sld:lib-init:schemeload");
return_closcall1(data,  k_7322,  obj_int2obj(0));; 
}

static void __lambda_3(void *data, int argc, closure _,object k_7313, object filename_731_736, object env_732_737_raw, ...) {
load_varargs(env_732_737, env_732_737_raw, argc - 2);
  Cyc_st_add(data, "scheme/load.sld:load");

closureN_type c_7328;
c_7328.hdr.mark = gc_color_red;
 c_7328.hdr.grayed = 0;
c_7328.tag = closureN_tag;
 c_7328.fn = (function_type)__lambda_1;
c_7328.num_args = 1;
c_7328.num_elements = 2;
c_7328.elements = (object *)alloca(sizeof(object) * 2);
c_7328.elements[0] = env_732_737;
c_7328.elements[1] = k_7313;


mclosure0(c_7340, (function_type)__lambda_2);c_7340.num_args = 1;
return_closcall3(data,  __glo_call_91with_91input_91file_scheme_file,  &c_7328, filename_731_736, &c_7340);; 
}

static void __lambda_2(void *data, int argc, object self_7325, object k_7319, object port_735_7310) {
  return_closcall2(data,  __glo_read_91all_scheme_read,  k_7319, port_735_7310);; 
}

static void __lambda_1(void *data, int argc, object self_7323, object exprs_733_738) {
  
closureN_type c_7331;
c_7331.hdr.mark = gc_color_red;
 c_7331.hdr.grayed = 0;
c_7331.tag = closureN_tag;
 c_7331.fn = (function_type)__lambda_0;
c_7331.num_args = 1;
c_7331.num_elements = 1;
c_7331.elements = (object *)alloca(sizeof(object) * 1);
c_7331.elements[0] = ((closureN)self_7323)->elements[0];

return_closcall3(data,  __glo_Cyc_91for_91each_91loop_911_scheme_base,  ((closureN)self_7323)->elements[1], &c_7331, exprs_733_738);; 
}

static void __lambda_0(void *data, int argc, object self_7324, object k_7316, object expr_734_739) {
  
make_pair(c_7338,expr_734_739, ((closureN)self_7324)->elements[0]);

object c_7335 = apply(data,  k_7316,__glo_eval_scheme_eval, &c_7338);
return_closcall1(data,  k_7316,  c_7335);; 
}

void c_schemeload_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
(((closure)cont)->fn)(data, 1, cont, NULL);
 } 
void c_schemeload_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);

  add_global((object *) &__glo_lib_91init_117schemeload_scheme_load);
  add_global((object *) &__glo_load_scheme_load);
  mclosure0(c_7342, (function_type)__lambda_4);c_7342.num_args = 0; 
  __glo_lib_91init_117schemeload_scheme_load = &c_7342; 
  mclosure0(c_7326, (function_type)__lambda_3);c_7326.num_args = 1; 
  __glo_load_scheme_load = &c_7326; 

  mclosure0(clo_7345, c_schemeload_inlinable_lambdas); make_pair(pair_7344, find_or_add_symbol("c_schemeload_inlinable_lambdas"), &clo_7345);
  make_cvar(cvar_7346, (object *)&__glo_lib_91init_117schemeload_scheme_load);make_pair(pair_7347, find_or_add_symbol("lib-init:schemeload"), &cvar_7346);
  make_cvar(cvar_7348, (object *)&__glo_load_scheme_load);make_pair(pair_7349, find_or_add_symbol("load"), &cvar_7348);
make_pair(c_7352, &pair_7344,Cyc_global_variables);
make_pair(c_7351, &pair_7347, &c_7352);
make_pair(c_7350, &pair_7349, &c_7351);
Cyc_global_variables = &c_7350;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemeload_scheme_load)->fn)(data, 1, cont, cont);
}
void c_schemeload_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_load");
  c_schemeload_entry_pt_first_lambda(data, argc, cont,value);
}
