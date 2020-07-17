#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

//computes volume of sphere
int main(){
    float radius;
    float volume; 
    
    printf("Enter a radius: ");
    scanf("%f", &radius);

    volume = (4 * M_PI * pow(radius, 3))/3;  //volume formula
    printf("Volume: %f", volume);

    return(0);
}