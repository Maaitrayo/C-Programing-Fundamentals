// WACP to count the digits of a given number using recursion

#include <stdio.h>  
int main()  
{  
    int n;   
    int count=0;   
    printf("Enter a number: ");  
    scanf("%d",&n);  
   count=digitCount(n);  
   printf("Number of digits is : %d", count);  
   return 0;  
}  
int digitCount(int n)  
{  
  static int count=0; 
  if(n>0)  
  {  
      count=count+1;  
      return digitCount(n/10);  
  }  
    else  
    return count;  
}  