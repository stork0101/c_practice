#include <stdio.h>
#define PI 3.141592

void main(){
    float radius;
    float circumference;
    float area;

    radius = 15.5;
    circumference = 2*PI*radius;
    area = PI * radius * radius;

    printf("원의 반지름 = %f\n원의 둘레 = %f\n원의 넓이 = %f\n",radius, circumference, area);
}