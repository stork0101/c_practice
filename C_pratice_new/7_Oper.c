//관계 연산문의 결과를 출력하는 프로그램
#include <stdio.h>
int main(void){
    int x, y, z;

    x=5==5;
    y=5<=9;
    z=(5==5)+(5<=9);
    
    printf("x =%d\n",x);
    printf("y =%d\n",y);
    printf("z =%d\n",z);
    return 0;
}