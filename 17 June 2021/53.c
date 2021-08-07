// wap to print fibonacci series using recursion

#include<stdio.h>    
void printFibonacci(int n){    
    static int n1=0,n2=1,n3;    
    if(n>0){    
         printf("%d ",n1);    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printFibonacci(n-1);    
    }    
}    
int main(){    
    int n;    
    printf("Enter the number of elements: ");    
    scanf("%d",&n);    
    printf("Fibonacci Series: ");    
    // printf("%d %d ",0,1);    
    printFibonacci(n);  
  return 0;  
 }    