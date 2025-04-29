#include <stdio.h>
/*
	동전 500원을 넣으면 커피가 나온다.
	500원을 초과하면 거스름돈이 나오고 커피가 나온다.
	500원 보다 적으면 커피가 나오지 않는다.
	커피는 총 5개 이고 모두 소진되면 판매를 중지한다.
*/
int main()
{
	int money = 500; //동전(커피 가격)
	int coffee = 5;  //커피의 개수

	while (1)
	{
		printf("동전을 넣어주세요. : ");
		int result = scanf_s("%d", &money);
		if (result != 1)
		{
			//문자 입력 오류처리
			while (getchar() != '\n')
			printf("잘못된 입력힙니다. 숫자를 입력하세요\n");
		}
		else //result == 1
		{
			//정상 코드

			if (money == 500)
			{
				printf("커피가 나옵니다.\n");
				coffee--; //coffee - 1
			}

			else if (money > 500)
			{
				printf("커피가 나오고, 거스름돈 %d원을 돌려 받습니다.\n", (money - 500));
				coffee--; //coffee - 1
			}
			else
			{
				printf("커피가 나오지 않고, %d원을 돌려 받습니다.\n", (money));
			}

			if (coffee == 0)
			{
				printf("커피가 모두 소진되어 판매를 중단합니다.\n");
				break;
			}
			printf("프로그램 종료\n");
		}
	}



	return 0;
}