//nested for 중첩 반복문
#include<stdio.h>

//int main() {
//    for (int i = 2; i < 10; i++) {
//        printf("%d단:\n", i);
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
//    printf("한 변의 길이를 입력하세요: ");
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

    printf("정수를 입력하세요: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}