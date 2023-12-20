#include <stdio.h>

int main()
{
	double a, b, c;
	printf("원금을 입력하시오: ");
	scanf_s("%lf", &a);
	printf("이자율을 입력하시오: ");
    scanf_s("%lf", &b);
	printf("기간을 입력하시오: ");
	scanf_s("%lf", &c);
	printf("이자는: %.lf\n", a * b * c);


	double JPN, exchange;
	printf("원금액을 입력하시오:");
	scanf_s("%lf", &JPN);
	printf("환율을 나타내시오:");
	scanf_s("%lf", &exchange );
	printf("원화로 나타내시오:%.2lf\n", JPN * exchange);

	double USD, rate ;
	printf("원금액을 입력하시오:");
	scanf_s("%lf", &USD);
	printf("환율을 나타내시오:");
	scanf_s("%lf", &rate );
	printf("원화로 나타내시오:%.2lf\n", USD * rate);


	int width, length;
	printf("가로를 입력하시오:");
	scanf_s("%d", &width);
	printf("세로를 나타내시오:");
	scanf_s("%d", &length);
	printf("면적을 나타내시오: %d\n", width * length);

	double km, hr;
	printf("거리를 입력하시오:");
	scanf_s("%lf", &km);
	printf("시간을 입력하시오:");
	scanf_s("%lf", &hr);
	printf("평균 속도는: %.2lf\n", km / hr);

	double radius, h;
	printf("반지름을 입력하시오:");
	scanf_s("%lf", &radius);
	printf("높이를 입력하시오:");
	scanf_s("%lf", &h);
	printf("원기둥의 부피는: %.2lf", 3.14 * radius * radius * h);




	return 0;
}