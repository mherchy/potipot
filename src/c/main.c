#include "general.h"
#include "mesures/mesures.h"
#include "py_caller/py_calls.h"

#define NB_MESURES 10


int main()
{
    struct timespec timer1s = {1, 0};
    int i;
    int mesure_tab[NB_MESURES], mesure_moy = 0;

    //Affichage: démmarage
    printEmotion(EMOTION_SLEEP);
    printText("Bonjour, Je suis Potipot!");

    //Création d'une connection avec le serveur

    //Affichage: visage neutre

    //boucle 
    while(1)
    {
        //Récupération des données
        for (i = 0; i < NB_MESURES; i++)
        {
            //Humidité
            mesure_tab[i] = getHumidity();
            mesure_moy += mesure_tab[i];
            printf("H:%d%%\n", mesure_tab[i]);
            nanosleep(&timer1s, NULL);
        }

        //Production d'une synthèse
        mesure_moy /= 10;

        //Envoi des mesures
        printf("%d mesures, moyenne=%d, envoi\n",NB_MESURES,mesure_moy);
        
    }


}