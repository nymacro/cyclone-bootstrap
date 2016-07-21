/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.1.4 (alpha)
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
     mclosure0(c1, _fn); \
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
     mclosure0(c1, _fn); \
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
     mclosure0(c1, _fn); \
     GC(td, &c1, buf, 3); \
     return; \
 } else { \
     (_fn)(td, 3, (closure)_fn,a1,a2,a3); \
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

#define return_direct4(td, _fn,a1,a2,a3,a4) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4; \
     mclosure0(c1, _fn); \
     GC(td, &c1, buf, 4); \
     return; \
 } else { \
     (_fn)(td, 4, (closure)_fn,a1,a2,a3,a4); \
 }}

#include "cyclone/types.h"
object __glo_load2 = NULL;
object __glo_repl = NULL;
object __glo_repl_117next_91line = NULL;
object __glo__85icyc_91env_85 = NULL;
extern object __glo__85Cyc_91version_91banner_85_scheme_cyclone_common;
extern object __glo__85version_85_scheme_cyclone_common;
extern object __glo__85version_91number_85_scheme_cyclone_common;
extern object __glo__85version_91name_85_scheme_cyclone_common;
extern object __glo__85version_91banner_85_scheme_cyclone_common;
extern object __glo__85c_91file_91header_91comment_85_scheme_cyclone_common;
extern object __glo_library_127_scheme_cyclone_libraries;
extern object __glo_lib_117list_91_125import_91set_scheme_cyclone_libraries;
extern object __glo_lib_117name_scheme_cyclone_libraries;
extern object __glo_lib_117name_91_125string_scheme_cyclone_libraries;
extern object __glo_lib_117name_91_125symbol_scheme_cyclone_libraries;
extern object __glo_lib_117result_scheme_cyclone_libraries;
extern object __glo_lib_117exports_scheme_cyclone_libraries;
extern object __glo_lib_117rename_91exports_scheme_cyclone_libraries;
extern object __glo_lib_117imports_scheme_cyclone_libraries;
extern object __glo_lib_117body_scheme_cyclone_libraries;
extern object __glo_lib_117includes_scheme_cyclone_libraries;
extern object __glo_lib_117include_91c_91headers_scheme_cyclone_libraries;
extern object __glo_lib_117import_91_125filename_scheme_cyclone_libraries;
extern object __glo_lib_117import_91_125metalist_scheme_cyclone_libraries;
extern object __glo_lib_117import_91_125path_scheme_cyclone_libraries;
extern object __glo_lib_117read_91imports_scheme_cyclone_libraries;
extern object __glo_lib_117import_91_125export_91list_scheme_cyclone_libraries;
extern object __glo_lib_117resolve_91imports_scheme_cyclone_libraries;
extern object __glo_lib_117resolve_91meta_scheme_cyclone_libraries;
extern object __glo_lib_117get_91all_91import_91deps_scheme_cyclone_libraries;
extern object __glo_lib_117get_91dep_91list_scheme_cyclone_libraries;
extern object __glo_lib_117imports_91_125idb_scheme_cyclone_libraries;
extern object __glo_lib_117idb_117ids_scheme_cyclone_libraries;
extern object __glo_lib_117idb_117id_91_125import_scheme_cyclone_libraries;
extern object __glo_pretty_91print_scheme_cyclone_pretty_91print;
extern object __glo_tagged_91list_127_scheme_cyclone_util;
extern object __glo_if_127_scheme_cyclone_util;
extern object __glo_begin_127_scheme_cyclone_util;
extern object __glo_lambda_127_scheme_cyclone_util;
extern object __glo_env_117enclosing_91environment_scheme_cyclone_util;
extern object __glo_env_117first_91frame_scheme_cyclone_util;
extern object __glo_env_117the_91empty_91environment_scheme_cyclone_util;
extern object __glo_env_117make_91frame_scheme_cyclone_util;
extern object __glo_env_117frame_91variables_scheme_cyclone_util;
extern object __glo_env_117frame_91values_scheme_cyclone_util;
extern object __glo_env_117add_91binding_91to_91frame_67_scheme_cyclone_util;
extern object __glo_env_117extend_91environment_scheme_cyclone_util;
extern object __glo_env_117lookup_scheme_cyclone_util;
extern object __glo_env_117lookup_91variable_91value_scheme_cyclone_util;
extern object __glo_env_117_191lookup_91variable_91value_scheme_cyclone_util;
extern object __glo_env_117set_91variable_91value_67_scheme_cyclone_util;
extern object __glo_env_117define_91variable_67_scheme_cyclone_util;
extern object __glo_Cyc_91er_91rename_scheme_cyclone_util;
extern object __glo_Cyc_91er_91compare_127_scheme_cyclone_util;
extern object __glo_mangle_scheme_cyclone_util;
extern object __glo_mangle_91global_scheme_cyclone_util;
extern object __glo_gensym_scheme_cyclone_util;
extern object __glo_delete_scheme_cyclone_util;
extern object __glo_delete_91duplicates_scheme_cyclone_util;
extern object __glo_list_91insert_91at_67_scheme_cyclone_util;
extern object __glo_list_91index2_scheme_cyclone_util;
extern object __glo_filter_scheme_cyclone_util;
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
extern object __glo_exact_127_scheme_base;
extern object __glo_inexact_127_scheme_base;
extern object __glo_odd_127_scheme_base;
extern object __glo_complex_127_scheme_base;
extern object __glo_rational_127_scheme_base;
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
extern object __glo_features_scheme_base;
extern object __glo_Cyc_91version_scheme_base;
extern object __glo_any_scheme_base;
extern object __glo_every_scheme_base;
extern object __glo_and_scheme_base;
extern object __glo_or_scheme_base;
extern object __glo_let_scheme_base;
extern object __glo_let_85_scheme_base;
extern object __glo_letrec_scheme_base;
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
extern object __glo_char_91alphabetic_127_scheme__char;
extern object __glo_char_91downcase_scheme__char;
extern object __glo_char_91foldcase_scheme__char;
extern object __glo_char_91lower_91case_127_scheme__char;
extern object __glo_char_91numeric_127_scheme__char;
extern object __glo_char_91upcase_scheme__char;
extern object __glo_char_91upper_91case_127_scheme__char;
extern object __glo_char_91whitespace_127_scheme__char;
extern object __glo_char_91ci_121_123_127_scheme__char;
extern object __glo_char_91ci_121_127_scheme__char;
extern object __glo_char_91ci_123_127_scheme__char;
extern object __glo_char_91ci_125_123_127_scheme__char;
extern object __glo_char_91ci_125_127_scheme__char;
extern object __glo_digit_91value_scheme__char;
extern object __glo_string_91upcase_scheme__char;
extern object __glo_string_91downcase_scheme__char;
extern object __glo_string_91foldcase_scheme__char;
extern object __glo_string_91ci_121_123_127_scheme__char;
extern object __glo_string_91ci_121_127_scheme__char;
extern object __glo_string_91ci_123_127_scheme__char;
extern object __glo_string_91ci_125_123_127_scheme__char;
extern object __glo_string_91ci_125_127_scheme__char;
extern object __glo_delay_scheme_lazy;
extern object __glo_force_scheme_lazy;
extern object __glo_delay_91force_scheme_lazy;
extern object __glo_make_91promise_scheme_lazy;
extern object __glo_promise_127_scheme_lazy;
extern object __glo_load_scheme_load;
extern object __glo_read_scheme_read;
extern object __glo_read_91all_scheme_read;
extern object __glo_display_scheme_write;
extern object __glo_write_scheme_write;
extern object __glo_acos_scheme_inexact;
extern object __glo_asin_scheme_inexact;
extern object __glo_atan_scheme_inexact;
extern object __glo_cos_scheme_inexact;
extern object __glo_exp_scheme_inexact;
extern object __glo_log_scheme_inexact;
extern object __glo_sin_scheme_inexact;
extern object __glo_sqrt_scheme_inexact;
extern object __glo_tan_scheme_inexact;
extern object __glo_command_91line_scheme_process_91context;
extern object __glo_emergency_91exit_scheme_process_91context;
extern object __glo_get_91environment_91variable_scheme_process_91context;
extern object __glo_current_91second_scheme_time;
extern object __glo_current_91jiffy_scheme_time;
extern object __glo_jiffies_91per_91second_scheme_time;
extern object __glo_eval_scheme_eval;
extern object __glo_eval_91from_91c_scheme_eval;
extern object __glo_create_91environment_scheme_eval;
extern object __glo_setup_91environment_scheme_eval;
extern object __glo_make_91hash_91table_srfi_69;
extern object __glo_hash_91table_127_srfi_69;
extern object __glo_alist_91_125hash_91table_srfi_69;
extern object __glo_hash_91table_91equivalence_91function_srfi_69;
extern object __glo_hash_91table_91hash_91function_srfi_69;
extern object __glo_hash_91table_91ref_srfi_69;
extern object __glo_hash_91table_91ref_95default_srfi_69;
extern object __glo_hash_91table_91set_67_srfi_69;
extern object __glo_hash_91table_91delete_67_srfi_69;
extern object __glo_hash_91table_91exists_127_srfi_69;
extern object __glo_hash_91table_91update_67_srfi_69;
extern object __glo_hash_91table_91update_67_95default_srfi_69;
extern object __glo_hash_91table_91size_srfi_69;
extern object __glo_hash_91table_91keys_srfi_69;
extern object __glo_hash_91table_91values_srfi_69;
extern object __glo_hash_91table_91walk_srfi_69;
extern object __glo_hash_91table_91fold_srfi_69;
extern object __glo_hash_91table_91_125alist_srfi_69;
extern object __glo_hash_91table_91copy_srfi_69;
extern object __glo_hash_91table_91merge_67_srfi_69;
extern object __glo_hash_srfi_69;
extern object __glo_string_91hash_srfi_69;
extern object __glo_string_91ci_91hash_srfi_69;
extern object __glo_hash_91by_91identity_srfi_69;
#include "cyclone/runtime.h"
#include "cyclone/runtime-main.h"
defsymbol(load);
static void __lambda_33(void *data, int argc, object self_7354, object r_7310) ;
static void __lambda_32(void *data, int argc, object self_7355, object r_7320) ;
static void __lambda_31(void *data, int argc, closure _,object r_7311) ;
static void __lambda_30(void *data, int argc, closure _,object r_7319) ;
static void __lambda_29(void *data, int argc, object self_7356, object r_7312) ;
static void __lambda_28(void *data, int argc, closure _,object args_733) ;
static void __lambda_27(void *data, int argc, object self_7357, object r_7314) ;
static void __lambda_26(void *data, int argc, object self_7358, object k_7315) ;
static void __lambda_25(void *data, int argc, object self_7359, object r_7316) ;
static void __lambda_24(void *data, int argc, closure _,object k_7323, object f_734) ;
static void __lambda_23(void *data, int argc, closure _,object k_7326) ;
static void __lambda_22(void *data, int argc, object self_7360, object r_7327) ;
static void __lambda_21(void *data, int argc, object self_7361, object r_7333) ;
static void __lambda_20(void *data, int argc, object self_7362, object c_735) ;
static void __lambda_19(void *data, int argc, object self_7363, object r_7329) ;
static void __lambda_18(void *data, int argc, object self_7364, object r_7331) ;
static void __lambda_17(void *data, int argc, object self_7365, object r_7332) ;
static void __lambda_16(void *data, int argc, object self_7366, object r_7330) ;
static void __lambda_15(void *data, int argc, closure _,object k_7336) ;
static void __lambda_14(void *data, int argc, object self_7367, object k_7339, object k_736) ;
static void __lambda_13(void *data, int argc, object self_7368, object k_7343, object obj_737) ;
static void __lambda_12(void *data, int argc, object self_7369, object r_7344) ;
static void __lambda_11(void *data, int argc, object self_7370, object r_7345) ;
static void __lambda_10(void *data, int argc, object self_7371, object r_7346) ;
static void __lambda_9(void *data, int argc, object self_7372, object k_7347) ;
static void __lambda_8(void *data, int argc, object self_7373, object r_7348) ;
static void __lambda_7(void *data, int argc, object self_7374, object k_7350, object o_738) ;
static void __lambda_6(void *data, int argc, object self_7375, object r_7351) ;
static void __lambda_5(void *data, int argc, object self_7376, object r_7349) ;
static void __lambda_4(void *data, int argc, object self_7377, object r_7340) ;
static void __lambda_3(void *data, int argc, object self_7378, object k_7342) ;
static void __lambda_2(void *data, int argc, object self_7379, object r_7341) ;
static void __lambda_1(void *data, int argc, object self_7380, object r_7338) ;
static void __lambda_0(void *data, int argc, object self_7381, object r_7337) ;

