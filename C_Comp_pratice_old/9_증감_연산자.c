// 증감 연산자의 사용 방법에 따른 처리 절차를 확인하는 프로그램
#include <stdio.h>

int main(void) {
	int a = 10, b = 10, x = 0, y = 0;

	x = ++a;	// 변수 a 값을 증가 후 대입
	y = b++;	// 변수 b 값을 대입 후 증가

	printf("x = ++a의 결과 : x = %d  a = %d\n", x, a);
	printf("y = b++의 결과 : y = %d  b = %d\n", y, b);

	x = --a;	// 변수 a 값을 감소 후 대입
	y = b--;	// 변수 b 값을 대입 후 감소

	printf("x = --a의 결과 : x = %d  a = %d\n", x, a);
	printf("y = b--의 결과 : y = %d  b = %d\n", y, b);

	return 0;
}