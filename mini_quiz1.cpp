#include<stdio.h>

int main()
{
	//int a, b;
	//printf("첫번째 수를 입력하시오:");
	//scanf_s("%d", &a);
	//printf("두번째 수를 입력하시오:");
	//scanf_s("%d", &b);
	//printf("두 수의 합은: %d\n", a + b);
	//printf("두 수의 차는: %d\n", a - b);
	//printf("두 수의 곱은: %d\n", a * b);

	//int age, year;
	//printf("나이를 입력하시오:");
	//scanf_s("%d", &age);
	//printf("태어난 년도를 나타내시오:%d", 2024 - age);

	int age, year;
	printf("태어난 년도:");
	scanf_s("%d", &year);
	printf("현재 만나이를 나타내시오:%d\n", 2023 - year);

	double a, b, c;
	printf("첫번째 수를 입력하시오:");
	scanf_s("%lf", &a);
	printf("두번째 수를 입력하시오:");
	scanf_s("%lf", &b);
	printf("세번째 수를 입력하시오:");
	scanf_s("%lf", &c);
	printf("세 숫자의 평균은: %lf\n", (a + b + c) / 3);

	double KRW;
	printf("원금액을 입력하시오:");
	scanf_s("%lf", &KRW);
	printf("달러로 나타내시오:%lf\n", KRW * 0.00077);
	printf("엔화로 나타내시오:%lf\n", KRW * 0.11);

	double km;
	printf("km 거리를 입력하시오:");
	scanf_s("%lf", &km);
	printf("mile단위로 변환하여 나타내시오:%lf\n", km * 0.621371);

	double C;
	printf("섭씨 온도를 입력하시오:");
	scanf_s("%lf", &C);
	printf("화씨 온도를 나타내시오:%lf\n", C * 59 + 32);

	double m, kg;
	printf("키를 입력하시오:");
	scanf_s("%lf", &m);
	printf("몸무게를 입력하시오:");
	scanf_s("%lf", &kg);
	printf("BMI를 나타내시오:%lf", kg /(m *m) );
	return 0;
}