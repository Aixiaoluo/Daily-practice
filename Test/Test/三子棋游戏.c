/*#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_ROW 3
#define MAX_COL 3

char chess_board[MAX_ROW][MAX_COL];

//�����˵�������1��ʼ��Ϸ������0������Ϸ������������Ч��
int Menu() {
	printf("##################\n");
	printf("####1.��ʼ��Ϸ####\n");
	printf("####2.������Ϸ####\n");
	printf("##################\n");
	printf("����������ѡ��");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Init(){
	//����ʹ��'x'��ʾ������ӣ�ʹ��'o'��ʾ�������ӣ�ʹ��' '��ʾδ���ӡ�
	for (int row = 0; row <= MAX_ROW; row++) {
		for (int col = 0; col <= MAX_COL; col++) {
			chess_board[col][row] = ' ';
		}
	}
}

void Print() {
	for (int row = 0; row < MAX_ROW; row++) {
		printf("| %c | %c | %c |\n", chess_board[row][0], chess_board[row][1], chess_board[row][2]);
		if (row != MAX_ROW - 1){
			printf("|---|---|---|\n");
		}
	}
}

void PlayerMove() {
	while (1){
		int row = 0, col = 0;
		printf("������ӣ�\n");
		printf("�����������ӵ�λ�ã�row��col����");
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("�������λ�÷Ƿ������������룡\n");
			continue;
		}
		if (chess_board[row][col] != ' '){
			printf("�������λ���ѱ�ռ�ã����������룡\n");
			continue;
		}
		chess_board[row][col] = 'x';
		break;
	}
}

void CompulterMove() {
	printf("�������ӣ�\n");
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chess_board[row][col] != ' ') {
			continue;
		}
		chess_board[row][col] = 'o';
		break;
	}
}

//�������˷���1�����򷵻�0
int IsFull() {
	for (int row = 0; row <= MAX_ROW; row++) {
		for (int col = 0; col <= MAX_COL; col++) {
			if (chess_board[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}
//��������'x'��ʾ���ʤ
//��������'o'��ʾ����ʤ
//��������'q'��ʾ����
//��������' '��ʾ��Ϸ��δ������������Ϸ
char CheckGameOver() {
	int row = 0, col = 0;
	//��������У�
	for (row = 0; row < MAX_ROW; row++) {
		if (chess_board[row][0] == chess_board[row][1] && chess_board[row][0] == chess_board[row][2])  {
			return chess_board[row][0];
		}
	}
 	//��������У�
	for (col = 0; col < MAX_COL; col++) {
		if (chess_board[0][col] == chess_board[1][col] && chess_board[0][col] == chess_board[2][col]) {
			return chess_board[0][col];
		}
	}
	//������жԽ��ߣ�
	if (chess_board[0][0] == chess_board[1][1] && chess_board[0][0] == chess_board[2][2]) {
		return chess_board[0][0];
	}
	if (chess_board[0][2] == chess_board[1][1] && chess_board[0][2] == chess_board[2][0]) {
		return chess_board[0][2];
	}
	if (IsFull()) {
		return 'q';
	}
	return ' ';
}

void Game() {
	char winner = ' ';
	//1������һ�����̲���ʼ��Ϊ' '��
	Init();
	while (1) {
		system("cls");
		//2����ӡ���̣�
		Print();
		//3��������ӣ�
		PlayerMove();
		Print();
		//4�������Ϸ�Ƿ������
		winner = CheckGameOver();
		if (winner != ' ') {
			break;
		}
		//5���������ӣ�
		CompulterMove();
		//6�������Ϸ�Ƿ������
		winner = CheckGameOver();
		if (winner != ' ') {
			break;
		}
	}
	system("cls");
	Print();
	if (winner == 'x') {
		printf("���ʤ����\n");
	}
	else if (winner == 'o') {
		printf("����ʤ����\n");
	}
	else if (winner == 'q') {
		printf("����!\n");
	}
	else {
		printf("��������ˣ�\n");
	}
}

int main() {
	while (1){
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 0) {
			printf("������Ϸ��\n");
		}
		else {
			printf("���������������������!\n");
		}
	}
}*/