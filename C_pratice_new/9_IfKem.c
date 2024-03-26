//3개의 점수 데이터에 대한 총점과 평균을 계산하고
//평균에 의해 각각 다른 메세지를 출력하는 프로그램
#include <stdio.h>
int main(void){
    int kor, eng, mat, sum;
    float ave;

    printf("국어, 영어, 수학 점수를 입력하세요: ");
    scanf("%d %d %d",&kor, &eng, &mat);

    sum = kor + eng + mat ;
    ave = sum / 3.0;

    printf("국어 점수 = %d\n, 영어 점수 = %d\n, 수학 점수 = %d\n",kor, eng ,mat);
    printf("총점 값은 = %d\n, 평균 값은 = %f\n",sum, ave);
    if(ave<60)
    printf("평균 점수가 %f점, 60미만이므로 C언어 경고 F\n", ave);
    else
    printf("평균 점수가 %f점, 60이상이므로 C언어 PASS\n", ave);
    return 0;
}