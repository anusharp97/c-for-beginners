//����� ������ Alex�� �����ֿ� ���� 40KM �����濡 �����ϱ����� �غ��ϰ� �ִ�.
//�״� ��ſ��� ���۰� ���� �д����� ǥ�����ִ� �����ġ���α׷��� �����޶�� �䱸�ϰ��ִ�.
#include <stdio.h>
#include <time.h>

int main(){
    clock_t start, end;
    _Bool quit = 0;
    char c, s;

    while(!quit){
        printf("�����Ͻ÷��� ���� Ȥ�� �����Ͻ÷��� �ƹ�Ű�� �����ּ���.\n");
        scanf("%c", &c);

        switch(c){
            case '\n':
                start = clock(); //���۽ð��� üũ�Ͽ� ����
                printf("\n�����ġ�� ���߽÷��� ���͸� �����ּ���.\n");
                scanf("%c", &s);
                end = clock() - start; //����ð��� üũ�Ͽ� ����
                printf("���: %.3f ��.\n", end/1000.0/100.0);
                break;
            
            default:
                quit = 1;
                break;
        }
    }

    return 0;
}