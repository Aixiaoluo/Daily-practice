#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ʵ�ֺ���init������ʼ����;
void init(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = i;
	}
}

//ʵ�ֺ���empty����������飻
void empty(int arr[], int n) {
	memset(arr, 0, sizeof(arr[0]) * n);
}

//ʵ�ֺ���reverse�����������Ԫ�ص����á�
void reverse(int arr[], int n) {
	int left = 0;
	int right = n - 1;
	while (left < right) {
		int tmp;
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main23() {
	int arr[] = { 0 };
	int i, n;
	printf("������һ��һά���鳤�ȣ�\n");
	scanf("%d", &n);
	printf("������һά����ĸ���Ԫ�أ�\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	init(arr[i], n);
	empty(arr[i], n);
	reverse(arr[i], n);
	for (i = 0; i <= n; i++) {
		printf("%d", arr[i]);
	}
	system("pause");
	return 0;
}