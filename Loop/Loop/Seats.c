#include <stdio.h>

int main()
{
	/*
	�ڸ���ġ�� ���α׷�
	- ���尴 ���� �¼� �� ���� �־�������
	-��(��)���� ����ϰ�
	-�¼�(�ڸ�) ���
	*/
	int customer; //���尴 ��
	int column;    //�¼� �� ��
	int row;           //�¼� �� ��
	int seat;

	printf("���尴 ���� �Է��ϼ��� : ");
	scanf_s("%d", &customer);

	printf("�¼� �� ���� �Է��ϼ��� : ");
	scanf_s("%d", &column);

	if (customer % column == 0)
	{
		//�������� int���� ��(����ȯ �� �ʿ� ����)
		row = customer / column;
	}
	else
	{
		row = (customer / column) + 1;
	}
	//printf("Ȧ�� : %d\n", row);

	//�ڸ� ��ġ - ��ø for -> �ܺ�(��), ����(��)
	for (int i = 0; i < row; i++)
	{
		for (int j = 1; j <= column; j++)
		{
			seat = column * i + j;
			if (seat > customer) break;
			printf("�¼�%d ", seat);
		}
		printf("\n");
	}



	return 0;
}