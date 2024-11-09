#include <stdio.h>
#include <conio.h>
//this program will find factorial using recursion function
int factorial(int n) {
    if (n == 0) 
        return 1;

    return n * factorial(n - 1);
}

int main() {
    int n;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
       int result = factorial(n);
        printf("Factorial of %d is %d\n", n, result);
    }
    
    return 0;
}
