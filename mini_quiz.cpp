#include <stdio.h>

    int main() {
       //int num;
       // int thousands, hundreds, tens, ones;

       //printf("0부터 99999 사이의 정수를 입력하세요: ");
       //scanf_s("%d", &num);

        //thousands = (num / 1000) % 10; 
        //hundreds = (num / 100) % 10;   
        //tens = (num / 10) % 10;        
        //ones = num % 10;               

        //printf("만의 자리: %d\n", num / 10000);
        //printf("천의 자리: %d\n", thousands);
        //printf("백의 자리: %d\n", hundreds);
        //printf("십의 자리: %d\n", tens);
        //printf("일의 자리: %d\n", ones);

        //int totalSeconds;
        //int hours, minutes, seconds;

       
       // printf("초 단위로 시간을 입력하세요: ");
        //scanf_s("%d", &totalSeconds);

       
       //hours = totalSeconds / 3600;
       //minutes = (totalSeconds % 3600) / 60;
       //seconds = totalSeconds % 60;

        
       //printf("%d시간 %d분 %d초\n", hours, minutes, seconds);

       //int num;
       //int hundreds;
       
       //printf("10000부터 99999 사이의 정수를 입력하세요: ");
       //scanf_s("%d", &num);

       //hundreds = (num / 100) % 10;
        
       //printf("100의 자리: %d\n", hundreds);

        int num;
        int rounded;

        printf("10000부터 99999 사이의 정수를 입력하세요: ");
        scanf_s("%d", &num);

        rounded = ((num + 50) / 100) * 100;
        
        printf("반올림된 값: %d\n", rounded);






        return 0;
    }