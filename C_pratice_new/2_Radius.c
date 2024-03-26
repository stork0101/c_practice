#include <stdio.h>
int main(void){
    int radius;
    float circumference, area;

    printf("반지름 값을 입력하세요: ");
    scanf("%d",&radius);

    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;

    printf("반지름 값 = %d\n",radius);
    printf("원의 둘레 = %f\n",circumference);
    printf("원의 면적 = %f\n",area);

    return 0;
}