static void __lambda_33(void *data, int argc, object self_7354, object r_7310) {
  
mclosure0(c_73162, (function_type)__lambda_32);c_73162.num_args = 1;
return_closcall1(data,  __glo_setup_91environment_scheme_eval,  &c_73162);; 
}

static void __lambda_32(void *data, int argc, object self_7355, object r_7320) {
  return_direct1(data,__lambda_31,global_set(__glo__85icyc_91env_85, r_7320));; 
}

static void __lambda_31(void *data, int argc, closure _,object r_7311) {
  return_direct1(data,__lambda_30,quote_load);; 
}

static void __lambda_30(void *data, int argc, closure _,object r_7319) {
  
mclosure0(c_73166, (function_type)__lambda_29);c_73166.num_args = 1;
return_closcall4(data,  __glo_env_117define_91variable_67_scheme_cyclone_util,  &c_73166, r_7319, __glo_load2, __glo__85icyc_91env_85);; 
}

static void __lambda_29(void *data, int argc, object self_7356, object r_7312) {
  mclosure0(c_73188,__lambda_28); object c_73189 = Cyc_command_line_arguments(data,&c_73188);
return_direct1(data,__lambda_28,c_73189);; 
}

static void __lambda_28(void *data, int argc, closure _,object args_733) {
  
closureN_type c_73169;
c_73169.hdr.mark = gc_color_red;
 c_73169.hdr.grayed = 0;
c_73169.tag = closureN_tag;
 c_73169.fn = (function_type)__lambda_26;
c_73169.num_args = 0;
c_73169.num_elements = 1;
c_73169.elements = (object *)alloca(sizeof(object) * 1);
c_73169.elements[0] = args_733;


mclosure0(c_73185, (function_type)__lambda_27);c_73185.num_args = 1;
return_closcall1(data,(closure)&c_73169,  &c_73185);; 
}

