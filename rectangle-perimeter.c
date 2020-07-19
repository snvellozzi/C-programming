#include<stdio.h>

//computes perimeter of rectangle
int main(){
    float height;
    float width;
    float perimeter;

    printf("Enter in a height: ");
    scanf("%f", &height);       //uses height input

    printf("Enter in a width: ");
    scanf("%f", &width);        //uses width input

    perimeter = 2 * height + 2 * width;     //formula for perimeter
    printf("Perimeter: %f", perimeter);

    return 0;
}