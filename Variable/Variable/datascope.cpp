//#include <stdio.h>
//
///*
//자료형의 범위
//*/
//int main()
//{
//
//	/*
//	'A' - 65(아스키코드)
//	char : -128 ~ 127(1byte=8bit),
//	unsigned char 0 ~ 255(ubsigned = 부호없는 자료형)
//	*/
//	printf("==== char 자료형 ====\n");
//	char ch = 'A';
//
//	printf("%c %d\n", ch, ch); //아스키 코드값
//
//	char value1 = -128;
//	printf("%d\n", value1);
//
//	char value2 = 128;
//	printf("%d\n", value2);
//
//	short value3 = 128; // shrt - 16비트 (-32768 ~ 32767)
//	printf("%d\n", value3);
//
//	/*
//	int형 4yte = 32bit
//	-21억 ~ 21억
//	long - (윈도우-4B), (맥 Os - 8B)
//	long long 8B
//	*/
//
//	printf("==== int 자료형 ====\n");
//	int iNum = 2100000000;
//	printf("%d\n", iNum);
//
//	int iNum2 = 2200000000; //범위 초과로 overflow
//	printf("%d\n", iNum2);
//
//	//long 형은 숫자 뒤에 'L' or '1'을 넣음
//
//	long long llNum = 2200000000L; 
//	printf("%11d\n, 11Num");
//
//	/*
//	실수형 - 소숫점이 있는 수
//	float - 4byte, 소수 6자리 표기('f' or 'F'를 붙임)
//	double - 8byte, 소 15자리
//	*/
//
//	printf("====float와 double 자료형 ====\n");
//	float fNum = 0.1234567F; //자리수 초과로 오류
//	printf("%f\n", fNum);
//
//	double dNum = 0.123456789012345; //오류
//	printf("%.151f\n", dNum);
//
//}