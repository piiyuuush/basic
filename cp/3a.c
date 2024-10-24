#include<stdio.h>
#include<conio.h>

// This program will reverse the digits of given number

int main (){

    int number, reversed = 0, remainder, numcopy;

    printf("\nEnter the number : ");
    scanf("%d",&number);
    numcopy = number;
    while(number != 0){

        remainder = number%10;
        reversed = reversed * 10 + remainder; 
        number /= 10; 

    }

    printf ("The reverse of %d is %d", numcopy, reversed);
    getch();
    return 0;
}