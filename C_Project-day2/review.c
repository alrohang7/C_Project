#include <stdio.h> 

int main0() {
	// 출력 printf //주석(ctrl+shift+/) // /**/는 여러줄 주석 
	printf("hello wolrd\n");
	printf("주석은 //");
	/*
	안녕하세요
	반갑습니다
	여러줄 주석처리입니다
	*/ //ctrl + y 앞으로 복구

	// 변수(variable) : 저장공간
	// 변수 선언 (변수를 만드는 방법)
	// 자료형 변수명;
	char word;			// 문자형 변수 선언 
	int number;			// 정수형 변수
	double dnumber;		// 실수형 변수

	// 변수에 값을 대입 (대입 연산자)
	// 변수명 = 넣을값;
	word = 'Q';
	number = 3;
	dnumber = 3.14;
	// 변수 초기화 (변수 선언과 동시에 대입까지)
	char str2[256] = "hello woirld";

	// 변수 사용
	int number2 = number;
	printf("문자형은 %c\n", word);
	printf("문자형은 %d\n", number);
	printf("문자형은 %lf\n", dnumber);
	printf("문자형은 %s\n", str2);

	int x = 2;
	int y = 4;
	printf("합: %d\n", x + y);
	printf("차: %d\n", x - y);
	printf("곱 %d\n", x * y);
	printf("나누기: %lf\n", x / (double)y);
	printf("나머지: %d\n", x % y);












	return 0;
}