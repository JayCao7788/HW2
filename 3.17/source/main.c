#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float b, c, d, e, sum, balance;
	
	/*
	  a 帳號
	  b 月初尚未付清的餘額
	  c 本月簽帳款項
	  d 本月已付款項
	  e 允許信用額度
	*/

	printf("Enter account number (-1 to end): ");
	scanf("%d", &a);
	while (a != EOF)  //EOF is mean -1
	{

		printf("Enter beginning balance: ");
		scanf("%f", &b);

		printf("Enter total charges: ");
		scanf("%f", &c);

		printf("Enter total credits: ");
		scanf("%f", &d);

		printf("Enter credit limit: ");
		scanf("%f", &e);
		
		sum = b + c - d;
		balance = b + d;

		if (sum > e)
		{
			printf("Account:\t%d\n", a);
			printf("Credit limit:\t%.2f\n", e);
			printf("Blance:\t\t%.2f\n", balance);
			printf("Credit Limit Exceeded.\n\n");
		}
		else
		{
			printf("\n");
		}
		
		printf("Enter account number (-1 to end): ");
		scanf("%d", &a);	
	}

	system("pause");
	return 0;
}