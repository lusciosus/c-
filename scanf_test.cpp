#include<stdio.h>

int main()
{
	//int age;
	//printf("���� �Է�:");
	//scanf_s("%d", &age); //&�ʼ�
	//printf("����� ����: %d", age);

	//int side;
	//printf("���簢���� �� ���� ����:");
	//scanf_s("%d", &side);
	//printf("���簢���� ����:%d", side * side);

	double r;
	printf("���� ������ ����:");
	scanf_s("%lf", &r);
	printf("���� ����:%.2lf\n", 3.14 * r * r);

	int year;
	printf("�¾ �⵵:");
	scanf_s("%d", &year);
	printf("����� �¾ �⵵: %d��", year);

	return 0;
}