//��δ� ����� �ۼ��� ���α׷��� ���� ����߽��ϴ�.�״� �ٽ� ã�ƿ� ������ �� �Ӹ� �ƴ϶� ����, �丶��, ��ٵ� �Ȱ��ִٸ鼭 ���ο� ������ �䱸�մϴ�.
//�״� �װ� �Ĵ� ��(kg)�� ���� ���԰���� �ϴ� ���ο� ������ ���ϰ� �ֽ��ϴ�.
//���� �״� 200 ������ �ƴ϶� 1000 ������ ����� �� �� �ֽ��ϴ�.
//����� �����ڴ� ���ο� �Լ��� ��߰ڴٰ� �ϰ� �ֽ��ϴ�.

//����:
//��(1 kg) �� 5 ���� �Դϴ�.
//����(1 kg) �� 10 ���� �Դϴ�.
//�丶��(1 kg) �� 7 ���� �Դϴ�.
//���(1 kg) �� 8 ���� �Դϴ�.

#include <stdio.h>

float wheat_price = 5, onion_price = 10, tomato_price = 7, carrot_price = 8;

int wheat_to_coins(float kg){ //���� �޾� �� ���� ���
    return kg * wheat_price;
}

int onion_to_coins(float kg){ //���� �޾� ���� ���� ���
    return kg * onion_price;
}

int tomato_to_coins(float kg){ //���� �޾� �丶�� ���� ���
    return kg * tomato_price;
}

int carrot_to_coins(float kg){ //���� �޾� ��� ���� ���
    return kg * carrot_price;
}

int main(){
    float kg, earnings = 0;
    char c;

    while(earnings < 1000){
        printf("���Կ��� �Է��ϼ��� (�� [W], ���� [O], �丶�� [T] ��� [C]): ");
        while(1){
            scanf("%c", &c);
            if(c != '\n'){
                break;
            }
        }

        printf("����� �Ǹ��� ���� �Է��ϼ���(kg): ");
        scanf("%f", &kg);

        switch(c){ //���� �Է¹޾� ���Կ��� ���� ����Լ��� ȣ��
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

    printf("����� %.3f ������ �������ϴ�, ���� �� �� �ֽ��ϴ�.", earnings);

    return 0;
}