//#include <stdio.h>
//
//int main()
//{
//	//아스키 코드 - 1byte(256개)
//	char ch = '0';
//
//	printf("%c %d\n", ch, ch);
//	printf("%c %d\n", ch + 1, ch + 1);
//	printf("%c %d\n", ch + 2, ch + 2);
//
//	//유니코드 - 2byte(65000개)
//	char han[] = "가"; //배열 han1에 "가" 저장
//	char han2[] = "\uAc00";
//
//
//	printf("%s\n", han);
//	printf("%s\n", han2);
//
//	//메모리 주소
//	printf("%c %x\n", ch, &ch);
//	printf("%c %x\n", han, han);
//	printf("%c %x\n", han, &han[0]);
//
//
//
//
//
//	return 0;
//
//	
//}