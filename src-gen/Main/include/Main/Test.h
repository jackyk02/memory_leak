#ifndef test1835841364_H
#define test1835841364_H
#include <limits.h>
#include "include/core/platform.h"
#include "include/api/api.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
int lf_reactor_c_main(int argc, const char* argv[]);
#include "pythontarget.h"
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/api.h"
#include "../include/api/set.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct test_self_t{
PyObject* count;
int end[0]; // placeholder; MSVC does not compile empty structs
} test_self_t;
#line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
typedef generic_port_instance_struct test1835841364_x_t;
#endif
