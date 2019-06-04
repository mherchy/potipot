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


int getMoisture()
{
    char * command = init_command();
    strcat(command, PY_LCD_MOISTURE);
    strcat(command,"get.py");

    printf("command: ");
    printf(command);

    int r = system(command);
    destroy_command(command);
    return r;
}