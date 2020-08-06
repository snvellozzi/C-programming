#include <stdio.h>

void main(){
    int sum = 0;;
   
    for(int i = 0; i <= 10; i++){
        sum += i;   //calculates sum of first 10 natural numbers
    }
    printf("The sum of the first 10 natural numbers is: %d ", sum); //prints sum of first 10 natural numbers
}