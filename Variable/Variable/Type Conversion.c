#include <stdio.h>

int main()
{
	//������ ����ȯ(�ڵ� ����ȯ)
	int iNum = 20;
	float fNum = iNum; //ū �ڷ��� = ���� �ڷ���
	double dNum = 2.54;
	int iNum2;

	printf("%d\n", iNum);
	printf("%.1f\n", fNum); //20.0
	printf("%.1f\n", fNum + fNum); //40.0

	//����� ����ȯ(������ ����ȯ)
	//�ڷ����� �Ұ�ȣ�� ���� �ش� (int), (double)

	iNum2 = (int)dNum;
	printf("%d\n", iNum2); //2

	//����
	dNum = 1.2;
	fNum = 0.9f;

	iNum = (int)dNum + (int)fNum; //1
	printf("%d\n", iNum);

	iNum = (int)(dNum + fNum); //2
	printf("%d\n", iNum);



}