#include <stdio.h>
/*
	문자형 포인터 변수
*/
int main()
{
	char c = 'A';
	char* pc;

	pc = &c;

	printf("변수의 값: %c\n", c);
	printf("변수의 메모리 주소: %x\n", &c);

	printf("포인터의 값: %x\n", pc);
	printf("포인터가 가리키는 메모리의 값: %c\n", *pc);

	//자료형의 크기
	printf("%dbyte %dbyte\n", sizeof(c), sizeof(pc));

	//문자형 포인터 사용
	char c1 = 'b';
	char* c2;

	printf("c1 = %c\n", c1);

	c2 = &c1;
	*c2 = 'D'; //역참조 값 변경

	printf("c1의 값: %c\n", c1); //D





	return 0;
}