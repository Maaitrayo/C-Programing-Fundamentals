//To print the greatest of three numbers using ternary operator
# include <stdio.h>
 
void main()
{
    int a, b, c, big ;
 
    printf("Enter three numbers : ") ;
 
    scanf("%d %d %d", &a, &b, &c) ;
 
    big = a>b?(a>c?a:c):(b>c?b:c);
 
    printf("\nThe biggest number is : %d", big) ;
}