#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, hour, rate;
	int number;
	int product;

	/*
	a �g�z�H��
	b ���~�u
	c ��Ī��u
	d �s�u
	*/

	printf("�п�J���u�~��N�X :");
	scanf("%d", &number);

	switch (number)
	{
		case 1 :{
					printf("�п�J�����u�g�~ :");
					scanf("%f", &a);
					printf("\n");
					printf("�����u�� �g�z �g�~�� :$%.1f\n", a);
		}break;

		case 2:{
				   printf("�п�J�����u���~ :");
				   scanf("%f", &b);
				   printf("�п�J�����u�u�� :");
				   scanf("%f", &hour);
				   if (hour <= 40)
				   {
					   b = hour * b;
				   }
				   else
				   {
					   b = 40 * b + (hour - 40)*1.5*b;
				   }
				   printf("\n");
				   printf("�����u�� ���~�u �g�~�� :$%.1f\n", b);
		}break;

		case 3:{
				   printf("�п�J�����u�P����B :");
				   scanf("%f", &c);

				   c = 250 + c*0.057;
				   printf("\n");
				   printf("�����u�� ��Ī��u �g�~�� :$%.1f\n", c);
		}break;

		case 4:{
				   printf("�п�J�����u�Ͳ����~����� :");
				   scanf("%d", &product);
				   printf("�п�J����Ƥ��S�� :");
				   scanf("%f", &rate);

				   d = product*rate;
				   printf("\n");
				   printf("�����u�� �s�u �g�~�� :$%.1f\n", d);
		}break;

		default :printf("�L�����u���!\n"); break;
	}


	system("pause");
	return 0;
}