//����� 7���� ��ī ���� Ư�� 100������� ���������, �׻� �� �������� ���� ���ϴ� ������ �ִ�.

//�������, 1800���̶�� �ϸ� �׳�� 18�������� 19�������� Ȯ������ ���Ѵ�.

//����� ��ī ���� ����, �־��� �⵵�� ���⸦ ��Ȯ�� �˾Ƴ��ִ� C ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>

void century_from_year(int inputYear)
{
    int hundredYearCentury = inputYear / 100;
    int nonHundredYearCentury = hundredYearCentury + 1;

    if (inputYear <= 0) //�Է°��� 0�� ���ų� �������
    {
        printf("Year cannot be 0 or negative!");
    }
    else if (inputYear <= 100) //�Է°��� 1~100�ϰ��
    {
        printf("���� = 1");
    }
    else if (inputYear % 100 == 0) //�Է°��� 100���� ������ ���������
    {
        printf("���� = %d", hundredYearCentury);
    }
    else //�׿��� ��� ó��
    {
        printf("���� = %d", nonHundredYearCentury);
    }
}

int main()
{
    int inputYear;
    printf("\n �⵵: ");
    scanf("%d", &inputYear);

    century_from_year(inputYear);

    return 0;
}