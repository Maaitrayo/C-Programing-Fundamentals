#include<stdio.h>  
 int main()
 {
     int a,b,c,d,e;
     printf("Enter 5 numbers");
     scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
      int sum  = a+b+c+d+e;
      float avg = sum / 5;
      printf("The average is: %f",avg);
 }