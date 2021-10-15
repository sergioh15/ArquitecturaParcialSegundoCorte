/*
Octubre 14 de 2021
Aaron Sarmiento
Programa en C que verifica si un número es par o impar
*/

#include<stdio.h>

int main(){
    //declaración inicial de las variables
    int numero;

    //se pide introducir el número que desea verificar si es par o impar
    printf("**************************************************\n");
    printf("********************BIENVENIDO******************** \n");
    printf("Por favor ingrese el numero que desea verificar si es par o impar\n");
    scanf("%d", &numero);
    
    /*se realizan los calculos
    Se hace uso de la estructura condicional if/else la cual evalua si el residuo del numero dividido en 2 es 0
    si esta condicion se cumple el numero será par, de lo contrario el numero será impar
    */
    if(numero%2==0){
        printf("El numero %d es par \n", numero);
    }
    else{
        printf("El numero %d es impar \n", numero);
    }

}