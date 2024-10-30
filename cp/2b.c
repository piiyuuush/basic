#include<stdio.h>
#include<conio.h>

// This program will find greatest of three numbers using ternary operator

int main (){

    int a , b, c, greatest;

    clrscr();

    printf("\nEnter three numbers for comparison : ");
    scanf("%d %d %d",&a, &b, &c);

    greatest = 
            (a>b)?
            ((a>c)?a:c):
            ((b>c)?b:c);

    printf("\nThe greatest number is %d",greatest);

    getch();
    
    return 0;
}