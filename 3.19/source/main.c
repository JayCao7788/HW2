#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float pri,rate,interest;
	int days;

	/*
	pri ���
	rate �Q�v
	days �Ѽ�
	interest �Q��
	*/

	printf("Enter loan principal (-1 to end): ");
	scanf("%f", &pri);
	while (pri != EOF)//EOF is mean -1
	{		
		printf("Enter interest rate: ");
		scanf("%f", &rate);

		printf("Enter term of loan in days: ");
		scanf("%d", &days);

		interest = pri * rate * days / 365;

		printf("The interest charge is $%.2f\n", interest);
				
		printf("\n");
		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &pri);
	}
	system("pause");
	return 0;
}