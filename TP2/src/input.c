#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

#ifndef input_H_INCLUDED
#define input_H_INCLUDED
#include "input.h"
#endif //input_H_INCLUDED


int menu (void)
{
    int choice;

    printf("MENU DE OPCIONES: \n\n");

    printf("1. ALTA DE EMPLEADO. \n");
    printf("2. MODIFICAR REGISTRO DE EMPLEADO. \n");
    printf("3. BAJA DE EMPLEADO. \n");
    printf("4. INFORMES. \n");
    printf("5. SALIR \n\n");

    printf("Ingrese el numero de la funcion a realizar: ");
    setbuf(stdin, NULL);
    scanf("%d",&choice);
    printf("\n");

    return choice;
}

void getInt (int* inputInt, char message[], char error[], int min, int max)
{
    printf(message);
    scanf("%d", inputInt);

    while (*inputInt < min || *inputInt > max)
    {
        printf(error);
        printf(message);
        scanf("%d", inputInt);
    }
}

void getIntTries (int* inputInt, char* message[], char* error[], int min, int max, int tries)
{
    do
    {
        printf(message);
        scanf("%d", inputInt);

        if(*inputInt < min || *inputInt > max)
        {
            tries--;
            printf(error);
        }
        else
        {
            break;
        }
    }while (tries > 0);
}

void getFloat (float* inputFloat, char message[], char error[], float min, float max)
{
    printf(message);
    scanf("%f", inputFloat);

    while (*inputFloat < min || *inputFloat > max)
    {
        printf(error);
        printf("\n\n");
        printf(message);
        scanf("%f", inputFloat);
    }
}

void getFloatTries (float* inputFloat, char* message[], char* error[], int min, int max, int tries)
{
    do
    {
        printf(message);
        scanf("%f", inputFloat);

        if(*inputFloat < min || *inputFloat > max)
        {
            tries--;
            printf(error);
        }
        else
        {
            break;
        }
    }while (tries > 0);
}

void getChar (char* inputChar, char message[], char error[], char min, char max)
{
    printf(message);
    setbuf(stdin,NULL);
    scanf("%c", inputChar);

    while (*inputChar < min || *inputChar > max)
    {
        printf(error);
        printf(message);
        setbuf(stdin,NULL);
        scanf("%c", inputChar);
    }
    *inputChar = toupper(*inputChar);
}

void getSpecificChar (char* inputChar, char message[], char error[], char min, char max)
{
    printf(message);
    setbuf(stdin, NULL);
    scanf("%c", inputChar);
    setbuf(stdin, NULL);

    while (*inputChar != min && *inputChar != max)
    {
        printf(error);
        printf("\n\n");
        printf(message);

        scanf("%c", inputChar);
        setbuf(stdin, NULL);
    }
    *inputChar = toupper(*inputChar);
}

void getCharTries (char* inputChar, char* message[], char* error[], char min, char max, int tries)
{
    do
    {
        printf(message);
        setbuf(stdin, NULL);
        scanf("%c", inputChar);

        if(*inputChar < min || *inputChar > max)
        {
            tries--;
            printf(error);
        }
        else
        {
            break;
        }
    }while (tries > 0);

    *inputChar = toupper(*inputChar);
}

void getString (char* inputString, char* message[], char* error[], int min, int max)
{
    printf(message);
    setbuf(stdin, NULL);
    gets(inputString);
    *inputString = tolower(*inputString);

    while (strlen(inputString) < min || strlen(inputString) > max)
    {
        printf(error);
        printf("\n\n");
        printf(message);
        setbuf(stdin, NULL);
        gets(inputString);
        *inputString = tolower(*inputString);
    }
}

void getStringTries (char* inputString, char* message[], char* error[], int min, int max, int tries)
{
    do
    {
        printf(message);
        setbuf(stdin, NULL);
        gets(inputString);

        if(strlen(inputString) < min || strlen(inputString) > max)
        {
            tries--;
            printf(error);
            printf("\n\n");
        }
        else
        {
            *inputString = toupper(*inputString);
            break;
        }
    }while (tries > 0);
}
