#ifndef _lf_gendelay_0542839598_H
#define _lf_gendelay_0542839598_H
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
typedef struct _lf_gendelay_0_self_t{
interval_t delay;
int end[0]; // placeholder; MSVC does not compile empty structs
} _lf_gendelay_0_self_t;
typedef generic_port_instance_struct _lf_gendelay_0542839598_inp_t;
typedef generic_port_instance_struct _lf_gendelay_0542839598_out_t;
typedef generic_action_instance_struct _lf_gendelay_0542839598_act_t;
#endif
