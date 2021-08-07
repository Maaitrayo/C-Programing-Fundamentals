#include<stdio.h>

int main(){
    int n,count=1;
    scanf("%d",&n);

    for(int i=n;i>=1;i--){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        for(int j=1;j<=count;j++){
            printf("* ");
        }
            count++;
        printf("\n");
    }
    return 0;

}