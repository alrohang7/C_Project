#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main4() {
	// 정수를 입력 받아서 홀수인지 짝수인지 판별

	int a;

	printf("정수를 입력하세요");
	scanf("%d", &a);

	if (a % 2 == 0) {
		printf("짝수입니다");
	}
	else {
		printf("홀수입니다");
	}
	printf("\n");

	int num;
	printf("나이를 입력해주세요>>");
	scanf("%d", &num);
	
	if (a < 6 || a >= 65) {
		printf("0원입니다");
	}
	else if (a >= 6 || a  < 13 ) {
		printf("500원입니다");
	}
	else if (a >= 13 || a < 19) {
		printf("900원입니다");
	}
	else {
		printf("1250원입니다");

	}








	return 0;
}