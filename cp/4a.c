#include<stdio.h>
#include<conio.h>

// This program will print n narutal numbers

int main (){
    
    int number;

    printf("\nEnter the number : ");
    scanf("%d",&number);

    for(int i = 1; i<=number; i++){
        printf("\nNumber %d", i);
    }
    getch();
    return 0;
}