//�ڿ����� �Է¹ް� ����� ��Ÿ�� ���ڸ�(0~9)�Է� �Ѵٰ� ����, �̶� �ش� ���ڰ� ��� ��Ÿ������ ����Ͻÿ�.
#include <stdio.h>

int main()
{
	int num = 0, digit = 0, counter = 0;
	
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &num);
	getchar();
	printf("��� ���ڸ� �Է��ϼ���(0~9): ");
	digit = (int)(getchar() - '0'); //�Է��� ���� �ƽ�Ű �ڵ�� �ޱ⶧���� ���ڷ� ��ȯ�� �ʿ���
	
	while(num > 0)
	{
		if(num % 10 == digit)//������ ������ ���� ������ �ڸ����ڸ� �̾Ƴ��� ��
		{
			counter++;
		}
		num /= 10;
	}
	
	printf("%d �� �ش� ���� �ȿ��� %d�� ���ɴϴ�.", digit, counter);
	
	return 0;
}