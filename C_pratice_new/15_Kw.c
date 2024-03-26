//각각의 종별에 해당하는 전기 요금을 계산
#include <stdio.h>
int main(void){
    int id_no, grade, quantity, unit_cost, temp, tax, gross;
    id_no = 1111, grade = 2, quantity = 1000;

    if(grade == 1) unit_cost = 50;
    else if(grade == 2) unit_cost = 30;
    else if(grade == 3) unit_cost = 20;
    else printf("종별을 잘못 입력했습니다.\n");

    temp = quantity * unit_cost;
    tax = temp * 0.1;
    gross = temp + tax;

    printf("사용자 번호는 %d입니다.",id_no);
    printf("전기 요금 계산 금액은 %d입니다.\n", temp);
    printf("세금은 %d입니다.\n",tax);
    printf("총 납부할 전기 요금의 금액은 %d입니다.\n",gross);

    return 0;
}