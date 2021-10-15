/*
Octubre 14 de 2021
Aaron Sarmiento
Programa en C que evalua cual es el mayor entre dos numeros o indica si los numeros son iguales
*/

#include<stdio.h>

int main(){
    //declaración inicial de las variables
int numero1, numero2;

    //se pide introducir los números que desea evaluar
    printf("**************************************************\n");
    printf("********************BIENVENIDO******************** \n");
    printf("Por favor ingrese el primer numero\n");
    scanf("%d", &numero1);
    printf("Por favor ingrese el segundo numero\n");
    scanf("%d", &numero2);
    
    /*se realizan los calculos
    Se hace uso de la estructura condicional if la cual evalua si el número 1 es mayor al número 2
    se repite la estructura condicional para evaluar si el número 2 es mayor al número 1
    en caso de que ninguna de las dos condiciones se cumplan entrará al else y esto significa
    que los números son iguales
    */
    if(numero1>numero2){
        printf("El numero %d es mayor que el numero %d \n", numero1, numero2);
    }
    else if(numero2>numero1){
        printf("El numero %d es mayor que el numero %d \n", numero2, numero1);
    }
    else{
        printf("Los numeros son iguales\n");
    }
    return 0;

}