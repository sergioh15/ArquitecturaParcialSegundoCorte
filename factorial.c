/*
Octubre 14 de 2021
Aaron Sarmiento
Programa en C para encontrar el factorial de un numero dado
*/

#include<stdio.h>

int main(){
    //declaracion inicial de las variables
    unsigned long long int factorial=1;
    int i, numero;

    //se pide introducir el numero que desea pasar a factorial
    printf("**************************************************\n");
    printf("********************BIENVENIDO******************** \n");
    printf("Por favor ingrese el numero que desea pasar a factorial\n");
    scanf("%d", &numero);
    
    /*se realizan los calculos
    se hace uso de una estructura repetitiva for la cual se encarga de iterar 
    el numero de veces del valor de la variable numero y va multiplicando por cada valor 
    asignado a la variable i en cada repeticion del ciclo for, de esta manera cuando finalice el ciclo
    se obtendra el factorial del numero dado
    */
    for(i=1; i<=numero; i++){
        factorial=factorial*i;
    }

    //salida de datos
    printf("El factorial del numero %d  es: %llu \n", numero, factorial ); 
    printf("**************************************************\n"); 

}