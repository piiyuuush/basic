#include<stdio.h>
#include<conio.h>
// This program will find additon of two numbers

int main (){

    int a, b, result;

    clrscr();

    printf("\nEnter two numbers for addition : ");
    scanf("%d %d",&a, &b);

    result = a + b;

    printf("\nThe addition of %d and %d is %d", a, b, result);

    getch();

    return 0;
}