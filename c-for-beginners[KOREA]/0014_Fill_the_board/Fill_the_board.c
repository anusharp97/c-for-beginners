#include <stdio.h>
#include <stdlib.h>

int main() {
	int width = 3;
	int height = 3;
	int i = 0;
	int j = 0;
	int xindex = 0;
	int yindex = 0;
	int check = 0;
	int answer[3][3];
	int iscorrect = 1;
	for (i = 0; i < height; i++) {//���� �Է�
		printf("���ڸ� �Է����ּ���: ");
		for (j = 0; j < width; j++) {
			scanf("%d", &answer[i][j]);
		}
	}
	
	while (1) {
		for (i = 0; i < height; i++) { //���� �ߺ� Ȯ��
			for (j = 0; j < width; j++) {
				if (answer[yindex][xindex] == answer[yindex][j]) {
					if (xindex != j) {
						iscorrect = 0;
					}
				}
			}
			yindex++;
		}
		yindex = 0;
		for (i = 0; i < width; i++) { //���� �ߺ� Ȯ��
			for (j = 0; j < height; j++) {
				if (answer[yindex][xindex] == answer[j][xindex]) {
					if (yindex != j) {
						iscorrect = 0;
					}
				}
			}
			xindex++;
		}
		break;
	}
	if (iscorrect) { //��������� ������ �������
		printf("�����Դϴ�. Ż�⿡ �����߽��ϴ�.\n");
	}
	else { //��������� ������ �������
		printf("Ʋ�Ƚ��ϴ�. Ż�⿡ �����߽��ϴ�.\n");
	}
	return 0;
	
}