#include<stdio.h>

int main()
{
	//int a, b;
	//printf("ù��° ���� �Է��Ͻÿ�:");
	//scanf_s("%d", &a);
	//printf("�ι�° ���� �Է��Ͻÿ�:");
	//scanf_s("%d", &b);
	//printf("�� ���� ����: %d\n", a + b);
	//printf("�� ���� ����: %d\n", a - b);
	//printf("�� ���� ����: %d\n", a * b);

	//int age, year;
	//printf("���̸� �Է��Ͻÿ�:");
	//scanf_s("%d", &age);
	//printf("�¾ �⵵�� ��Ÿ���ÿ�:%d", 2024 - age);

	int age, year;
	printf("�¾ �⵵:");
	scanf_s("%d", &year);
	printf("���� �����̸� ��Ÿ���ÿ�:%d\n", 2023 - year);

	double a, b, c;
	printf("ù��° ���� �Է��Ͻÿ�:");
	scanf_s("%lf", &a);
	printf("�ι�° ���� �Է��Ͻÿ�:");
	scanf_s("%lf", &b);
	printf("����° ���� �Է��Ͻÿ�:");
	scanf_s("%lf", &c);
	printf("�� ������ �����: %lf\n", (a + b + c) / 3);

	double KRW;
	printf("���ݾ��� �Է��Ͻÿ�:");
	scanf_s("%lf", &KRW);
	printf("�޷��� ��Ÿ���ÿ�:%lf\n", KRW * 0.00077);
	printf("��ȭ�� ��Ÿ���ÿ�:%lf\n", KRW * 0.11);

	double km;
	printf("km �Ÿ��� �Է��Ͻÿ�:");
	scanf_s("%lf", &km);
	printf("mile������ ��ȯ�Ͽ� ��Ÿ���ÿ�:%lf\n", km * 0.621371);

	double C;
	printf("���� �µ��� �Է��Ͻÿ�:");
	scanf_s("%lf", &C);
	printf("ȭ�� �µ��� ��Ÿ���ÿ�:%lf\n", C * 59 + 32);

	double m, kg;
	printf("Ű�� �Է��Ͻÿ�:");
	scanf_s("%lf", &m);
	printf("�����Ը� �Է��Ͻÿ�:");
	scanf_s("%lf", &kg);
	printf("BMI�� ��Ÿ���ÿ�:%lf", kg /(m *m) );
	return 0;
}