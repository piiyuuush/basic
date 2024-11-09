#include<stdio.h>
#include<conio.h>
// This program will find factorial of numbers

int main (){

  int number, factorial;

  clrscr();

  printf("\nEnter a number to find it's factorial : ");
  scanf("%d",&number);

  if (number==0){
    printf("Factorial is 1");
  }
  else if (number<0){
    printf("Factorial of negative numbers does not exist");
  }
  else{
  factorial = number;

  while(number!=1){
    number--;
    factorial *= number;
  }

  printf("Factorial is %d",factorial);
  }
  getch();
 
  return 0;
}