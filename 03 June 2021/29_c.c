#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        int k = i;
        for (; j <= n; j++)
        {
            printf("%d ",k);
            k--;
        }
        k = 2;
        for (; j <= n + i - 1; j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}