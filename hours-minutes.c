#include <stdio.h>

int main(){
    int minutes;
    int hours;
    int remainder;

    printf("Enter in the number of minutes: ");
    scanf("%d", &minutes);  //reads input of minutes

    //calculates total number of hours and minutes
    if(minutes >= 0){
        hours = minutes / 60;
        remainder = minutes % 60;
        printf("The number of hours and minutes: %d hour(s), %d minute(s)", hours, remainder);
    }else{
        printf("Please enter a valid number of minutes.");
    }
}