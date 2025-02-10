#include<stdio.h>
int add(int m,int n){
    int c=m+n;
    return c;
}
int main (){
    int a=5,b=5;
    int c= add (a,b);
    printf("%d",c);
    return 0;
}