static void __lambda_27(void *data, int argc, object self_7357, object r_7314) {
  return_closcall1(data,  __glo_repl_117next_91line,  primitive__75halt);; 
}

static void __lambda_26(void *data, int argc, object self_7358, object k_7315) {
  
closureN_type c_73171;
c_73171.hdr.mark = gc_color_red;
 c_73171.hdr.grayed = 0;
c_73171.tag = closureN_tag;
 c_73171.fn = (function_type)__lambda_25;
c_73171.num_args = 1;
c_73171.num_elements = 2;
c_73171.elements = (object *)alloca(sizeof(object) * 2);
c_73171.elements[0] = ((closureN)self_7358)->elements[0];
c_73171.elements[1] = k_7315;


object c_73181 = Cyc_num_eq(data,(closure)&c_73171,2,Cyc_length(data, ((closureN)self_7358)->elements[0]), obj_int2obj(1));
return_closcall1(data,(closure)&c_73171,  c_73181);; 
}

static void __lambda_25(void *data, int argc, object self_7359, object r_7316) {
  if( (boolean_f != r_7316) ){ 
  return_closcall3(data,  __glo_load_scheme_load,  ((closureN)self_7359)->elements[1], car(((closureN)self_7359)->elements[0]), __glo__85icyc_91env_85);
} else { 
  return_closcall1(data,  ((closureN)self_7359)->elements[1],  boolean_f);}
; 
}

