#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main10() {
	int i, n;
	int tmp = 1, sum = 0;
	printf("������Ҫ����Ľ׳�����");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		tmp = tmp*i;
		sum = sum + tmp;
	}
	printf("%d�Ľ׳��ǣ�%d\n", n, tmp);
	printf("%d��ǰ%d�ļӺ��ǣ�%d\n", n, n, sum);
	system("pause");
	return 0;
}