#include <stdio.h>
/*
	������ - �޸��� �ּҸ� �����ϴ� ����
*/
int main()
{
	int n;
	int* pn; //pn�̶�� �̸��� ������ ������ ����

	n = 3;
	pn = &n; //���� n�� �ּҸ� ������

	printf("������ ��: %d\n", n);
	printf("������ �޸� ����: %d\n", &n);
	printf("�������� �� %d\n", pn);
	printf("�������� �޸� ���� %d\n", &pn);

	//�����Ͱ� ����Ű�� �޸��� �� - ������
	printf("������: %d\n", *pn);

	//�ڷ����� ũ�� �� - �����ʹ� �ڷ����� ������ ������� ��� 8byte ��
	printf("%dbyte %dbyte\n", sizeof(n), sizeof(pn));

	//������ ������ ���
	int a = 10;
	int* b;

	printf("a�� ���� %d\n", a);

	b = &a;
	*b = 20;
	printf("b�� ����Ű�� ����: %d\n", *b);
	printf("a�� ����: %d\n", a);






	return 0;
}