#include <stdio.h> 
#include <stdbool.h>

bool main(){

   int myArr[10];
   printf("Please enter an array of numbers with a length between 1 and 10: ");
   scanf("%d", myArr);
   size_t size = sizeof(myArr) / sizeof(myArr[0]);  //finds size of inputted array

   //returns true if the first or last element of the inputted array is a 6
   if(myArr[0] == 6 || myArr[size] == 6){
       printf("True");
       return true;
   }
    printf("False");
    return false;
}
