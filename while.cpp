//while��

#include<stdio.h>

//for-while : ������ ����  if-switch: �����̳� �ʼ���
//int a = 0;
//while (a < 5) {
//	printf("%d\n", a);
//	a++;
//}

//int b;
//while (1) {
//	printf("���� 3�� �Է��ؾ� ����!\n");
//	printf("���� �Է�:");
//	scanf_s("%d", &b);
//	if (b == 3) break;
//}

//do-while��

//int a = 10;
//do {
//	printf("countdown: %d!\n", a);
//	a--;
//} while (a > 0);
//printf("���غ����̹�������!");

//int num = 1;
//while (num <= 10) {
//	printf("%d", num);
//	num++;
//}
//
//int sum = 0;
//int num;
//printf("������ �Է��ϼ��� (0 �Է� �� ����):");
//while (1) {
//	scanf_s("%d", &num);
//	if (num == 0) {
//		break;
//	}
//	sum += num;
//}
//printf("���� ��: %d\n", sum);

//�ϳ��� ������ �Է¹ް�, �ش� ������ ����� ����ϴ� c���α׷� 
//int main() {
//	int num,i=1;
//
//	printf("������ �Է��ϼ���:");
//	scanf_s("%d", &num);
//
//	printf("����� ����ϼ���:", num);
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

//���� ������ �Է¹ް�, 0�� �Է��� ������ �Է��� �������� ���� ����Ͽ� ����ϴ� c���α׷� 

//int main() {
//    int num, sum = 0;
//
//    printf("������ �Է��ϼ���: ");
//
//    while (1) {
//        scanf_s("%d", &num);
//        if (num == 0) {
//            break;
//        }
//        sum += num;
//    }
//
//    printf("�Է��� �������� ��: %d\n", sum);
//
//    return 0;
//}


// �ϳ��� ���� ������ �Է¹ް�, ����ڰ� ���� ������ ���� ������ "up" �Ǵ� "down"�� ����ϴ� c���α׷�

//int main() {
//	int num, guess;
//
//	printf("���� ������ �Է��ϼ���: ");
//	scanf_s("%d", &num);
//	
//	printf("���� ������; ");
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

// �� ���� ���� ���� n�� m�� �Է¹ް�, �� �� ���� �ִ������� ����Ͽ� ����ϴ� c���α׷� 
//int main() {
//	int n, m, gcd;
//
//	printf("�� ���� ���� ������ �Է��ϼ���:  ");
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

// �ϳ��� ���� n�� �Է¹޾�,n���� 1������ ���ڷ� �̷���� �ﰢ���� ����ϴ� c���α׷�

int main() {
    int choice, num1, num2;

    while (1) {
        printf("���� �� ���ÿ�:\n");
        printf("1. ���ϱ�\n2. ����\n3. ���ϱ�\n4. ������\n5. ����\n");
        printf("���� ������: ");
        scanf_s("%d", &choice);

        if (choice == 5) {
            break; 
        }

        printf("�� ������ �Է��ϼ���: ");
        scanf_s("%d %d", &num1, &num2);

        switch (choice) {
        case 1:
            printf("���: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("���: %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("���: %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("���: %d / %d = %d\n", num1, num2, num1 / num2);
            }
            else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
        }
    }
    printf("��� ����.\n");


    return 0;
}