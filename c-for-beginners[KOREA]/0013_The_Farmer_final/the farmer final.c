//��δ� ����� �ۼ��� ���α׷� ���п� �ູ�� ������ ������ �־����ϴ�.
//������ �ֱٿ� ���� ��縦 ���� ����� �þ�� ������ 5 ��������
//���� �ʿ䰡 �ִٰ�����Ͽ����ϴ�.
//���� ���� ���α׷��� ������ �����ϴ� ����� �ʿ��� ����� ã�ƿԽ��ϴ�.
//�״� ������ 1000 ������ ����� �� �� �ֽ��ϴ�.
//�ٸ� ���� ��� ������ �𸣴� ��� ǰ�� ���Ͽ� ������ �����ؾ��մϴ�.

//���� ����:
//��(1 kg) �� 5 ���� �Դϴ�.
//����(1 kg) �� 10 ���� �Դϴ�.
//�丶��(1 kg) �� 7 ���� �Դϴ�.
//���(1 kg) �� 8 ���� �Դϴ�.

#include <stdio.h>

float wheat_price = 5, onion_price = 10, tomato_price = 7, carrot_price = 8;


int wheat_to_coins(float kg) { //���� �޾� �� ���� ���
	return kg * wheat_price;
}

int onion_to_coins(float kg) { //���� �޾� ���� ���� ���
	return kg * onion_price;
}

int tomato_to_coins(float kg) { //���� �޾� �丶�� ���� ���
	return kg * tomato_price;
}

int carrot_to_coins(float kg) { //���� �޾� ��� ���� ���
	return kg * carrot_price;
}

int main() {
	float kg = 0;
	float earnings = 0;
	float newprice = 0;
	char c;
	char m;

	while (earnings < 1000) {
		printf("�޴��� �����ϼ��� (���ݺ��� [M], �Ǹ� [S]): "); //�޴� ����
		scanf("%c", &m);
		switch (m) {
		case 'M':
			printf("���Կ��� �Է��ϼ��� (�� [W], ���� [O], �丶�� [T] ��� [C]): ");
			scanf("%c", &c);
			printf("���ο� ������ �Է��ϼ���(coin): ");
			scanf("%d", &newprice);
			switch (c) { //���ο� ������ �Է¹޾� ���Կ��� ������ ����
			case 'W':
				wheat_price = newprice;
				printf("���� ������ %d coin ���� �����Ͽ����ϴ�.\n", wheat_price);
				break;

			case 'O':
				onion_price = newprice;
				printf("������ ������ %d coin ���� �����Ͽ����ϴ�.\n", onion_price);
				break;

			case 'T':
				tomato_price = newprice;
				printf("�丶���� ������ %d coin ���� �����Ͽ����ϴ�.\n", tomato_price);
				break;

			case 'C':
				carrot_price = newprice;
				printf("����� ������ %d coin ���� �����Ͽ����ϴ�.\n", carrot_price);
				break;

			default:
				printf("�� �� ���� ���Կ��� ���� �Ǿ����ϴ�.");//����ó��
				break;
			}
			break;
		case 'S':
			printf("���Կ��� �Է��ϼ��� (�� [W], ���� [O], �丶�� [T] ��� [C]): ");
			scanf("%c", &c);

			printf("����� �Ǹ��� ���� �Է��ϼ���(kg): ");
			scanf("%f", &kg);

			switch (c) { //���� �Է¹޾� ���Կ��� ���� ����Լ��� ȣ��
			case 'W':
				earnings += wheat_to_coins(kg);
				break;

			case 'O':
				earnings += onion_to_coins(kg);
				break;

			case 'T':
				earnings += tomato_to_coins(kg);
				break;

			case 'C':
				earnings += carrot_to_coins(kg);
				break;

			default:
				printf("�� �� ���� ���Կ��� ���� �Ǿ����ϴ�.");//����ó��
				break;
			}
		}
		
	}

	printf("����� %.3f ������ �������ϴ�, ���� �� �� �ֽ��ϴ�.", earnings);

	return 0;
}