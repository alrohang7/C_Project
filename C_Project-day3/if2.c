#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main2() {
	// if문
	// if() {} else{}
	int age;
	printf("나이를 입력하세요>>");
	scanf("%d", &age);


	if (age < 20) {
		//()조건이 맞을때 실행
		printf("미성ㄴ연자입니다");
	}
	else {
		// 조건이 틀릴때 실행
		printf("성인입니다");
	}

	printf("\n");			//if밖이니까 무족건 실행


	return 0;

}