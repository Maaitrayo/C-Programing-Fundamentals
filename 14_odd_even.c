/* C Program to Find the if the entered number is odd or even */  

#include<stdio.h>

int main(){
    
    int n; //variable declaration
    printf("Enter a number\n");
    scanf("%d", &n); // user input

    if (n%2 == 0) //check for even number
    {
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
    
    return 0;
}