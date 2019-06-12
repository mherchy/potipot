#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "py_paths.h"

#define EMOTION_SLEEP 0
#define EMOTION_SMILE 1
#define EMOTION_SAD 2

int printText(char * txt);
int printEmotion(int emotion_code);
int getMoisture();