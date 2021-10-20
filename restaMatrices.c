/*
Octubre 20 de 2021
Aaron Sarmiento - Sergio Heredia
Escribir un programa en C que permita restar matrices
por el usuario
*/
#include <stdio.h>

int main(void)
{
    // Declaración inicial de las variables
const int dimension=100;
int i,j,fila,columna;
float matrizA[dimension][dimension],matrizB[dimension][dimension]; /*Tamaño maximo de 100x100*/
    //se pide al usuario que ingrese el tamaño de las matrices 
    printf("Programa que resta matrices:\n\n");
    printf("Introduzca el tamano de las matrices:\n\n Filas:"); scanf("%i", &fila);
    printf(" Columnas: "); scanf("%i", &columna);
   
    /*Se piden los datos*/
    printf("\n\nIntroduca los datos de la Matriz A:\n");
    for(i=1;i<=fila;i++)
    {
        for(j=1;j<=columna;j++)
        {
            printf("\nIntroduzca elemento para la posicion (%i,%i): ",i,j); scanf("%f", &matrizA[i][j]);
        }
    }
   
    printf("\n\n\nIntroduca los datos de la Matriz B:\n");
    for(i=1;i<=fila;i++)
    {
        for(j=1;j<=columna;j++)
        {
            printf("\nIntroduzca elemento para la posicion (%i,%i): ",i,j); scanf("%f", &matrizB[i][j]);
        }
    }
   //se relaizan los calculos
    for(i=1;i<=fila;i++)
    {
        for(j=1;j<=columna;j++) matrizA[i][j]=matrizA[i][j]-matrizB[i][j]; /*Se guarda el resultado de la resta en la matriz A*/
    }
   //salida de datos
    printf("\n\nLa matriz resultado es:\n\n");
    for(i=1;i<=fila;i++)
    {
        for(j=1;j<=columna;j++) printf("%10f",matrizA[i][j]);
        printf("\n");
    }
    return 0;
}