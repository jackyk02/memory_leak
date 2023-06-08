#include "include/api/api.h"
#include "include/api/set.h"
#include "include/client/client.h"
#include "client341582687_main.h"
#include "include/api/set.h"

PyObject* out_param_val = NULL;

void python_count_decrement(void* py_object) {
    LF_PRINT_DEBUG("PYTHON DECREMENT !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
    Py_XDECREF((PyObject*)py_object);
    LF_PRINT_DEBUG("!!!!!!!!!!!!!!!!!!!!!Reference COUNT: %d", Py_REFCNT(out_param_val));
    Py_XDECREF(out_param_val);
    Py_XDECREF(out_param_val);
    Py_XDECREF(out_param_val);
}

void client341582687_mainreaction_function_0(void* instance_args) {
    _client341582687_main_main_self_t* self = (_client341582687_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct client {
        clientreactor393266340_out_parameter_t* out_parameter;
    
    } client;
    client.out_parameter = self->_lf_client.out_parameter;
    #line 53 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    /*Correspondence: Range: [(52, 8), (74, 27)) -> Range: [(0, 0), (22, 27)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf)*/// **** This reaction is unordered.
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    // **** This reaction is unordered.
    // Sending from client.out_parameter in federate client to server.in_parameter in federate server
    if (!client.out_parameter->is_present) return;
    if (global_pickler == NULL) lf_print_error_and_exit("The pickle module is not loaded.");
    PyObject* serialized_pyobject = PyObject_CallMethod(global_pickler, "dumps", "O", client.out_parameter->value);
    if (serialized_pyobject == NULL) {
        if (PyErr_Occurred()) PyErr_Print();
        lf_print_error_and_exit("Could not serialize serialized_pyobject.");
    }
    Py_buffer serialized_message;
    int returnValue = PyBytes_AsStringAndSize(serialized_pyobject, &serialized_message.buf, &serialized_message.len);
    if (returnValue == -1) {
        if (PyErr_Occurred()) PyErr_Print();
        lf_print_error_and_exit("Could not serialize serialized_message.");
    }
    size_t message_length = serialized_message.len;
    int send = send_timed_message(NEVER, MSG_TYPE_TAGGED_MESSAGE, 0, 1, "federate 1 via the RTI", message_length, serialized_message.buf);
    //added
    out_param_val = client.out_parameter->value;
    
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void client341582687_mainreaction_function_1(void* instance_args) {
    _client341582687_main_main_self_t* self = (_client341582687_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct client {
        clientreactor393266340_out_parameter_t* out_parameter;
    
    } client;
    // Expose the action struct as a local variable whose name matches the action name.
    client341582687_main_outputControlReactionTrigger_t* outputControlReactionTrigger = &self->_lf_outputControlReactionTrigger;
    // Set the fields of the action struct to match the current trigger.
    outputControlReactionTrigger->is_present = (bool)self->_lf__outputControlReactionTrigger.status;
    outputControlReactionTrigger->has_value = ((self->_lf__outputControlReactionTrigger.tmplt.token) != NULL && (self->_lf__outputControlReactionTrigger.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)outputControlReactionTrigger, (self->_lf__outputControlReactionTrigger.tmplt.token));
    client.out_parameter = self->_lf_client.out_parameter;
    #line 80 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    /*Correspondence: Range: [(79, 8), (88, 1)) -> Range: [(0, 0), (9, 1)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf)*/// **** This reaction is unordered.
    // If the output port has not been lf_set for the current logical time,
    // send an ABSENT message to the receiving federate
    LF_PRINT_LOG("Contemplating whether to send port "
              "absent for port %d to federate %d.",
              0, 1);
    if (client.out_parameter == NULL || !client.out_parameter->is_present) {
        // The output port is NULL or it is not present.
        send_port_absent_to_federate(NEVER, 0, 1);
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void client341582687_mainreaction_function_2(void* instance_args) {
    _client341582687_main_main_self_t* self = (_client341582687_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct client {
        clientreactor393266340_in_parameter_t* in_parameter;
    
    } client;
    // Expose the action struct as a local variable whose name matches the action name.
    client341582687_main_networkMessage_0_t* networkMessage_0 = &self->_lf_networkMessage_0;
    // Set the fields of the action struct to match the current trigger.
    networkMessage_0->is_present = (bool)self->_lf__networkMessage_0.status;
    networkMessage_0->has_value = ((self->_lf__networkMessage_0.tmplt.token) != NULL && (self->_lf__networkMessage_0.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)networkMessage_0, (self->_lf__networkMessage_0.tmplt.token));
    client.in_parameter = &(self->_lf_client.in_parameter);
    #line 94 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    /*Correspondence: Range: [(93, 8), (109, 27)) -> Range: [(0, 0), (16, 27)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf)*/// **** This reaction is unordered.
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    // **** This reaction is unordered.
    client.in_parameter->physical_time_of_arrival = self->_lf__networkMessage_0.physical_time_of_arrival;
    PyObject* message_byte_array = PyBytes_FromStringAndSize((char*)networkMessage_0->token->value, networkMessage_0->token->length);
    //removed Py_XINCREF(message_byte_array);
    PyObject* deserialized_message = PyObject_CallMethod(global_pickler, "loads", "O", message_byte_array);
    if (deserialized_message == NULL) {
        if (PyErr_Occurred()) PyErr_Print();
        lf_print_error_and_exit("Could not deserialize deserialized_message.");
    }
    Py_XDECREF(message_byte_array);
    //changed lf_set(client.in_parameter, deserialized_message);
    lf_token_t* token = lf_new_token((void*)client.in_parameter, deserialized_message, 1);
    lf_set_destructor(client.in_parameter, python_count_decrement);
    lf_set_token(client.in_parameter, token);
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
_client341582687_main_main_self_t* new_client341582687_main() {
    _client341582687_main_main_self_t* self = (_client341582687_main_main_self_t*)_lf_new_reactor(sizeof(_client341582687_main_main_self_t));
    #line 46 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf_outputControlReactionTrigger.trigger = &self->_lf__outputControlReactionTrigger;
    #line 47 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf_networkMessage_0.trigger = &self->_lf__networkMessage_0;
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_client_width = -2;
    #line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf_client.out_parameter_trigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf_client.out_parameter_reactions[0] = &self->_lf__reaction_0;
    #line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf_client.out_parameter_trigger.reactions = self->_lf_client.out_parameter_reactions;
    #line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf_client.out_parameter_trigger.last = NULL;
    #line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf_client.out_parameter_trigger.number_of_reactions = 1;
    #line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    #ifdef FEDERATED
    #line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf_client.out_parameter_trigger.physical_time_of_arrival = NEVER;
    #line 27 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    #endif // FEDERATED
    #line 50 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_0.number = 0;
    #line 50 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_0.function = client341582687_mainreaction_function_0;
    #line 50 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_0.self = self;
    #line 50 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 50 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 50 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_0.name = "?";
    #line 50 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 77 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_1.number = 1;
    #line 77 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_1.function = client341582687_mainreaction_function_1;
    #line 77 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_1.self = self;
    #line 77 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 77 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 77 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_1.name = "?";
    #line 77 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_1.mode = NULL;
    #line 91 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_2.number = 2;
    #line 91 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_2.function = client341582687_mainreaction_function_2;
    #line 91 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_2.self = self;
    #line 91 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    #line 91 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_2.STP_handler = NULL;
    #line 91 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_2.name = "?";
    #line 91 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__reaction_2.mode = NULL;
    #line 46 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__outputControlReactionTrigger.last = NULL;
    #line 46 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 46 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__outputControlReactionTrigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 46 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 46 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    #line 46 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__outputControlReactionTrigger_reactions[0] = &self->_lf__reaction_1;
    #line 46 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__outputControlReactionTrigger.reactions = &self->_lf__outputControlReactionTrigger_reactions[0];
    #line 46 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__outputControlReactionTrigger.number_of_reactions = 1;
    #line 46 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    #ifdef FEDERATED
    #line 46 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__outputControlReactionTrigger.physical_time_of_arrival = NEVER;
    #line 46 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    #endif // FEDERATED
    self->_lf__outputControlReactionTrigger.is_physical = false;
    
    self->_lf__outputControlReactionTrigger.tmplt.type.element_size = 0;
    self->_lf_outputControlReactionTrigger.type.element_size = 0;
    #line 47 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__networkMessage_0.last = NULL;
    #line 47 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 47 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__networkMessage_0.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 47 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 47 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    #line 47 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__networkMessage_0_reactions[0] = &self->_lf__reaction_2;
    #line 47 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__networkMessage_0.reactions = &self->_lf__networkMessage_0_reactions[0];
    #line 47 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__networkMessage_0.number_of_reactions = 1;
    #line 47 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    #ifdef FEDERATED
    #line 47 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    self->_lf__networkMessage_0.physical_time_of_arrival = NEVER;
    #line 47 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/client.lf"
    #endif // FEDERATED
    self->_lf__networkMessage_0.is_physical = false;
    
    self->_lf__networkMessage_0.tmplt.type.element_size = 0;
    self->_lf_networkMessage_0.type.element_size = 0;
    return self;
}
