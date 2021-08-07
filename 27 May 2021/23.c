#include<stdio.h>

int main(){
    int n,copy,last_digit,cube=0;
    scanf("%d",&n);
    copy=n;
    while(n>0){
        last_digit=n%10;
        cube+= last_digit*last_digit*last_digit;
        n/=10;
    }
    if(cube==copy)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

}

