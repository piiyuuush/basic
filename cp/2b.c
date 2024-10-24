#include<stdio.h>
#include<conio.h>

// This program will find greatest of three numbers using ternary operator

int main (){

    int a , b, c, greatest;

    printf("\nEnter first number : ");
    scanf("%d",&a);

    printf("\nEnter second number : ");
    scanf("%d",&b);

    printf("\nEnter second number : ");
    scanf("%d",&c);

    greatest =(a>b)?((a>c)?a:c):((b>c)?b:c);

    printf("\nThe greatest number is %d",greatest);

    getch();
    return 0;
}