//����� �����ֹ��� �ޱ����� ���α׷��� �����ϴ� ����� ���ϰ� �ִ� pizzaria�� ������ �߰��ߴ�.�״� ������ ����, ������ ����, ��޿��θ� �Է¹ޱ⸦ ���Ѵ�.

//����:
//���� �� �ǿ� 20 ���� �Դϴ�.
//�����ϳ��� 2 ������ �߰��� ��ϴ�.
//����� 5 ������ �߰��� ��ϴ�.

#include <stdio.h>

int main(){
    int pizza_price = 20, addition_price = 2, delivery_price = 5;
    int pizzas_count, additions_count, sum;
    _Bool delivery, quit = 0;
    char c, ch;

    while(!quit){
        printf("���Ӱ� �ֹ��Ͻ÷��� N. ���α׷��� �����÷��� Q �� �����ּ���.\n�Է�: ");
        while(1){
            scanf("%c", &c);
            if(c != '\n'){
                break;
            }
        }

        switch(c){ //���α׷��� �������� ���ο� �ֹ��� �������� ����
            case 'Q':
                quit = 1;
                break;
            
            case 'N':
                printf("\n\n�ֹ��Ͻ� ������ ������ �Է����ּ���: ");
                scanf("%d", &pizzas_count);

                printf("\n\n������ ������ �Է����ּ���: ");
                scanf("%d", &additions_count);

                printf("\n\n����� ��û�Ͻðڽ��ϱ�? (Y/N): ");
                scanf(" %c", &ch);

                switch(ch){ //��� ���θ� ����
                    case 'Y':
                        delivery = 1;
                        break;
                    
                    case 'N':
                        delivery = 0;
                        break;
                    
                    default:
                        delivery = 0;
                        break;
                }

                sum = (pizza_price * pizzas_count) + (addition_price * additions_count);

                if(delivery){
                    sum += delivery_price;
                }

                printf("�ֹ� ����� %d ���� �Դϴ�.\n", sum); //��� ���

                break;

            default:
                if(c != '\n'){
                    printf("�� �� ���� �ɼ� �Դϴ�. \"%c\".\n\n", c); //�޴� ���� ����ó��
                }
                break;
        }
    }

    return 0;
}