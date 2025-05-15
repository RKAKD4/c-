#include <stdio.h>

void func1(int i, int j);
void func2(int* i, int* j);
int main()
{
	int a = 3, b = 12;

	func1(a, b); //funcl 호출
	printf("--- main()내 func1 호출 ---\n");
	printf("%d %d\n", a, b);

	func2(&a, &b); //funcl 호출
	printf("--- main()내 func2 호출 ---\n");
	printf("%d %d\n", a, b);

	return 0;
}

void func1(int i, int j)
{
	i*= 3;	//j = j * 3
	j /= 3;	//j = j / 3
	printf("--- funcl()출력 ---\n");
	printf("%d %d\n", i, j);
}

void func2(int* i, int* j)
{
	*i = *i * 3;
	*j = *j / 3;
	printf("--- func2()출력 ---\n");
	printf("%d %d\n", *i, *j);
}