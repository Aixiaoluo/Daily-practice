#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main3() {
	int a, b;
	int i,min,max=0;
	int c;
	printf("����������������\n");
	scanf("%d %d", &a, &b);
	//���������ĵ�һ�ַ����������Ķ��壩
#if 1
	min = a < b ? a : b;
	for (i = 2; i < min+1; i++) {
		if (a % i == 0 && b % i == 0){
			max = i;
		}
	}
	if (max == 0) {
		printf("����������!\n");
	}
	else {
		printf("%d��%d�����Լ��Ϊ:%d\n", a, b, max);
	}
	//�����������ǰ���£�����С������
	if (max == 0) {
		printf("%d��%d����С������Ϊ:%d\n", a, b,a*b);
	}
	else {
		printf("%d��%d����С������Ϊ:%d\n", a, b, a*b/max);
	}
#else
	//���������ĵڶ��ַ�����շת�������
	int tmp1,tmp2;
	tmp1 = a;
	tmp2 = b;
	while (c = tmp1%tmp2){
		tmp1 = tmp2;
		tmp2 = c;
	}
	if (tmp2 == 1){
		printf("���������ʣ�\n");
	}
	else{
		printf("%d��%d�����Լ��Ϊ:%d\n", a, b, tmp2);
	}
	//�����������ǰ���£�����С������
	if (tmp2 == 1) {
		printf("%d��%d����С������Ϊ:%d\n", a, b,a*b);
	}
	else {
		printf("%d��%d����С������Ϊ:%d\n", a, b, a*b/tmp2);
	}
#endif
	system("pause");
	return 0;
}
