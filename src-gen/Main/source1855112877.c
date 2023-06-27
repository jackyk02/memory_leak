#include "include/api/api.h"
#include "include/api/set.h"
#include "include/Main/Source.h"
#include "source1855112877.h"
#include "include/api/set.h"
void source1855112877reaction_function_0(void* instance_args){
    _source1855112877_self_t* self = (_source1855112877_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    source1855112877_y_t* y = &self->_lf_y;
    #line 13 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    LF_PRINT_DEBUG("Calling reaction function source1855112877.reaction_function_0");
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_0, 
        Py_BuildValue("(O)", convert_C_port_to_py(y, -2))
    );
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction source1855112877.reaction_function_0 failed.");
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
_source1855112877_self_t* new_source1855112877() {
    _source1855112877_self_t* self = (_source1855112877_self_t*)_lf_new_reactor(sizeof(_source1855112877_self_t));
    #line 12 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_0.number = 0;
    #line 12 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_0.function = source1855112877reaction_function_0;
    #line 12 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_0.self = self;
    #line 12 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 12 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 12 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_0.name = "?";
    #line 12 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 9 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__t.last = NULL;
    #line 9 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 9 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 9 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 9 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    #line 9 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__t_reactions[0] = &self->_lf__reaction_0;
    #line 9 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    #line 9 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__t.number_of_reactions = 1;
    #line 9 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    #ifdef FEDERATED
    #line 9 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    self->_lf__t.physical_time_of_arrival = NEVER;
    #line 9 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
    #endif // FEDERATED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    return self;
}
