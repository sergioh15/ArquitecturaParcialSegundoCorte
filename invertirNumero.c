 /*
Octubre 16 de 2021
Aaron Sarmiento
Escribir un programa en C que invierta un número usando un ciclo while
*/
 #include<stdio.h>

int main()
{
  // Declaración inicial de las variables
    int numero, residuo, invertido = 0;

// se pide introducir el numero que desea invertir
   printf("**************************************************\n");
   printf("********************BIENVENIDO******************** \n");
   printf("Ingrese el numero que desea invertir :\n");
   scanf("%d", &numero);
/* Se realizan los calculos
    se hace uso de la estructura repetitiva while la cual se repite mientras que el numero sea mayor o igual a 1
    se divide el número en 10 y se toma el residuo, luego el numero obtenido de la división se divide nuevamente en 10
    y se toma nuevamente el residuo, esto se repite las veces que el resultado de la división sea diferente a 0
*/
   while (numero >= 1) 
   {
      residuo = numero % 10;
      numero = numero / 10;
      invertido = invertido * 10 + residuo;
   }

   printf("El numero invertido es : %d \n", invertido);
   printf("**************************************************\n");
   return (0);
}
