#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i;
	int a[10], b[10];
	int t = 0;
	printf("���������������ֵ��\n");
	for (i = 0; i < 10; i++){
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++){
		printf("b[%d]=", i);
		scanf("%d", &b[i]);
	}
	for (i = 0; i < 10; i++) {
		t = a[i]; a[i] = b[i]; b[i] = t;
	}
	printf("�������������������Ϊ��\n");
	for (i = 0; i < 10; i++) {
		printf("a[%d]=%d\n", i, a[i]);
	}
	for (i = 0; i < 10; i++) {
		printf("b[%d]=%d\n", i, b[i]);
	}
	system("pause");
	
}