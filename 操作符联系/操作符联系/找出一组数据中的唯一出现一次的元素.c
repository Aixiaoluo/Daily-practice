#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main05() {
	int i;
	int sum = 0;
	int arr[10] = { 0 };
	printf("������һ�����ݣ�\n");
	for (i = 0; i < 10; i++) {
		scanf("%d ", &arr[i]);
	}
	for (i = 0; i < 10; i++) {
		sum ^= arr[i];
	}
	printf("%d", sum);
	system("pause");
	return 0;
}