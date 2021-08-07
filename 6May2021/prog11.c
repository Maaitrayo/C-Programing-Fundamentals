#include<stdio.h>
 int main(){    
    float fah,rcen,cen,rfah;
     printf("\n Enter the temperature in fahrenheit ");
     scanf("%f",&fah);
     rcen=(0.55*fah)-32.0;
     printf("\n The temperature in fahrenheit is %f in celcius",rcen);
     printf("\n Enter the temperature in celcius ");
     scanf("%f",&cen);
     rfah=(1.8*cen)+32.0;
     printf("\n The temperature %f in celcius is %f in fahrenheit",cen,rfah);
   return 0;
 }