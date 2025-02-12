#include<stdio.h>
int main(){
    int arr[5];
    int i;
    int sum = 0;
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("sum of 5 number : ");
    for(i = 0; i < 5; i++) {
        sum = sum + arr[i];
    }
    printf("%d",sum);
}