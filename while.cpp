//while문

#include<stdio.h>

//for-while : 조건의 차이  if-switch: 선택이냐 필수냐
//int a = 0;
//while (a < 5) {
//	printf("%d\n", a);
//	a++;
//}

//int b;
//while (1) {
//	printf("숫자 3을 입력해야 끝남!\n");
//	printf("숫자 입력:");
//	scanf_s("%d", &b);
//	if (b == 3) break;
//}

//do-while문

//int a = 10;
//do {
//	printf("countdown: %d!\n", a);
//	a--;
//} while (a > 0);
//printf("새해복많이받으세요!");

//int num = 1;
//while (num <= 10) {
//	printf("%d", num);
//	num++;
//}
//
//int sum = 0;
//int num;
//printf("정수를 입력하세요 (0 입력 시 종료):");
//while (1) {
//	scanf_s("%d", &num);
//	if (num == 0) {
//		break;
//	}
//	sum += num;
//}
//printf("누적 합: %d\n", sum);

//하나의 정수를 입력받고, 해당 정수의 약수를 출력하는 c프로그램 
//int main() {
//	int num,i=1;
//
//	printf("정수를 입력하세요:");
//	scanf_s("%d", &num);
//
//	printf("약수를 출력하세요:", num);
//	while (i <= num) {
//		if (num % i == 0) {
//			printf("%d ", i);
//		}
//		i++;
//	}
//
//
//	return 0;
//}

//여러 정수를 입력받고, 0을 입력할 때까지 입력한 정수들의 합을 계산하여 출력하는 c프로그램 

//int main() {
//    int num, sum = 0;
//
//    printf("정수를 입력하세요: ");
//
//    while (1) {
//        scanf_s("%d", &num);
//        if (num == 0) {
//            break;
//        }
//        sum += num;
//    }
//
//    printf("입력한 정수들의 합: %d\n", sum);
//
//    return 0;
//}


// 하나의 기준 정수를 입력받고, 사용자가 기준 정수를 맞출 때까지 "up" 또는 "down"을 출력하는 c프로그램

//int main() {
//	int num, guess;
//
//	printf("기준 정수를 입력하세요: ");
//	scanf_s("%d", &num);
//	
//	printf("추측 정수는; ");
//
//    while (1) {
//        scanf_s("%d", &guess);
//
//        if (guess == num) {
//            printf("correct!\n");
//            break;
//        }
//        else if (guess < num) {
//            printf("up\n");
//        }
//        else {
//            printf("down\n");
//        }
//    }
//
//	return 0;
//}

// 두 개의 양의 정수 n과 m을 입력받고, 이 두 수의 최대공약수를 계산하여 출력하는 c프로그램 
//int main() {
//	int n, m, gcd;
//
//	printf("두 개의 양의 정수를 입력하세요:  ");
//	scanf_s("%d %d", &m, & n);
//    
//	int i;
//	i= (n < m) ? n : m;
//
//    while (i > 0) {
//        if (n % i == 0 && m % i == 0) {
//            gcd = i;
//            break;
//        }
//        i--;
//    }
//
//    printf("%d", gcd);
//    
//
//	return 0;
//}

// 하나의 정수 n을 입력받아,n부터 1까지의 숫자로 이루어진 삼각형을 출력하는 c프로그램

int main() {
    int choice, num1, num2;

    while (1) {
        printf("다음 중 고르시오:\n");
        printf("1. 더하기\n2. 빼기\n3. 곱하기\n4. 나누기\n5. 종료\n");
        printf("너의 선택은: ");
        scanf_s("%d", &choice);

        if (choice == 5) {
            break; 
        }

        printf("두 정수를 입력하세요: ");
        scanf_s("%d %d", &num1, &num2);

        switch (choice) {
        case 1:
            printf("결과: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("결과: %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("결과: %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("결과: %d / %d = %d\n", num1, num2, num1 / num2);
            }
            else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
        }
    }
    printf("계산 종료.\n");


    return 0;
}