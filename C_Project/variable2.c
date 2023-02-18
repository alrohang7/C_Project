#include <stdio.h>

int main3() {
	// 변수에는 종류가 있다(자료형)
	// 한 글자 변수, 숫자 변수, 소수점있는 숫자 변수, 여러 글자 변수

	// 문자 변수(한글자)
	char one = 'A';					//%c
	
	// 정수 변수(소수점 없는 숫자)
	int num = 123;					//%d

	// 실수 변수(소수점있는 숫자)
	double num2 = -3.14;			//%lf

	// 문자열 변수(여러 글자)
	char mul[100] = "99글자까지 저장 가능합니다";		//%s

	// 자료형 사용 이유
	// 1. 개발자의 의도 명확하게 전달
	// 2. 개발자의 실수를 컴파일러(visual studio)가 검출해내기 위해서
	// 3. 자료형마다 공간의 크기가 다름(최적화)




	return 0;
}