#ifndef _LF_GENDELAY_0851033362_H
#define _LF_GENDELAY_0851033362_H
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
typedef generic_port_instance_struct _lf_gendelay_0851033362_inp_t;
typedef generic_port_instance_struct _lf_gendelay_0851033362_out_t;
typedef generic_action_instance_struct _lf_gendelay_0851033362_act_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    PyObject* _lf_py_reaction_function_1;
    interval_t delay;
    _lf_gendelay_0851033362_act_t _lf_act;
    _lf_gendelay_0851033362_inp_t* _lf_inp;
    // width of -2 indicates that it is not a multiport.
    int _lf_inp_width;
    // Default input (in case it does not get connected)
    _lf_gendelay_0851033362_inp_t _lf_default__inp;
    _lf_gendelay_0851033362_out_t _lf_out;
    int _lf_out_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__act;
    reaction_t* _lf__act_reactions[1];
    trigger_t _lf__inp;
    reaction_t* _lf__inp_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} __lf_gendelay_0851033362_self_t;
__lf_gendelay_0851033362_self_t* new__lf_gendelay_0851033362();
#endif // _LF_GENDELAY_0851033362_H
