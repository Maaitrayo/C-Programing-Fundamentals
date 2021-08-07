//Switch case to perform arithmatic operations
#include<stdio.h>

int main(){
    float a,b;
    char operator;
    printf("Enter operand: '+', '-', '*', '/'\n");
    scanf("%c", &operator);
    printf("Enter two number to perform arithmtic operations:\n");
    scanf("%f %f", &a, &b);
    switch (operator) {
    case '+':
        printf("%f + %f = %f", a, b, a + b);
        break;

    case '-':
        printf("%f - %.1lf = %f", a, b, a - b);
         break;

    case '*':
        printf("%f * %f = %f", a, b, a * b);
        break;

    case '/':
        printf("%f / %f = %f", a, b, a / b);
        break;

        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }
    return 0;
}