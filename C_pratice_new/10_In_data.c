//임의의 데이터에 대해 양수인지 음수인지를 나타내는 메세지를 출력하고
//음수인 경우에는 절대값으로 변경하여 출력하는 프로그램
#include <stdio.h>
int main(void){
    int in_data, final_data;
    printf("임의의 데이터를 입력하세요: ");
    scanf("%d", &in_data);

    if (in_data == 0)
        printf("입력한 데이터 %d은 0입니다.\n", in_data);
    else if (in_data > 0 ){
        printf("입력한 데이터 %d은 양수입니다.\n", in_data);
        final_data = in_data;}
    else {
        printf("입력한 데이터 %d은 음수입니다.\n", in_data);
        final_data = in_data *-1;}
    
    printf("절댓값은 %d입니다\n", final_data);
    return 0;
        
}