// calculate the area of the function

#include<stdio.h>
#include<math.h>

int main(){
    int l_limit, u_limit, n;
    scanf("%d %d %d", &l_limit, &u_limit, &n);
    float width = (u_limit-l_limit)/n;
    float area=0;
    int r_column, l_column;
    l_column = l_limit;
    r_column = l_limit+width;
    while(r_column<=u_limit){
        int h1= pow(l_column,2) + 1;
        int h2= pow(r_column,2) + 1;
        area = 0.5*(h1+h2)*(r_column+l_column);
        l_column=r_column;
        r_column=r_column+width;
    }
    printf("The area is: %0.2f", area);

}