//조건 연산자를 사용하는 수식의 결과를 출력하는 프로그램
#include <stdio.h>
int main(void){
    int x=1, y=8;
    int r1=0, r2=0, r3=0;

    r1 = (x<4) ? 5+10 : 5-1;
    r2 = y<4 || x <= 9 ? 8+3 : 9;
    r3 = !( x == 5 ) ? 100 : 200;
    //책에서는 r3 = !( x == 5 ) || 100 : 200; 이라고 나와있는데 이러면 삼항연산자가 되지않음
    //그래서 직접 수정한 버전으로 작성함

    printf("r1=%d\n",r1);
    printf("r2=%d\n",r2);
    printf("r3=%d\n",r3);
    return 0;
}