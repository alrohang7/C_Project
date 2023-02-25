#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main3() {
	int num = 10;
	if (num < 10) {
		printf("10보다 작다");
	}
	else if (num < 100) {			// 위에 if가 틀렸을 경우 검사
		printf("100보다 작다");
	}
	else if (num < 1000) {			// 위에 if가 틀렸을 경우 검사
		printf("1000보다 작다");
	}
	else {							// 다 틀렸을때
		printf("1000이상이다");
	}
	printf("\n");


	int age = 21;
	if (age > 20) {
		printf("성인");
	}
	else if (age >= 14) {
		printf("청소년");
	}
	else  {
		printf("미성년자");
	}
	
	printf("\nQuiz\n");
	int score = 0;
	printf("점수를 입력하세요");
	scanf("%d", &score);
	// 90점 이상은 A학점
	// 80점 이상은 B학점
	// 70점 이상은 C학점
	// 60점 이상은 D학점
	// 그 이하는 F학점

	if (score >= 90) {
		printf("A학점입니다");
	}
	else if (score >= 80) {
		printf("B학점입니다");

	}
	else if (score >= 70) {
		printf("C학점입니다");
	}
	else if (score >= 60) {
		printf("D학점입니다");

	}
	else {
		printf("F학점입니다");
	}
	
	
	return 0;

}