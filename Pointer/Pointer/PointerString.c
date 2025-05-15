#include <stdio.h>
/*
	문자열과 포인터
*/
int main()
{
	char msg[] = "Good Luck"; //문자열 크기 - 10
	char* p = msg;		//&msg[0]
	int i;

	printf("%d\n", sizeof(msg), sizeof(p));
	printf("%s\n",msg);

	//문자열의 시작 주소와 배열의 이름은 동일하다
	printf("%x %x\n", msg, p);

	//p 포인터로 출력
	printf("%s\n", p + 0);	//Good Luck
	printf("%s\n", p + 1);	//ood Luck
	printf("%s\n", p + 2);	//od Luck
	printf("%s\n", p + 3);	//d Luck

	//p포인터의 역참조로 출력 - 한글자씩 출력
	//printf("%c\n", *(p+0)); //G
	//printf("%c\n", *(p+1)); //o
	int size = sizeof(msg) / sizeof(msg[0]); //10 / 1 = 10

	for(i=0;i<10;i++)
	{
		printf("%c ", *(p + i)); //G o o d L u c k
	}






















	return 0;
}