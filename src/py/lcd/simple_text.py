#!/usr/bin/env python

import sys
from grove_rgb_lcd import *

txt = ""

if len(sys.argv) > 1:
    txt = sys.argv[1]
    for arg in sys.argv[2:]:
        txt = txt + " " + arg

setText(txt)
