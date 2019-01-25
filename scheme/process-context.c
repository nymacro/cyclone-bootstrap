/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2019 Justin Ethier
 ** Version 0.9.8 
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
object __glo_lib_91init_117schemeprocess_19191context_scheme_process_91context = NULL;
object __glo_get_91environment_91variables_scheme_process_91context = NULL;
object __glo_get_91environment_91variable_scheme_process_91context = NULL;
object __glo_command_91line_scheme_process_91context = NULL;
object __glo_emergency_91exit_scheme_process_91context = NULL;
#include "cyclone/runtime.h"
static void __lambda_1(void *data, int argc, closure _,object k_735) ;
static void __lambda_4(void *data, int argc, closure _, object k) ;
static void __lambda_3(void *data, int argc, closure _, object k, object env_var) ;
static void __lambda_2(void *data, int argc, closure _, object k) ;

static void __lambda_1(void *data, int argc, closure _,object k_735) {
  Cyc_st_add(data, "scheme/process-context.sld:lib-init:schemeprocess_91context");


return_closcall1(data,  k_735,  global_set(__glo_emergency_91exit_scheme_process_91context, primitive_exit));; 
}

static void __lambda_4(void *data, int argc, closure _, object k) {pack_env_variables(data, k); 
       }
static void __lambda_3(void *data, int argc, closure _, object k, object env_var) { 
        const char *v = NULL;
        Cyc_check_str(data, env_var);
        v = getenv(string_str(env_var));
        if (v == NULL) {
          return_closcall1(data, k, boolean_f);
        } else {
          make_utf8_string(data, str, v);
          return_closcall1(data, k, &str);
        }
       }
static void __lambda_2(void *data, int argc, closure _, object k) { int i;
        object lis = NULL;
        for (i = _cyc_argc; i > 0; i--) {
          object ps = alloca(sizeof(string_type));
          object pl = alloca(sizeof(pair_type));
          make_utf8_string(data, s, _cyc_argv[i - 1]);
          memcpy(ps, &s, sizeof(string_type));
          ((list)pl)->hdr.mark = gc_color_red;
          ((list)pl)->hdr.grayed = 0;
          ((list)pl)->tag = pair_tag;
          ((list)pl)->pair_car = ps;
          ((list)pl)->pair_cdr = lis;
          lis = pl;
        }
        return_closcall1(data, k, lis);  }
void c_schemeprocess_91context_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
(((closure)cont)->fn)(data, 1, cont, NULL);
 } 
void c_schemeprocess_91context_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);

  add_global((object *) &__glo_lib_91init_117schemeprocess_19191context_scheme_process_91context);
  add_global((object *) &__glo_get_91environment_91variables_scheme_process_91context);
  add_global((object *) &__glo_get_91environment_91variable_scheme_process_91context);
  add_global((object *) &__glo_command_91line_scheme_process_91context);
  add_global((object *) &__glo_emergency_91exit_scheme_process_91context);
  mclosure0(c_7310, (function_type)__lambda_1);c_7310.num_args = 0; 
  __glo_lib_91init_117schemeprocess_19191context_scheme_process_91context = &c_7310; 
  mclosure0(c_739, (function_type)__lambda_4);c_739.num_args = 0; 
  __glo_get_91environment_91variables_scheme_process_91context = &c_739; 
  mclosure0(c_738, (function_type)__lambda_3);c_738.num_args = 1; 
  __glo_get_91environment_91variable_scheme_process_91context = &c_738; 
  mclosure0(c_737, (function_type)__lambda_2);c_737.num_args = 0; 
  __glo_command_91line_scheme_process_91context = &c_737; 
  __glo_emergency_91exit_scheme_process_91context = boolean_f; 

  mclosure0(clo_7315, c_schemeprocess_91context_inlinable_lambdas); make_pair(pair_7314, find_or_add_symbol("c_schemeprocess_91context_inlinable_lambdas"), &clo_7315);
  make_cvar(cvar_7316, (object *)&__glo_lib_91init_117schemeprocess_19191context_scheme_process_91context);make_pair(pair_7317, find_or_add_symbol("lib-init:schemeprocess_91context"), &cvar_7316);
  make_cvar(cvar_7318, (object *)&__glo_get_91environment_91variables_scheme_process_91context);make_pair(pair_7319, find_or_add_symbol("get-environment-variables"), &cvar_7318);
  make_cvar(cvar_7320, (object *)&__glo_get_91environment_91variable_scheme_process_91context);make_pair(pair_7321, find_or_add_symbol("get-environment-variable"), &cvar_7320);
  make_cvar(cvar_7322, (object *)&__glo_command_91line_scheme_process_91context);make_pair(pair_7323, find_or_add_symbol("command-line"), &cvar_7322);
  make_cvar(cvar_7324, (object *)&__glo_emergency_91exit_scheme_process_91context);make_pair(pair_7325, find_or_add_symbol("emergency-exit"), &cvar_7324);
make_pair(c_7331, &pair_7314,Cyc_global_variables);
make_pair(c_7330, &pair_7317, &c_7331);
make_pair(c_7329, &pair_7319, &c_7330);
make_pair(c_7328, &pair_7321, &c_7329);
make_pair(c_7327, &pair_7323, &c_7328);
make_pair(c_7326, &pair_7325, &c_7327);
Cyc_global_variables = &c_7326;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemeprocess_19191context_scheme_process_91context)->fn)(data, 1, cont, cont);
}
void c_schemeprocess_91context_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_process_91context");
  c_schemeprocess_91context_entry_pt_first_lambda(data, argc, cont,value);
}
