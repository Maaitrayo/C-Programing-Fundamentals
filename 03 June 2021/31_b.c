#include<stdio.h>

int factorial(int a){
    int fact=1;
    for(int i=2;i<=a;i++){
        fact*=i;
    }
    return fact;
}

int combination(int n1,int n2){
    int comb = factorial(n1)/(factorial(n1-n2)*factorial(n2));
   return comb;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            printf("  ");
        }
        for(int j=0;j<=i;j++){
            printf(" %d  ",combination(i,j));
        }
        printf("\n");
    }
}