#include <stdio.h>

int main(){
    char first_name[20];
    char last_name[20];
    int year;

    printf("Please enter in a first name: ");   
    scanf("%s", first_name);    //reads first name input

    printf("Please enter in a last name: ");
    scanf("%s", last_name);     //reads last name input

    printf("Please enter the year of birth: ");
    scanf("%d", &year);         //reads year of birth

    printf("%s %s %d\n", first_name, last_name, year);  //prints input sequentially

    return 0;
}