#include <stdio.h>
#include <conio.h>
// this program will find nCr of using function

int factorial(int num);
int ncrf(int a, int b);
int main() {

    int n, r, ncr;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("Enter value of r : ");
    scanf("%d", &r);

    ncr = ncrf(n, r);
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

int ncrf(int a, int b){
    int ncr = factorial(a)/(factorial(b)*factorial(a-b));
    return ncr;
}
