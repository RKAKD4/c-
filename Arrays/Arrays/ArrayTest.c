#include <stdio.h>
#define MAX_LEN 4

int main()
{
	//�迭 ��� ���� �� ����
	int scores[MAX_LEN]; //�迭�� ũ��� ����� ���!
	int idxofscores = 0; //�迭�� �ε����� ������ ����

	//��� �߰�
	if (idxofscores < MAX_LEN)
	scores[idxofscores++] = 80; //scores[0]
	if (idxofscores < MAX_LEN)
	scores[idxofscores++] = 70; //scores[1]
	if (idxofscores < MAX_LEN)
	scores[idxofscores++] = 95; //scores[2]
	if (idxofscores < MAX_LEN)
	scores[idxofscores++] = 80; //scores[3]
	if (idxofscores < MAX_LEN)   //if������ ���� ó��
	scores[idxofscores++] = 100; //scores[4] //���� �ʰ��� ���� �߻�

	//��� ����
	if (idxofscores > 0)idxofscores--;
	if (idxofscores > 0)idxofscores--;
	if (idxofscores > 0)idxofscores--;
	if (idxofscores > 0)idxofscores--;
	if (idxofscores > 0)idxofscores--;
	if (idxofscores > 0)idxofscores--;
	


	//��ü ���
	//���� �� ���� ó��
	printf("���� �迭 ����\n");
	if (idxofscores == 0) {
		printf("(�������)\n");
	}
	printf("���� ��� ��: %d\n", idxofscores);
	for (int i = 0; i < idxofscores;i++)
	{
		printf("%d\n", scores[i]);
	}














	return 0;
}