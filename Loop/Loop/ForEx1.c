//#include <stdio.h>
//
///*for(초기값; 종료값; 증감값;){실행문}*/
//
//int main()
//{
//	//1부터 10까지 출력
//	
//	/*	for (int i = 1; 1 <= 10; i++)
//	{
//		printf("%d", i)
//	}
//	*/
//
//	// 1 ~ 10까지의 합계
//	int sum = 0; //합계를 저장할 변수 선언
//	int n;		//전역 변수
//	/*for (n = 1; n <= 10; n++)
//	{
//		sum += n; // sum = sum + n;
//		printf("n = %d, sum = %d\n", n, sum);
//	}
//	printf("n = %d,합계 : %d\n", n, sum);
//*/
//
//	//1에서 10까지의 홀수의 합계
//	
//	for (n = 1; n <= 10; n++)
//	{
//		if (n % 2 == 1)
//		{
//			sum += n; // sum = sum + n;
//		}
//		printf("n = %d, sum = %d\n", n, sum);
//	}
//	printf("n = %d,홀수의 합계 : %d\n", n, sum);
//
//
//	return 0;
//}