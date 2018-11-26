/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2018 Justin Ethier
 ** Version 0.9.4 
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

#include "cyclone/types.h"
object __glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common = NULL;
object __glo__85c_91file_91header_91comment_85_scheme_cyclone_common = NULL;
object __glo__85Cyc_91version_91banner_85_scheme_cyclone_common = NULL;
object __glo__85version_91banner_85_scheme_cyclone_common = NULL;
object __glo__85version_85_scheme_cyclone_common = NULL;
object __glo__85version_91name_85_scheme_cyclone_common = NULL;
object __glo__85version_91number_85_scheme_cyclone_common = NULL;
#include "cyclone/runtime.h"
static void __lambda_1(void *data, int argc, closure _,object k_7315) ;
static void __lambda_2(void *data, int argc, object self_7323, object r_7322) ;
static void __lambda_3(void *data, int argc, object self_7324, object r_7321) ;
static void __lambda_4(void *data, int argc, object self_7325, object r_7320) ;

static void __lambda_1(void *data, int argc, closure _,object k_7315) {
  Cyc_st_add(data, "scheme/cyclone/common.sld:lib-init:schemecyclonecommon");

closureN_type c_7330;
c_7330.hdr.mark = gc_color_red;
 c_7330.hdr.grayed = 0;
c_7330.tag = closureN_tag;
 c_7330.fn = (function_type)__lambda_2;
c_7330.num_args = 1;
c_7330.num_elements = 1;
c_7330.elements = (object *)alloca(sizeof(object) * 1);
c_7330.elements[0] = k_7315;


make_utf8_string_with_len(c_7360, " ", 1, 1);

make_utf8_string_with_len(c_7361, "", 0, 0);

object c_7359 = Cyc_string_append(data,(closure)&c_7330,4,__glo__85version_91number_85_scheme_cyclone_common, &c_7360, __glo__85version_91name_85_scheme_cyclone_common, &c_7361);
return_closcall1(data,(closure)&c_7330,  c_7359);; 
}

static void __lambda_2(void *data, int argc, object self_7323, object r_7322) {
  global_set(__glo__85version_85_scheme_cyclone_common, r_7322);
closureN_type c_7333;
c_7333.hdr.mark = gc_color_red;
 c_7333.hdr.grayed = 0;
c_7333.tag = closureN_tag;
 c_7333.fn = (function_type)__lambda_3;
c_7333.num_args = 1;
c_7333.num_elements = 1;
c_7333.elements = (object *)alloca(sizeof(object) * 1);
c_7333.elements[0] = ((closureN)self_7323)->elements[0];


make_utf8_string_with_len(c_7353, "\n              :@ \n            @@@  \n          @@@@:  \n        `@@@@@+  \n       .@@@+@@@ \n       @@     @@     Cyclone Scheme->C compiler\n      ,@             http://justinethier.github.io/cyclone/\n      '@        \n      .@             (c) 2014-2018 Justin Ethier\n       @@     #@     Version ", 293, 293);

make_utf8_string_with_len(c_7354, "\n       `@@@#@@@.\n        #@@@@@   \n        +@@@+    \n        @@#      \n      `@.  \n     \n", 90, 90);

object c_7352 = Cyc_string_append(data,(closure)&c_7333,3,&c_7353, __glo__85version_85_scheme_cyclone_common, &c_7354);
return_closcall1(data,(closure)&c_7333,  c_7352);;; 
}

static void __lambda_3(void *data, int argc, object self_7324, object r_7321) {
  global_set(__glo__85version_91banner_85_scheme_cyclone_common, r_7321);global_set(__glo__85Cyc_91version_91banner_85_scheme_cyclone_common, __glo__85version_91banner_85_scheme_cyclone_common);
closureN_type c_7336;
c_7336.hdr.mark = gc_color_red;
 c_7336.hdr.grayed = 0;
c_7336.tag = closureN_tag;
 c_7336.fn = (function_type)__lambda_4;
c_7336.num_args = 1;
c_7336.num_elements = 1;
c_7336.elements = (object *)alloca(sizeof(object) * 1);
c_7336.elements[0] = ((closureN)self_7324)->elements[0];


make_utf8_string_with_len(c_7344, "/**\n ** This file was automatically generated by the Cyclone scheme compiler\n ** http://justinethier.github.io/cyclone/\n **\n ** (c) 2014-2018 Justin Ethier\n ** Version ", 168, 168);

make_utf8_string_with_len(c_7345, "\n **\n **/\n", 10, 10);

object c_7343 = Cyc_string_append(data,(closure)&c_7336,3,&c_7344, __glo__85version_85_scheme_cyclone_common, &c_7345);
return_closcall1(data,(closure)&c_7336,  c_7343);;; 
}

