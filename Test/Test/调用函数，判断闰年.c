#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isLeap(int* year) {
	if (*year % 4 == 0 && *year % 100 || *year % 400 == 0) {
		return 1;
	}
	return 0;
}

int main22() {
	int year;
	printf("������Ҫ�жϵ���ݣ�\n");
	scanf("%d", &year);
	if (isLeap(&year)) {
		printf("%d�����꣡\n", year);
	}
	else {
		printf("%d�������꣡\n", year);
	}
	system("pause");
	return 0;
}