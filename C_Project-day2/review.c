#include <stdio.h> 

int main0() {
	// ��� printf //�ּ�(ctrl+shift+/) // /**/�� ������ �ּ� 
	printf("hello wolrd\n");
	printf("�ּ��� //");
	/*
	�ȳ��ϼ���
	�ݰ����ϴ�
	������ �ּ�ó���Դϴ�
	*/ //ctrl + y ������ ����

	// ����(variable) : �������
	// ���� ���� (������ ����� ���)
	// �ڷ��� ������;
	char word;			// ������ ���� ���� 
	int number;			// ������ ����
	double dnumber;		// �Ǽ��� ����

	// ������ ���� ���� (���� ������)
	// ������ = ������;
	word = 'Q';
	number = 3;
	dnumber = 3.14;
	// ���� �ʱ�ȭ (���� ����� ���ÿ� ���Ա���)
	char str2[256] = "hello woirld";

	// ���� ���
	int number2 = number;
	printf("�������� %c\n", word);
	printf("�������� %d\n", number);
	printf("�������� %lf\n", dnumber);
	printf("�������� %s\n", str2);

	int x = 2;
	int y = 4;
	printf("��: %d\n", x + y);
	printf("��: %d\n", x - y);
	printf("�� %d\n", x * y);
	printf("������: %lf\n", x / (double)y);
	printf("������: %d\n", x % y);












	return 0;
}