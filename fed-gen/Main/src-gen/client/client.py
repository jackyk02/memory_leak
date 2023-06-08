import os
import sys
sys.path.append(os.path.dirname(__file__))
# List imported names, but do not use pylint's --extension-pkg-allow-list option
# so that these names will be assumed present without having to compile and install.
# pylint: disable=no-name-in-module, import-error
from LinguaFrancaclient import (
    Tag, action_capsule_t, port_capsule, request_stop, schedule_copy, start
)
# pylint: disable=c-extension-no-member
import LinguaFrancaclient as lf
try:
    from LinguaFrancaBase.constants import BILLION, FOREVER, NEVER, instant_t, interval_t
    from LinguaFrancaBase.functions import (
        DAY, DAYS, HOUR, HOURS, MINUTE, MINUTES, MSEC, MSECS, NSEC, NSECS, SEC, SECS, USEC,
        USECS, WEEK, WEEKS
    )
    from LinguaFrancaBase.classes import Make
except ModuleNotFoundError:
    print("No module named 'LinguaFrancaBase'. "
          "Install using \"pip3 install LinguaFrancaBase\".")
    sys.exit(1)
import copy

# From the preamble, verbatim:
import time
import tracemalloc
tracemalloc.start()

# End of preamble.
# From the preamble, verbatim:
import time
import tracemalloc
tracemalloc.start()

# End of preamble.
# From the preamble, verbatim:
import time
import tracemalloc
tracemalloc.start()

# End of preamble.
# From the preamble, verbatim:
import time
import tracemalloc
tracemalloc.start()

# End of preamble.


# Python class for reactor client341582687_main
class _client341582687_main:
    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    

# Python class for reactor clientreactor393266340
class _clientreactor393266340:
    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    
    def reaction_function_0(self):
        
        return 0
    def reaction_function_1(self, in_parameter, out_parameter):
        time.sleep(2)
        print("Hello!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
        param_temp = in_parameter.value
        print(len(param_temp))
        out_parameter.set(param_temp)
        return 0



# Instantiate classes
client_main_lf = [None] * 1
client_client_lf = [None] * 1
# Start initializing client of class client341582687_main
for client_main_i in range(1):
    bank_index = client_main_i
    client_main_lf[0] = _client341582687_main(
        _bank_index = 0,
    )
    # Start initializing client.client of class clientreactor393266340
    for client_client_i in range(1):
        bank_index = client_client_i
        client_client_lf[0] = _clientreactor393266340(
            _bank_index = 0,
        )


# The main function
def main(argv):
    start(argv)

# As is customary in Python programs, the main() function
# should only be executed if the main module is active.
if __name__=="__main__":
    main(sys.argv)
