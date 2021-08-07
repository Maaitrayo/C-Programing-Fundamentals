#include<stdio.h>

int main(){
    int n,a=0,num1=0,num2=1;
    scanf("%d",&n);
    for(int i =1; i<=n; i++){
    for(int j=1; j<=i; j++){
    printf("%d ",num1);
    a=num2;
    num2=num1+num2;
    num1=a;
    }
    printf("\n");
    }
    return 0;
}