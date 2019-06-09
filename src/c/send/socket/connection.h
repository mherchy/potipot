#include "../../general.h"


#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <semaphore.h>

#define PORT_SVC 5000
#define INADDR_SVC "192.168.50.1"



int clt_connection();
int send_dg(char * dg);
int recive_dg(char * dg);