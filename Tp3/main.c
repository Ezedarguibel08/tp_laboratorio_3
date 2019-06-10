#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

int main()
{
    char opcion;
    LinkedList* listaEmpleados = ll_newLinkedList();
    do{
        opcion=opciones("                            Menu de Opciones\n1.Cargar los datos de los empleados desde el archivo data.csv (modo texto).\n2.Cargar los datos de los empleados desde el archivo data.csv (modo binario).\n3.Alta de empleado.\n4.Modificar datos de empleado.\n5.Baja de empleado.\n6.Listar empleados.\n7.Ordenar empleados.\n8.Guardar los datos de los empleados en el archivo data.csv (modo texto).\n9.Guardar los datos de los empleados en el archivo data.csv (modo binario).\n10.Salir\nEliga una opcion: ");
        switch(opcion)
        {
            case '1':
                controller_loadFromText("data.csv",listaEmpleados);
                break;
            case '2':


            case '3':


            case '4':


            case '5':


            case '6':


            case '7':


            case '8':


            case '9':


            case '10':
                printf("Esta saliendo del programa \n");
                break;

            default:
                printf("Opcion Incorrecta...\n");
                system("pause");
                break;
        }
    }while(opcion != '10');
    return 0;
}
