#include "include/api/api.h"
#include "include/api/set.h"
#include "include/server/ServerReactor.h"
#include "serverreactor1334303919.h"
#include "include/api/set.h"
void serverreactor1334303919reaction_function_0(void* instance_args){
    _serverreactor1334303919_self_t* self = (_serverreactor1334303919_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    serverreactor1334303919_out_parameter_t* out_parameter = &self->_lf_out_parameter;
    #line 32 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    LF_PRINT_DEBUG("Calling reaction function serverreactor1334303919.reaction_function_0");
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_0, 
        Py_BuildValue("(O)", convert_C_port_to_py(out_parameter, -2))
    );
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction serverreactor1334303919.reaction_function_0 failed.");
        if (PyErr_Occurred()) {
            PyErr_PrintEx(0);
            PyErr_Clear(); // this will reset the error indicator so we can run Python code again
        }
        /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
        Py_FinalizeEx();
        exit(1);
    }
    
    /* Release the thread. No Python API allowed beyond this point. */
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void serverreactor1334303919reaction_function_1(void* instance_args){
    _serverreactor1334303919_self_t* self = (_serverreactor1334303919_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    serverreactor1334303919_in_parameter_t* in_parameter = self->_lf_in_parameter;
    int in_parameter_width = self->_lf_in_parameter_width; SUPPRESS_UNUSED_WARNING(in_parameter_width);
    serverreactor1334303919_out_parameter_t* out_parameter = &self->_lf_out_parameter;
    #line 39 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    LF_PRINT_DEBUG("Calling reaction function serverreactor1334303919.reaction_function_1");
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_1, 
        Py_BuildValue("(OO)", convert_C_port_to_py(in_parameter, in_parameter_width), convert_C_port_to_py(out_parameter, -2))
    );
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction serverreactor1334303919.reaction_function_1 failed.");
        if (PyErr_Occurred()) {
            PyErr_PrintEx(0);
            PyErr_Clear(); // this will reset the error indicator so we can run Python code again
        }
        /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
        Py_FinalizeEx();
        exit(1);
    }
    
    /* Release the thread. No Python API allowed beyond this point. */
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
_serverreactor1334303919_self_t* new_serverreactor1334303919() {
    _serverreactor1334303919_self_t* self = (_serverreactor1334303919_self_t*)_lf_new_reactor(sizeof(_serverreactor1334303919_self_t));
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    // Set input by default to an always absent default input.
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf_in_parameter = &self->_lf_default__in_parameter;
    #line 30 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__reaction_0.number = 0;
    #line 30 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__reaction_0.function = serverreactor1334303919reaction_function_0;
    #line 30 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__reaction_0.self = self;
    #line 30 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 30 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 30 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__reaction_0.name = "?";
    #line 30 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 37 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__reaction_1.number = 1;
    #line 37 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__reaction_1.function = serverreactor1334303919reaction_function_1;
    #line 37 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__reaction_1.self = self;
    #line 37 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 37 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 37 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__reaction_1.name = "?";
    #line 37 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__reaction_1.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__in_parameter.last = NULL;
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__in_parameter.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__in_parameter_reactions[0] = &self->_lf__reaction_1;
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__in_parameter.reactions = &self->_lf__in_parameter_reactions[0];
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__in_parameter.number_of_reactions = 1;
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    #ifdef FEDERATED
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    self->_lf__in_parameter.physical_time_of_arrival = NEVER;
    #line 26 "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf"
    #endif // FEDERATED
    self->_lf__in_parameter.tmplt.type.element_size = sizeof(PyObject);
    return self;
}
