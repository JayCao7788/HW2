#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float hours,rate,salary;

	/*
	hours  工時
	rate   時薪
	salary 薪水
	*/

	printf("Enter # hours worker (-1 to end): ");
	scanf("%f", &hours);
	while (hours != EOF)//EOF is mean -1
	{
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &rate);

		if (hours <= 40)
		{
			salary = hours*rate;
		}
		else
		{
			salary = 40*rate + 1.5*(hours - 40)*rate;
		}

		printf("Salary is $%.2f\n", salary);

		printf("\n");
		printf("Enter # hours worker (-1 to end): ");
		scanf("%f", &hours);
	};
	system("pause");
	return 0;
}