#include <stdio.h>

int main()
{
	/*
	자리배치도 프로그램
	- 입장객 수와 좌석 열 수가 주어졌을떄
	-줄(행)수를 계산하고
	-좌석(자리) 출력
	*/
	int customer; //입장객 수
	int column;    //좌석 열 수
	int row;           //좌석 줄 수
	int seat;

	printf("입장객 수를 입력하세요 : ");
	scanf_s("%d", &customer);

	printf("좌석 열 수를 입력하세요 : ");
	scanf_s("%d", &column);

	if (customer % column == 0)
	{
		//오른쪽이 int형이 됨(형변환 할 필요 없음)
		row = customer / column;
	}
	else
	{
		row = (customer / column) + 1;
	}
	//printf("홀수 : %d\n", row);

	//자리 배치 - 중첩 for -> 외부(줄), 내부(열)
	for (int i = 0; i < row; i++)
	{
		for (int j = 1; j <= column; j++)
		{
			seat = column * i + j;
			if (seat > customer) break;
			printf("좌석%d ", seat);
		}
		printf("\n");
	}



	return 0;
}