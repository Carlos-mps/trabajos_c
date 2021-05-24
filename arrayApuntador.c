#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main (){
    char array [10] = {'h','o','l','a','_','c','o','m','o','\0'};

    char* ptr;
    ptr = &array[0];

    bool terminado = false;

    
while (!terminado){
    if (*ptr == '\0')
    {
        terminado = true;
    }else
    {
        printf ("La letra actual es %c \n", *ptr);
        printf ("poscicion en memoria RAM de %c es %p",*ptr, ptr);
        printf ("\n------------------------------------------------");
        printf ("\n");

        ptr++;
    }


}

    return 0;
}






