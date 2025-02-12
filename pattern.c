#include <stdio.h>
int main(){
    int row =5, col=5;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf( " %d ",i);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf( " %d ",j);
        }
        printf("\n");
    }
}