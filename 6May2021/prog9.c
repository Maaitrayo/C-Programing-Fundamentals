#include<stdio.h>  
   
int add_rec(int);  
  
int main()  
{  
    int num;  
  
    printf("Enter a 5-digit positive integer number\n");  
    scanf("%d", &num);   
    printf("Sum of Digits(using recursion): %d\n", add_rec(num));  
  
    return 0;  
}  
// using recursion     
int add_rec(int num)  
{  
    if(num)  
        return( (num % 10) + add_rec(num / 10) );  
    else  
        return 0;  
}  