//임의의 정수 데이터 2개를 입력받고, 2개의 데이터 중에서 큰 데이터를
//작은 데이터로 나누는 나눗셈을 실행하여 정수와 실수 결과를 출력한다.
#include <stdio.h>
int main(void){
    int data_1, data_2;
    int dividend, divisor;
    int quotient;
    float division_result;

    printf("첫 번째 데이터를 입력: ");
    scanf("%d", &data_1);
    printf("두 번째 데이터를 입력: ");
    scanf("%d", &data_2);

    if(data_1 > data_2){
        dividend = data_1;
        divisor = data_2;
    }
    else{
        dividend = data_2;
        divisor = data_1;
    }
    if(divisor == 0)
        printf("나눗수가 0이므로 나눗셈을 처리하지 못함\n");
    else{
        quotient = dividend / divisor;                      //정수형 출력
        division_result =(float)dividend / divisor;         //실수형 출력
    }
    printf("입력 데이터_1 = %d\n입력 데이터_2 = %d\n", data_1, data_2);
    printf("정수형 출력 결과 몫 = %d\n", quotient);
    printf("실수형 출력 결과 = %f\n", division_result);

    return 0;
}