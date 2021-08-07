/* C Program to Find the if the entered number is odd or even */  

#include<stdio.h>

int main(){
    
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    if (n%2 == 0)
    {
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
    
    return 0;
}