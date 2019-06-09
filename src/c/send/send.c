#include "send.h"

int sendHumidity(int value)
{
    //Envoi d'une chaine de requête 301:%%
    char buffer[255];
    sprintf(buffer,"301:%d",value);

    send_int(MSG_CLT_MESH, value);
}