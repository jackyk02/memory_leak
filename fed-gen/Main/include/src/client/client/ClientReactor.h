#ifndef clientreactor1769219705_H
#define clientreactor1769219705_H
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
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/api.h"
#include "../include/api/set.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct clientreactor_self_t{
int end[0]; // placeholder; MSVC does not compile empty structs
} clientreactor_self_t;
#line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
typedef generic_port_instance_struct clientreactor1769219705_in_parameter_t;
#line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
typedef generic_port_instance_struct clientreactor1769219705_out_parameter_t;
#endif
