#include <stdio.h>

int main()
{
    int variableEntera=10;
    int *puntVariable;
    puntVariable=&variableEntera;
    printf("Contenido del puntero: %d\n",*puntVariable); //apartado 1
    printf("Dirección de memoria almacenada por el puntero: %p\n",puntVariable); //apartado 2
    printf("Dirección de memoria de la variable entera: %p\n",&variableEntera); //apartado 3
    printf("Dirección de memoria del puntero: %p\n",&puntVariable); //apartado 4
    printf("Tamaño ocupado en la memoria por la variable: %d\n",sizeof(variableEntera)); //apartado 3
    printf("Hola MUndo!");
    return(0);
}