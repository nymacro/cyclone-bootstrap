/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2019 Justin Ethier
 ** Version 0.11.4 
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

#define closcall3(td, clo,a1,a2,a3) \
if (obj_is_not_closure(clo)) { \
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

#include "cyclone/hashset.h"
#include "cyclone/types.h"
object __glo_lib_91init_117schemecyclonehashset_scheme_cyclone_hashset = NULL;
object __glo_hs_91member_127_scheme_cyclone_hashset = NULL;
object __glo_hs_91remove_67_scheme_cyclone_hashset = NULL;
object __glo_hs_91add_91all_67_scheme_cyclone_hashset = NULL;
object __glo_hs_91add_67_scheme_cyclone_hashset = NULL;
object __glo_hs_91num_91items_scheme_cyclone_hashset = NULL;
object __glo_hs_91destroy_67_scheme_cyclone_hashset = NULL;
object __glo_hs_91create_scheme_cyclone_hashset = NULL;
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
static void __lambda_3(void *data, int argc, closure _,object k_7314) ;
static void __lambda_9(void *data, int argc, closure _, object k, object opq, object item ) ;
static void __lambda_8(void *data, int argc, closure _, object k, object opq, object item ) ;
static void __lambda_1(void *data, int argc, closure _,object k_739, object hs_731_734, object lis_732_735) ;
static void __lambda_2(void *data, int argc, object self_7315, object k_7311, object p_733_736) ;
static void __lambda_7(void *data, int argc, closure _, object k, object opq, object item ) ;
static void __lambda_6(void *data, int argc, closure _, object k, object opq ) ;
static void __lambda_5(void *data, int argc, closure _, object k, object opq ) ;
static void __lambda_4(void *data, int argc, closure _, object k ) ;

static void __lambda_3(void *data, int argc, closure _,object k_7314) {
  Cyc_st_add(data, "scheme/cyclone/hashset.sld:lib-init:schemecyclonehashset");
return_closcall1(data,  k_7314,  obj_int2obj(0));; 
}

static void __lambda_9(void *data, int argc, closure _, object k, object opq, object item ) {
    hashset_t hs = (hashset_t)(opaque_ptr(opq));
    int rv = hashset_is_member(hs, item);
    return_closcall1(data, k, rv ? boolean_t : boolean_f);
   }
static void __lambda_8(void *data, int argc, closure _, object k, object opq, object item ) {
    hashset_t hs = (hashset_t)(opaque_ptr(opq));
    int rv = hashset_remove(hs, item);
    return_closcall1(data, k, obj_int2obj(rv));
   }
static void __lambda_1(void *data, int argc, closure _,object k_739, object hs_731_734, object lis_732_735) {
  Cyc_st_add(data, "scheme/cyclone/hashset.sld:hs-add-all!");

closureN_type c_7322;
object e_7325 [1];
c_7322.hdr.mark = gc_color_red;
 c_7322.hdr.grayed = 0;
c_7322.tag = closureN_tag;
 c_7322.fn = (function_type)__lambda_2;
c_7322.num_args = 1;
c_7322.num_elements = 1;
c_7322.elements = (object *)e_7325;
c_7322.elements[0] = hs_731_734;

return_closcall3(data,  __glo_Cyc_91for_91each_91loop_911_scheme_base,  k_739, &c_7322, lis_732_735);; 
}

static void __lambda_2(void *data, int argc, object self_7315, object k_7311, object p_733_736) {
  return_closcall3(data,  __glo_hs_91add_67_scheme_cyclone_hashset,  k_7311, ((closureN)self_7315)->elements[0], p_733_736);; 
}

static void __lambda_7(void *data, int argc, closure _, object k, object opq, object item ) {
    hashset_t hs = (hashset_t)(opaque_ptr(opq));
    int rv = hashset_add(hs, item);
    return_closcall1(data, k, obj_int2obj(rv));
   }
static void __lambda_6(void *data, int argc, closure _, object k, object opq ) {
    hashset_t hs = (hashset_t)(opaque_ptr(opq));
    int count = hashset_num_items(hs);
    return_closcall1(data, k, obj_int2obj(count));
   }
static void __lambda_5(void *data, int argc, closure _, object k, object opq ) {
    hashset_t hs = (hashset_t)(opaque_ptr(opq));
    hashset_destroy(hs);
    return_closcall1(data, k, boolean_t);
   }
static void __lambda_4(void *data, int argc, closure _, object k ) {
    hashset_t hs = hashset_create();
    make_c_opaque(opq, hs);
    return_closcall1(data, k, &opq);
   }
void c_schemecyclonehashset_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
(((closure)cont)->fn)(data, 1, cont, NULL);
 } 
