#include <stdio.h>
/*
	���� ������ ���� ȣ��
*/
int callbyval(int n);
int main()
{
	int num = 10;

	printf("=== ���� ���� ȣ�� ===\n");
	printf("%d\n", callbyval(num)); //11
	printf("%d\n", num); //10

	printf("=== ����(�ּ�)�� ���� ȣ�� ===\n");
	printf("%d\n", callbyRef(&num)); //11
	printf("%d\n", num); //11
	return 0;
}
int callbyval(int n)
{
	n++;
	return n;	//n�� 11�� ��ȯ�ϰ� �޸𸮿��� ����(�Ҹ�)
}

int callbyRef(int* p)
{
	*p = *p + 1;
	return *p;
}