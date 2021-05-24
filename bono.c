#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int main ( char nameP [] )
{       
    
    // DECLARACIÓN DE VARIABLES     
    int numero1; 
    int numero2;
    printf ("Binvenido\n" );
    
    nameP =  calloc(sizeof(nameP), sizeof(char));
    char* ptr;
    ptr = &nameP[0];

    printf ("ingrese su nombre:\n");
    gets (ptr);


    printf("\n--------------\n");
    printf("Hola %s\n", ptr);
    printf("primer num:\n");
    scanf("%d", numero1);
    //printf("\nsegundo num:\n");
    scanf("\n%d", numero2);
     





    
    

    

    //free (nameP);
    return 0;
}

