#include <stdio.h>

int main(){
    printf("char: %d, short: %d, int %d, long: %d, long long: %d\n",
        sizeof(char),   //1 sizeof로 char의 자료형의 크기를 구함
        sizeof(short),  //2 sizeof로 short의 자료형의 크기를 구함
        sizeof(int),    //4 sizeof로 int 자료형의 크기를 구함
        sizeof(long),   //4 sizeof로 long의 자료혀으이 크기를 구함
        sizeof(long long)   //8 sizeof로 long long 자료형의 크기를 구함
        );

    return 0;
}