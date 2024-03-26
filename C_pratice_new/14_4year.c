//임의의 연도를 입력받고, 윤년, 평년 여부를 출력
#include <stdio.h>
int main(void){
    int year;
    printf("임의읭 연도 데이터를 입력: ");
    scanf("%d", &year);

    if (year % 4 != 0)
        printf("입력 연도 %d는 평년입니다.\n", year);
    else{
        if (year % 100 == 0)
            printf("입력 연도 %d는 윤년입니다.\n", year);
        else
            printf("입력 연도 %d는 평년입니다.\n", year);
    }
    /*
    if(year%4 == 0 && year%100 == 0   ||   year%400 == 0)
        printf("입력 연도 %d는 윤년입니다.\n",year);
    eles
        printf("입력 연도 %d는 평년입니다.\n",year);
    */
    return 0;
}