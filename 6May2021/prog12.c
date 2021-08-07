#include<stdio.h>
void main()
{
	printf("Enter the number \n");
	int num;
	scanf("%d",&num);
	int i;
	for(i=1;i<=3;i++)
	{
		printf("%d to %d, ",num-i,num+i);
	}
}