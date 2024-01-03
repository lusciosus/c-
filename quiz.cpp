#include<stdio.h>

// 하나의 양의 정수 n을 받아 1부터 n까지의 합을 출력하는 c프로그램
//int main() {
//	int n, sum=0;
//
//	printf("양의 정수를 입력하시오: ");
//	scanf_s("%d", &n);
//	
//	
//	for (int i = 1; i <= n; i++) {
//		sum += i;
//	}
//
//	printf("1부터 %d까지의 합은 %d다\n", n, sum);
//
//
//	return 0;
//}

// 0~100사이의 정수를 반복해서 입력 받아, 합계, 평균, 개수를 출력하는 c프로그램

//int main() {
//	int number, sum = 0, count = 0;
//	double average;
//
//	printf("0~100사이의 정수를 반복해서 입력하시오: ");
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
//		printf("합계: %d\n", sum);
//		printf("평균: %.2lf\n", average);
//		printf("개수: %d\n", count);
//	}
//	else {
//		printf("유효하지 않은 숫자를 입력\n");
//	}
//
//
//	return 0;
//}