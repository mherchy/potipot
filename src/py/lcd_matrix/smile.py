#!/usr/bin/env python
#
# GrovePi example for the basic functions of Grove 128x64 OLED (http://www.seeedstudio.com/depot/Grove-OLED-Display-112-p-781.html)
#
# The GrovePi connects the Raspberry Pi and Grove sensors.  You can learn more about GrovePi here:  http://www.dexterindustries.com/GrovePi
#
# Have a question about this example?  Ask on the forums here:  http://forum.dexterindustries.com/c/grovepi
#

import grove_128_128_oled as oled

oled.init()  #initialze SEEED OLED display

oled.clearDisplay()          #clear the screen and set start position to top left corner
oled.setNormalDisplay()      #Set display to normal mode (i.e non-inverse mode)
oled.setHorizontalMode()           #Set addressing mode to Page Mode

#Eyes
oled.setTextXY(4,6)
oled.putString("*      *")
#Mounth
oled.setTextXY(4,11)
oled.putString("  \__/")