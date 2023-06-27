#include "include/api/api.h"
#include "include/api/set.h"
#include "include/Main/Test.h"
#include "test1835841364.h"
#include "include/api/set.h"
void test1835841364reaction_function_0(void* instance_args){
    _test1835841364_self_t* self = (_test1835841364_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    test1835841364_x_t* x = self->_lf_x;
    int x_width = self->_lf_x_width; SUPPRESS_UNUSED_WARNING(x_width);
    #line 25 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    LF_PRINT_DEBUG("Calling reaction function test1835841364.reaction_function_0");
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_0, 
        Py_BuildValue("(O)", convert_C_port_to_py(x, x_width))
    );
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction test1835841364.reaction_function_0 failed.");
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
void test1835841364reaction_function_1(void* instance_args){
    _test1835841364_self_t* self = (_test1835841364_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    #line 33 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    LF_PRINT_DEBUG("Calling reaction function test1835841364.reaction_function_1");
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_1, 
        Py_BuildValue("()")
    );
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction test1835841364.reaction_function_1 failed.");
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
_test1835841364_self_t* new_test1835841364() {
    _test1835841364_self_t* self = (_test1835841364_self_t*)_lf_new_reactor(sizeof(_test1835841364_self_t));
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    // Set input by default to an always absent default input.
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf_x = &self->_lf_default__x;
    #line 24 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_0.number = 0;
    #line 24 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_0.function = test1835841364reaction_function_0;
    #line 24 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_0.self = self;
    #line 24 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 24 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 24 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_0.name = "?";
    #line 24 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 32 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_1.number = 1;
    #line 32 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_1.function = test1835841364reaction_function_1;
    #line 32 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_1.self = self;
    #line 32 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 32 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 32 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_1.name = "?";
    #line 32 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_1.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__shutdown.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__shutdown_reactions[0] = &self->_lf__reaction_1;
    self->_lf__shutdown.last = NULL;
    self->_lf__shutdown.reactions = &self->_lf__shutdown_reactions[0];
    self->_lf__shutdown.number_of_reactions = 1;
    self->_lf__shutdown.is_timer = false;
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__x.last = NULL;
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__x.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__x_reactions[0] = &self->_lf__reaction_0;
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__x.reactions = &self->_lf__x_reactions[0];
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__x.number_of_reactions = 1;
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    #ifdef FEDERATED
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__x.physical_time_of_arrival = NEVER;
    #line 21 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    #endif // FEDERATED
    self->_lf__x.tmplt.type.element_size = sizeof(PyObject);
    return self;
}
