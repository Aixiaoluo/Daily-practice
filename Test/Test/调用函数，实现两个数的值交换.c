#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main21(){
	int a, b;
	printf("����������������\n");
	scanf("%d %d", &a, &b);
	printf("�������ֵΪ��\n");
	swap(&a, &b);
	printf("a = %d b = %d",a, b);
	system("pause");
	return 0;
}