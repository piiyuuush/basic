#include<stdio.h>
#include<conio.h>

// This program will find greatest of two numbers

int main (){

    int a , b;

    printf("\nEnter first number : ");
    scanf("%d",&a);

    printf("\nEnter second number : ");
    scanf("%d",&b);

    if(a>b){
        printf("%d is greater than %d",a ,b);
    }
    else {
        printf("%d is greater than %d",b ,a);
    }

    getch();
    return 0;
}