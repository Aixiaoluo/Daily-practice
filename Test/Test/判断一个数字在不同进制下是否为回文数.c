#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main18() {
	int i;
	int n, sn;
	int tmp, sum = 0;
	printf("������һ��sn���Ƶ�����n\n");
	scanf("%d %d", &sn, &n);
	for (i = n; i; i /= sn) {
		tmp = i%sn;
		sum = sum*sn + tmp;
	}
	if (sum == n) {
		printf("%d��%d�������ǻ�����\n", n, sn);
	}
	else {
		printf("%d��%d������ ���ǻ�����\n", n, sn);
	}
	system("pause");
	return 0;
}