static void __lambda_24(void *data, int argc, closure _,object k_7323, object f_734) {
  Cyc_st_add(data, "icyc.scm:load2");
return_closcall3(data,  __glo_load_scheme_load,  k_7323, f_734, __glo__85icyc_91env_85);; 
}

static void __lambda_23(void *data, int argc, closure _,object k_7326) {
  Cyc_st_add(data, "icyc.scm:repl");

closureN_type c_73133;
c_73133.hdr.mark = gc_color_red;
 c_73133.hdr.grayed = 0;
c_73133.tag = closureN_tag;
 c_73133.fn = (function_type)__lambda_22;
c_73133.num_args = 1;
c_73133.num_elements = 1;
c_73133.elements = (object *)alloca(sizeof(object) * 1);
c_73133.elements[0] = k_7326;


make_string(c_73156, "cyclone> ");
return_closcall2(data,  __glo_display_scheme_write,  &c_73133, &c_73156);; 
}

static void __lambda_22(void *data, int argc, object self_7360, object r_7327) {
  
closureN_type c_73135;
c_73135.hdr.mark = gc_color_red;
 c_73135.hdr.grayed = 0;
c_73135.tag = closureN_tag;
 c_73135.fn = (function_type)__lambda_21;
c_73135.num_args = 1;
c_73135.num_elements = 1;
c_73135.elements = (object *)alloca(sizeof(object) * 1);
c_73135.elements[0] = ((closureN)self_7360)->elements[0];

return_closcall1(data,  __glo_read_scheme_read,  &c_73135);; 
}

