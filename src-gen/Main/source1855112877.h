#ifndef SOURCE1855112877_H
#define SOURCE1855112877_H
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
#line 8 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
typedef generic_port_instance_struct source1855112877_y_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    #line 7 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    interval_t period;
    #line 10 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    PyObject* count;
    #line 8 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    source1855112877_y_t _lf_y;
    #line 8 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    int _lf_y_width;
    #line 12 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    reaction_t _lf__reaction_0;
    #line 9 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    trigger_t _lf__t;
    #line 9 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    reaction_t* _lf__t_reactions[1];
} _source1855112877_self_t;
_source1855112877_self_t* new_source1855112877();
#endif // SOURCE1855112877_H
