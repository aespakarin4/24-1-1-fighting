#include <stdio.h>

int main(void)
{
	double exchange_rate;
	int krw;
	double dollar;
	printf("ȯ���� �Է��Ͻÿ�:");
	scanf_s("%lf", &exchange_rate);
	printf("��ȭ �ݾ��� �Է��Ͻÿ�:");
	scanf_s("%d", &krw);
	dollar = krw / exchange_rate;
	printf("\n��ȭ %d���� %lf�޷��Դϴ�.", krw, dollar);

	return 0;
}