#include <stdio.h>
/*
프로그래밍 : hello world를 출력하는 프로그램
작성자 : 유승현
*/

int main()
{
	//출력 함수 - printf()
	//문장의 끝은 필수적으로 세미클론(;)으로 끝냄.
	//'\n'은 줄바꿈으로 특수문자임
	//문자 출력 - 쌍따움표로 묶는다.
	//서식문자 - %s를 사용
	printf("hello~ world!\n");
	printf("안녕~ 세계야!\n");
	printf("%s\n", "hello~ world!");
	// 한 문자 - 홑따움표 사용
	//서식문자 - %c를 사용함
	printf("c언어 학점이 %c입니다.\n",'A');

	//숫자 - 정수(%d), 실수(%f)
	printf("%d\n", 10);
	printf("%.2f\n", 2.54);
	printf("%d\n", 4 + 5);
	printf("%d\n", 98 - 23);
	printf("%d\n", 98 * 23);
	printf("%.1f\n", 9.0 / 3.0);


	return 0;

}