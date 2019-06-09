#ifndef PROTO_H
#define PROTO_H

#include "../../general.h"
#include "connection.h"

#define DG_LENGTH_MAX 255

#define MSG_CLT_VOID 100
#define MSG_CLT_CONNECTED 201
#define MSG_CLT_DISCONNECTED 202
#define MSG_CLT_MESH 301
#define MSG_SRV_VOID 600
#define MSG_SRV_FBOK 701
#define MSG_SRV_FBNO 702
#define MSG_SRV_CONF 800


int send_msg(int code, char * msg);
int send_int(int code, int val);

#endif