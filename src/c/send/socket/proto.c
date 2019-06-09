#include "proto.h"

int send_msg(int code, char * msg)
{
    //création d'un message
    char dg[DG_LENGTH_MAX];

    sprintf(dg, "%d:", code);
    strncat(dg, msg, DG_LENGTH_MAX - strlen(dg) - 1);

    return send_dg(dg);
}

int send_int(int code, int val)
{
    char str_val[10];
    sprintf(str_val,"%d",val);
    return send_msg(code, str_val);
}
