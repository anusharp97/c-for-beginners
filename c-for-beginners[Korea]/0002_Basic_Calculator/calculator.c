// �� ���� ���̰��� ����,����,����,�������� �Ҽ� �ִ� ���� ���⸦ �ۼ��Ͻÿ�. 

#include <stdio.h>

int main(){
    float first_num, second_num;
    char c; 

    printf("addition=����(A), subtraction=����(S), multiplication=����(M), division=������(D) �߿� ������ �Ͻðڽ��ϱ�? ");
    scanf("%c", &c); //������ ������ �Է¹޴´�.

    printf("ù��° ���ڸ� �Է��ϼ���: ");
    scanf("%f", &first_num); //ù��° ���ڸ� �Է¹޴´�.

    printf("�ι�° ���ڸ� �Է��ϼ���: ");
    scanf("%f", &second_num); //�ι�° ���ڸ� �Է¹޴´�.

    switch(c){ //�Է¹��� ���꿡 ���� ���Ǻб�
        case 'A':
            printf("%f", first_num + second_num);
            break;
        
        case 'S':
            printf("%f", first_num - second_num);
            break;
        
        case 'M':
            printf("%f", first_num * second_num);
            break;
        
        case 'D':
            printf("%f", first_num / second_num);
            break;
        
        default:
            printf("The operation \"%c\" isn't exists.", c);
            break;
    }

    return 0;
}