#include <stdio.h>

//int main() {
//    int num1, num2;
//
//    printf("ù ��° ���� ������ �Է��ϼ���: ");
//    scanf_s("%d", &num1);
//    printf("�� ��° ���� ������ �Է��ϼ���: ");
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
//    printf("5���� ������ �Է��ϼ���:\n");
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
//    printf("������� ���� %d �Դϴ�.\n", sum);
//
//	return 0;
//}

//int main() {
//    int n;
//
//    printf("������ �Է��ϼ���: ");
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
//    printf("���� ������ �Է��ϼ���: ");
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
//    printf("�� ���� ������ �Է��ϼ���: ");
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

    printf("�� ���� ���� �ٸ� ���� ������ �Է��ϼ���: ");
    scanf_s("%d %d", &a, &b);

    if (a > b) {
        int �� = a / b;
        int ������ = a % b;
        printf("���� ��: %d, ������: %d\n", ��, ������);
    }
    else {
        int �� = b / a;
        int ������ = b % a;
        printf("���� ��: %d, ������: %d\n", ��, ������);
    }

    return 0;
}