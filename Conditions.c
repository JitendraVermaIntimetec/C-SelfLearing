#include<stdio.h>


int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);

    if(age<18)
    {
        printf("You are not aged for driving Licence\n");
    }
    else{
        printf("You are aged for driving Licence\n");
    }


    int month;
    printf("Enter current month number: ");
    scanf("%d", &month);

    if (month == 1) {
        printf("Current month is January\n");
    } else if (month == 2) {
        printf("Current month is February\n");
    } else if (month == 3) {
        printf("Current month is March\n");
    } else if (month == 4) {
        printf("Current month is April\n");
    } else if (month == 5) {
        printf("Current month is May\n");
    } else if (month == 6) {
        printf("Current month is June\n");
    } else if (month == 7) {
        printf("Current month is July\n");
    } else if (month == 8) {
        printf("Current month is August\n");
    } else if (month == 9) {
        printf("Current month is September\n");
    } else if (month == 10) {
        printf("Current month is October\n");
    } else if (month == 11) {
        printf("Current month is November\n");
    } else if (month == 12) {
        printf("Current month is December\n");
    } else {
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}