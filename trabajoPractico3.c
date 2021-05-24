#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main ()
{
    bool f = false;
    char string [100];
    gets (string);
    char* ola;
    ola = &string[0];

    printf ("%s\n", string);

    int a =  sizeof(string);
    while (!f){
        if (*ola == '\0'){
            f = true;

        }else{
        printf ("La letra actual es %c \n", *ola);
        printf ("poscicion en memoria RAM de %c es %p",*ola, ola);
        printf ("\n------------------------------------------------");
        printf ("\n");
        


        ola++;

            
        }



    }


        printf ("Dynamic memory allocation\n");
        int* ptr;
        ptr = (int*) calloc(a, sizeof(int));

        int suma = 0;

        if (ptr == NULL){
            printf ("Error, no sirvio el dynamic");

        }

        printf ("Dynamic memory allocation succed\n");

        printf ("\n%p\n", ptr);

        for (int i =0; i < a; i++){
            printf ("Ponga un numero\n");
            scanf ("%d", ptr+i);
            suma += *(ptr+i);
        }

        printf ("\n");


        for (int i = 0; i < a;i++){
            printf ("el numero actual es: %d", *(ptr + i));
            printf ("\n");
            printf ("el numero esta guardado en %p", (ptr+i));

            printf ("\n");

        }
        printf ("la suma de los numeros que puso es: %d", suma);










return 0;



}



