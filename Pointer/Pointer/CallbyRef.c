#include <stdio.h>
/*
	값과 참조에 의한 호출
*/
int callbyval(int n);
int main()
{
	int num = 10;

	printf("=== 값에 의한 호출 ===\n");
	printf("%d\n", callbyval(num)); //11
	printf("%d\n", num); //10

	printf("=== 참조(주소)에 의한 호출 ===\n");
	printf("%d\n", callbyRef(&num)); //11
	printf("%d\n", num); //11
	return 0;
}
int callbyval(int n)
{
	n++;
	return n;	//n은 11을 반환하고 메모리에서 해제(소멸)
}

int callbyRef(int* p)
{
	*p = *p + 1;
	return *p;
}