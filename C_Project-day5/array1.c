//Array1.c����
#include <stdio.h>

int main() {
	// �迭
	char s;			//����
	char str[10];	//���� �迭 10��

	int num; //�������� 1��
	int numbers[100];	//���� ���� 100�� (�迭)
	// ex) ���� ���� 10���� ������� �Ѵ�
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
	int nn[10]; // �迭
	//�迭������� �ݺ��� ����� ���ؼ�(�Ϲ� �������� �ݺ��� ó���� �Ұ���)
	int nums[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++) {
		printf("%d", *nums + i);
	}



	return 0;

}