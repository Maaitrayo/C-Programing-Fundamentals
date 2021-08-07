// maximum and minimum number in an array
#include <conio.h>
  
int main()
{
    int i,n,min,max;
    printf("Enter size of the array : ");
    scanf("%d",&n);

    int a[n];
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 
    min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		if(max<a[i])
	    max=a[i];       
    }
     printf("minimum of array is : %d",min);
    printf("\nmaximum of array is : %d",max);

    return 0;
}