// Danny�� ȸ���� ������ X���� ��ǻ�͸� �����Ϸ��� �Ѵ�. ��ǻ�� �Ѵ��� ������ 95.125 ���� �̴�.
// Danny�� ����� �����ִ� ���α׷��� �ۼ��Ͻÿ�

#include <stdio.h>

int main(){
    float computer_price = 92.125;
    int x;

    printf("Danny�� ��ǻ�͸� ��볪 ��������? ");
    scanf("%d", &x);

    printf("��ǻ�� %d ���� ������ %.3f ���� �Դϴ�. ", x, x * computer_price); //.3�� �Ҽ��� ���ڸ��� 3�ڸ������� ������� ��Ÿ����.

    return 0;
}