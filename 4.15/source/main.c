#include <stdio.h>
#include <math.h>

int main(void)
{
	double amo, pri=5000.0, rate;
	int year=15;

	/*
	amo  第n年結算的本利和
	pri  本金
	rate 年利率
	*/

	printf("Year\t   10.0%s\t   10.5%s\t   11.0%s\t   11.5%s\t   12.0%s\n", "%", "%", "%", "%", "%");

	for (year = 1; year <= 15; year++)
	{
		printf("%d\t",year);
		for (rate = 0.1; rate < 0.125; rate += 0.005)
		{
			amo = pri*pow(1.0 + rate, year);
			printf("%8.2f\t", amo);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}