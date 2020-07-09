#include <stdio.h>

/*convert temperatures from Celsius to Fahrenheit & format in table*/
main(){

    float celsius, fahren;

    int upperB, lowerB, steps;

    upperB = 300;      /* upper bound of Celsius temps in table*/
    lowerB = 0;        /* lower bound of Celsius temps in table */
    steps = 20;        /* size of increments in Celsius temps */
    
    celsius = lowerB;
    printf("Celsius to Fahrenheit Conversion\n");
    while(celsius <= upperB){
        fahren = (celsius * 9.0/5.0) + 32.0;
        printf("%8.0f\t%8.1f\n", celsius, fahren);   /* format table */
        celsius += steps;
    }
}