#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main1() {
	// 제어문 : 조건문, 반복문, 기타제어문
	// 제어문 : 원래 코드는 위에서 아래로, 왼쪽에서 오른쪽으로 진행이 되지만 그 흐름을 바꿀 수 있는 문법
	// if, switch, for, while, break, continue, goto, doowhile

	// 조건문 if~else if~else
	// if(){} :()에는 조건식을, {}에는 조건이 맞을때만 실행할 코드를 적으면 됨
	int target = 6;
	if (target == 5) {
		printf("5는5와같다\n");

	}
	else if (target != 5) {
		printf("5는5와같지 않다\n");
	}
	else {
		printf("모르겠다\n");
	}
	
	// while
	// while 플래그 i가 필요함, 중복코드를 관리
	int i = 0;
	while (i<3) {
		printf("반복횟수 %d번, i+1");	//i보다  1 더 큰 숫자 출력

		i++;							//변수 i에 있는 값을 1 증가 시킴( i = i + 1;)
	}
	for (int i = 0; i < 3; i++) {
		printf("\n반복횟수 %d회\n", i + 1); //반복하고자하는 코드만 남음
	}







	return 0;
}