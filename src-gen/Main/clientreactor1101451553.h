#ifndef CLIENTREACTOR1101451553_H
#define CLIENTREACTOR1101451553_H
#include "include/core/reactor.h"
#include <limits.h>
#include "include/core/platform.h"
#include "include/api/api.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
int lf_reactor_c_main(int argc, const char* argv[]);
#include "pythontarget.h"
#line 12 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
typedef generic_port_instance_struct clientreactor1101451553_in_parameter_t;
#line 13 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
typedef generic_port_instance_struct clientreactor1101451553_out_parameter_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    PyObject* _lf_py_reaction_function_1;
    #line 12 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    clientreactor1101451553_in_parameter_t* _lf_in_parameter;
    #line 12 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    // width of -2 indicates that it is not a multiport.
    #line 12 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    int _lf_in_parameter_width;
    #line 12 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    // Default input (in case it does not get connected)
    #line 12 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    clientreactor1101451553_in_parameter_t _lf_default__in_parameter;
    #line 13 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    clientreactor1101451553_out_parameter_t _lf_out_parameter;
    #line 13 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    int _lf_out_parameter_width;
    #line 15 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    reaction_t _lf__reaction_0;
    #line 18 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 12 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    trigger_t _lf__in_parameter;
    #line 12 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    reaction_t* _lf__in_parameter_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _clientreactor1101451553_self_t;
_clientreactor1101451553_self_t* new_clientreactor1101451553();
#endif // CLIENTREACTOR1101451553_H
