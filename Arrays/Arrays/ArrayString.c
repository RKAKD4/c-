#include <stdio.h>

int main()
{
	//문자열 배열 생성 및 관리
	char fr1[5] = "apple";  //영문은 한 글자 1byte
	char fr2[] = "apple";  //문자열의 끝은 '\0'(NULL 문자)이 포함 됨
	char fr3[] = "바나나";  //한 글자 2byte
	char fr4[] = { 'a', 'p', 'l', 'l', 'e', '\0' }; //'0' - 아스키 코드 값: 0

	//printf("%s\n", fr1);
	//printf("%s\n", fr2);
	//printf("%s\n", fr3);

	//문자열 배열의 크기 - sizeof()
	printf("%s %d\n", fr1, sizeof(fr1));
	printf("%s %d\n", fr2, sizeof(fr2));
	printf("%s %d\n", fr3, sizeof(fr3));
	printf("%s %d\n", fr4, sizeof(fr4));

	//fr2 배열의 크기
	printf("%dbyte\n", sizeof(fr2)); //6
	printf("%dbyte\n", sizeof(fr2[0]));

	int size = sizeof(fr2) / sizeof(fr2[0]);
	printf("fr2배열의 크기 : %d\n", size);


	//fr4를 %c로 출력
	for (int i = 0; i < 6; i++)
	{
		printf("%c", fr4[i]);
	}



	return 0;
}