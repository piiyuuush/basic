#include<stdio.h>
#include<conio.h>
// This program will print n narutal numbers

int main (){
    
    int number, i;
    
    clrscr();
    
    printf("\nEnter a number : ");
    scanf("%d",&number);

    for(i = 1; i<=number; i++){
        printf("\n\tNumber %d", i);
    }

    getch();

    return 0;
}