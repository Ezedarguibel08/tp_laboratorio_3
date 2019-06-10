#include <stdio.h>
#include <stdlib.h>
#include "Employee.h"

char opciones(char mensaje[])
{
    char opcion;

    printf(mensaje);
    fflush(stdin);
    scanf("%c",&opcion);
    system("cls");

    return opcion;
}

