#   Here are suggested sensor values:
#       Min  Typ  Max  Condition
#       0    0    0    sensor in open air
#       0    20   300  sensor in dry soil
#       300  580  700  sensor in humid soil
#       700  940  950  sensor in water


import time
import grovepi

MIN = 0
MAX = 700

# Analog port A0
sensor = 0

value = 100 * grovepi.analogRead(sensor) / MAX

print(value)
