#include <stdio.h>

int main(){
	int i;
	int count=1;
	for (i = 1; i < 101; i++) {
		//�жϸ�λ���Ƿ�Ϊ9
		if (i % 10 == 9) {
			count++;
		}
		//�ж�ʮλ���Ƿ�Ϊ9
		if (i / 10 == 9) {
			count++;
		}
	}
	printf("1-100֮�����9�Ĵ���Ϊ%d", count);
	system("pause");
	return 0;
}