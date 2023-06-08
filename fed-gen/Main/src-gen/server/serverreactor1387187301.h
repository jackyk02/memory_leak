#ifndef SERVERREACTOR1387187301_H
#define SERVERREACTOR1387187301_H
#include "include/core/reactor.h"
#include <limits.h>
#include "include/core/platform.h"
#include "include/api/api.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/threaded/scheduler.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
int lf_reactor_c_main(int argc, const char* argv[]);
#include "include/core/federated/federate.h"
#include "include/core/federated/net_common.h"
#include "pythontarget.h"
#line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
typedef generic_port_instance_struct serverreactor1387187301_in_parameter_t;
#line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
typedef generic_port_instance_struct serverreactor1387187301_out_parameter_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    PyObject* _lf_py_reaction_function_1;
    #line 28 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    PyObject* large_param;
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    serverreactor1387187301_in_parameter_t* _lf_in_parameter;
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    // width of -2 indicates that it is not a multiport.
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    int _lf_in_parameter_width;
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    // Default input (in case it does not get connected)
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    serverreactor1387187301_in_parameter_t _lf_default__in_parameter;
    #line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    serverreactor1387187301_out_parameter_t _lf_out_parameter;
    #line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    int _lf_out_parameter_width;
    #line 30 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    reaction_t _lf__reaction_0;
    #line 37 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    trigger_t _lf__in_parameter;
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    reaction_t* _lf__in_parameter_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _serverreactor1387187301_self_t;
_serverreactor1387187301_self_t* new_serverreactor1387187301();
#endif // SERVERREACTOR1387187301_H
