#include <stdio.h>

int main()
{
	char arr[] = { '1', 'B','c', 'D', 'E' };
	char* p;

	p = &arr[2];	//시작 주소로 설정

	printf("%c%c",*p, *(p-2) );

	return 0;
}