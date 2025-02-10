#include <stdio.h>
int main(){
    int i,num,rev=0;
    printf("enter the number to be reversed : ");
    scanf("%d",&num);
    i=0;
    for (int i = 0; num > 0; i++)
    {
        rev = rev*10 + (num%10);
        num = num /10;
    }
    printf("%d",rev);
}