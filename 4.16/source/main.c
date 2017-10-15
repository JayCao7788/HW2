#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j,c;
	int a = 10;
	
	for (i = 1; i <= a; i++)
	{
		printf("\n");
		for (j = 1; j <= i; j++)
		{
			printf("%s","*");
		}
	}
	printf("\n");

//------------------------------------------

	for (i = 1; i <= a; i++)
	{
		printf("\n");
		for (j = 10; j >= i; j--)
		{
			printf("%s", "*");
		}
	}
	printf("\n");

//----------------------------------------

	for (i = 0; i <= a; i++)
	{
		printf("\n");
		for (j = 1; j <= a; j++)
		{
			if (j <=  i)
			{
				printf(" ");
			}
			else
			{			
				printf("%s", "*");
			}
		}
	}


//----------------------------------------

	for (i = 1; i <= a; i++)
	{
		printf("\n");
		for (j = 1; j <= a; j++)
		{
			if (j <= (a - i))
			{
				printf(" ");
			}
			else
			{			
				printf("%s", "*");
			}
		}
	}
	printf("\n");

//-----------------------------------------

	
	system("pause");
	return 0;
}
