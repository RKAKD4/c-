#include <stdio.h>

int main()
{
	//���ڿ� �迭 ���� �� ����
	char fr1[5] = "apple";  //������ �� ���� 1byte
	char fr2[] = "apple";  //���ڿ��� ���� '\0'(NULL ����)�� ���� ��
	char fr3[] = "�ٳ���";  //�� ���� 2byte
	char fr4[] = { 'a', 'p', 'l', 'l', 'e', '\0' }; //'0' - �ƽ�Ű �ڵ� ��: 0

	//printf("%s\n", fr1);
	//printf("%s\n", fr2);
	//printf("%s\n", fr3);

	//���ڿ� �迭�� ũ�� - sizeof()
	printf("%s %d\n", fr1, sizeof(fr1));
	printf("%s %d\n", fr2, sizeof(fr2));
	printf("%s %d\n", fr3, sizeof(fr3));
	printf("%s %d\n", fr4, sizeof(fr4));

	//fr2 �迭�� ũ��
	printf("%dbyte\n", sizeof(fr2)); //6
	printf("%dbyte\n", sizeof(fr2[0]));

	int size = sizeof(fr2) / sizeof(fr2[0]);
	printf("fr2�迭�� ũ�� : %d\n", size);


	//fr4�� %c�� ���
	for (int i = 0; i < 6; i++)
	{
		printf("%c", fr4[i]);
	}



	return 0;
}