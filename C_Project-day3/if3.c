#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main3() {
	int num = 10;
	if (num < 10) {
		printf("10���� �۴�");
	}
	else if (num < 100) {			// ���� if�� Ʋ���� ��� �˻�
		printf("100���� �۴�");
	}
	else if (num < 1000) {			// ���� if�� Ʋ���� ��� �˻�
		printf("1000���� �۴�");
	}
	else {							// �� Ʋ������
		printf("1000�̻��̴�");
	}
	printf("\n");


	int age = 21;
	if (age > 20) {
		printf("����");
	}
	else if (age >= 14) {
		printf("û�ҳ�");
	}
	else  {
		printf("�̼�����");
	}
	
	printf("\nQuiz\n");
	int score = 0;
	printf("������ �Է��ϼ���");
	scanf("%d", &score);
	// 90�� �̻��� A����
	// 80�� �̻��� B����
	// 70�� �̻��� C����
	// 60�� �̻��� D����
	// �� ���ϴ� F����

	if (score >= 90) {
		printf("A�����Դϴ�");
	}
	else if (score >= 80) {
		printf("B�����Դϴ�");

	}
	else if (score >= 70) {
		printf("C�����Դϴ�");
	}
	else if (score >= 60) {
		printf("D�����Դϴ�");

	}
	else {
		printf("F�����Դϴ�");
	}
	
	
	return 0;

}