#include<stdio.h>

//�迭�� 5���� ������ �Է¹ް� �����, ��պ��� ū ���� ���
//�迭�� 5���� ������ �Է¹ް� �����, ���� ū ���� �ι�° ū �� ���
int main() {
    int numbers[5];
    int sum = 0;
    double average;

    
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &numbers[i]);
        sum += numbers[i];
    }

   
    average = (double)sum / 5;

   
    printf("��պ��� ū ������ �Է��ϼ��� (%.2f):\n", average);
    for (int i = 0; i < 5; i++) {
        if (numbers[i] > average) {
            printf("%d\n", numbers[i]);
        }
    }

    return 0;
}