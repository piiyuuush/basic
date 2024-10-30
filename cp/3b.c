#include<stdio.h>
#include<conio.h>

// This program will find the sum of digits of given number

int main (){

    int number, sum = 0, remainder, numcopy;

    clrscr();

    printf("\nEnter the number : ");
    scanf("%d",&number);

    numcopy = number;
    
    for(number; number!=0; number/=10){

        remainder = number%10;
        sum += remainder;

    }

    printf ("The sum  of digits of %d is %d", numcopy, sum);
    
    getch();
    
    return 0;
}