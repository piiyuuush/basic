#include<stdio.h>
#include<conio.h>
// This program will reverse the digits of given number

int main (){

    int number, reversed = 0, remainder, numcopy;
    
    clrscr();

    printf("\nEnter the number to find it's reversed form : ");
    scanf("%d",&number);

    numcopy = number;

    while(number != 0){

        remainder = number%10;
        reversed = reversed * 10 + remainder; 
        number /= 10; 

    }

    printf ("The reversed form of %d is %d", numcopy, reversed);

    getch();
    
    return 0;
}