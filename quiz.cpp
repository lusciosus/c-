#include <stdio.h>

int main()
{
	double a, b, c;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%lf", &a);
	printf("�������� �Է��Ͻÿ�: ");
    scanf_s("%lf", &b);
	printf("�Ⱓ�� �Է��Ͻÿ�: ");
	scanf_s("%lf", &c);
	printf("���ڴ�: %.lf\n", a * b * c);


	double JPN, exchange;
	printf("���ݾ��� �Է��Ͻÿ�:");
	scanf_s("%lf", &JPN);
	printf("ȯ���� ��Ÿ���ÿ�:");
	scanf_s("%lf", &exchange );
	printf("��ȭ�� ��Ÿ���ÿ�:%.2lf\n", JPN * exchange);

	double USD, rate ;
	printf("���ݾ��� �Է��Ͻÿ�:");
	scanf_s("%lf", &USD);
	printf("ȯ���� ��Ÿ���ÿ�:");
	scanf_s("%lf", &rate );
	printf("��ȭ�� ��Ÿ���ÿ�:%.2lf\n", USD * rate);


	int width, length;
	printf("���θ� �Է��Ͻÿ�:");
	scanf_s("%d", &width);
	printf("���θ� ��Ÿ���ÿ�:");
	scanf_s("%d", &length);
	printf("������ ��Ÿ���ÿ�: %d\n", width * length);

	double km, hr;
	printf("�Ÿ��� �Է��Ͻÿ�:");
	scanf_s("%lf", &km);
	printf("�ð��� �Է��Ͻÿ�:");
	scanf_s("%lf", &hr);
	printf("��� �ӵ���: %.2lf\n", km / hr);

	double radius, h;
	printf("�������� �Է��Ͻÿ�:");
	scanf_s("%lf", &radius);
	printf("���̸� �Է��Ͻÿ�:");
	scanf_s("%lf", &h);
	printf("������� ���Ǵ�: %.2lf", 3.14 * radius * radius * h);




	return 0;
}