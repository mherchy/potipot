#include "connection.h"

int soc;

/**
 * Initialisation d'une connexion coté client
 * @return socket
 */
int clt_connection()
{

    struct sockaddr_in svc;
    
    // Création de la socket d’appel et de dialogue
    CHECK(soc = socket(PF_INET, SOCK_STREAM, 0),"Can't create socket");

    // Préparation de l’adressage du service à contacter
    svc.sin_family = PF_INET;
    svc.sin_port = htons(PORT_SVC);
    svc.sin_addr.s_addr = inet_addr(INADDR_SVC);
    memset(&svc.sin_zero, 0, 8);

    // Demande d’une connexion au service
    CHECK(connect(soc, (struct sockaddr *) &svc, sizeof svc),"Can't connect");

}


/**
 * Envoi d'un datagrame
 */
int send_dg(char * dg)
{
    int nbOut = write(soc, dg, strlen(dg) + 1);
    return nbOut;
}


/**
 * Réception d'un datagrame
 */
int recive_dg(char * dg)
{
    int nbIn;
    nbIn = read(soc, dg, 255);
    return nbIn;
}