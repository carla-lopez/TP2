#ifndef input_H_INCLUDED
#define input_H_INCLUDED
#endif //input_H_INCLUDED

/* primero Despliega un menu de opciones al usuario.
  */

int menu(void);
void getInt(int* inputInt, char message[], char error[], int min, int max);
void getIntTries(int* inputInt, char* message[], char* error[], int min, int max, int tries);
void getFloat(float* inputFloat, char message[], char error[], float min, float max);
void getFloatTries(float* inputFloat, char* message[], char* error[], int min, int max, int tries);
void getChar(char* inputChar, char message[], char error[], char min, char max);
void getSpecificChar(char* inputChar, char message[], char error[], char min, char max);
void getCharTries(char* inputChar, char* message[], char* error[], char min, char max, int tries);
void getString (char* inputString, char* message[], char* error[], int min, int max);
void getStringTries (char* inputString, char* message[], char* error[], int min, int max, int tries);
