#include <stdio.h>
//sergio heredia -aaron sarmiento

/* declaracion funcion*/
double cube(double num);

int main()
{
    int num;
    double c;
    
    /* Ingresar numero a encontrar */
    printf("Enter any number: ");
    scanf("%d", &num);
    
    c = cube(num);

    printf("Cube of %d is %.2f", num, c); 
    
    return 0;
}

/**
 * funcion del cubo
 */
double cube(double num)
{
    return (num * num * num);
}
