// linear search
#include <stdio.h>
int main()
{
  int search, n, i;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  int array[n];

  printf("Enter %d integer(s)\n", n);

  for (int i = 0; i < n; i++)
    scanf("%d", &array[i]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (int i = 0; i < n; i++)
  {
    if (array[i] == search)   
    {
      printf("%d is present at location %d.\n", search, i+1);
      break;
    }
  }
  if (i == n)
    printf("%d isn't present in the array.\n", search);

  return 0;
}