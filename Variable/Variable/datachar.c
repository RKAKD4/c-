//#include <stdio.h>
//
//int main()
//{
//	//�ƽ�Ű �ڵ� - 1byte(256��)
//	char ch = '0';
//
//	printf("%c %d\n", ch, ch);
//	printf("%c %d\n", ch + 1, ch + 1);
//	printf("%c %d\n", ch + 2, ch + 2);
//
//	//�����ڵ� - 2byte(65000��)
//	char han[] = "��"; //�迭 han1�� "��" ����
//	char han2[] = "\uAc00";
//
//
//	printf("%s\n", han);
//	printf("%s\n", han2);
//
//	//�޸� �ּ�
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