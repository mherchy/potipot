#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#include "watering.h"


#define NB_MESURES 10


int main()
{
    struct timespec timer1s = {1, 0};
    int i;

    //boucle 
    while(1)
    {
        for (i = 0; i < NB_MESURES; i++)
        {
            printf("H:%d%%\n", getHumidity());
            nanosleep(&timer1s, NULL);
        }

        printf("%d mesures, envoi\n",NB_MESURES);
        
    }


}