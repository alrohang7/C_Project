#include <stdio.h>

int main() {
	int age;
	printf("���̸� �Է����ּ���>>>");
	scanf("%d", &age);

	(age >= 20) ? printf("����� ���̴� %d�̸� ����� 1250�� �Դϴ�\n", age) : printf("����� ���̴� %d�̸� ����� 800���Դϴ�\n", age);
	int high;
	printf("Ű�� �Է����ּ���>>>");
	scanf("%d", &high);

	(age >= 12 && high >= 120) ? printf("���̱ⱸ�� ž���� �� �ֽ��ϴ�\n") : printf("���̱ⱸ�� ž���� �� �����ϴ�\n");









	return 0;
}
