#include <stdio.h>

int main5() {
	// �� ������
	int num1 = 10, num2 = 11;

	printf("== : %d \n", num1 == num2);
	printf("> : %d \n", num1 > num2);
	printf("< : %d \n", num1 < num2);
	printf(">= : %d \n", num1 >= num2);
	printf("<= : %d \n", num1 <= num2);
	printf("!= : %d \n", num1 != num2);

	// ���� ������
	// &&, ||, ! (and, or, not)
	// and ������ ��� ������ 1 �ϳ��� Ʋ���� 0
	printf("&& : %d\n", num1 != num2 && num1 == 10);	//������ �� �� �������� 1
	// or ���� �� �ϳ��� ������ 1 �Ѵ� �ƴϸ� 0
	printf("|| : %d\n", num1 == num2 || num1 == 11);
	// not �ݴ��
	printf("! : %d\n", !(num1 == 10));

	
	
	
	
	return 0;

}