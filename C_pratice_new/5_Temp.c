//대입 연산자의 사용 형태에 따른 결과를 출력하는 프로그램
#include <stdio.h>
int main(void){
    int x;
    int y;
    int test_1, test_2, test_3, temp;

    x = 10;
    y = 20;

    test_1 = x + 40;
    test_2 = x + y;
    test_3 = y + (temp = x + 30);

    printf("%d\n%d\n%d\n%d\n",test_1,test_2,temp,test_3);
    return 0;
}