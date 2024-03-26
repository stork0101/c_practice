//나머지 연산자를 사용하여 입력한 초의 값을 시간, 분, 초로 변환하는 프로그램
#include <stdio.h>
#define SEC_PER_MINUTE 60;
#define MINUTE_PER_HOUR 60;

int main(void){
    int in_sec, hour, minute, second, temp, temp2;

    printf("입력 초의 값? ");
    scanf("%d", &in_sec);

    second = in_sec % SEC_PER_MINUTE;
    temp = in_sec / SEC_PER_MINUTE;
    minute = temp % MINUTE_PER_HOUR;
    hour = temp / MINUTE_PER_HOUR;

    temp2 = hour*60*60+minute*60+second;

    printf("입력한 %d초는\n", in_sec);
    printf("%d시간 %d분 %d초입니다.\n", hour, minute, second);
    printf("확인을 위한 초의 값은 %d초\n", temp2);
    
    return 0;
}