#include<stdio.h>

int main(){
    int n,i=2,fact=1;
    scanf("%d",&n);

    do{
        fact*=i;
        i++;
    }while(i<=n);
    printf("%d",fact);
    return 0;
    
}