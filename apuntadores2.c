#include <stdio.h>


int main (){
    
    int numero = 10;
    int* numerol;
    numerol = &numero;

    printf ("numero esta en la direccion de memoria RAM %p \n", &numero);

    printf ("numero1 es como una caja que por dentro tiene la direccion en memoria RAM %p \n", numerol);
    printf("el cotenido en la que apunta numerol es %d \n", *numerol);

return  0;
}