#include <stdio.h>

//int main() {
//    int n;
//
//    printf("정수를 입력하세요: ");
//    scanf_s("%d", &n);
//
//    printf("%d단:\n", n);
//
//    for (int i = 1; i <= 9; i++) {
//        printf("%d x %d = %d\n", n, i, n * i);
//    }
//
//    return 0;
//}

//int main() {
//    printf("알파벳 A부터 Z까지 출력:\n");
//
//    for (char letter = 'A'; letter <= 'Z'; letter++) {
//        printf("%c ", letter);
//    }
//
//    printf("\n");
//
//    return 0;
//}

//int main() {
//    int n;
//    int sum = 0;
//
//    printf("정수를 입력하세요: ");
//    scanf_s("%d", &n);
//
//    for (int i = 1; i <= n; i++) {
//        sum += i;
//    }
//
//    printf("1부터 %d까지의 누적 합은 %d 입니다.\n", n, sum);
//
//    return 0;
//}

//4번 
//int main() {
//    int n;
//    int min;
//
//    printf("정수를 입력하세요: ");
//    scanf_s("%d", &min);
//
//    while (1) {
//        printf("정수를 입력하세요: ");
//        scanf_s("%d", &n);
//
//        if (n == 0) {
//            break;
//        }
//
//        if (n < min) {
//            min = n;
//        }
//    }
//
//    if (min == 0) {
//        printf("입력된 정수가 없습니다.\n");
//    }
//    else {
//        printf("가장 작은 정수는 %d 입니다.\n", min);
//    }
//
//    return 0;
//}
