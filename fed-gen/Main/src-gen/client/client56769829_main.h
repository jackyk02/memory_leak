#ifndef CLIENT56769829_MAIN_H
#define CLIENT56769829_MAIN_H
#include "include/core/reactor.h"
#include "clientreactor1769219705.h"
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
#line 46 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
typedef generic_action_instance_struct client56769829_main_outputControlReactionTrigger_t;
#line 47 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
typedef generic_action_instance_struct client56769829_main_networkMessage_0_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    PyObject* _lf_py_reaction_function_1;
    PyObject* _lf_py_reaction_function_2;
    #line 46 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    client56769829_main_outputControlReactionTrigger_t _lf_outputControlReactionTrigger;
    #line 47 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    client56769829_main_networkMessage_0_t _lf_networkMessage_0;
    struct {
        #line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
        clientreactor1769219705_out_parameter_t* out_parameter;
        #line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
        trigger_t out_parameter_trigger;
        #line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
        reaction_t* out_parameter_reactions[1];
        #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
        clientreactor1769219705_in_parameter_t in_parameter;
    } _lf_client;
    int _lf_client_width;
    #line 50 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    reaction_t _lf__reaction_0;
    #line 77 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    reaction_t _lf__reaction_1;
    #line 91 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    reaction_t _lf__reaction_2;
    #line 46 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    trigger_t _lf__outputControlReactionTrigger;
    #line 46 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    reaction_t* _lf__outputControlReactionTrigger_reactions[1];
    #line 47 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    trigger_t _lf__networkMessage_0;
    #line 47 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    reaction_t* _lf__networkMessage_0_reactions[1];
} _client56769829_main_main_self_t;
_client56769829_main_main_self_t* new_client56769829_main();
#endif // CLIENT56769829_MAIN_H
