/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2019 Justin Ethier
 ** Version 0.11.6 
 **
 **/

#define closcall1(td, clo,a1) \
if (obj_is_not_closure(clo)) { \
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
if (obj_is_not_closure(clo)) { \
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

#include "cyclone/types.h"
object __glo_lib_91init_117schemeinexact_scheme_inexact = NULL;
object __glo_atan_scheme_inexact = NULL;
object __glo_atan_191_191inline_191_191_scheme_inexact = NULL;
object __glo_acos_scheme_inexact = NULL;
object __glo_acos_191_191inline_191_191_scheme_inexact = NULL;
object __glo_asin_scheme_inexact = NULL;
object __glo_asin_191_191inline_191_191_scheme_inexact = NULL;
object __glo_tan_scheme_inexact = NULL;
object __glo_tan_191_191inline_191_191_scheme_inexact = NULL;
object __glo_cos_scheme_inexact = NULL;
object __glo_cos_191_191inline_191_191_scheme_inexact = NULL;
object __glo_sin_scheme_inexact = NULL;
object __glo_sin_191_191inline_191_191_scheme_inexact = NULL;
object __glo_sqrt_scheme_inexact = NULL;
object __glo_sqrt_191_191inline_191_191_scheme_inexact = NULL;
object __glo_exp_scheme_inexact = NULL;
object __glo_exp_191_191inline_191_191_scheme_inexact = NULL;
object __glo_c_91log_scheme_inexact = NULL;
object __glo_c_91log_191_191inline_191_191_scheme_inexact = NULL;
object __glo_log_scheme_inexact = NULL;
object __glo_finite_127_scheme_inexact = NULL;
object __glo_infinite_127_scheme_inexact = NULL;
object __glo_nan_127_scheme_inexact = NULL;
object __glo_define_91inexact_91op_scheme_inexact = NULL;
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
extern object __glo_make_91constructor_95args_scheme_base;
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
extern object __glo_Cyc_91map_91loop_912_scheme_base;
extern object __glo_Cyc_91for_91each_91loop_911_scheme_base;
extern object __glo_Cyc_91for_91each_91loop_912_scheme_base;
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
extern object __glo_exact_91integer_127_191_191inline_191_191_scheme_base;
extern object __glo_exact_127_191_191inline_191_191_scheme_base;
extern object __glo_complex_127_191_191inline_191_191_scheme_base;
extern object __glo_denominator_191_191inline_191_191_scheme_base;
extern object __glo_numerator_191_191inline_191_191_scheme_base;
extern object __glo_quotient_191_191inline_191_191_scheme_base;
extern object __glo_square_191_191inline_191_191_scheme_base;
extern object __glo_eof_91object_191_191inline_191_191_scheme_base;
#include "cyclone/runtime.h"
defsymbol(define_91c);
static void __lambda_7(void *data, int argc, closure _,object k_7359) ;
static object __lambda_27(void *data, object ptr, object z) ;
static void __lambda_26(void *data, int argc, closure _, object k, object z) ;
static object __lambda_25(void *data, object ptr, object z) ;
static void __lambda_24(void *data, int argc, closure _, object k, object z) ;
static object __lambda_23(void *data, object ptr, object z) ;
static void __lambda_22(void *data, int argc, closure _, object k, object z) ;
static object __lambda_21(void *data, object ptr, object z) ;
static void __lambda_20(void *data, int argc, closure _, object k, object z) ;
static object __lambda_19(void *data, object ptr, object z) ;
static void __lambda_18(void *data, int argc, closure _, object k, object z) ;
static object __lambda_17(void *data, object ptr, object z) ;
static void __lambda_16(void *data, int argc, closure _, object k, object z) ;
static object __lambda_15(void *data, object ptr, object z) ;
static void __lambda_14(void *data, int argc, closure _, object k, object z) ;
static object __lambda_13(void *data, object ptr, object z) ;
static void __lambda_12(void *data, int argc, closure _, object k, object z) ;
static object __lambda_11(void *data, object ptr, object z) ;
static void __lambda_10(void *data, int argc, closure _, object k, object z) ;
static void __lambda_6(void *data, int argc, closure _,object k_7352, object z1_7318_7328, object z2_7319_7329_raw, ...) ;
static void __lambda_4(void *data, int argc, closure _,object k_7348, object z_7317_7327) ;
static void __lambda_5(void *data, int argc, object self_7362, object r_7349) ;
static void __lambda_9(void *data, int argc, closure _, object k, object z) ;
static void __lambda_8(void *data, int argc, closure _, object k, object z) ;
static void __lambda_1(void *data, int argc, closure _,object k_7333, object expr_731_7321, object rename_732_7322, object compare_733_7323) ;
static void __lambda_2(void *data, int argc, object self_7360, object r_7341) ;
static void __lambda_3(void *data, int argc, object self_7361, object r_7344) ;

static void __lambda_7(void *data, int argc, closure _,object k_7359) {
  Cyc_st_add(data, "scheme/inexact.sld:lib-init:schemeinexact");
return_closcall1(data,  k_7359,  obj_int2obj(0));; 
}

static object __lambda_27(void *data, object ptr, object z) { return_inexact_double_or_cplx_op_no_cps(data, ptr, atan, catan, z); }
static void __lambda_26(void *data, int argc, closure _, object k, object z) { return_inexact_double_or_cplx_op(data, k, atan, catan, z); }
static object __lambda_25(void *data, object ptr, object z) { return_inexact_double_or_cplx_op_no_cps(data, ptr, acos, cacos, z); }
static void __lambda_24(void *data, int argc, closure _, object k, object z) { return_inexact_double_or_cplx_op(data, k, acos, cacos, z); }
static object __lambda_23(void *data, object ptr, object z) { return_inexact_double_or_cplx_op_no_cps(data, ptr, asin, casin, z); }
static void __lambda_22(void *data, int argc, closure _, object k, object z) { return_inexact_double_or_cplx_op(data, k, asin, casin, z); }
static object __lambda_21(void *data, object ptr, object z) { return_inexact_double_or_cplx_op_no_cps(data, ptr, tan, ctan, z); }
static void __lambda_20(void *data, int argc, closure _, object k, object z) { return_inexact_double_or_cplx_op(data, k, tan, ctan, z); }
static object __lambda_19(void *data, object ptr, object z) { return_inexact_double_or_cplx_op_no_cps(data, ptr, cos, ccos, z); }
static void __lambda_18(void *data, int argc, closure _, object k, object z) { return_inexact_double_or_cplx_op(data, k, cos, ccos, z); }
static object __lambda_17(void *data, object ptr, object z) { return_inexact_double_or_cplx_op_no_cps(data, ptr, sin, csin, z); }
static void __lambda_16(void *data, int argc, closure _, object k, object z) { return_inexact_double_or_cplx_op(data, k, sin, csin, z); }
static object __lambda_15(void *data, object ptr, object z) { return_inexact_double_or_cplx_op_no_cps(data, ptr, sqrt, csqrt, z); }
static void __lambda_14(void *data, int argc, closure _, object k, object z) { return_inexact_double_or_cplx_op(data, k, sqrt, csqrt, z); }
static object __lambda_13(void *data, object ptr, object z) { return_inexact_double_or_cplx_op_no_cps(data, ptr, exp, cexp, z); }
static void __lambda_12(void *data, int argc, closure _, object k, object z) { return_inexact_double_or_cplx_op(data, k, exp, cexp, z); }
static object __lambda_11(void *data, object ptr, object z) { return_inexact_double_or_cplx_op_no_cps(data, ptr, log, clog, z); }
static void __lambda_10(void *data, int argc, closure _, object k, object z) { return_inexact_double_or_cplx_op(data, k, log, clog, z); }
static void __lambda_6(void *data, int argc, closure _,object k_7352, object z1_7318_7328, object z2_7319_7329_raw, ...) {
load_varargs(z2_7319_7329, z2_7319_7329_raw, argc - 2);
  Cyc_st_add(data, "scheme/inexact.sld:log");
  
if( (boolean_f != Cyc_is_null(z2_7319_7329)) ){ 
  
complex_num_type local_73134; 
return_closcall1(data,  k_7352,  ((inline_function_type)
                   ((closure)__glo_c_91log_191_191inline_191_191_scheme_inexact)->fn)(data,&local_73134, z1_7318_7328));
} else { 
  
complex_num_type local_73138; 

complex_num_type local_73141; 

complex_num_type local_73144; 


return_closcall1(data,  k_7352,  Cyc_fast_div(data,&local_73138, ((inline_function_type)
                   ((closure)__glo_c_91log_191_191inline_191_191_scheme_inexact)->fn)(data,&local_73141, z1_7318_7328), ((inline_function_type)
                   ((closure)__glo_c_91log_191_191inline_191_191_scheme_inexact)->fn)(data,&local_73144, Cyc_car(data, z2_7319_7329))));}
;; 
}

static void __lambda_4(void *data, int argc, closure _,object k_7348, object z_7317_7327) {
  Cyc_st_add(data, "scheme/inexact.sld:finite?");

closureN_type c_73122;
object e_73127 [1];
c_73122.hdr.mark = gc_color_red;
 c_73122.hdr.grayed = 0;
c_73122.tag = closureN_tag;
 c_73122.fn = (function_type)__lambda_5;
c_73122.num_args = 1;
c_73122.num_elements = 1;
c_73122.elements = (object *)e_73127;
c_73122.elements[0] = k_7348;

return_closcall2(data,  __glo_infinite_127_scheme_inexact,  &c_73122, z_7317_7327);; 
}

static void __lambda_5(void *data, int argc, object self_7362, object r_7349) {
  if( (boolean_f != r_7349) ){ 
  return_closcall1(data,  ((closureN)self_7362)->elements[0],  boolean_f);
} else { 
  return_closcall1(data,  ((closureN)self_7362)->elements[0],  boolean_t);}
;; 
}

static void __lambda_9(void *data, int argc, closure _, object k, object z) { Cyc_check_num(data, z);
        if (obj_is_int(z) || 
            type_of(z) == integer_tag ||
            type_of(z) == bignum_tag ||
            !isinf(((double_type *)z)->value)) 
        {
          return_closcall1(data, k, boolean_f);
        }
        return_closcall1(data, k, boolean_t); }
static void __lambda_8(void *data, int argc, closure _, object k, object z) { Cyc_check_num(data, z);
        if (obj_is_int(z) || 
            type_of(z) == integer_tag ||
            type_of(z) == bignum_tag ||
            !isnan(((double_type *)z)->value)) 
        {
          return_closcall1(data, k, boolean_f);
        }
        return_closcall1(data, k, boolean_t); }
static void __lambda_1(void *data, int argc, closure _,object k_7333, object expr_731_7321, object rename_732_7322, object compare_733_7323) {
  Cyc_st_add(data, "scheme/inexact.sld:define-inexact-op");

closureN_type c_7365;
object e_73107 [2];
c_7365.hdr.mark = gc_color_red;
 c_7365.hdr.grayed = 0;
c_7365.tag = closureN_tag;
 c_7365.fn = (function_type)__lambda_2;
c_7365.num_args = 1;
c_7365.num_elements = 2;
c_7365.elements = (object *)e_73107;
c_7365.elements[0] = expr_731_7321;
c_7365.elements[1] = k_7333;


make_utf8_string_with_len(c_73111, " return_inexact_double_or_cplx_op(data, k, ", 43, 43);



make_utf8_string_with_len(c_73114, ", ", 2, 2);



make_utf8_string_with_len(c_73117, ", z);", 5, 5);

object c_73110 = Cyc_string_append(data,(closure)&c_7365,5,&c_73111, Cyc_caddr(data, expr_731_7321), &c_73114, Cyc_cadddr(data, expr_731_7321), &c_73117);
return_closcall1(data,(closure)&c_7365,  c_73110);; 
}

static void __lambda_2(void *data, int argc, object self_7360, object r_7341) {
  
closureN_type c_7367;
object e_7394 [3];
c_7367.hdr.mark = gc_color_red;
 c_7367.hdr.grayed = 0;
c_7367.tag = closureN_tag;
 c_7367.fn = (function_type)__lambda_3;
c_7367.num_args = 1;
c_7367.num_elements = 3;
c_7367.elements = (object *)e_7394;
c_7367.elements[0] = ((closureN)self_7360)->elements[0];
c_7367.elements[1] = ((closureN)self_7360)->elements[1];
c_7367.elements[2] = r_7341;


make_utf8_string_with_len(c_7398, " return_inexact_double_or_cplx_op_no_cps(data, ptr, ", 52, 52);



make_utf8_string_with_len(c_73102, ", ", 2, 2);



make_utf8_string_with_len(c_73106, ", z);", 5, 5);

object c_7397 = Cyc_string_append(data,(closure)&c_7367,5,&c_7398, Cyc_caddr(data, ((closureN)self_7360)->elements[0]), &c_73102, Cyc_cadddr(data, ((closureN)self_7360)->elements[0]), &c_73106);
return_closcall1(data,(closure)&c_7367,  c_7397);; 
}

static void __lambda_3(void *data, int argc, object self_7361, object r_7344) {
  
pair_type local_7372; 

pair_type local_7375; 



pair_type local_7381; 

make_utf8_string_with_len(c_7382, "(void *data, int argc, closure _, object k, object z)", 53, 53);

pair_type local_7385; 

pair_type local_7389; 

make_utf8_string_with_len(c_7390, "(void *data, object ptr, object z)", 34, 34);

pair_type local_7393; 
return_closcall1(data,  ((closureN)self_7361)->elements[1],  set_pair_as_expr(&local_7372, quote_define_91c, set_pair_as_expr(&local_7375, Cyc_cadr(data, ((closureN)self_7361)->elements[0]), set_pair_as_expr(&local_7381, &c_7382, set_pair_as_expr(&local_7385, ((closureN)self_7361)->elements[2], set_pair_as_expr(&local_7389, &c_7390, set_pair_as_expr(&local_7393, r_7344, NULL)))))));; 
}

void c_schemeinexact_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
make_pair(pair_73167, find_or_add_symbol("atan"), find_or_add_symbol("atan__inline__"));
make_pair(pair_73168, find_or_add_symbol("acos"), find_or_add_symbol("acos__inline__"));
make_pair(pair_73169, find_or_add_symbol("asin"), find_or_add_symbol("asin__inline__"));
make_pair(pair_73170, find_or_add_symbol("tan"), find_or_add_symbol("tan__inline__"));
make_pair(pair_73171, find_or_add_symbol("cos"), find_or_add_symbol("cos__inline__"));
make_pair(pair_73172, find_or_add_symbol("sin"), find_or_add_symbol("sin__inline__"));
make_pair(pair_73173, find_or_add_symbol("sqrt"), find_or_add_symbol("sqrt__inline__"));
make_pair(pair_73174, find_or_add_symbol("exp"), find_or_add_symbol("exp__inline__"));
make_pair(pair_73175, find_or_add_symbol("c-log"), find_or_add_symbol("c-log__inline__"));
make_pair(c_73184, &pair_73167, NULL);
make_pair(c_73183, &pair_73168, &c_73184);
make_pair(c_73182, &pair_73169, &c_73183);
make_pair(c_73181, &pair_73170, &c_73182);
make_pair(c_73180, &pair_73171, &c_73181);
make_pair(c_73179, &pair_73172, &c_73180);
make_pair(c_73178, &pair_73173, &c_73179);
make_pair(c_73177, &pair_73174, &c_73178);
make_pair(c_73176, &pair_73175, &c_73177);
(((closure)cont)->fn)(data, 1, cont, &c_73176);
 } 
void c_schemeinexact_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);
  quote_define_91c = find_or_add_symbol("define-c");

  add_global((object *) &__glo_lib_91init_117schemeinexact_scheme_inexact);
  add_global((object *) &__glo_atan_scheme_inexact);
  add_global((object *) &__glo_atan_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_acos_scheme_inexact);
  add_global((object *) &__glo_acos_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_asin_scheme_inexact);
  add_global((object *) &__glo_asin_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_tan_scheme_inexact);
  add_global((object *) &__glo_tan_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_cos_scheme_inexact);
  add_global((object *) &__glo_cos_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_sin_scheme_inexact);
  add_global((object *) &__glo_sin_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_sqrt_scheme_inexact);
  add_global((object *) &__glo_sqrt_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_exp_scheme_inexact);
  add_global((object *) &__glo_exp_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_c_91log_scheme_inexact);
  add_global((object *) &__glo_c_91log_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_log_scheme_inexact);
  add_global((object *) &__glo_finite_127_scheme_inexact);
  add_global((object *) &__glo_infinite_127_scheme_inexact);
  add_global((object *) &__glo_nan_127_scheme_inexact);
  add_global((object *) &__glo_define_91inexact_91op_scheme_inexact);
  add_symbol(quote_define_91c);
  mclosure0(c_73165, (function_type)__lambda_7);c_73165.num_args = 0; 
  __glo_lib_91init_117schemeinexact_scheme_inexact = &c_73165; 
  mclosure0(c_73164, (function_type)__lambda_26);c_73164.num_args = 1; 
  __glo_atan_scheme_inexact = &c_73164; 
  mclosure0(c_73163, (function_type)__lambda_27);c_73163.num_args = -1; 
  __glo_atan_191_191inline_191_191_scheme_inexact = &c_73163; 
  mclosure0(c_73162, (function_type)__lambda_24);c_73162.num_args = 1; 
  __glo_acos_scheme_inexact = &c_73162; 
  mclosure0(c_73161, (function_type)__lambda_25);c_73161.num_args = -1; 
  __glo_acos_191_191inline_191_191_scheme_inexact = &c_73161; 
  mclosure0(c_73160, (function_type)__lambda_22);c_73160.num_args = 1; 
  __glo_asin_scheme_inexact = &c_73160; 
  mclosure0(c_73159, (function_type)__lambda_23);c_73159.num_args = -1; 
  __glo_asin_191_191inline_191_191_scheme_inexact = &c_73159; 
  mclosure0(c_73158, (function_type)__lambda_20);c_73158.num_args = 1; 
  __glo_tan_scheme_inexact = &c_73158; 
  mclosure0(c_73157, (function_type)__lambda_21);c_73157.num_args = -1; 
  __glo_tan_191_191inline_191_191_scheme_inexact = &c_73157; 
  mclosure0(c_73156, (function_type)__lambda_18);c_73156.num_args = 1; 
  __glo_cos_scheme_inexact = &c_73156; 
  mclosure0(c_73155, (function_type)__lambda_19);c_73155.num_args = -1; 
  __glo_cos_191_191inline_191_191_scheme_inexact = &c_73155; 
  mclosure0(c_73154, (function_type)__lambda_16);c_73154.num_args = 1; 
  __glo_sin_scheme_inexact = &c_73154; 
  mclosure0(c_73153, (function_type)__lambda_17);c_73153.num_args = -1; 
  __glo_sin_191_191inline_191_191_scheme_inexact = &c_73153; 
  mclosure0(c_73152, (function_type)__lambda_14);c_73152.num_args = 1; 
  __glo_sqrt_scheme_inexact = &c_73152; 
  mclosure0(c_73151, (function_type)__lambda_15);c_73151.num_args = -1; 
  __glo_sqrt_191_191inline_191_191_scheme_inexact = &c_73151; 
  mclosure0(c_73150, (function_type)__lambda_12);c_73150.num_args = 1; 
  __glo_exp_scheme_inexact = &c_73150; 
  mclosure0(c_73149, (function_type)__lambda_13);c_73149.num_args = -1; 
  __glo_exp_191_191inline_191_191_scheme_inexact = &c_73149; 
  mclosure0(c_73148, (function_type)__lambda_10);c_73148.num_args = 1; 
  __glo_c_91log_scheme_inexact = &c_73148; 
  mclosure0(c_73147, (function_type)__lambda_11);c_73147.num_args = -1; 
  __glo_c_91log_191_191inline_191_191_scheme_inexact = &c_73147; 
  mclosure0(c_73128, (function_type)__lambda_6);c_73128.num_args = 1; 
  __glo_log_scheme_inexact = &c_73128; 
  mclosure0(c_73120, (function_type)__lambda_4);c_73120.num_args = 1; 
  __glo_finite_127_scheme_inexact = &c_73120; 
  mclosure0(c_73119, (function_type)__lambda_9);c_73119.num_args = 1; 
  __glo_infinite_127_scheme_inexact = &c_73119; 
  mclosure0(c_73118, (function_type)__lambda_8);c_73118.num_args = 1; 
  __glo_nan_127_scheme_inexact = &c_73118; 
  mmacro(c_7363, (function_type)__lambda_1);c_7363.num_args = 3; 
  __glo_define_91inexact_91op_scheme_inexact = &c_7363; 

  mclosure0(clo_73186, c_schemeinexact_inlinable_lambdas); make_pair(pair_73185, find_or_add_symbol("c_schemeinexact_inlinable_lambdas"), &clo_73186);
  make_cvar(cvar_73187, (object *)&__glo_lib_91init_117schemeinexact_scheme_inexact);make_pair(pair_73188, find_or_add_symbol("lib-init:schemeinexact"), &cvar_73187);
  make_cvar(cvar_73189, (object *)&__glo_atan_scheme_inexact);make_pair(pair_73190, find_or_add_symbol("atan"), &cvar_73189);
  make_cvar(cvar_73191, (object *)&__glo_atan_191_191inline_191_191_scheme_inexact);make_pair(pair_73192, find_or_add_symbol("atan__inline__"), &cvar_73191);
  make_cvar(cvar_73193, (object *)&__glo_acos_scheme_inexact);make_pair(pair_73194, find_or_add_symbol("acos"), &cvar_73193);
  make_cvar(cvar_73195, (object *)&__glo_acos_191_191inline_191_191_scheme_inexact);make_pair(pair_73196, find_or_add_symbol("acos__inline__"), &cvar_73195);
  make_cvar(cvar_73197, (object *)&__glo_asin_scheme_inexact);make_pair(pair_73198, find_or_add_symbol("asin"), &cvar_73197);
  make_cvar(cvar_73199, (object *)&__glo_asin_191_191inline_191_191_scheme_inexact);make_pair(pair_73200, find_or_add_symbol("asin__inline__"), &cvar_73199);
  make_cvar(cvar_73201, (object *)&__glo_tan_scheme_inexact);make_pair(pair_73202, find_or_add_symbol("tan"), &cvar_73201);
  make_cvar(cvar_73203, (object *)&__glo_tan_191_191inline_191_191_scheme_inexact);make_pair(pair_73204, find_or_add_symbol("tan__inline__"), &cvar_73203);
  make_cvar(cvar_73205, (object *)&__glo_cos_scheme_inexact);make_pair(pair_73206, find_or_add_symbol("cos"), &cvar_73205);
  make_cvar(cvar_73207, (object *)&__glo_cos_191_191inline_191_191_scheme_inexact);make_pair(pair_73208, find_or_add_symbol("cos__inline__"), &cvar_73207);
  make_cvar(cvar_73209, (object *)&__glo_sin_scheme_inexact);make_pair(pair_73210, find_or_add_symbol("sin"), &cvar_73209);
  make_cvar(cvar_73211, (object *)&__glo_sin_191_191inline_191_191_scheme_inexact);make_pair(pair_73212, find_or_add_symbol("sin__inline__"), &cvar_73211);
  make_cvar(cvar_73213, (object *)&__glo_sqrt_scheme_inexact);make_pair(pair_73214, find_or_add_symbol("sqrt"), &cvar_73213);
  make_cvar(cvar_73215, (object *)&__glo_sqrt_191_191inline_191_191_scheme_inexact);make_pair(pair_73216, find_or_add_symbol("sqrt__inline__"), &cvar_73215);
  make_cvar(cvar_73217, (object *)&__glo_exp_scheme_inexact);make_pair(pair_73218, find_or_add_symbol("exp"), &cvar_73217);
  make_cvar(cvar_73219, (object *)&__glo_exp_191_191inline_191_191_scheme_inexact);make_pair(pair_73220, find_or_add_symbol("exp__inline__"), &cvar_73219);
  make_cvar(cvar_73221, (object *)&__glo_c_91log_scheme_inexact);make_pair(pair_73222, find_or_add_symbol("c-log"), &cvar_73221);
  make_cvar(cvar_73223, (object *)&__glo_c_91log_191_191inline_191_191_scheme_inexact);make_pair(pair_73224, find_or_add_symbol("c-log__inline__"), &cvar_73223);
  make_cvar(cvar_73225, (object *)&__glo_log_scheme_inexact);make_pair(pair_73226, find_or_add_symbol("log"), &cvar_73225);
  make_cvar(cvar_73227, (object *)&__glo_finite_127_scheme_inexact);make_pair(pair_73228, find_or_add_symbol("finite?"), &cvar_73227);
  make_cvar(cvar_73229, (object *)&__glo_infinite_127_scheme_inexact);make_pair(pair_73230, find_or_add_symbol("infinite?"), &cvar_73229);
  make_cvar(cvar_73231, (object *)&__glo_nan_127_scheme_inexact);make_pair(pair_73232, find_or_add_symbol("nan?"), &cvar_73231);
  make_cvar(cvar_73233, (object *)&__glo_define_91inexact_91op_scheme_inexact);make_pair(pair_73234, find_or_add_symbol("define-inexact-op"), &cvar_73233);
