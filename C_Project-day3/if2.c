#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main2() {
	// if��
	// if() {} else{}
	int age;
	printf("���̸� �Է��ϼ���>>");
	scanf("%d", &age);


	if (age < 20) {
		//()������ ������ ����
		printf("�̼��������Դϴ�");
	}
	else {
		// ������ Ʋ���� ����
		printf("�����Դϴ�");
	}

	printf("\n");			//if���̴ϱ� ������ ����


	return 0;

}