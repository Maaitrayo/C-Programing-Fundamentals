#include <stdio.h>
int fibonacci(int n) 
{
	if (n <= 1) return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
	int n;
    printf("Enter n: ");
	scanf("%d", &n);
    printf("Non fibonacci series is:\n");
	int prev = 0;
	for (int i = 0; i < n; i++) 
    {
		int ans = fibonacci(i);
		for (int i = prev + 1; i < ans; i++) 
        {
			printf("%d ", i);
		}
		prev = ans;
	}
	return 0;
}