#include <stdio.h>

int main(void) {
	double width;
	double height;
	double area;
	double circumference;
	printf("�Ʒ� ������ �Է����ּ���.\n");
	printf("�簢���� ����:");
	scanf_s("%lf", &width);
	printf("�簢���� ����:");
	scanf_s("%lf", &height);
	area = width * height;
	circumference = 2 * (width + height);
	printf("\n���̴� %lf �Դϴ�.", area);
	printf("\n�ѷ��� %lf �Դϴ�.", circumference);

	return 0;

}