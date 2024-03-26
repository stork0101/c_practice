#include <stdio.h>
#define SEC_PER_MINUTE 60   // 1분은 60초
#define MINUTE_PER_HOUR 60  // 1시간은 60분

int main(void){
    int in_sec, hour, minute, second, temp, temp2;

    printf("입력 초의 값? ");

    scanf_s("%d", &in_sec);   // 입력되는 초의 값을 읽는다.

    second = in_sec % SEC_PER_MINUTE;   // 남은 초의 값을 계산
    temp = in_sec / SEC_PER_MINUTE;     // 입력된 초의 값을 분으로 계산
    minute = temp % MINUTE_PER_HOUR;    // 남은 분의 값을 계산
    hour = temp / MINUTE_PER_HOUR;      // 계산된 분의 값을 시간으로 계산

    temp2 = hour*60*60 +minute*60 +second;    //확인을 위하여 다시 초 값으로 계산

    printf("입력된 %d초는 \n", in_sec);
    printf("%d시간 %d분 %d초입니다. \n", hour, minute, second);
    printf("확인을 위한 초의 값은 %d초\n", temp2);

    return 0;    
}