#include <stdio.h>
#define PI 3.141592
int main(void){
    float radius;
    float circumference;
    float area;

    radius = 15.5;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("원의 반지름 = %f\n", radius);
    printf("원의 둘레 = %f\n", circumference);
    printf("원의 넓이 = %f\n", area);
    return 0;
}