#include <stdio.h>
#include <stdlib.h>

typedef struct Snake { //���� ���̸� ���� ����ü ����
	int length;
} snake;

int main() {
	int food;
	snake sn;
	sn.length = 3; //���� ���� �ʱ�ȭ
	while (1) {
		printf("������ ���� �Է��ϼ���: ");
		scanf("%d", &food);
		if (sn.length < food) { //���̰� �캸�� Ŭ��
			break;
		}
		else { //���̰� �캸�� �۰ų� ������
			sn.length += food;
		}
	}
	printf("�ʹ� ū ���̸� �Դ� �װ� ���ҽ��ϴ�. ���� ũ��� %dm �Դϴ�\n", sn.length);


	return 0;
}