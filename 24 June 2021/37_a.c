// C program to implement Binary Search
#include <stdio.h>

int BinarySearch(int array[], int start_index, int end_index, int element){
   while (start_index <= end_index){
      int middle = start_index + (end_index- start_index )/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] < element)
         start_index = middle + 1;
      else
         end_index = middle - 1;
   }
   return -1;
}

int main(void)
{   int n,a;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the element to search: ");
    scanf("%d", &a);
	int arr[n];
    printf("Enter the array: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int found_index = BinarySearch(arr, 0, n-1, a);
	if(found_index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",found_index);
   }
   return 0;
}
