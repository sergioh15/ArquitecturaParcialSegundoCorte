/*
Octubre 15 de 2021
Aaron Sarmiento
Escribir un programa en C que sume numeros naturales mediante un ciclo while
*/

#include <stdio.h>
int main(){
    // Declaración inicial de las variables
    int numero=0, contador=0, suma=0;

    /* Se piden los numeros y se realizan los calculos
    se hace uso de una estructura repetitiva while la cual va sumando los numeros en cada repetición 
    */ 
    while(1){
 // Declaración inicial de las variables
    int numero=0, contador=0, suma=0;

// se pide introducir el número natural
    printf("**************************************************\n");
    printf("********************BIENVENIDO******************** \n");
    printf("Ingrese el numero natural: \n");
    scanf("%d", &numero);
    while(contador<=numero){
        suma+=contador;
        ++contador;
    }
        printf("La suma de los numeros naturales es: %d \n ", suma);
    }

    return 0;
}