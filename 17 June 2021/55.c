// wap to print non-fibonacci series using recursion

#include<stdio.h>

int n, arr[100], fib[50], j=0;
int fibonacci_numbers(int n){
    static int n1=0,n2=1,n3;  
    if(n>0){    
        fib[j]=n1;
        j++;
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         fibonacci_numbers(n-1);    
    }  
    return fib;
}

int number_array(int n){
    for(int i=0;i<n;i++){
        arr[i]=i;
    }
    return arr;
}

int print_nonfibo(int fib[], int arr[], int n){
    for(int i=0;i<n;i++){
        int flag=0, p=0;
        for(int j=0;j<n;j++){
            if(flag==0){
                if(arr[i]==fib[j]){
                    flag=1;
                    break;
                }
                else{
                    p=i;
                }
             printf("%d ", flag);
            }
        }
        printf("%d ", arr[p]);

    }
}
  
int main(){
    printf("Enter the range: ");
    scanf("%d", &n);
    fibonacci_numbers(n);
    printf("\n ");
    number_array(n);
    print_nonfibo(fib, arr, n);
}