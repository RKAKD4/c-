#include <stdio.h>

int main()
{
	char arr[] = { '1', 'B','c', 'D', 'E' };
	char* p;

	p = &arr[2];	//���� �ּҷ� ����

	printf("%c%c",*p, *(p-2) );

	return 0;
}