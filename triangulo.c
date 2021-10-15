/*
Octubre 14 de 2021
Aaron Sarmiento
Programa en C para encontrar el area de un triangulo
*/

#include<stdio.h>

int main(){
    //declaracion inicial de las variables
    float base, altura, area;
    
    //se pide introducir los valores de base y altura del triangulo
    printf("**************************************************\n");
    printf("********************BIENVENIDO******************** \n");
    printf("Por favor ingrese el valor de la base del triangulo \n");
    scanf("%f", &base);
    printf("Por favor ingrese el valor de la altura del triangulo \n");
    scanf("%f", &altura);

    //se realizan los calculos
    area = (base*altura)/2 ;

    //salida de datos
    printf("El area del triangulo es: %f \n", area); 
    printf("**************************************************\n"); 

}