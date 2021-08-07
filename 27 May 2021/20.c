#include<stdio.h>

int main(){
    int n,i=0,sum=0;
    scanf("%d",&n);
    while(i <=n){
        if(i%2!=0){
            sum+=i;
        }
        i++;
    }
    printf("Sum = %d",sum);
    return 0;
}