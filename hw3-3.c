#include <stdio.h>

int main(void) {
	double width;
	double height;
	double area;
	double circumference;
	printf("아래 값들을 입력해주세요.\n");
	printf("사각형의 길이:");
	scanf_s("%lf", &width);
	printf("사각형의 높이:");
	scanf_s("%lf", &height);
	area = width * height;
	circumference = 2 * (width + height);
	printf("\n넓이는 %lf 입니다.", area);
	printf("\n둘레는 %lf 입니다.", circumference);

	return 0;

}