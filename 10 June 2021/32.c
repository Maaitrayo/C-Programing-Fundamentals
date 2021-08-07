//  Write a program to calculate the power of a number

#include<stdio.h>
#include<math.h>

int main(){
int a,r, result;
printf("Enter the number to be powered: ");
scanf("%d", &a);
printf("Enter the power: ");
scanf("%d", &r);
result = pow(a,r);
printf("The power is: %d", result);
return 0;
}

