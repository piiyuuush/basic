#include <stdio.h>
#include <conio.h>
//this program will add two numbers using function

int addition(int a, int b);
int main() {
    int num1, num2, result;

    clrscr();
    
    printf("Enter two numbers for addition: ");
    scanf("%d %d", &num1, &num2);
    
    result = addition(num1, num2);
    printf("\nAddition of %d and %d is %d", num1, num2, result);

    getch();
    return 0;
}

int addition(int a, int b) {
    int c = a + b; 
    return c;
}
