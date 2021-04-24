#include <stdio.h>

main (){
float fahr, celcius;
int lower, upper, step;



lower = 0;
upper = 300;
step = 20;

fahr = lower;
printf ("fahr\tcelcius\n");


for (fahr;fahr <= upper; fahr = fahr + 20){
    celcius = 5*(fahr-32)/9;

    printf("%3.0f\t%6.1f\n", fahr, celcius);




}





}