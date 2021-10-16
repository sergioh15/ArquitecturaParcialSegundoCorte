/*
Octubre 15 de 2021
Aaron Sarmiento
Escribir un programa en C que verifique si el caractér es vocal o consonante
*/

#include <stdio.h>
int main(){
    // Declaración inicial de las variables
    char letra;

    // se pide introducir el caracter que desea evaluar si es vocal o consonante
    printf("**************************************************\n");
    printf("********************BIENVENIDO******************** \n");
    printf("Ingrese la letra: ");
    scanf("%c", &letra);
   

    /* Se realizan los calculos
    se hace uso de una estructura condicional if donde se evalua si la letra es una de las 5 vocales
    en caso que no se cumpla la condición la letra será consonante
    */ 
    if(letra=='a'||letra=='A'||letra=='e'||letra=='E'||letra=='i'||letra=='I'||letra=='o'||letra=='O'||letra=='u'||letra=='U'){
        printf("la letra %c es vocal \n", letra);
    }
    else{
        printf("la letra %c es consonante \n", letra);
    }

    return 0;
}