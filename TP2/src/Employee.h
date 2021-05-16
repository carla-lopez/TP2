

#ifndef arrayEmployees_H_INCLUDED
#define arrayEmployees_H_INCLUDED
#include "arrayEmployees.h"
#endif //arrayEmployees_H_INCLUDED

typedef struct
{
    int id;
    char description[20];
}eSector;

typedef struct
{
    char name[51];
    char lastName[51];
    float salary;
    int sectorId;
    int fileNumber;
    int state;
}eEmployee;

 // ahora, me preocupo por declarar los prototipos :

 //resumiendo:

/** \brief inicia los campos "estado" del array de estructura con un valor en 0 cual indica que ese sitio esta vacio y disponible.
 * \param size: es una variable tipo int que indica el tamaño del array recibido.
 * \param array[]: es el vector tipo estructura con el que va a trabajar la funcion.
 * \return void. */

 void InitializeStates(eEmployee array[], int size);

 //resumiendo:

 /** \param employed: es una variable tipo estructura con la que trabaja la funcion.
 * \param sector: es un array tipo estructura con el que trabaja la funcion.
 * \brief muestra los datos de un solo empleado.
 * \param sectorSize: es el tamaño del array recibido.


void showEmployee(eEmployee array[], int size, int id);

//resumiendo:

 * \param array: es el vector tipo estructura que contiene a todos los empleados activos.
/** \brief muestra una lista de todos los empleados activos.
 * \param sectorSize: es el tamaño del vector sector recibido.
 * \param sector: es un vector tipo estructura relacionado al sector empresarial donde trabaja el empleado.
 * \param size: es el tamaño del array antes recibido.
 */

void showEmployees(eEmployee array[],int size,eSector sector[],int sectorSize);

//resumiendo:

/** \brief muestra el numero de legajo del ultimo empleado registrado.
 * \param lastRecord: es la variable donde almacenaremos el ultimo legajo ingresado.
 * \param employed: es el vector tipo estructura a recorrer.
 * \param size: es el tamaño del vector recibido.
 * \return lastRecord + 1: es el ultimo legajo + 1. */

int incrementalFileNumber (eEmployee employed[], int size, int* lastRecord);

//resumiendo:

 /** \param size: es el tamaño del vector antes recibido.
 * \brief busca espacio libre en el array recibido para ingresar nueva variable tipo estructura.
 * \param array: es el vector tipo estructura con que el que trabaja la funcion.
 * \return 0 si hay espacio libre en el array, sino -1. */

int freeState(eEmployee array[],int size);

//resumiendo:

/** \brief busca un empleado por numero de legajo, para saber si existe en el sistema o no.
 * \param fileNumber: Nro. de legajo a buscar en el vector.
 * \param array: es el vector tipo estructura a recorrer.
 * \param size: es el tamaño del vector ingresado.
 * \return indexFile es la ubicacon dele empleado, si vale -1 entonces no existe ese empleado en el sistema.*/

int searchEmployee(eEmployee array[],int size,int fileNumber);

//resumiendo:

 /** \param array: es el vector tipo estructura donde almacenaremos al nuevo empleado.
 * \param size: es el tamaño del vector antes recibido.
 * \brief registra un nuevo empleado y todos sus datos en el sistema.
 * \param sector: es el vector de tipo estructura relacionado a los sectores de la empresa.
 * \param sectorSize: es el tamaño del vector sector.
 * \return void. */

void registerEmployee (eEmployee array[], int size, eSector sector[], int sectorSize);

//resumiendo:

/** \brief Da la baja a un registro de empleado activo.
 * \param size: es el tamaño del vector antes recibido.
 * \param array: es el vector de tipo estructura con el que trabaja la funcion.
 * \return void. */

void unsubscribeEmployee(eEmployee array[],int size);

//resumiendo:

/** \brief modifica el registro de un empleado activo.
 * \param size: es el tamaño del vector antes recibido.
 * \param array: es el vector de tipo estructura con el que trabaja la funcion.
 * \return void. */

void modifyRecord (eEmployee array[], int size, eSector vector[], int vectorSize);

//resumiendo:

/** \brief Ordena de forma ascendente o descendente la lista de empleados activos.
 * \param size: es el tamaño del vector antes recibido.
 * \param array: es el vector de tipo estructura con el que trabaja la funcion.
 * \return void. */

void sortEmployees (eEmployee array[], int size);

//resumiendo:

/** \brief Asocia la descripcion de cada sector de la empresa con un id y lo almacena es una vector char.
 * \param sectorSize: es el tamaño del vector sector que es igual a la cantidad de sectores en la empresa.
 * \param array: es el vector tipo char en que se almacena la informacion ingresada.
 * \param sector: es el vector tipo estructura que almacena los distintos sectores de la empresa.
 * \param id: es un dato de tipo entero que representa el numero con el que se identifica a cada sector.
 * \return void. */

void getSector(char array[],eSector sector[],int sectorSize,int id);

//resumiendo:

/** \brief muestra los sectores de la empresa.
 * \param array: es el vector de tipo estructura donde se almacena la informacion de los empleados.
 * \param size: es el tamaño del vector antes recibido.
 * \param sectorSize: es el tamaño del vector sector que equivale a la cantidad de sectores en la empresa.
 * \param sector: es el vector de tipo estructura que almacena la informacion de los sectores de la empresa.
 * \return void. */

void showSectors (eEmployee array[], int size, eSector sector[], int sectorSize);

//resumiendo:

 /** \param array: es el vector de tipo estructura donde se almacena la informacion de los empleados.
  \brief desubscribe a todos los empleados de la empresa y dispone de los lugares ocupados en sistema.
  \param size: es el tamaño del vector recibido.
  \return void */

void cleanDataBase (eEmployee array[], int size);

//resumiendo:

/** \brief brinda un informe sobre el dinero que se invierte en salarios, el promedio de los mismos y cuantos empleados superan ese promedio.
 * \param size: es el tamaño del vector recibido.
 * \param array es el vector de tipo estructura donde se almacena la informacion de los empleados.
 * \return void. */

 void salariesReport(eEmployee array[], int size);

