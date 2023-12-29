#include<stdio.h>

//1.1부터 100까지의 숫자 중 짝수만을 출력하는 c프로그램 

//int main() {
//    int i;
//    for (i = 1; i <= 100; i++) {
//        if (i % 2 == 0) {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//}

//2. 10부터 1까지의 숫자를 역순으로 출력하는 c프로그램

//int main() {
//    int i;
//    for (i = 10; i > 0; i--) {
//        printf("%d\n", i);
//    }
//    return 0;
//}

//3. 사용자로부터 입력받은 수(N)의 배수를 1부터 100까지 출력하는 c프로그램 

//int main() {
//    int N, i;
//
//    printf("숫자를 입력하세요: ");
//    scanf_s("%d", &N);
//
//    for (i = 1; i <= 100; i++) {
//        if (i % N == 0) {
//            printf("%d\n", i);
//        }
//    }
//
//    return 0;
//}

//4. 주어진 숫자(N)만큼의 줄에 걸쳐 별(*) 패턴을 출력하는 c프로그램 

//int main() {
//    int N, i, j;
//
//    printf("숫자를 입력하세요: ");
//    scanf_s("%d", &N);
//
//    for(i = 1; i <= N; i++) {
//        for (j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//5. 1부터 100까지의 수 중 짝수의 합과 홀수의 합을 각각 계산하여 출력하는 c프로그램
//int main() {
//	int evensum=0, oddsum=0, i;
//
//	for (i = 2; i <= 100; i += 2) {
//		evensum += i;
//	}
//	for (i = 1; i <= 100; i += 2) {
//		oddsum += i;
//	}
//
//	printf("짝수의 합 : %d\n", evensum);
//	printf("홀수의 합 : %d\n", oddsum);
//
//	return 0;
//}
