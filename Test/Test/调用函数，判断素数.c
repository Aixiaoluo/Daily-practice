/*#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int isPrime(int n) {
	int tmp, j;
	int result = 0;
	tmp = sqrt(n);
	for (j = 2; j < tmp; j++) {
		if (n % j == 0) {
			return 0;
			break;
		}
	}
	return 1;
}

int main25() {
	int n;
	printf("������һ��������\n");
	scanf("%d", &n);
	if (isPrime(n)) {
		printf("%d��������\n",n);
	}
	else {
		printf("%d����������\n",n);
	}
	system("pause");
	return 0;
}*/