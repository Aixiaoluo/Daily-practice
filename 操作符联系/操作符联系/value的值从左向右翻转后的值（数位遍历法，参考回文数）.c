#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int round(unsigned int a) {
	unsigned int tmp, sum = 0;
	for (int i = 0; i < 32; i++, a /= 2) {
		tmp = a % 2;
		sum = sum * 2 + tmp;
	}
	return sum;
}

int main02() {
	int a;
	printf("������Ҫ��ת��������\n");
	scanf("%d", &a);
	printf("��ת�������Ϊ��%u\n", round(a));
	system("pause");
	return 0;
}