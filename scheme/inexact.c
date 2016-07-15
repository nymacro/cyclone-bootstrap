/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.1.3 (alpha)
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

#include "cyclone/types.h"
object __glo_lib_91init_117schemeinexact_scheme_inexact = NULL;
object __glo_tan_scheme_inexact = NULL;
object __glo_sqrt_scheme_inexact = NULL;
object __glo_sin_scheme_inexact = NULL;
object __glo_c_91log_scheme_inexact = NULL;
object __glo_log_scheme_inexact = NULL;
object __glo_exp_scheme_inexact = NULL;
object __glo_cos_scheme_inexact = NULL;
object __glo_atan_scheme_inexact = NULL;
object __glo_asin_scheme_inexact = NULL;
object __glo_acos_scheme_inexact = NULL;
#include "cyclone/runtime.h"
static void __lambda_12(void *data, int argc, closure _,object k_736) ;
static void __lambda_11(void *data, int argc, closure _, object k, object z) ;
static void __lambda_10(void *data, int argc, closure _, object k, object z) ;
static void __lambda_9(void *data, int argc, closure _, object k, object z) ;
static void __lambda_8(void *data, int argc, closure _, object k, object z) ;
static void __lambda_7(void *data, int argc, closure _,object k_739, object z1_732, object z2_731_raw, ...) ;
static void __lambda_6(void *data, int argc, object self_7314, object r_7312) ;
static void __lambda_5(void *data, int argc, object self_7315, object r_7313) ;
static void __lambda_4(void *data, int argc, closure _, object k, object z) ;
static void __lambda_3(void *data, int argc, closure _, object k, object z) ;
static void __lambda_2(void *data, int argc, closure _, object k, object z) ;
static void __lambda_1(void *data, int argc, closure _, object k, object z) ;
static void __lambda_0(void *data, int argc, closure _, object k, object z) ;

static void __lambda_12(void *data, int argc, closure _,object k_736) {
  Cyc_st_add(data, "scheme/inexact.sld:lib-init:schemeinexact");
return_closcall1(data,  k_736,  obj_int2obj(0));; 
}

static void __lambda_11(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, tan, z); }
static void __lambda_10(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, sqrt, z); }
static void __lambda_9(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, sin, z); }
static void __lambda_8(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, log, z); }
static void __lambda_7(void *data, int argc, closure _,object k_739, object z1_732, object z2_731_raw, ...) {
load_varargs(z2_731, z2_731_raw, argc - 2);
  Cyc_st_add(data, "scheme/inexact.sld:log");
if( (boolean_f != Cyc_is_null(z2_731)) ){ 
  return_closcall2(data,  __glo_c_91log_scheme_inexact,  k_739, z1_732);
} else { 
  
closureN_type c_7326;
c_7326.hdr.mark = gc_color_red;
 c_7326.hdr.grayed = 0;
c_7326.tag = closureN_tag;
 c_7326.fn = (function_type)__lambda_6;
c_7326.num_args = 1;
c_7326.num_elements = 2;
c_7326.elements = (object *)alloca(sizeof(object) * 2);
c_7326.elements[0] = k_739;
c_7326.elements[1] = z2_731;

return_closcall2(data,  __glo_c_91log_scheme_inexact,  &c_7326, z1_732);}
; 
}

static void __lambda_6(void *data, int argc, object self_7314, object r_7312) {
  
closureN_type c_7328;
c_7328.hdr.mark = gc_color_red;
 c_7328.hdr.grayed = 0;
c_7328.tag = closureN_tag;
 c_7328.fn = (function_type)__lambda_5;
c_7328.num_args = 1;
c_7328.num_elements = 2;
c_7328.elements = (object *)alloca(sizeof(object) * 2);
c_7328.elements[0] = ((closureN)self_7314)->elements[0];
c_7328.elements[1] = r_7312;

return_closcall2(data,  __glo_c_91log_scheme_inexact,  &c_7328, car(((closureN)self_7314)->elements[1]));; 
}

static void __lambda_5(void *data, int argc, object self_7315, object r_7313) {
  
object c_7333 = Cyc_div(data,  ((closureN)self_7315)->elements[0],2,((closureN)self_7315)->elements[1], r_7313);
return_closcall1(data,  ((closureN)self_7315)->elements[0],  c_7333);; 
}

