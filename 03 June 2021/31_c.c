#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int j=n;j>i;j--){
            printf("*");
        }
        printf("\n");
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
     printf("\n");
    }
}