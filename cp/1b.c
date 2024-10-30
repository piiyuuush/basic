#include<stdio.h>
#include<conio.h>

// This program will find avg of numbers

int main (){

    float result, a, b, c;

    clrscr();

    printf("\nEnter 3 sample values : ");
    scanf("%f %f %f", &a, &b, &c);
    
    result = (a + b + c)/3;

    printf("\nThe average is %f", result);

    getch();
    
    return 0;
}