#include<stdio.h>

int main(){
     int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%7!=0){
            printf("%d ",i);
        }
    }
    return 0;
}