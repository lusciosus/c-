#include<stdio.h>

// �ϳ��� ���� ���� n�� �޾� 1���� n������ ���� ����ϴ� c���α׷�
//int main() {
//	int n, sum=0;
//
//	printf("���� ������ �Է��Ͻÿ�: ");
//	scanf_s("%d", &n);
//	
//	
//	for (int i = 1; i <= n; i++) {
//		sum += i;
//	}
//
//	printf("1���� %d������ ���� %d��\n", n, sum);
//
//
//	return 0;
//}

// 0~100������ ������ �ݺ��ؼ� �Է� �޾�, �հ�, ���, ������ ����ϴ� c���α׷�

//int main() {
//	int number, sum = 0, count = 0;
//	double average;
//
//	printf("0~100������ ������ �ݺ��ؼ� �Է��Ͻÿ�: ");
//
//	while (1) {
//		scanf_s("%d", &number);
//
//		if (number < 0 || number>100) {
//			break;
//		}
//		sum += number;
//		count++;
//	}
//	if (count > 0) {
//		average = (double)sum / count;
//		printf("�հ�: %d\n", sum);
//		printf("���: %.2lf\n", average);
//		printf("����: %d\n", count);
//	}
//	else {
//		printf("��ȿ���� ���� ���ڸ� �Է�\n");
//	}
//
//
//	return 0;
//}