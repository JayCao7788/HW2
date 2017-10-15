#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, hour, rate;
	int number;
	int product;

	/*
	a 經理人員
	b 時薪工
	c 抽傭金工
	d 零工
	*/

	printf("請輸入員工薪資代碼 :");
	scanf("%d", &number);

	switch (number)
	{
		case 1 :{
					printf("請輸入此員工週薪 :");
					scanf("%f", &a);
					printf("\n");
					printf("此員工為 經理 週薪為 :$%.1f\n", a);
		}break;

		case 2:{
				   printf("請輸入此員工時薪 :");
				   scanf("%f", &b);
				   printf("請輸入此員工工時 :");
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
				   printf("此員工為 時薪工 週薪為 :$%.1f\n", b);
		}break;

		case 3:{
				   printf("請輸入此員工銷售金額 :");
				   scanf("%f", &c);

				   c = 250 + c*0.057;
				   printf("\n");
				   printf("此員工為 抽傭金工 週薪為 :$%.1f\n", c);
		}break;

		case 4:{
				   printf("請輸入此員工生產產品之件數 :");
				   scanf("%d", &product);
				   printf("請輸入單位件數之酬勞 :");
				   scanf("%f", &rate);

				   d = product*rate;
				   printf("\n");
				   printf("此員工為 零工 週薪為 :$%.1f\n", d);
		}break;

		default :printf("無此員工資料!\n"); break;
	}


	system("pause");
	return 0;
}