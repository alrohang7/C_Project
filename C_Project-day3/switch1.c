#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//���� : ������ 4�� ����̸鼭 100�� ������� �ƴ� �⵵ or 400�� ����� �⵵
	int year;
	printf("�⵵�� �Է��ϼ���>>");
	scanf("%d", &year);
	if (year % 4 == 0 & year % 100 != 0 || year % 400 == 0) {
		printf("�����Դϴ�");

	}
	else {
		printf("������ �ƴմϴ�");
	}
	


	
	
	
	return 0;

}