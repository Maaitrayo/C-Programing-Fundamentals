#include<stdio.h>

int main(){
    int n,ld,reverse=0,copy;
    scanf("%d",&n);
    copy=n;
    while(n>0){
        ld=n%10;
        reverse=reverse*10+ld;
        n/=10;
    }
    if(copy==reverse)
        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");
return 0;
}