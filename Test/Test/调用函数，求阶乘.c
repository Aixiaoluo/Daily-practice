#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n) {
	if (n <= 1) {
		return 1;
	}
	return n * factorial(n - 1);
}

int main26() {
	int n;
	printf("������Ҫ����Ľ׳�����\n");
	scanf("%d", &n);
	printf("%d!=%d", n, factorial(n));
	system("pause");
	return 0;
}