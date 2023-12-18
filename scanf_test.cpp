#include<stdio.h>

int main()
{
	//int age;
	//printf("나이 입력:");
	//scanf_s("%d", &age); //&필수
	//printf("당신의 나이: %d", age);

	//int side;
	//printf("정사각형의 한 변의 길이:");
	//scanf_s("%d", &side);
	//printf("정사각형의 넓이:%d", side * side);

	double r;
	printf("원의 반지름 길이:");
	scanf_s("%lf", &r);
	printf("원의 넓이:%.2lf\n", 3.14 * r * r);

	int year;
	printf("태어난 년도:");
	scanf_s("%d", &year);
	printf("당신이 태어난 년도: %d년", year);

	return 0;
}