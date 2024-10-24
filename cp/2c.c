#include<stdio.h>
#include<conio.h>

// This program will check if the number is odd or even

int main (){

    int number;

    printf("\nEnter the number : ");
    scanf("%d",&number);

    if(number%2==0){
        printf("%d is a even number", number);
    }
    else{
        printf("%d is a odd number", number);
    }
    getch();
    return 0;
}