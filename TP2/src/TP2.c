/*
 ============================================================================
 Name        : TP2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

#define SIZE 1000
#define SECTORS 6

#ifndef arrayEmployees_H_INCLUDED
#define arrayEmployees_H_INCLUDED
#include "Employee.h"
#endif //arrayEmployees_H_INCLUDED

#ifndef input_H_INCLUDED
#define input_H_INCLUDED
#include "input.h"
#endif //_H_INCLUDED

int main()
{
    eSector sectores[SECTORS] = {
    {1, "Ventas"},
    {2, "Administracion"},
    {3, "Tesoreria"},
    {4, "Sistemas"},
    {5, "RRHH"},
    {6, "Marketing"}

    };

    eEmployee employee[SIZE];
    InitializeStates(employee, SIZE);

    int salaries;
    char salir;
    char seguir = 's';

     do
    {
        switch(menu())
        {
            case 1:
                printf("Alta de empleado.\n");
                registerEmployee(employee, SIZE, sectores, SECTORS);
                system("pause");
                break;

            case 2:
                printf("\nModificar registro de empleado.\n");
                modifyRecord(employee, SIZE, sectores, SECTORS);
                system("pause");
                break;

            case 3:
                printf ("Baja de empleado.\n");
                unsubscribeEmployee(employee, SIZE);
                system("pause");
                break;

            case 4:
                 printf ("Lista de empleados.\n");
                 sortEmployees(employee, SIZE);
                 showEmployees(employee, SIZE, sectores, SECTORS);
                 salariesReport(employee, SIZE);
                 system("pause");
                 break;

           case 5:
                getSpecificChar(&salir, "Confirma su salida? (S/N): \n", "ERROR! Su respuesta no es valida.", 's', 'n');
                printf ("\n");
                system("pause");

                if (toupper(salir)=='S')
                {
                    seguir = 'N';
                }
                break;

            default:
                printf ("\n Ingreso una opcion de menu valida.\n\n");
                system("break");

        }
    }while(seguir == 's');

    return 0;
}
