//#include <stdio.h>
//
//int main()
//{
//	/*
//	continue문 - 반복문 내부의 continue 를 만나면
//	반복되는 부분을 수행하지 않고, 조건식을 수행함.
//	*/
//	//1 ~ 10 중에서 5와 10을 제외하고 출력하기
//
//	/*for (int i = 1; i <= 10; i++)
//	{
//		if (i % 5 == 0) {
//			continue;
//		}
//		printf("%d\n", i);
//	}*/
//
//	//1 ~ 10까지의 짝수의 합계
//	int n, sum;
//	for (n = 1, sum = 0; n <= 10; n++)
//	{
//		if (n % 2 != 0) 
//			continue;
//			sum += n;
//			printf("%d ", n);
//		
//	}
//	printf("\n짝수의 합 : %d", sum);
//
//
//
//	return 0;
//}