#ifndef H_Watering
#define H_Watering

#include "../general.h"

#include "../py_caller/py_calls.h"

/** Cherche le pourcentage d'humidité sur le capteur d'humidité. Cette valeur sera tester toute les 10 secondes sur notre maquette.**/
int getHumidity();

/** Analyse le pourcentage d'humidité pour d'étecter ou non un arrosage. L'enregistre ci celui-ci est reconnu.**/
int checkHumidity();

#endif
