#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a) {
	int i, j, k;
	for (i = 1; i <= a; i++) {
		for (j = 1; j <= i; j++) {
			k = i + j;
			printf("%d+%d=%d\t", i, j, k);
		}
		putchar('\n');
	}
}

int sub(int b) {
	int i, j, k;
	for (i = 1; i <= b; i++) {
		for (j = 1; j <= i; j++) {
			k = i - j;
			printf("%d-%d=%d\t", i, j, k);
		}
		putchar('\n');
	}
}

int mul(int n) {
	int i, j, k;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			k = i*j;
			printf("%d*%d=%d\t", i, j, k);
		}
		putchar('\n');
	}
}

int div(int d) {
	int i, j, k;
	for (i = 1; i <= d; i++) {
		for (j = 1; j <= i; j++) {
			k = i / j;
			printf("%d/%d=%d\t", i, j, k);
		}
		putchar('\n');
	}
}

int main20() {
	int a, b, c, d;
	printf("������Ҫ��ӡ�ļӷ����������\n");
	scanf("%d", &a);
	sum(a);
	printf("������Ҫ��ӡ�ļ������������\n");
	scanf("%d", &b);
	sub(b);
	printf("������Ҫ��ӡ�ĳ˷����������\n");
	scanf("%d", &c);
	mul(c);
	printf("������Ҫ��ӡ�ĳ������������\n");
	scanf("%d", &d);
	div(d);
	system("pause");
	return 0;
}