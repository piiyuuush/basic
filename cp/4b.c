#include<stdio.h>
#include<conio.h>

// This program will print fibonacci series till n numbers

int main (){

    int a = 0, b = 1,fibo, number;

    clrscr();

    printf("\nEnter how many numbers you want in the series : ");
    scanf("%d",&number);

    printf("\nThe series is : %d, %d", a, b);

    while(number !=2){
        fibo = a + b;
        a = b;
        b = fibo;
        number--;
        printf(", %d",fibo);
    }

    getch();

    return 0;
}