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
object __glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common = NULL;
object __glo__85c_91file_91header_91comment_85_scheme_cyclone_common = NULL;
object __glo__85Cyc_91version_91banner_85_scheme_cyclone_common = NULL;
object __glo__85version_91banner_85_scheme_cyclone_common = NULL;
object __glo__85version_85_scheme_cyclone_common = NULL;
#include "cyclone/runtime.h"
static void __lambda_4(void *data, int argc, closure _,object k_733) ;
static void __lambda_3(void *data, int argc, object self_7317, object r_738) ;
static void __lambda_2(void *data, int argc, object self_7318, object r_735) ;
static void __lambda_1(void *data, int argc, object self_7319, object r_736) ;
static void __lambda_0(void *data, int argc, object self_7320, object r_737) ;

static void __lambda_4(void *data, int argc, closure _,object k_733) {
  Cyc_st_add(data, "scheme/cyclone/common.sld:lib-init:schemecyclonecommon");

closureN_type c_7324;
c_7324.hdr.mark = gc_color_red;
 c_7324.hdr.grayed = 0;
c_7324.tag = closureN_tag;
 c_7324.fn = (function_type)__lambda_3;
c_7324.num_args = 1;
c_7324.num_elements = 1;
c_7324.elements = (object *)alloca(sizeof(object) * 1);
c_7324.elements[0] = k_733;


make_string(c_7347, "\n              :@ \n            @@@  \n          @@@@:  \n        `@@@@@+  \n       .@@@+@@@      Cyclone  \n       @@     @@     Scheme-to-C compiler\n      ,@             http://justinethier.github.io/cyclone/\n      '@        \n      .@        \n       @@     #@     (c) 2014-2016 Justin Ethier\n       `@@@#@@@.     Version ");

make_string(c_7348, "\n        #@@@@@   \n        +@@@+    \n        @@#      \n      `@.  \n     \n");

object c_7346 = Cyc_string_append(data,(closure)&c_7324,3,&c_7347, __glo__85version_85_scheme_cyclone_common, &c_7348);
return_closcall1(data,(closure)&c_7324,  c_7346);; 
}

static void __lambda_3(void *data, int argc, object self_7317, object r_738) {
  
closureN_type c_7326;
c_7326.hdr.mark = gc_color_red;
 c_7326.hdr.grayed = 0;
c_7326.tag = closureN_tag;
 c_7326.fn = (function_type)__lambda_2;
c_7326.num_args = 1;
c_7326.num_elements = 1;
c_7326.elements = (object *)alloca(sizeof(object) * 1);
c_7326.elements[0] = ((closureN)self_7317)->elements[0];

return_closcall1(data,(closure)&c_7326,  global_set(__glo__85version_91banner_85_scheme_cyclone_common, r_738));; 
}

static void __lambda_2(void *data, int argc, object self_7318, object r_735) {
  
closureN_type c_7328;
c_7328.hdr.mark = gc_color_red;
 c_7328.hdr.grayed = 0;
c_7328.tag = closureN_tag;
 c_7328.fn = (function_type)__lambda_1;
c_7328.num_args = 1;
c_7328.num_elements = 1;
c_7328.elements = (object *)alloca(sizeof(object) * 1);
c_7328.elements[0] = ((closureN)self_7318)->elements[0];

return_closcall1(data,(closure)&c_7328,  global_set(__glo__85Cyc_91version_91banner_85_scheme_cyclone_common, __glo__85version_91banner_85_scheme_cyclone_common));; 
}

static void __lambda_1(void *data, int argc, object self_7319, object r_736) {
  
closureN_type c_7330;
c_7330.hdr.mark = gc_color_red;
 c_7330.hdr.grayed = 0;
c_7330.tag = closureN_tag;
 c_7330.fn = (function_type)__lambda_0;
c_7330.num_args = 1;
c_7330.num_elements = 1;
c_7330.elements = (object *)alloca(sizeof(object) * 1);
c_7330.elements[0] = ((closureN)self_7319)->elements[0];


make_string(c_7338, "/**\n ** This file was automatically generated by the Cyclone scheme compiler\n ** http://justinethier.github.io/cyclone/\n **\n ** (c) 2014-2016 Justin Ethier\n ** Version ");

make_string(c_7339, "\n **\n **/\n");

object c_7337 = Cyc_string_append(data,(closure)&c_7330,3,&c_7338, __glo__85version_85_scheme_cyclone_common, &c_7339);
return_closcall1(data,(closure)&c_7330,  c_7337);; 
}

static void __lambda_0(void *data, int argc, object self_7320, object r_737) {
  return_closcall1(data,  ((closureN)self_7320)->elements[0],  global_set(__glo__85c_91file_91header_91comment_85_scheme_cyclone_common, r_737));; 
}

void c_schemecyclonecommon_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common);
  add_global((object *) &__glo__85c_91file_91header_91comment_85_scheme_cyclone_common);
  add_global((object *) &__glo__85Cyc_91version_91banner_85_scheme_cyclone_common);
  add_global((object *) &__glo__85version_91banner_85_scheme_cyclone_common);
  add_global((object *) &__glo__85version_85_scheme_cyclone_common);
  mclosure0(c_7322, (function_type)__lambda_4);c_7322.num_args = 0; 
  __glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common = &c_7322; 
  __glo__85c_91file_91header_91comment_85_scheme_cyclone_common = boolean_f; 
  __glo__85Cyc_91version_91banner_85_scheme_cyclone_common = boolean_f; 
  __glo__85version_91banner_85_scheme_cyclone_common = boolean_f; 
  make_string(c_7321, "0.1.3 (alpha)"); 
  __glo__85version_85_scheme_cyclone_common = &c_7321; 

  make_cvar(cvar_7349, (object *)&__glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common);make_pair(pair_7350, find_or_add_symbol("lib-init:schemecyclonecommon"), &cvar_7349);
  make_cvar(cvar_7351, (object *)&__glo__85c_91file_91header_91comment_85_scheme_cyclone_common);make_pair(pair_7352, find_or_add_symbol("*c-file-header-comment*"), &cvar_7351);
  make_cvar(cvar_7353, (object *)&__glo__85Cyc_91version_91banner_85_scheme_cyclone_common);make_pair(pair_7354, find_or_add_symbol("*Cyc-version-banner*"), &cvar_7353);
  make_cvar(cvar_7355, (object *)&__glo__85version_91banner_85_scheme_cyclone_common);make_pair(pair_7356, find_or_add_symbol("*version-banner*"), &cvar_7355);
  make_cvar(cvar_7357, (object *)&__glo__85version_85_scheme_cyclone_common);make_pair(pair_7358, find_or_add_symbol("*version*"), &cvar_7357);
make_pair(c_7359, &pair_7350,Cyc_global_variables);
make_pair(c_7360, &pair_7352, &c_7359);
make_pair(c_7361, &pair_7354, &c_7360);
make_pair(c_7362, &pair_7356, &c_7361);
make_pair(c_7363, &pair_7358, &c_7362);
Cyc_global_variables = &c_7363;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common)->fn)(data, 1, cont, cont);
}
