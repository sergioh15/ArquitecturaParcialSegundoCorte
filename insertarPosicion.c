/*
Octubre 19 de 2021
Aaron Sarmiento - Sergio Heredia
Escribir un programa en C que permita insertar elementos de un array en una posición especifica seleccionada
por el usuario
*/
#include<stdio.h>
int main()
{
// Declaración inicial de las variables
  int i,array[50],posicion,elementos;
  int nuevoElemento;

// se pide introducir el número elementos del array y los elementos para el  array
  printf("Ingrese el numero de elementos que quiere que tenga el array:\n");
  scanf("%d",&elementos);

//se llena el array con una estructura for 
  printf("Ingrese %d elementos del array:\n",elementos);
  for(i=0;i<elementos;i++)
            scanf("%d",&array[i]);
//se pide introducir el elemento que desea insertar y la posicion
  printf("Ingrese el elemento que desea insertar:\n");
  scanf("%d",&nuevoElemento);
  printf("Ingrese la posicion p:\n");
  scanf("%d",&posicion);

  elementos ++;
  posicion --;
  i = elementos-1;

  while(i>=posicion){
            array[i]=array[i-1];
            i--;
  }
  array[posicion] = nuevoElemento;
  printf("Array despues de instertar el elemento nuevo\n");
  
//salida de datos
  for(i=0;i<elementos;i++)
            printf(" %d \n",array[i]);

  return 0;
}