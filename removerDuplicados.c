/*
Octubre 16 de 2021
Aaron Sarmiento - Sergio Heredia
Escribir un programa en C que elimina los elementos que se repiten en un array
*/
#include<stdio.h>
int main()
{
 // Declaración inicial de las variables
  int array[50];
  int i,j,k,elementos;

// se pide introducir el número elementos del array y los elementos para el  array
  printf("Ingrese el numero de elementos del array:\n");
  scanf("%d",&elementos);
  printf("Ingrese %d elementos para el array:\n",elementos);
  for(i=0; i<elementos ; i++)
    scanf("%d",&array[i]);

  for(i=0; i< elementos-1 ; i++){
    for(j=i+1; j<elementos; j++){

         if(array[j] == array[i]){
             k=j;
             while(k<(elementos-1))
             {
                 array[k] = array[k+1];
                 k++;
             }
             elementos--;
             j=i;
          }
      }
  }
  printf("El array despues de remover los elementos duplicados :\n");

  for(i=0; i < elementos; i++)
    printf(" %d \n",array[i]);

  return 0;
}