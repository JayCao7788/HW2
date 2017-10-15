#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float salary=0,salbuff=0;

	while (salary != EOF) //EOF is mean -1
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%f", &salary);
		salbuff = salary;
		salbuff = 200 + (salary*0.09);
		if (salary >= 0)
		{
			printf("Salary is: %.2f\n", salbuff);
			printf("\n");
		}
	}

	system("pause");
	return 0;
}