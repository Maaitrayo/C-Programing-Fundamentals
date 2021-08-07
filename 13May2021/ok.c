#include<stdio.h>

int main(){
    int n,i,j, a=0, b=1,c=0,d=0;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        d=a+b;
        for(j=c+1;j<d;j++){
            if(j<=n)
            printf("%d ",j);
            else
            break;
        }
    }
}