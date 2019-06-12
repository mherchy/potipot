#include "py_calls.h"



static char * init_command()
{
    char * command = malloc(255 * sizeof(char));
    return strcpy(command,"python ");
}

static void destroy_command(char * ptr)
{
    return free(ptr);
}


// OUT

int printText(char * txt)
{
    char * command = init_command();
    strcat(command, PY_LCD_PATH);
    strcat(command,"simple_text.py ");
    strcat(command, txt);

    printf("command: ");
    printf(command);

    int r = system(command);
    destroy_command(command);
    return r;
}




int printEmotion(int emotion_code)
{
    char * command = init_command();
    strcat(command, PY_LCDM_PATH);

    switch (emotion_code)
    {

        case EMOTION_SMILE:
            strcat(command,"smile.py ");
            break;

        case EMOTION_SAD:
            strcat(command,"sad.py ");
            break;
    
        default:
            strcat(command,"sleep.py ");
            break;
    }
    

    printf("command: ");
    printf(command);

    int r = system(command);
    destroy_command(command);
    return r;
}




// IN

/**
 * Renvoi le pourcentage d'humidité détecté par le capteur
 */
int getMoisture()
{
    unsigned int humidity = -1;
    char buffer[255];
    char * command = init_command();
    strcat(command, PY_LCD_MOISTURE);
    strcat(command,"get.py");

    /*
    printf("command: ");
    printf(command);
    printf("\n");
    */


    FILE * fo = popen(command,"r");

    //Lecture dans le fd
    fread(buffer,sizeof(buffer),1,fo);

    //Extraction de la valeur
    sscanf(buffer,"%d",&humidity);

    pclose(fo);
    destroy_command(command);
    
    return humidity;
}