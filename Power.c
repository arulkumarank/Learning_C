#include<stdio.h>
int main(){
    int n,p,temp;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("enter the power : ");
    scanf("%d",&p);
    temp=n;
    for (int i = 1; i < p; i++)
        {
          n=n*temp;
        }
    printf("the value is : %d",n);
}