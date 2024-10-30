#include<stdio.h>
#include<conio.h>

// This program will find factorial of numbers

int main (){

  int number, factorial;

  clrscr();

  printf("\nEnter a number : ");
  scanf("%d",&number);

  factorial = number;

  while(number!=1){
    number--;
    factorial *= number;
  }

  printf("Factorial is %d",factorial);
 
  getch();
 
  return 0;
}