static void __lambda_21(void *data, int argc, object self_7361, object r_7333) {
  
closureN_type c_73137;
c_73137.hdr.mark = gc_color_red;
 c_73137.hdr.grayed = 0;
c_73137.tag = closureN_tag;
 c_73137.fn = (function_type)__lambda_20;
c_73137.num_args = 1;
c_73137.num_elements = 1;
c_73137.elements = (object *)alloca(sizeof(object) * 1);
c_73137.elements[0] = ((closureN)self_7361)->elements[0];

return_closcall3(data,  __glo_eval_scheme_eval,  &c_73137, r_7333, __glo__85icyc_91env_85);; 
}

static void __lambda_20(void *data, int argc, object self_7362, object c_735) {
  
closureN_type c_73139;
c_73139.hdr.mark = gc_color_red;
 c_73139.hdr.grayed = 0;
c_73139.tag = closureN_tag;
 c_73139.fn = (function_type)__lambda_19;
c_73139.num_args = 1;
c_73139.num_elements = 2;
c_73139.elements = (object *)alloca(sizeof(object) * 2);
c_73139.elements[0] = c_735;
c_73139.elements[1] = ((closureN)self_7362)->elements[0];

return_closcall1(data,(closure)&c_73139,  Cyc_is_eof_object(c_735));; 
}

static void __lambda_19(void *data, int argc, object self_7363, object r_7329) {
  if( (boolean_f != r_7329) ){ 
  
closureN_type c_73141;
c_73141.hdr.mark = gc_color_red;
 c_73141.hdr.grayed = 0;
c_73141.tag = closureN_tag;
 c_73141.fn = (function_type)__lambda_16;
c_73141.num_args = 1;
c_73141.num_elements = 1;
c_73141.elements = (object *)alloca(sizeof(object) * 1);
c_73141.elements[0] = ((closureN)self_7363)->elements[1];


make_string(c_73146, "\n");
return_closcall2(data,  __glo_display_scheme_write,  &c_73141, &c_73146);
} else { 
  
closureN_type c_73148;
c_73148.hdr.mark = gc_color_red;
 c_73148.hdr.grayed = 0;
c_73148.tag = closureN_tag;
 c_73148.fn = (function_type)__lambda_18;
c_73148.num_args = 1;
c_73148.num_elements = 1;
c_73148.elements = (object *)alloca(sizeof(object) * 1);
c_73148.elements[0] = ((closureN)self_7363)->elements[1];

return_closcall2(data,  __glo_write_scheme_write,  &c_73148, ((closureN)self_7363)->elements[0]);}
; 
}

static void __lambda_18(void *data, int argc, object self_7364, object r_7331) {
  
closureN_type c_73150;
c_73150.hdr.mark = gc_color_red;
 c_73150.hdr.grayed = 0;
c_73150.tag = closureN_tag;
 c_73150.fn = (function_type)__lambda_17;
c_73150.num_args = 1;
c_73150.num_elements = 1;
c_73150.elements = (object *)alloca(sizeof(object) * 1);
c_73150.elements[0] = ((closureN)self_7364)->elements[0];

return_closcall1(data,  __glo_newline_scheme_base,  &c_73150);; 
}

static void __lambda_17(void *data, int argc, object self_7365, object r_7332) {
  return_closcall1(data,  __glo_repl_117next_91line,  ((closureN)self_7365)->elements[0]);; 
}

static void __lambda_16(void *data, int argc, object self_7366, object r_7330) {
  return_closcall1(data,  ((closureN)self_7366)->elements[0],  __halt(obj_int2obj(0)));; 
}

static void __lambda_15(void *data, int argc, closure _,object k_7336) {
  Cyc_st_add(data, "icyc.scm:repl:next-line");

closureN_type c_7384;
c_7384.hdr.mark = gc_color_red;
 c_7384.hdr.grayed = 0;
c_7384.tag = closureN_tag;
 c_7384.fn = (function_type)__lambda_1;
c_7384.num_args = 1;
c_7384.num_elements = 1;
c_7384.elements = (object *)alloca(sizeof(object) * 1);
c_7384.elements[0] = k_7336;


mclosure0(c_7389, (function_type)__lambda_14);c_7389.num_args = 1;
return_closcall1(data,(closure)&c_7384,  &c_7389);; 
}

