#include <stdio.h>
/*
	main()�Լ�
	-���α׷��� �����ϴ� ���
	-return�� �ִ� �Լ�(�ü������ ��ȯ)
	-�Լ� ����
	(��ȯ)�ڷ��� �Լ� �̸�(){}
	void�� - �ڷ����� ������(return�� ����)
	-�Լ��� ��ġ
	main()�� �� - ���ǵ� �Լ�
	main()�� �Ʒ� - ����δ� ��, �����δ� �Ʒ��� ��ġ
*/
void sayhello(); //�����(������Ÿ��)�� ���
void sayhello2(char name[]);
int main()
{
	//�Լ� ȣ��
	sayhello();

	sayhello2("��׷�");
	sayhello2("Elsa");

	return 0;
}


//�λ��ϱ� ����� �ϴ� �Լ� ����(make)
void sayhello() {
	printf("�ȳ��ϼ���~\n");
}

//�̸��� �θ��� �λ��ϱ� ���
//char name[] - �Ű�����(Parameter)
void sayhello2(char name[])
{
	printf("%s��, �ȳ��ϼ���~", name);
}