#ifndef GEN_H
#define GEN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#define CHECK(sts,msg) if ((sts) == -1) {perror(msg);exit(-1);}

#endif