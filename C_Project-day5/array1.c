//Array1.c파일
#include <stdio.h>

int main() {
	// 배열
	char s;			//문자
	char str[10];	//문자 배열 10개

	int num; //정수변수 1개
	int numbers[100];	//정수 변수 100개 (배열)
	// ex) 정수 변수 10개를 만들고자 한다
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
	int nn[10]; // 배열
	//배열사용이유 반복문 사용을 위해서(일반 변수명은 반복문 처리가 불가능)
	int nums[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++) {
		printf("%d", *nums + i);
	}



	return 0;

}