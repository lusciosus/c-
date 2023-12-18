#include<stdio.h>

int main()
{
	//double base;
	//double height;

	//base = 4;
	//height = 2;

	//printf("정삼각형의 넓이는 %.1lf * %.1lf * 0.5=%.1lf", base, height, base * height * 0.5);

	int side;
	side = 2;
	printf("정사각형의 넓이는 %d*%d=%d\n", side, side, side * side);

	double radius;
	radius = 2.7;
	double pi;
	pi = 3.141592;
	printf("원의 둘레는 2*%.2lf*%.2lf=%.2lf\n", radius, pi, 2 * radius * pi);
	printf("원의 넓이는 %.2lf*%.2lf*%.2lf=%.2lf", pi, radius,radius, pi * radius * radius);
	
	return 0;
}