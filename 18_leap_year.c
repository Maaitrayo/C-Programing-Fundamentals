/* C program to check leap year using conditional operator */
#include <stdio.h>

int main()
{
    int year;
     //Input year from user
    printf("Enter any year: ");
    scanf("%d", &year);
    (year%4==0 && year%100!=0) ? printf("LEAP YEAR") :
        (year%400 ==0 ) ? printf("LEAP YEAR") : printf("COMMON YEAR");

    return 0;
}