#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*   
    Juan David Diaz, 202010703, j.diazi 🐺 
    Juliana Andrea Galeano Caicedo, 202012128, ja.galeanoc1 🐱‍💻(´▽`ʃ♡ƪ)❤
    Carlos Mario Peña Silva, 201913784, cm.penas (⌐■_■)

    
*/

void empaquetar(char *cadena, int *enteros){
    __asm{ // este es el codigo ¯\_(ツ)_/¯
        mov esi, 1 // count
        mov edx, enteros // enteros
        mov ecx, cadena //cadena ╰(*°▽°*)╯
        mov al, [ecx] //pack_char  (´▽`ʃ♡ƪ) 
        inc ecx
        sisi: //༼ つ ◕_◕ ༽つ  estoy agarrando señal
            shl eax, 8 // 🕺 8 bits
            mov al, [ecx] // (⊙_⊙;)🐱‍💻
            inc esi
            inc ecx
            cmp esi, 4     
            je makepack
                jmp condicion
            makepack:
                mov esi, 0
                mov [edx], eax;
                add edx, 4
                mov al, [ecx]
                jmp condicion
            condicion:
                cmp [ecx], 0
                je finWhile
                    jmp sisi
        finWhile:
    
    cmp esi, 0
    je fin
        mov ebx, 4
        sub ebx, esi
        forRelleno:
            shl eax, 8 // 🕺
            mov al, 0
            inc ebx
            cmp ebx, 4
            je finR
                jmp forRelleno
        finR:
            mov [edx], eax;
    fin:

    }
    

    /*     int count = 1; 
    int pack_char = *cadena;
    cadena++;
    while(*(cadena) != '\000'){
        pack_char = pack_char<<8;
        pack_char |= *(cadena);
        count++;
        if (count == 4){
            count = 0; 
            *(enteros)= pack_char;
            enteros++;
            pack_char = *(cadena);
        }
        cadena++;
    }
    if(count !=0){
        for(int i=0; i<4-count;i++){
            pack_char = pack_char<<8;
            pack_char |= 0;
        }
        *(enteros) = pack_char;
    } */
}

int main(int argc, char const *argv[]){
    /* code 
    */
    char cadena[100];
    printf("Ingrese su cadena\n");
    scanf("%100[^\n]s", cadena);
    int num = 0;
    /* El ciclo recorrerá la cadena de caracteres para conocer la cantidad de caracteres que ingresó el usuario */
    while (cadena[num] != '\000'){num++;}
    /*la cantidad de casillas de int que vamos a necesitar*/
    int tamanio_vector = (int) ceil(num/4.0);
    int* enteros = (int*)calloc(tamanio_vector, sizeof(int));
    empaquetar(&cadena[0],enteros);
    for (int i = 0; i<tamanio_vector; i++){
        if (i != tamanio_vector-1){
            printf("0x%X, ",*(enteros+i)); 
        }else{
            printf("0x%X",*(enteros+i)); 
        }        
    }
    return 0;
}