static void __lambda_14(void *data, int argc, object self_7367, object k_7339, object k_736) {
  
closureN_type c_7391;
c_7391.hdr.mark = gc_color_red;
 c_7391.hdr.grayed = 0;
c_7391.tag = closureN_tag;
 c_7391.fn = (function_type)__lambda_4;
c_7391.num_args = 1;
c_7391.num_elements = 1;
c_7391.elements = (object *)alloca(sizeof(object) * 1);
c_7391.elements[0] = k_7339;


closureN_type c_7399;
c_7399.hdr.mark = gc_color_red;
 c_7399.hdr.grayed = 0;
c_7399.tag = closureN_tag;
 c_7399.fn = (function_type)__lambda_13;
c_7399.num_args = 1;
c_7399.num_elements = 1;
c_7399.elements = (object *)alloca(sizeof(object) * 1);
c_7399.elements[0] = k_736;

return_closcall1(data,(closure)&c_7391,  &c_7399);; 
}

static void __lambda_13(void *data, int argc, object self_7368, object k_7343, object obj_737) {
  
closureN_type c_73101;
c_73101.hdr.mark = gc_color_red;
 c_73101.hdr.grayed = 0;
c_73101.tag = closureN_tag;
 c_73101.fn = (function_type)__lambda_12;
c_73101.num_args = 1;
c_73101.num_elements = 3;
c_73101.elements = (object *)alloca(sizeof(object) * 3);
c_73101.elements[0] = k_7343;
c_73101.elements[1] = ((closureN)self_7368)->elements[0];
c_73101.elements[2] = obj_737;


make_string(c_73130, "Error: ");
return_closcall2(data,  __glo_display_scheme_write,  &c_73101, &c_73130);; 
}

static void __lambda_12(void *data, int argc, object self_7369, object r_7344) {
  
closureN_type c_73103;
c_73103.hdr.mark = gc_color_red;
 c_73103.hdr.grayed = 0;
c_73103.tag = closureN_tag;
 c_73103.fn = (function_type)__lambda_9;
c_73103.num_args = 0;
c_73103.num_elements = 1;
c_73103.elements = (object *)alloca(sizeof(object) * 1);
c_73103.elements[0] = ((closureN)self_7369)->elements[2];


closureN_type c_73123;
c_73123.hdr.mark = gc_color_red;
 c_73123.hdr.grayed = 0;
c_73123.tag = closureN_tag;
 c_73123.fn = (function_type)__lambda_11;
c_73123.num_args = 1;
c_73123.num_elements = 2;
c_73123.elements = (object *)alloca(sizeof(object) * 2);
c_73123.elements[0] = ((closureN)self_7369)->elements[0];
c_73123.elements[1] = ((closureN)self_7369)->elements[1];

return_closcall1(data,(closure)&c_73103,  &c_73123);; 
}

static void __lambda_11(void *data, int argc, object self_7370, object r_7345) {
  
closureN_type c_73125;
c_73125.hdr.mark = gc_color_red;
 c_73125.hdr.grayed = 0;
c_73125.tag = closureN_tag;
 c_73125.fn = (function_type)__lambda_10;
c_73125.num_args = 1;
c_73125.num_elements = 2;
c_73125.elements = (object *)alloca(sizeof(object) * 2);
c_73125.elements[0] = ((closureN)self_7370)->elements[0];
c_73125.elements[1] = ((closureN)self_7370)->elements[1];


make_string(c_73129, "\n");
return_closcall2(data,  __glo_display_scheme_write,  &c_73125, &c_73129);; 
}

static void __lambda_10(void *data, int argc, object self_7371, object r_7346) {
  return_closcall2(data,  ((closureN)self_7371)->elements[1],  ((closureN)self_7371)->elements[0], boolean_t);; 
}

static void __lambda_9(void *data, int argc, object self_7372, object k_7347) {
  
closureN_type c_73105;
c_73105.hdr.mark = gc_color_red;
 c_73105.hdr.grayed = 0;
c_73105.tag = closureN_tag;
 c_73105.fn = (function_type)__lambda_8;
c_73105.num_args = 1;
c_73105.num_elements = 2;
c_73105.elements = (object *)alloca(sizeof(object) * 2);
c_73105.elements[0] = k_7347;
c_73105.elements[1] = ((closureN)self_7372)->elements[0];

return_closcall1(data,(closure)&c_73105,  Cyc_is_pair(((closureN)self_7372)->elements[0]));; 
}

