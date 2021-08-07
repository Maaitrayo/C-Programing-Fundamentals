// reverse an array
#include<stdio.h>

int display(int a[], int n){
  for(int i=0; i<n; i++){
    printf("%d ",a[i]);
  }
  printf("\n"); 
}
 
int main(){
  int n;
   
  printf("Enter size of the array : ");
  scanf("%d",&n);

  int a[n];

  printf("Enter elements in array : ");
  for(int i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }
  int temp;

  int i=0;         
  int j=n-1;  

  printf("Original array:   ");
  display(a, n);


  while(i<j){
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    i++;  
    j--;  
  }
  printf("Reverse of array: ");
  display(a, n);

  return 0;
}