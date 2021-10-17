/*
Octubre 15 de 2021
Aaron Sarmiento
Escribir un programa en C que se imprima la serie Fibonacci
*/

#include <stdio.h>
int main(){
    // Declaración inicial de las variables
    int contador, numero, termino1=0, termino2=1, temp=0;

    // se pide introducir el numero de terminos que desea obtener
    printf("**************************************************\n");
    printf("********************BIENVENIDO******************** \n");
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &numero);
    printf("Serie Fibonacci : \n");
    contador=2;  
   
    /* Se realizan los calculos
    Se hace uso de la estructura repetitiva while la cual comienza con cero (0)
    y el siguiente elemento es uno. Luego, agregamos los dos elementos anteriores
    e imprimimos el siguiente elemento de la serie de Fibonacci.
    Cada término es la suma de los dos anteriores. 
    Se repite el numero de veces del numero de terminos que deseamos obtener
    */ 
    while(contador<numero){
        temp=termino1+termino2;
        termino1=termino2;
        termino2=temp;
        ++contador;
        printf("%d \n", temp);
    }

    return 0;
}