#include <stdio.h>
int main(void){
    int x=3, y=2;
    float a=3.0, b=2.0;
    int result, temp;
    float result_2, result_3;

    result = x / y; //정수형과 정수형의 연산
    result_2 = a / y;   //정수형과 실수형의 혼합 연산
    result_3 = a / b;   //실수형과 실수형의 연산
    temp = a / b;   //실수형과 실수형의 여난, temp가 정수형

    printf("3 / 2의 값은 = %d\n", result);
    printf("3.0 / 2의 값은 = %f\n", result_2);
    printf("3.0 / 2.0의 결과 값은 = %f\n", result_3);
    printf("3.0 / 2.0의 결과 값은 = %d\n", temp);
    return 0;
}