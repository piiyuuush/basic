#include<stdio.h>
#include<conio.h>
// This is calculator made using swtich case

int main (){

    int a, b, answer;
    char opp;

    clrscr();

    printf("\nEnter your equation (ex. a + b) : ");
    scanf("%d %c %d",&a, &opp, &b);
   
    switch (opp)
    {
    case '+':
                answer = a + b;
                printf("\nThe addition of %d and %d is %d",a ,b ,answer);
                break;
    
    case '-':
                answer = a - b;
                printf("\nThe subtraction of %d and %d is %d",a ,b ,answer);
                break;

    case '*':
                answer = a * b;
                printf("\nThe multiplication of %d and %d is %d",a ,b ,answer);
                break;

    case '/':
                if(b!=0){
                answer = a / b;
                printf("\nThe division of %d and %d is %d",a ,b ,answer);
                }else {
                    printf("\nInfinity");
                }
                break;

    default:
                printf("Invalid operator");
                break;
                }

    getch();

    return 0;
}