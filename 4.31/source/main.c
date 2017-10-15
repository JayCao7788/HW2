#include<stdio.h>
#include <stdlib.h>

int main()
{
	{
		int i, j, a = 9, n;

		n = a - 4;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n - i; j++)
			{
				printf(" ");
			}
			for (j = n - i + 1; j<n + i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		
		for (i = n - 1; i >= 1; i--)
		{
			for (j = 1; j <= (n - i); j++)
			{
				printf(" ");
			}
			for (j = n - i + 1; j<n + i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}