#include<stdio.h>

int main6() {
	// 1.
	int num1 = 27;

	printf("%d \n", num1 > 10);
	printf("%d \n", num1 != 5);

	printf(" % d \n", num1 >= 27);
	printf(" % d \n", num1 == 27);
	
	printf(" % d \n", num1 >= 27);
	printf(" % d \n", num1 <= 27);

	// 2.
	// 국어 86 영어 75 수학 88 사회 60 과학 96
	// 평균을 구하세요(소수점까지)

	int kor = 86, eng = 75, math = 88, sow = 60, sic = 96;

	int hap = kor + eng + math + sow + sic;

	printf("평균 : %lf\n", (double)hap/5);

	// 3.
	// 증감 연산자 사용
	int num = 5;
	// 각 num에 증감연산자를 적절히 사용하여 6 6 8 결과를 만들어보세요
	printf("num의 값 : %d \n", ++num);		//6
	printf("num의 값 : %d \n", num--);		//6
	printf("num의 값 : %d \n", num+=3);		//8


	
	
	
	
	
	
	return 0;

}