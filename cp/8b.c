#include <stdio.h>
#include <conio.h>
//this program will find element in array and print it's index

int main() {
    int arr[10],i, index, num;
    printf("Enter 10 values : ");
    for(i = 0; i<10 ; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to search in the array : ");
    scanf("%d", &num);
    
    for(i = 0; i<10 ; i++){
      if (arr[i]==num){
          index = i+1;
      }
    }
    printf("The number %d is in %dth place", index);

    return 0;
}