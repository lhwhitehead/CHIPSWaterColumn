#! /bin/bash

# This program runs the attenuation measurement and filters for
# microCHIPS. Tries to mimic the overall water recycling rate
# of CHIPS-M.

# Take the first water attenuation measurement
. water_att

# Set up the filtering system to fun for 111 minutes
./servo "P9_14" 0
./relay "P8_10" 1 6662

# Now the filtering is done, take a second attenuation measurement
. water_att

