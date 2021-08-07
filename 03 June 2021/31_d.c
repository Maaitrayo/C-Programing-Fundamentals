#include<stdio.h>

int main(){
    int n,k=1,a;
    scanf("%d", &n);
    a=n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            printf("%d",k);
        }
        for(int j=n+2;j>=k;j--){
            printf(" ");
        }
        for(int j=n+2;j>=k;j--){
            printf(" ");
        }
         for(int j=1;j<=k;j++){
            printf("%d",k);
        }
        k+=2;
        printf("\n");
    }
    for(int i=n;i>1;i--){
        for(int j=1;j<=a+1;j++){
            printf("%d",(a+1));
        }
        // for(int j=)
        a-=2;
        printf("\n");
        
    }
}