#include <stdio.h>

int main(void)
{
	double exchange_rate;
	int krw;
	double dollar;
	printf("환율을 입력하시오:");
	scanf_s("%lf", &exchange_rate);
	printf("원화 금액을 입력하시오:");
	scanf_s("%d", &krw);
	dollar = krw / exchange_rate;
	printf("\n원화 %d원은 %lf달러입니다.", krw, dollar);

	return 0;
}