make_pair(c_73259, &pair_73185,Cyc_global_variables);
make_pair(c_73258, &pair_73188, &c_73259);
make_pair(c_73257, &pair_73190, &c_73258);
make_pair(c_73256, &pair_73192, &c_73257);
make_pair(c_73255, &pair_73194, &c_73256);
make_pair(c_73254, &pair_73196, &c_73255);
make_pair(c_73253, &pair_73198, &c_73254);
make_pair(c_73252, &pair_73200, &c_73253);
make_pair(c_73251, &pair_73202, &c_73252);
make_pair(c_73250, &pair_73204, &c_73251);
make_pair(c_73249, &pair_73206, &c_73250);
make_pair(c_73248, &pair_73208, &c_73249);
make_pair(c_73247, &pair_73210, &c_73248);
make_pair(c_73246, &pair_73212, &c_73247);
make_pair(c_73245, &pair_73214, &c_73246);
make_pair(c_73244, &pair_73216, &c_73245);
make_pair(c_73243, &pair_73218, &c_73244);
make_pair(c_73242, &pair_73220, &c_73243);
make_pair(c_73241, &pair_73222, &c_73242);
make_pair(c_73240, &pair_73224, &c_73241);
make_pair(c_73239, &pair_73226, &c_73240);
make_pair(c_73238, &pair_73228, &c_73239);
make_pair(c_73237, &pair_73230, &c_73238);
make_pair(c_73236, &pair_73232, &c_73237);
make_pair(c_73235, &pair_73234, &c_73236);
Cyc_global_variables = &c_73235;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemeinexact_scheme_inexact)->fn)(data, 1, cont, cont);
}
void c_schemeinexact_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_inexact");
  c_schemeinexact_entry_pt_first_lambda(data, argc, cont,value);
}
