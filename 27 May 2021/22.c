#include<stdio.h>

int main(){
    int n,t1=0,t2=1,new_term=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\t",t1);
        new_term=t1+t2;
        t1=t2;
        t2=new_term;
    }
    return 0;
}