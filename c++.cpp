#include<stdio.h>

//배열에 5개의 정수를 입력받고 저장뒤, 평균보다 큰 정수 출력
//배열에 5개의 정수를 입력받고 저장뒤, 제일 큰 수와 두번째 큰 수 출력
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

   
    printf("평균보다 큰 정수를 입력하세요 (%.2f):\n", average);
    for (int i = 0; i < 5; i++) {
        if (numbers[i] > average) {
            printf("%d\n", numbers[i]);
        }
    }

    return 0;
}