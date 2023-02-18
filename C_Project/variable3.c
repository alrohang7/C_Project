#include <stdio.h>

int main4() {
	// 이름,년도.월,일 변수로
	
	char a[] = "김경모";
	int b = 2023;
	int c = 02;
	int d = 18;
	char e[] = "printf로 문자열 출력";
	printf("작성자: %s\n", a);
	printf("작성일: %d-%d-%d\n", b, c, d);
	printf("문자변수:%s", e);


	



	return 0;
}