static void __lambda_8(void *data, int argc, object self_7373, object r_7348) {
  if( (boolean_f != r_7348) ){ 
  
closureN_type c_73107;
c_73107.hdr.mark = gc_color_red;
 c_73107.hdr.grayed = 0;
c_73107.tag = closureN_tag;
 c_73107.fn = (function_type)__lambda_5;
c_73107.num_args = 1;
c_73107.num_elements = 2;
c_73107.elements = (object *)alloca(sizeof(object) * 2);
c_73107.elements[0] = ((closureN)self_7373)->elements[0];
c_73107.elements[1] = ((closureN)self_7373)->elements[1];


mclosure0(c_73111, (function_type)__lambda_7);c_73111.num_args = 1;
return_closcall1(data,(closure)&c_73107,  &c_73111);
} else { 
  return_closcall2(data,  __glo_display_scheme_write,  ((closureN)self_7373)->elements[0], ((closureN)self_7373)->elements[1]);}
; 
}

static void __lambda_7(void *data, int argc, object self_7374, object k_7350, object o_738) {
  
closureN_type c_73113;
c_73113.hdr.mark = gc_color_red;
 c_73113.hdr.grayed = 0;
c_73113.tag = closureN_tag;
 c_73113.fn = (function_type)__lambda_6;
c_73113.num_args = 1;
c_73113.num_elements = 1;
c_73113.elements = (object *)alloca(sizeof(object) * 1);
c_73113.elements[0] = k_7350;

return_closcall2(data,  __glo_display_scheme_write,  &c_73113, o_738);; 
}

static void __lambda_6(void *data, int argc, object self_7375, object r_7351) {
  
make_string(c_73116, " ");
return_closcall2(data,  __glo_display_scheme_write,  ((closureN)self_7375)->elements[0], &c_73116);; 
}

static void __lambda_5(void *data, int argc, object self_7376, object r_7349) {
  return_closcall3(data,  __glo_for_91each_scheme_base,  ((closureN)self_7376)->elements[0], r_7349, ((closureN)self_7376)->elements[1]);; 
}

static void __lambda_4(void *data, int argc, object self_7377, object r_7340) {
  
closureN_type c_7393;
c_7393.hdr.mark = gc_color_red;
 c_7393.hdr.grayed = 0;
c_7393.tag = closureN_tag;
 c_7393.fn = (function_type)__lambda_2;
c_7393.num_args = 1;
c_7393.num_elements = 2;
c_7393.elements = (object *)alloca(sizeof(object) * 2);
c_7393.elements[0] = ((closureN)self_7377)->elements[0];
c_7393.elements[1] = r_7340;


mclosure0(c_7397, (function_type)__lambda_3);c_7397.num_args = 0;
return_closcall1(data,(closure)&c_7393,  &c_7397);; 
}

static void __lambda_3(void *data, int argc, object self_7378, object k_7342) {
  return_closcall1(data,  __glo_repl,  k_7342);; 
}

static void __lambda_2(void *data, int argc, object self_7379, object r_7341) {
  return_closcall3(data,  __glo_with_91exception_91handler_scheme_base,  ((closureN)self_7379)->elements[0], ((closureN)self_7379)->elements[1], r_7341);; 
}

static void __lambda_1(void *data, int argc, object self_7380, object r_7338) {
  
closureN_type c_7386;
c_7386.hdr.mark = gc_color_red;
 c_7386.hdr.grayed = 0;
c_7386.tag = closureN_tag;
 c_7386.fn = (function_type)__lambda_0;
c_7386.num_args = 1;
c_7386.num_elements = 1;
c_7386.elements = (object *)alloca(sizeof(object) * 1);
c_7386.elements[0] = ((closureN)self_7380)->elements[0];

return_closcall2(data,  __glo_call_95cc_scheme_base,  &c_7386, r_7338);; 
}

static void __lambda_0(void *data, int argc, object self_7381, object r_7337) {
  return_closcall1(data,  __glo_repl_117next_91line,  ((closureN)self_7381)->elements[0]);; 
}

