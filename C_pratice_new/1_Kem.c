//국어, 영어, 수학, 점수의 총점과 평균을 계산하는 프로그램
#include <stdio.h>
int main(void){
    int kor, eng, mat, sum; 
    float ave;              
    printf("값을 입력하세요: ");
    scanf("%d %d %d", &kor, &eng, &mat);

    sum = kor + eng + mat;
    ave = sum / 3.0;

    printf("국어 점수 = %d\n",kor);
    printf("영어 점수 = %d\n수학 점수 %d\n",eng,mat);
    printf("총점 값은 = %d\n평균 값은 = %f\n", sum, ave);
    return 0;

}