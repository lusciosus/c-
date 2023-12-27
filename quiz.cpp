#include <stdio.h>

//int main() {
//    int num1, num2;
//
//    printf("첫 번째 양의 정수를 입력하세요: ");
//    scanf_s("%d", &num1);
//    printf("두 번째 양의 정수를 입력하세요: ");
//    scanf_s("%d", &num2);
//
//    if (num1 * num1 == num2) {
//        printf("%d * %d = %d\n", num1, num1, num2);
//    }
//    else if (num2 * num2 == num1) {
//        printf("%d * %d = %d\n", num2, num2, num1);
//    }
//    else {
//        printf("none\n");
//    }
//
//    return 0;
//}

//int main()
//{
//    int num1, num2, num3, num4, num5;
//    int sum = 0;
//
//    printf("5개의 정수를 입력하세요:\n");
//    scanf_s("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
//
//    if (num1 > 0) {
//        sum += num1;
//    }
//    if (num2 > 0) {
//        sum += num2;
//    }
//    if (num3 > 0) {
//        sum += num3;
//    }
//    if (num4 > 0) {
//        sum += num4;
//    }
//    if (num5 > 0) {
//        sum += num5;
//    }
//
//    printf("양수들의 합은 %d 입니다.\n", sum);
//
//	return 0;
//}

//int main() {
//    int n;
//
//    printf("정수를 입력하세요: ");
//    scanf_s("%d", &n);
//    
//    if (n >= 20 && n <= 30) {
//        printf("1\n");
//    }
//    else {
//        printf("0\n");
//    }
//
//    return 0;
//}

//int main() {
//    int n;
//
//    printf("양의 정수를 입력하세요: ");
//    scanf_s("%d", &n);
//
//    if (n % 2 == 0) {
//        printf("0\n");
//    }
//    else {
//        printf("1\n");
//    }
//
//    return 0;
//}


//int main() {
//    int n, m;
//
//    printf("두 개의 정수를 입력하세요: ");
//    scanf_s("%d %d", &n, &m);
//
//    if (n > m) {
//        printf("%d\n", n);
//    }
//    else {
//        printf("%d\n", m);
//    }
//
//    return 0;
//}


int main() {
    int a, b;

    printf("두 개의 서로 다른 양의 정수를 입력하세요: ");
    scanf_s("%d %d", &a, &b);

    if (a > b) {
        int 몫 = a / b;
        int 나머지 = a % b;
        printf("나눈 몫: %d, 나머지: %d\n", 몫, 나머지);
    }
    else {
        int 몫 = b / a;
        int 나머지 = b % a;
        printf("나눈 몫: %d, 나머지: %d\n", 몫, 나머지);
    }

    return 0;
}