#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//윤년 : 연도가 4의 배수이면서 100의 배ㅑ수가 아닌 년도 or 400의 배수인 년도
	int year;
	printf("년도를 입력하세요>>");
	scanf("%d", &year);
	if (year % 4 == 0 & year % 100 != 0 || year % 400 == 0) {
		printf("윤년입니다");

	}
	else {
		printf("윤년이 아닙니다");
	}
	


	
	
	
	return 0;

}