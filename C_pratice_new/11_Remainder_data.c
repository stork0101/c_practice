//입력 데이터가 홀수인지 짝수인지를 나타내는 메세질을 출력하는 프로그램
#include <stdio.h>

int main(void){
    int in_data, remainder_data;

    printf("임의의 데이터를 입력하세요: ");
    scanf("%d", &in_data);

    remainder_data = in_data % 2;

    if (remainder_data == 0)
        printf("입력한 데이터 %d은 짝수입니다.\n", in_data);
    else if (remainder_data != 0)
        printf("입력한 데이터 %d은 홀수입니다.\n", in_data);

    return 0;
}