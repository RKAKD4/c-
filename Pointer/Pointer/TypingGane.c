#include <stdio.h>
#include <stdlib.h> //srand(), rand()
#include <time.h>   //time(), cluck()
#include <string.h> 
/*
	영어 타자 게임
	- 영어 단어가 랜덤하게 출제됨
	- 사용자가 입력해서 단어가 일치하면 "통과!", 아니면 "다시 도전!"
	- 시도 횟수는 10회이고, 게임 소요시간을 측정함
*/
int main()
{
	char* words[] = { "ant", "bear", "chiken", "deer", "elephant", "fox", "horse", "monkey", "lion", "tiger" };
	char* question;	//문제(랜덤하게 출제될 단어)
	char answer[30]; //사용자가 입력할 단어
	int n = 1;	//문제 번호
	clock_t start, end; //시작, 종료 시간
	double elapsedTime;	//소요시간

	//랜덤 시드 설정
	srand(time(NULL));
	int size = sizeof(words) / sizeof(words[0]); //80 / 8 = 10

	printf("영어 타자 게임, 준비 되면 엔터");
	getchar(); //'\n'

	start = clock(); //시작 시간
	while (n <= 10)
	{
		printf("\n문제 %d\n", n);
		int rndIdx = rand() % size;
		question = words[rndIdx];
		printf("%s\n", question);

		// sizeof(answere)버퍼 오버플로우 방지
		scanf_s("%s", answer, sizeof(answer)); // 유지 입력

		//숫자 일치 비교 (==), 문자 일치 비교(strcmp() == 0(일치), 1(불일치)
		if (strcmp(question, answer) == 0)
		{
			printf("통과!\n");
			n++; //다음 문제 출제
		}
		else
		{
			printf("다시 도전!\n");
		}

	}



	end = clock(); //종료 시간
	elapsedTime = (end - start) / CLOCKS_PER_SEC;
	printf("게임 소요 시간 : %.2lf초", elapsedTime);












	return 0;
}