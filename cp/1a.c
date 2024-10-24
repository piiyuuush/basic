#include<stdio.h>
#include<conio.h>

// This program will find additon of two numbers

int main (){

    int a, b, result;

    printf("\nEnter first number : ");
    scanf("%d",&a);

    printf("\nEnter second number : ");
    scanf("%d",&b);

    result = a + b;
    printf("\nThe addition of %d and %d is %d", a, b, result);

    getch();
    return 0;
}