#include <stdio.h>
#include <conio.h>
// this program will find factorial of a number using function

int factorial(int num);
int main() {
    int n, r, ncr;

    clrscr();
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("Enter value of r : ");
    scanf("%d", &r);

    ncr = factorial(n) / (factorial(r) * factorial(n-r));
    printf("\n%dC%d = %d\n",n ,r, ncr);

    return 0;
}
int factorial(int num) {
    int factorial;
  if (num==0){
    return 1;
  }
  else{
        factorial = num;

        while(num!=1){
            num--;
            factorial *= num;
        }
    return factorial;
    }
}
