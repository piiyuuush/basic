#include<stdio.h>
#include<conio.h>

// This program will find avg of two numbers

int main (){

    float result, a, b;

    printf("\nEnter first value : ");
    scanf("%f",&a);

    printf("\nEnter second value : ");
    scanf("%f",&b);

    result = (a + b)/2;
    printf("\nThe average of %f and %f is %f", a, b, result);

    getch();
    return 0;
}