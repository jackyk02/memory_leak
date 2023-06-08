#ifndef server2107671597_main_H
#define server2107671597_main_H
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
typedef struct server_self_t{
int end[0]; // placeholder; MSVC does not compile empty structs
} server_self_t;
#line 56 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
typedef generic_action_instance_struct server2107671597_main_inputControlReactionTrigger_t;
#line 57 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
typedef generic_action_instance_struct server2107671597_main_networkMessage_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_sparse_io_record_t* sparse_record;
    int destination_channel;
    int num_destinations;
    PyObject* value;
} serverreactor_in_parameter_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_sparse_io_record_t* sparse_record;
    int destination_channel;
    int num_destinations;
    PyObject* value;
} serverreactor_out_parameter_t;
#endif
