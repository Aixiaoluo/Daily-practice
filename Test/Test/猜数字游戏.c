#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu() {
	printf("##################\n");
	printf("####1.��ʼ��Ϸ####\n");
	printf("####2.������Ϸ####\n");
	printf("##################\n");
}

void game() {
	int a;
	int random_num = rand() % 100 + 1;
	while (1){
		printf("���һ��1-100֮������֣�");
		scanf("%d", &a);
		if (a < random_num) {
			printf("����!\n");
		}
		else if (a>random_num) {
			printf("����!\n");
		}
		else {
			printf("�¶���!\n");
			break;
		}
	}
}

int main14() {
	int i;
	srand((unsigned int)time(0));
	menu();
	while (1){
		printf("���������ѡ��1��ʾ��ʼ��Ϸ��0��ʾ������Ϸ������������Ч����");
		scanf("%d", &i);
		if (i == 1) {
			game();
		}
		else if (i == 0) {
			printf("������Ϸ��\n");
		}
		else {
			printf("���������������������!\n");
		}
	}
	system("pause");
	return 0;
}