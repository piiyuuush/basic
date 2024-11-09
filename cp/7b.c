#include <stdio.h>
#include <conio.h>
//this program will find X raise to n value

int power(int x, int n) {
    if (n == 0)
        return 1;
    
    return x * power(x, n - 1);
}

int main() {
    int x, n;
    clrscr();

    printf("Enter the base (x): ");
    scanf("%d", &x);
    
    printf("Enter the exponent (n): ");
    scanf("%d", &n);
    
    int result = power(x, n);
    
    printf("%d raised to the power of %d is %d\n", x, n, result);
    
    getch();
    return 0;
}
