//nested for ��ø �ݺ���
#include<stdio.h>

//int main() {
//    for (int i = 2; i < 10; i++) {
//        printf("%d��:\n", i);
//
//        for (int j = 1; j < 10; j++) {
//            printf("%d x %d = %d\n", i, j, i * j);
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}

//int main() {
//	int n;
//    printf("�� ���� ���̸� �Է��ϼ���: ");
//    scanf_s("%d", &n);
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

int main() {
    int n;

    printf("������ �Է��ϼ���: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}