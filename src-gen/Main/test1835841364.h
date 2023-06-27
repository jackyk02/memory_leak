#ifndef TEST1835841364_H
#define TEST1835841364_H
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
#line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
typedef generic_port_instance_struct test1835841364_x_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    PyObject* _lf_py_reaction_function_1;
    #line 22 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    PyObject* count;
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    test1835841364_x_t* _lf_x;
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    // width of -2 indicates that it is not a multiport.
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    int _lf_x_width;
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    // Default input (in case it does not get connected)
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    test1835841364_x_t _lf_default__x;
    #line 24 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    reaction_t _lf__reaction_0;
    #line 32 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    reaction_t _lf__reaction_1;
    trigger_t _lf__shutdown;
    reaction_t* _lf__shutdown_reactions[1];
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    trigger_t _lf__x;
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    reaction_t* _lf__x_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _test1835841364_self_t;
_test1835841364_self_t* new_test1835841364();
#endif // TEST1835841364_H
