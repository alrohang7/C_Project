#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1() {
	// 조건문 IF : 조건에 따라서 내 프로그램을 다르게 동작시켜야할 때
	int num = 3;

	// 삼항 연산자
	// (num < 3) ? printf("3보다 작습니다") : printf("3보다 큽니다");

	// if문
	// if(){}
	// ()안에 있는 조건이 맞으면 {}를 실행 아니면 무시
	if (num < 3) {
		// 조건이 맞을때만 실행하는 코드
		printf("3보다 작습니다.");

		
	}

	if (num >= 3) {
		//num이 3보다 크거나 같은 때(맞을 때)만 실행할 코드
		printf("3이상입니다");
	}

	int age = 10;
	// 나이가 20이상일때만 성인입니다 출력

	if (age >= 20) {
		printf("성인입니다");

	}
	




	return 0;
}