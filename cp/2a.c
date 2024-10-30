#include<stdio.h>
#include<conio.h>

// This program will find greatest of two numbers

int main (){

    int a , b;

    clrscr();
    
    printf("\nEnter two numbers for comparision : ");
    scanf("%d %d",&a, &b);
    printf("\n");

    if(a>b){
        printf("%d is greater than %d",a ,b);
    }else if(a == b){
        printf("%d and %d are equal",a ,b);
    }else{
        printf("%d is greater than %d",b, a);
    }

    getch();
    return 0;
}