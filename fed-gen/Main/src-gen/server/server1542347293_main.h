#ifndef SERVER1542347293_MAIN_H
#define SERVER1542347293_MAIN_H
#include "include/core/reactor.h"
#include "serverreactor1334303919.h"
#include <limits.h>
#include "include/core/platform.h"
#include "include/api/api.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/threaded/scheduler.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
int lf_reactor_c_main(int argc, const char* argv[]);
extern PyObject* global_deserialized_message;
#include "include/core/federated/federate.h"
#include "include/core/federated/net_common.h"
#include "pythontarget.h"
#line 56 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
typedef generic_action_instance_struct server1542347293_main_inputControlReactionTrigger_t;
#line 57 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
typedef generic_action_instance_struct server1542347293_main_networkMessage_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    PyObject* _lf_py_reaction_function_1;
    PyObject* _lf_py_reaction_function_2;
    #line 56 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    server1542347293_main_inputControlReactionTrigger_t _lf_inputControlReactionTrigger;
    #line 57 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    server1542347293_main_networkMessage_t _lf_networkMessage;
    struct {
        #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
        serverreactor1334303919_in_parameter_t in_parameter;
        #line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
        serverreactor1334303919_out_parameter_t* out_parameter;
        #line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
        trigger_t out_parameter_trigger;
        #line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
        reaction_t* out_parameter_reactions[1];
    } _lf_server;
    int _lf_server_width;
    #line 60 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    reaction_t _lf__reaction_0;
    #line 68 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    reaction_t _lf__reaction_1;
    #line 89 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    reaction_t _lf__reaction_2;
    #line 56 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    trigger_t _lf__inputControlReactionTrigger;
    #line 56 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    reaction_t* _lf__inputControlReactionTrigger_reactions[1];
    #line 57 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    trigger_t _lf__networkMessage;
    #line 57 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    reaction_t* _lf__networkMessage_reactions[1];
} _server1542347293_main_main_self_t;
_server1542347293_main_main_self_t* new_server1542347293_main();
#endif // SERVER1542347293_MAIN_H
