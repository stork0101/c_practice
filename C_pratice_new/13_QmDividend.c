//임의의 정수 데이터 3개를 입력받고, 3개의 데이터 중에서 가장 큰 데이터
//가장 작은 데이터를 출력
#include <stdio.h>
int main(void){
    int a,b,c;
    int max, min;
    printf("1 2 3 데이터를 입력: ");
    scanf("%d %d %d",&a, &b, &c);

    if (a>b&&a>c)
        max = a;
    else if(b > c)
        max = b;
    else
        max = c;
    
    if (a<b&&a<c)
        min = a;
    else{
        if (b<c)
            min = b;
        else
            min = c;
    }
    printf("%d %d %d 중에서 최대값 %d\n",a,b,c,max);
    printf("%d %d %d 중에서 최소값 %d\n",a,b,c,min);
    return 0;
}