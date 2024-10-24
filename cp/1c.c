#include<stdio.h>
#include<conio.h>

// This program will find Simple Interest

int main (){

    float principal, rate, period, si;

    printf("\nEnter Principal amount : ");
    scanf("%f",&principal);

    printf("\nEnter the annual rate of interest : ");
    scanf("%f",&rate);

    printf("\nEnter the time period (annual) : ");
    scanf("%f",&period);

    si = (principal * rate * period)/100;

    printf("\nThe Simple Interest for the given details is : %f", si);

    getch();
    return 0;
}