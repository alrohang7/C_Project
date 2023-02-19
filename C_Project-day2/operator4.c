#include <stdio.h>

int main() {
	int age;
	printf("나이를 입력해주세요>>>");
	scanf("%d", &age);

	(age >= 20) ? printf("당신의 나이는 %d이며 요금은 1250원 입니다\n", age) : printf("당신의 나이는 %d이며 요금은 800원입니다\n", age);
	int high;
	printf("키를 입력해주세요>>>");
	scanf("%d", &high);

	(age >= 12 && high >= 120) ? printf("놀이기구에 탑승할 수 있습니다\n") : printf("놀이기구에 탑승할 수 없습니다\n");









	return 0;
}
