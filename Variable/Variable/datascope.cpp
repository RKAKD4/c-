//#include <stdio.h>
//
///*
//�ڷ����� ����
//*/
//int main()
//{
//
//	/*
//	'A' - 65(�ƽ�Ű�ڵ�)
//	char : -128 ~ 127(1byte=8bit),
//	unsigned char 0 ~ 255(ubsigned = ��ȣ���� �ڷ���)
//	*/
//	printf("==== char �ڷ��� ====\n");
//	char ch = 'A';
//
//	printf("%c %d\n", ch, ch); //�ƽ�Ű �ڵ尪
//
//	char value1 = -128;
//	printf("%d\n", value1);
//
//	char value2 = 128;
//	printf("%d\n", value2);
//
//	short value3 = 128; // shrt - 16��Ʈ (-32768 ~ 32767)
//	printf("%d\n", value3);
//
//	/*
//	int�� 4yte = 32bit
//	-21�� ~ 21��
//	long - (������-4B), (�� Os - 8B)
//	long long 8B
//	*/
//
//	printf("==== int �ڷ��� ====\n");
//	int iNum = 2100000000;
//	printf("%d\n", iNum);
//
//	int iNum2 = 2200000000; //���� �ʰ��� overflow
//	printf("%d\n", iNum2);
//
//	//long ���� ���� �ڿ� 'L' or '1'�� ����
//
//	long long llNum = 2200000000L; 
//	printf("%11d\n, 11Num");
//
//	/*
//	�Ǽ��� - �Ҽ����� �ִ� ��
//	float - 4byte, �Ҽ� 6�ڸ� ǥ��('f' or 'F'�� ����)
//	double - 8byte, �� 15�ڸ�
//	*/
//
//	printf("====float�� double �ڷ��� ====\n");
//	float fNum = 0.1234567F; //�ڸ��� �ʰ��� ����
//	printf("%f\n", fNum);
//
//	double dNum = 0.123456789012345; //����
//	printf("%.151f\n", dNum);
//
//}