static void __lambda_4(void *data, int argc, object self_7325, object r_7320) {
  return_closcall1(data,  ((closureN)self_7325)->elements[0],  global_set(__glo__85c_91file_91header_91comment_85_scheme_cyclone_common, r_7320));; 
}

void c_schemecyclonecommon_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
(((closure)cont)->fn)(data, 1, cont, NULL);
 } 
void c_schemecyclonecommon_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);

  add_global((object *) &__glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common);
  add_global((object *) &__glo__85c_91file_91header_91comment_85_scheme_cyclone_common);
  add_global((object *) &__glo__85Cyc_91version_91banner_85_scheme_cyclone_common);
  add_global((object *) &__glo__85version_91banner_85_scheme_cyclone_common);
  add_global((object *) &__glo__85version_85_scheme_cyclone_common);
  add_global((object *) &__glo__85version_91name_85_scheme_cyclone_common);
  add_global((object *) &__glo__85version_91number_85_scheme_cyclone_common);
  mclosure0(c_7328, (function_type)__lambda_1);c_7328.num_args = 0; 
  __glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common = &c_7328; 
  __glo__85c_91file_91header_91comment_85_scheme_cyclone_common = boolean_f; 
  __glo__85Cyc_91version_91banner_85_scheme_cyclone_common = boolean_f; 
  __glo__85version_91banner_85_scheme_cyclone_common = boolean_f; 
  __glo__85version_85_scheme_cyclone_common = boolean_f; 
  make_utf8_string_with_len(c_7327, "", 0, 0); 
  __glo__85version_91name_85_scheme_cyclone_common = &c_7327; 
  make_utf8_string_with_len(c_7326, "0.9.5", 5, 5); 
  __glo__85version_91number_85_scheme_cyclone_common = &c_7326; 

  mclosure0(clo_7363, c_schemecyclonecommon_inlinable_lambdas); make_pair(pair_7362, find_or_add_symbol("c_schemecyclonecommon_inlinable_lambdas"), &clo_7363);
  make_cvar(cvar_7364, (object *)&__glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common);make_pair(pair_7365, find_or_add_symbol("lib-init:schemecyclonecommon"), &cvar_7364);
  make_cvar(cvar_7366, (object *)&__glo__85c_91file_91header_91comment_85_scheme_cyclone_common);make_pair(pair_7367, find_or_add_symbol("*c-file-header-comment*"), &cvar_7366);
  make_cvar(cvar_7368, (object *)&__glo__85Cyc_91version_91banner_85_scheme_cyclone_common);make_pair(pair_7369, find_or_add_symbol("*Cyc-version-banner*"), &cvar_7368);
  make_cvar(cvar_7370, (object *)&__glo__85version_91banner_85_scheme_cyclone_common);make_pair(pair_7371, find_or_add_symbol("*version-banner*"), &cvar_7370);
  make_cvar(cvar_7372, (object *)&__glo__85version_85_scheme_cyclone_common);make_pair(pair_7373, find_or_add_symbol("*version*"), &cvar_7372);
  make_cvar(cvar_7374, (object *)&__glo__85version_91name_85_scheme_cyclone_common);make_pair(pair_7375, find_or_add_symbol("*version-name*"), &cvar_7374);
  make_cvar(cvar_7376, (object *)&__glo__85version_91number_85_scheme_cyclone_common);make_pair(pair_7377, find_or_add_symbol("*version-number*"), &cvar_7376);
make_pair(c_7385, &pair_7362,Cyc_global_variables);
make_pair(c_7384, &pair_7365, &c_7385);
make_pair(c_7383, &pair_7367, &c_7384);
make_pair(c_7382, &pair_7369, &c_7383);
make_pair(c_7381, &pair_7371, &c_7382);
make_pair(c_7380, &pair_7373, &c_7381);
make_pair(c_7379, &pair_7375, &c_7380);
make_pair(c_7378, &pair_7377, &c_7379);
Cyc_global_variables = &c_7378;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common)->fn)(data, 1, cont, cont);
}
void c_schemecyclonecommon_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_cyclone_common");
  c_schemecyclonecommon_entry_pt_first_lambda(data, argc, cont,value);
}
