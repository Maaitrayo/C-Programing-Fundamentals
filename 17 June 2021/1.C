// WACP to find the nth term of the Fibonacci series using recursion

#include <stdio.h>
int fibonacci(int);
 
int main()
{
    int num;
    int result;
 
    printf("Enter the nth number you want to find in fibonacci series: ");
    scanf("%d", &num);
    result = fibonacci(num);
    printf("The %dth term in fibonacci series is %d\n", num, result);
    return 0;
}
int fibonacci(int num)
{
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return(fibonacci(num - 1) + fibonacci(num - 2));
}