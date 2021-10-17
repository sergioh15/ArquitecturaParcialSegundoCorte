/*
Octubre 17 de 2021
Aaron Sarmiento - Sergio Heredia
Escribir un programa en C que permita eliminar elementos de un array en una posición especifica seleccionada
por el usuario
*/
#include<stdio.h>
int main()
{
 // Declaración inicial de las variables
  int i,array[50],posicion,elementos;

// se pide introducir el número elementos del array y los elementos para el  array
  printf("Ingrese el numero de elementos del array\n");
  scanf("%d",&elementos);

  printf("Ingrese %d elementos para el array:\n",elementos);
  //se llena el array con una estrctura for 
  for(i=0;i<elementos;i++)
            scanf("%d",&array[i]);
// se pide introducir la posición del elemento que desea eliminar
  printf("Ingrese la posicion del elemento que desea eliminar:\n");
  scanf("%d",&posicion);

  i = posicion-1;
// se hace uso de un ciclo while que recorra el array y elimine el elemento de la posicion deseada
  while(i<elementos - 1)
  {
            array[i]=array[i+1];
            i++;
  }
  elementos--;
  // salida del array despues de eliminar el elemento
  printf("Array despues de eleminar el elemento seleccionado\n");

  for(i=0;i<elementos;i++)
            printf(" %d \n",array[i]);

  return 0;
}