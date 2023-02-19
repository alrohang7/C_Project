#include <stdio.h>

int main5() {
	// 비교 연산자
	int num1 = 10, num2 = 11;

	printf("== : %d \n", num1 == num2);
	printf("> : %d \n", num1 > num2);
	printf("< : %d \n", num1 < num2);
	printf(">= : %d \n", num1 >= num2);
	printf("<= : %d \n", num1 <= num2);
	printf("!= : %d \n", num1 != num2);

	// 관계 연산자
	// &&, ||, ! (and, or, not)
	// and 양쪽이 모두 맞으면 1 하나라도 틀리면 0
	printf("&& : %d\n", num1 != num2 && num1 == 10);	//양쪽이 둘 다 맞을때만 1
	// or 양쪽 중 하나라도 맞으면 1 둘다 아니면 0
	printf("|| : %d\n", num1 == num2 || num1 == 11);
	// not 반대로
	printf("! : %d\n", !(num1 == 10));

	
	
	
	
	return 0;

}