#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main4() {
	// ������ �Է� �޾Ƽ� Ȧ������ ¦������ �Ǻ�

	int a;

	printf("������ �Է��ϼ���");
	scanf("%d", &a);

	if (a % 2 == 0) {
		printf("¦���Դϴ�");
	}
	else {
		printf("Ȧ���Դϴ�");
	}
	printf("\n");

	int num;
	printf("���̸� �Է����ּ���>>");
	scanf("%d", &num);
	
	if (a < 6 || a >= 65) {
		printf("0���Դϴ�");
	}
	else if (a >= 6 || a  < 13 ) {
		printf("500���Դϴ�");
	}
	else if (a >= 13 || a < 19) {
		printf("900���Դϴ�");
	}
	else {
		printf("1250���Դϴ�");

	}








	return 0;
}