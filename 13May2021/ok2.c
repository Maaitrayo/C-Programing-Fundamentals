#include<stdio.h>

int n,i,j, a=0, b=1,c=0,d=0;

int inner(int c,int d,int j, int n){
    if(j<d){
        if(j<n){
            printf("%d ",j);
        }
    }
    return inner(c,d,j+1,n);
}
int outer(int n){
    if(n>0){
        c=a+b;
        a=b;
        b=c;
        d=a+b;
        printf("%d",n);
        j=c+1;
        return inner(c,d,j,n);
    }
    return outer(n-1); 
}

int main(){
    int n;
    scanf("%d", &n);
    outer(n);
}
