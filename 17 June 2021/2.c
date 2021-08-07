// WACP to find the sum of n natural numbers using recursion

#include <stdio.h>
int sum(int n)
{
if(n == 0)
return 0;
return n + sum(n - 1);
}
int main()
{
int n;
printf("\nEnter the number : ");
scanf("%d", &n);
printf("\nSum of %d Natural Numbers is %d\n ",n,sum(n));
return 0;
}
