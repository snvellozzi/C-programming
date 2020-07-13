#include <stdio.h>

float celTemp(float fahren); 

/* format temp conversion table */
main(){
    int upper, lower, steps;
    float fahren;
    upper = 300;
    lower = 0;
    steps =20;
    fahren = lower;

    printf("Fahrenheit to Celsius Conversion\n");
    while(fahren <= upper){
        printf("%4.0f %8.2f\n", fahren, celTemp(fahren));
        fahren += steps;
    }
}

/* convert Fahrenheit into Celsius */
float celTemp(float fahren){
    return (5.0/9.0) * (fahren - 32.0);
}