static void __lambda_4(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, exp, z); }
static void __lambda_3(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, cos, z); }
static void __lambda_2(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, atan, z); }
static void __lambda_1(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, asin, z); }
static void __lambda_0(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, acos, z); }
void c_schemeinexact_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117schemeinexact_scheme_inexact);
  add_global((object *) &__glo_tan_scheme_inexact);
  add_global((object *) &__glo_sqrt_scheme_inexact);
  add_global((object *) &__glo_sin_scheme_inexact);
  add_global((object *) &__glo_c_91log_scheme_inexact);
  add_global((object *) &__glo_log_scheme_inexact);
  add_global((object *) &__glo_exp_scheme_inexact);
  add_global((object *) &__glo_cos_scheme_inexact);
  add_global((object *) &__glo_atan_scheme_inexact);
  add_global((object *) &__glo_asin_scheme_inexact);
  add_global((object *) &__glo_acos_scheme_inexact);
  mclosure0(c_7342, (function_type)__lambda_12);c_7342.num_args = 0; 
  __glo_lib_91init_117schemeinexact_scheme_inexact = &c_7342; 
  mclosure0(c_7341, (function_type)__lambda_11);c_7341.num_args = 1; 
  __glo_tan_scheme_inexact = &c_7341; 
  mclosure0(c_7340, (function_type)__lambda_10);c_7340.num_args = 1; 
  __glo_sqrt_scheme_inexact = &c_7340; 
  mclosure0(c_7339, (function_type)__lambda_9);c_7339.num_args = 1; 
  __glo_sin_scheme_inexact = &c_7339; 
  mclosure0(c_7338, (function_type)__lambda_8);c_7338.num_args = 1; 
  __glo_c_91log_scheme_inexact = &c_7338; 
  mclosure0(c_7321, (function_type)__lambda_7);c_7321.num_args = 1; 
  __glo_log_scheme_inexact = &c_7321; 
  mclosure0(c_7320, (function_type)__lambda_4);c_7320.num_args = 1; 
  __glo_exp_scheme_inexact = &c_7320; 
  mclosure0(c_7319, (function_type)__lambda_3);c_7319.num_args = 1; 
  __glo_cos_scheme_inexact = &c_7319; 
  mclosure0(c_7318, (function_type)__lambda_2);c_7318.num_args = 1; 
  __glo_atan_scheme_inexact = &c_7318; 
  mclosure0(c_7317, (function_type)__lambda_1);c_7317.num_args = 1; 
  __glo_asin_scheme_inexact = &c_7317; 
  mclosure0(c_7316, (function_type)__lambda_0);c_7316.num_args = 1; 
  __glo_acos_scheme_inexact = &c_7316; 

  make_cvar(cvar_7344, (object *)&__glo_lib_91init_117schemeinexact_scheme_inexact);make_pair(pair_7345, find_or_add_symbol("lib-init:schemeinexact"), &cvar_7344);
  make_cvar(cvar_7346, (object *)&__glo_tan_scheme_inexact);make_pair(pair_7347, find_or_add_symbol("tan"), &cvar_7346);
  make_cvar(cvar_7348, (object *)&__glo_sqrt_scheme_inexact);make_pair(pair_7349, find_or_add_symbol("sqrt"), &cvar_7348);
  make_cvar(cvar_7350, (object *)&__glo_sin_scheme_inexact);make_pair(pair_7351, find_or_add_symbol("sin"), &cvar_7350);
  make_cvar(cvar_7352, (object *)&__glo_c_91log_scheme_inexact);make_pair(pair_7353, find_or_add_symbol("c-log"), &cvar_7352);
  make_cvar(cvar_7354, (object *)&__glo_log_scheme_inexact);make_pair(pair_7355, find_or_add_symbol("log"), &cvar_7354);
  make_cvar(cvar_7356, (object *)&__glo_exp_scheme_inexact);make_pair(pair_7357, find_or_add_symbol("exp"), &cvar_7356);
  make_cvar(cvar_7358, (object *)&__glo_cos_scheme_inexact);make_pair(pair_7359, find_or_add_symbol("cos"), &cvar_7358);
  make_cvar(cvar_7360, (object *)&__glo_atan_scheme_inexact);make_pair(pair_7361, find_or_add_symbol("atan"), &cvar_7360);
  make_cvar(cvar_7362, (object *)&__glo_asin_scheme_inexact);make_pair(pair_7363, find_or_add_symbol("asin"), &cvar_7362);
  make_cvar(cvar_7364, (object *)&__glo_acos_scheme_inexact);make_pair(pair_7365, find_or_add_symbol("acos"), &cvar_7364);
make_pair(c_7366, &pair_7345,Cyc_global_variables);
make_pair(c_7367, &pair_7347, &c_7366);
make_pair(c_7368, &pair_7349, &c_7367);
make_pair(c_7369, &pair_7351, &c_7368);
make_pair(c_7370, &pair_7353, &c_7369);
make_pair(c_7371, &pair_7355, &c_7370);
make_pair(c_7372, &pair_7357, &c_7371);
make_pair(c_7373, &pair_7359, &c_7372);
make_pair(c_7374, &pair_7361, &c_7373);
make_pair(c_7375, &pair_7363, &c_7374);
make_pair(c_7376, &pair_7365, &c_7375);
Cyc_global_variables = &c_7376;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemeinexact_scheme_inexact)->fn)(data, 1, cont, cont);
}