static void c_entry_pt_first_lambda(void *data, int argc, closure cont, object value);
extern void c_schemecyclonecommon_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemebase_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemecomplex_entry_pt(void *data, int argc, closure cont, object value);
extern void c_scheme_char_entry_pt(void *data, int argc, closure cont, object value);
extern void c_srfi69_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemetime_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemeprocess_91context_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemeinexact_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemefile_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemecycloneutil_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemeread_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemeeval_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemeload_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemelazy_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemewrite_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemecyclonepretty_91print_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemecyclonelibraries_entry_pt(void *data, int argc, closure cont, object value);
static void c_entry_pt(data, argc, env,cont) void *data; int argc; closure env,cont; { 
  quote_load = find_or_add_symbol("load");

  add_global((object *) &__glo_load2);
  add_global((object *) &__glo_repl);
  add_global((object *) &__glo_repl_117next_91line);
  add_global((object *) &__glo__85icyc_91env_85);
  add_symbol(quote_load);
  mclosure0(c_73157, (function_type)__lambda_24);c_73157.num_args = 1; 
  __glo_load2 = &c_73157; 
  mclosure0(c_73131, (function_type)__lambda_23);c_73131.num_args = 0; 
  __glo_repl = &c_73131; 
  mclosure0(c_7382, (function_type)__lambda_15);c_7382.num_args = 0; 
  __glo_repl_117next_91line = &c_7382; 
  __glo__85icyc_91env_85 = boolean_f; 

  make_cvar(cvar_73192, (object *)&__glo_load2);make_pair(pair_73193, find_or_add_symbol("load2"), &cvar_73192);
  make_cvar(cvar_73194, (object *)&__glo_repl);make_pair(pair_73195, find_or_add_symbol("repl"), &cvar_73194);
  make_cvar(cvar_73196, (object *)&__glo_repl_117next_91line);make_pair(pair_73197, find_or_add_symbol("repl:next-line"), &cvar_73196);
  make_cvar(cvar_73198, (object *)&__glo__85icyc_91env_85);make_pair(pair_73199, find_or_add_symbol("*icyc-env*"), &cvar_73198);
make_pair(c_73200, &pair_73193,Cyc_global_variables);
make_pair(c_73201, &pair_73195, &c_73200);
make_pair(c_73202, &pair_73197, &c_73201);
make_pair(c_73203, &pair_73199, &c_73202);
Cyc_global_variables = &c_73203;
mclosure1(c_done, c_entry_pt_first_lambda, &c_done);
mclosure1(c_73204, c_schemecyclonelibraries_entry_pt, &c_done);
mclosure1(c_73205, c_schemecyclonepretty_91print_entry_pt, &c_73204);
mclosure1(c_73206, c_schemewrite_entry_pt, &c_73205);
mclosure1(c_73207, c_schemelazy_entry_pt, &c_73206);
mclosure1(c_73208, c_schemeload_entry_pt, &c_73207);
mclosure1(c_73209, c_schemeeval_entry_pt, &c_73208);
mclosure1(c_73210, c_schemeread_entry_pt, &c_73209);
mclosure1(c_73211, c_schemecycloneutil_entry_pt, &c_73210);
mclosure1(c_73212, c_schemefile_entry_pt, &c_73211);
mclosure1(c_73213, c_schemeinexact_entry_pt, &c_73212);
mclosure1(c_73214, c_schemeprocess_91context_entry_pt, &c_73213);
mclosure1(c_73215, c_schemetime_entry_pt, &c_73214);
mclosure1(c_73216, c_srfi69_entry_pt, &c_73215);
mclosure1(c_73217, c_scheme_char_entry_pt, &c_73216);
mclosure1(c_73218, c_schemecomplex_entry_pt, &c_73217);
mclosure1(c_73219, c_schemebase_entry_pt, &c_73218);
mclosure1(c_73220, c_schemecyclonecommon_entry_pt, &c_73219);
(c_73220.fn)(data, 0, &c_73220, &c_73220);
}
static void c_entry_pt_first_lambda(void *data, int argc, closure cont, object value) {
  
    
    
    
    
mclosure0(c_73160, (function_type)__lambda_33);c_73160.num_args = 1;
return_closcall2(data,  __glo_display_scheme_write,  &c_73160, __glo__85Cyc_91version_91banner_85_scheme_cyclone_common);
}
int main(int argc,char **argv)
{gc_thread_data *thd;
 long stack_size = global_stack_size = STACK_SIZE;
 long heap_size = global_heap_size = HEAP_SIZE;
 mclosure0(clos_halt,&Cyc_halt);  // Halt if final closure is reached
 mclosure0(entry_pt,&c_entry_pt); // First function to execute
 _cyc_argc = argc;
 _cyc_argv = argv;
 gc_initialize();
 thd = malloc(sizeof(gc_thread_data));
 gc_thread_data_init(thd, 0, (char *) &stack_size, stack_size);
 thd->gc_cont = &entry_pt;
 thd->gc_args[0] = &clos_halt;
 thd->gc_num_args = 1;
 gc_add_mutator(thd);
 Cyc_heap_init(heap_size);
 thd->thread_state = CYC_THREAD_STATE_RUNNABLE;
 Cyc_start_trampoline(thd);
 return 0;}