void c_schemecyclonehashset_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);

  add_global((object *) &__glo_lib_91init_117schemecyclonehashset_scheme_cyclone_hashset);
  add_global((object *) &__glo_hs_91member_127_scheme_cyclone_hashset);
  add_global((object *) &__glo_hs_91remove_67_scheme_cyclone_hashset);
  add_global((object *) &__glo_hs_91add_91all_67_scheme_cyclone_hashset);
  add_global((object *) &__glo_hs_91add_67_scheme_cyclone_hashset);
  add_global((object *) &__glo_hs_91num_91items_scheme_cyclone_hashset);
  add_global((object *) &__glo_hs_91destroy_67_scheme_cyclone_hashset);
  add_global((object *) &__glo_hs_91create_scheme_cyclone_hashset);
  mclosure0(c_7328, (function_type)__lambda_3);c_7328.num_args = 0; 
  __glo_lib_91init_117schemecyclonehashset_scheme_cyclone_hashset = &c_7328; 
  mclosure0(c_7327, (function_type)__lambda_9);c_7327.num_args = 2; 
  __glo_hs_91member_127_scheme_cyclone_hashset = &c_7327; 
  mclosure0(c_7326, (function_type)__lambda_8);c_7326.num_args = 2; 
  __glo_hs_91remove_67_scheme_cyclone_hashset = &c_7326; 
  mclosure0(c_7320, (function_type)__lambda_1);c_7320.num_args = 2; 
  __glo_hs_91add_91all_67_scheme_cyclone_hashset = &c_7320; 
  mclosure0(c_7319, (function_type)__lambda_7);c_7319.num_args = 2; 
  __glo_hs_91add_67_scheme_cyclone_hashset = &c_7319; 
  mclosure0(c_7318, (function_type)__lambda_6);c_7318.num_args = 1; 
  __glo_hs_91num_91items_scheme_cyclone_hashset = &c_7318; 
  mclosure0(c_7317, (function_type)__lambda_5);c_7317.num_args = 1; 
  __glo_hs_91destroy_67_scheme_cyclone_hashset = &c_7317; 
  mclosure0(c_7316, (function_type)__lambda_4);c_7316.num_args = 0; 
  __glo_hs_91create_scheme_cyclone_hashset = &c_7316; 

  mclosure0(clo_7331, c_schemecyclonehashset_inlinable_lambdas); make_pair(pair_7330, find_or_add_symbol("c_schemecyclonehashset_inlinable_lambdas"), &clo_7331);
  make_cvar(cvar_7332, (object *)&__glo_lib_91init_117schemecyclonehashset_scheme_cyclone_hashset);make_pair(pair_7333, find_or_add_symbol("lib-init:schemecyclonehashset"), &cvar_7332);
  make_cvar(cvar_7334, (object *)&__glo_hs_91member_127_scheme_cyclone_hashset);make_pair(pair_7335, find_or_add_symbol("hs-member?"), &cvar_7334);
  make_cvar(cvar_7336, (object *)&__glo_hs_91remove_67_scheme_cyclone_hashset);make_pair(pair_7337, find_or_add_symbol("hs-remove!"), &cvar_7336);
  make_cvar(cvar_7338, (object *)&__glo_hs_91add_91all_67_scheme_cyclone_hashset);make_pair(pair_7339, find_or_add_symbol("hs-add-all!"), &cvar_7338);
  make_cvar(cvar_7340, (object *)&__glo_hs_91add_67_scheme_cyclone_hashset);make_pair(pair_7341, find_or_add_symbol("hs-add!"), &cvar_7340);
  make_cvar(cvar_7342, (object *)&__glo_hs_91num_91items_scheme_cyclone_hashset);make_pair(pair_7343, find_or_add_symbol("hs-num-items"), &cvar_7342);
  make_cvar(cvar_7344, (object *)&__glo_hs_91destroy_67_scheme_cyclone_hashset);make_pair(pair_7345, find_or_add_symbol("hs-destroy!"), &cvar_7344);
  make_cvar(cvar_7346, (object *)&__glo_hs_91create_scheme_cyclone_hashset);make_pair(pair_7347, find_or_add_symbol("hs-create"), &cvar_7346);
make_pair(c_7356, &pair_7330,Cyc_global_variables);
make_pair(c_7355, &pair_7333, &c_7356);
make_pair(c_7354, &pair_7335, &c_7355);
make_pair(c_7353, &pair_7337, &c_7354);
make_pair(c_7352, &pair_7339, &c_7353);
make_pair(c_7351, &pair_7341, &c_7352);
make_pair(c_7350, &pair_7343, &c_7351);
make_pair(c_7349, &pair_7345, &c_7350);
make_pair(c_7348, &pair_7347, &c_7349);
Cyc_global_variables = &c_7348;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemecyclonehashset_scheme_cyclone_hashset)->fn)(data, 1, cont, cont);
}
void c_schemecyclonehashset_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_cyclone_hashset");
  c_schemecyclonehashset_entry_pt_first_lambda(data, argc, cont,value);
}
