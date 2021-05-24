#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//Carlos Mario Peña Silva 201913784

int main (){
    bool izqf = false;
    bool terminado = false;
    char string [100];
    printf ("Ingrese una palabra sin espacios\n");
    scanf ("%s", string);
    char* ola;
    ola = &string[0];
    
    int* ptr;
    ptr = (int*)calloc(10, sizeof(int));
    
    int izq = 24;

    for (int i = 0; !terminado ; i++){

    
        if (ola[i] == '\0'){
            terminado = true;
        }
        else{
            printf ("eso es: %c y su valor en hexa es %X\n", ola[i], ola[i]);
            
            *ptr |= ola[i] << izq;

            izq -= 8;
   
        }

    }
    printf ("\n0x%X", ptr[0]);
    if (sizeof(ptr[0]) == sizeof(int)){
    printf (",0x%X", ptr[1]);
    }
    
    // | (int)((unsigned char)(ola[i])) << 16 | (int)((unsigned char)(ola[i])) << 16 | (int)((unsigned char)(ola[i])) << 8 | (int)((unsigned char)(ola[i])
    // printf ("%X\n", *ptr);

    //(i * CHAR_BIT)
    
}


    

