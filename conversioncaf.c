#include <stdio.h>
#include <stdlib.h>
int main (){
float fahr, celcius;
int lower, upper, step;


lower = 0;
upper = 300;
printf("Ingrese el numero que va hacer de intervalo:\n"); 
scanf("%d", &step, "\n");

celcius = lower;
printf("celcius\tfahrenheit\n");


for (celcius; celcius <= upper; celcius = step + celcius){
    fahr = (celcius*9/5)+32;
    
    printf("%3.0f\t%6.1f\n", celcius, fahr);
    





}







}