#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,side1,side2;

	for (i = 1; i <= 500; i++)
	{
		for (side1 = 1; side1 <= 500; side1++)
		{
			for (side2 = 1; side2 <= 500; side2++)
			{
				if (i*i == side1*side1 + side2*side2)
				{
					printf("%d %d %d\n", i, side1, side2);
				}
			}
		}
	}
	system("pause");
	return 0;
}