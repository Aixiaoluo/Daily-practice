#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double ave(int a, int b) {
	return (a&b) + ((a^b) >> 1);
}

int main03() {
	int a, b;
	printf("������Ҫ���������a��b��\n");
	scanf("%d %d", &a, &b);
	printf("����������ƽ��ֵ�ǣ�%lf\n", ave(a, b));
	system("pause");
	return 0;
}