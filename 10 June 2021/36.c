#include<stdlib.h>

int main()
{
int n,i,flag=0;
printf("\nEnter any number :");  
scanf("%d”",&n);
for(i=1;i<=n;i++)
{
if(i*(i+1)==n)  
{
flag=1;
break;
}
}
if(flag==1)
printf("\n The number is a pronic number ");
else
printf("\n The number is not pronic number ");
return 0;
}