#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 1
int Factorial(int n) {
	int tmp = 1;
	while (n > 0) {
		if (n < 0) {
			return 0;
		}
		else {
			tmp = tmp * n;
			n--;
		}
	}
	return tmp;
}

#else
int factorial(int n) {
	if (n <= 1) {
		return 0;
	}
	return n * factorial(n - 1);
}

#endif
int main33() {
	int n;
	printf("������Ҫ����Ľ׳�����\n");
	scanf("%d", &n);
	//����Ϊfactorial��������ʵ�ֵݹ���õķ���
	printf("%d!=%d", n, Factorial(n));
	system("pause");
	return 0;
}