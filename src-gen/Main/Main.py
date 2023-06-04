import os
import sys
sys.path.append(os.path.dirname(__file__))
# List imported names, but do not use pylint's --extension-pkg-allow-list option
# so that these names will be assumed present without having to compile and install.
# pylint: disable=no-name-in-module, import-error
from LinguaFrancaMain import (
    Tag, action_capsule_t, port_capsule, request_stop, schedule_copy, start
)
# pylint: disable=c-extension-no-member
import LinguaFrancaMain as lf
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
# End of preamble.
# From the preamble, verbatim:
import time
# End of preamble.
# From the preamble, verbatim:
import time
# End of preamble.
# From the preamble, verbatim:
import time
# End of preamble.
# From the preamble, verbatim:
import time
# End of preamble.
# From the preamble, verbatim:
import time
# End of preamble.
# From the preamble, verbatim:
import time
# End of preamble.
# From the preamble, verbatim:
import time
# End of preamble.


# Python class for reactor main1472012329_main
class _main1472012329_main:
    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    

# Python class for reactor clientreactor1101451553
class _clientreactor1101451553:
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
        param_temp = in_parameter.value
        print(len(param_temp))
        out_parameter.set(param_temp)
        return 0

# Python class for reactor serverreactor1329897103
class _serverreactor1329897103:
    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
        self.large_param = None
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    
    def reaction_function_0(self, out_parameter):
        temp = [1.000000005]*10
        self.large_param = temp * 100000
        out_parameter.set(self.large_param)
        return 0
    def reaction_function_1(self, in_parameter, out_parameter):
        time.sleep(2)
        param_temp = in_parameter.value
        out_parameter.set(param_temp)
        return 0

# Python class for reactor _lf_gendelay_0851033362
class __lf_gendelay_0851033362:
    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        self._delay:interval_t = 0
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def delay(self):
        return self._delay # pylint: disable=no-member
    
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    



# Instantiate classes
main_main_lf = [None] * 1
main_client_lf = [None] * 1
main_server_lf = [None] * 1
main_delay_lf = [None] * 1
# Start initializing Main of class main1472012329_main
for main_main_i in range(1):
    bank_index = main_main_i
    main_main_lf[0] = _main1472012329_main(
        _bank_index = 0,
    )
    # Start initializing Main.client of class clientreactor1101451553
    for main_client_i in range(1):
        bank_index = main_client_i
        main_client_lf[0] = _clientreactor1101451553(
            _bank_index = 0,
        )
    # Start initializing Main.server of class serverreactor1329897103
    for main_server_i in range(1):
        bank_index = main_server_i
        main_server_lf[0] = _serverreactor1329897103(
            _bank_index = 0,
        )
    # Start initializing Main.delay of class _lf_gendelay_0851033362
    for main_delay_i in range(1):
        bank_index = main_delay_i
        main_delay_lf[0] = __lf_gendelay_0851033362(
            _bank_index = 0,
            _delay=0,
        )


# The main function
def main(argv):
    start(argv)

# As is customary in Python programs, the main() function
# should only be executed if the main module is active.
if __name__=="__main__":
    main(sys.argv)
