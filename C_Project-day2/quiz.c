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
	// ���� 86 ���� 75 ���� 88 ��ȸ 60 ���� 96
	// ����� ���ϼ���(�Ҽ�������)

	int kor = 86, eng = 75, math = 88, sow = 60, sic = 96;

	int hap = kor + eng + math + sow + sic;

	printf("��� : %lf\n", (double)hap/5);

	// 3.
	// ���� ������ ���
	int num = 5;
	// �� num�� ���������ڸ� ������ ����Ͽ� 6 6 8 ����� ��������
	printf("num�� �� : %d \n", ++num);		//6
	printf("num�� �� : %d \n", num--);		//6
	printf("num�� �� : %d \n", num+=3);		//8


	
	
	
	
	
	
	return 0;

}