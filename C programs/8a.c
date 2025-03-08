#include <stdio.h>
#include <conio.h>
// this program will find the largest number in array
int main() {
    int arr[5], greatest, i;
    clrscr();

    printf("Enter 5 values : ");
    for(i = 0; i<5 ; i++){
        scanf("%d", &arr[i]);
    }
    greatest = arr[0];
    for(i = 1; i<5 ; i++){
        greatest = (arr[i]>greatest)?arr[i]:greatest;
    }
    printf("The greatest number is %d", greatest);

    getch();
    return 0;
}