#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Power(int n, int k) {
	if (k < 0) {
		return 0;
	}
	if (k == 0){
		return 1;
	}
	if (k == 1) {
		return n;
	}
	return Power(n, k - 1) * n;
}

int main29() {
	int n, k;
	printf("������Ҫ���������n��Ҫ����Ĵη���k��\n");
	scanf("%d %d", &n, &k);
	int i = Power(n, k);
	if (i == 0) {
		printf("�������벻�Ϸ���\n");
	}
	else{
		printf("%d^%d=%d", n, k, i);
	}
	system("pause");
	return 0;
}