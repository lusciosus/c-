#include <stdio.h>

    int main() {
       //int num;
       // int thousands, hundreds, tens, ones;

       //printf("0���� 99999 ������ ������ �Է��ϼ���: ");
       //scanf_s("%d", &num);

        //thousands = (num / 1000) % 10; 
        //hundreds = (num / 100) % 10;   
        //tens = (num / 10) % 10;        
        //ones = num % 10;               

        //printf("���� �ڸ�: %d\n", num / 10000);
        //printf("õ�� �ڸ�: %d\n", thousands);
        //printf("���� �ڸ�: %d\n", hundreds);
        //printf("���� �ڸ�: %d\n", tens);
        //printf("���� �ڸ�: %d\n", ones);

        //int totalSeconds;
        //int hours, minutes, seconds;

       
       // printf("�� ������ �ð��� �Է��ϼ���: ");
        //scanf_s("%d", &totalSeconds);

       
       //hours = totalSeconds / 3600;
       //minutes = (totalSeconds % 3600) / 60;
       //seconds = totalSeconds % 60;

        
       //printf("%d�ð� %d�� %d��\n", hours, minutes, seconds);

       //int num;
       //int hundreds;
       
       //printf("10000���� 99999 ������ ������ �Է��ϼ���: ");
       //scanf_s("%d", &num);

       //hundreds = (num / 100) % 10;
        
       //printf("100�� �ڸ�: %d\n", hundreds);

        int num;
        int rounded;

        printf("10000���� 99999 ������ ������ �Է��ϼ���: ");
        scanf_s("%d", &num);

        rounded = ((num + 50) / 100) * 100;
        
        printf("�ݿø��� ��: %d\n", rounded);






        return 0;
    }