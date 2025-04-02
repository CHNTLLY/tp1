#include <stdio.h>
#include <math.h>

int cuadrado(int a);

void cuadradoVoid(int *a);

void direccionYcontenido(int *a);

void invertir(int *a,int *b);

void orden(int *a,int *b);

int main()
{
    int var1=10,var2=20;
    var1=cuadrado(var1);
    printf("Cuadrado de var1 con funcion cuadrado: %d\n",var1);
    cuadradoVoid(&var2);
    printf("Cuadrado de var2 con funcion cuadradoVoid: %d\n",var2);
    direccionYcontenido(&var1);
    invertir(&var1,&var2);
    printf("valores luego de invertir:\nvar1=%d\nvar2=%d\n",var1,var2);
    orden(&var1,&var2);
    printf("valores luego de funcion orden:\nvar1=%d\nvar2=%d\n",var1,var2);
    return(0);
};

int cuadrado(int a)
{
    int retorno;
    retorno = pow(a,2);
    return(retorno);
};

void cuadradoVoid(int *a)
{
    *a = pow(*a,2);
    //para usarla se deberá invocar pasando la direccion de memoria de una variable entera, ej: cuadradoVoid(&var);
};

void direccionYcontenido(int *a)
{
    printf("La direccion de memoria de la variable es: %p\n",a);
    printf("El contenido de la variable es: %d\n",*a);
    /*Funciona por referencia, puesto que por valor, se manda a la funcion una copia de la variable
    y por ello, la almacena en una direccion de memoria distinta a la de la variable original*/
};

void invertir(int *a,int *b)
{
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
};

void orden(int *a,int *b)
{
    int aux;
    if(*a>*b)
    {
        aux=*a;
        *a=*b;
        *b=aux;
    }
};