#include<stdio.h>
#include<conio.h>

// This program will find the sum of digits of given number

int main (){

    int number, sum = 0, remainder, numcopy;

    printf("\nEnter the number : ");
    scanf("%d",&number);
    numcopy = number;
    while(number != 0){

        remainder = number%10;
        sum += remainder; 
        number /= 10; 

    }

    printf ("The reverse of %d is %d", numcopy, sum);
    getch();
    return 0;
}