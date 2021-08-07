#include<stdio.h>

int main(){

    int n,k=0;
    scanf("%d",&n);

    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            k=1;
            printf("Non Prime");
            break;
        }
        
    }
            if(k==0)
            printf("Prime");

return 0;
}       