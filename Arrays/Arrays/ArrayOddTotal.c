#include <stdio.h>

int main()
{
	int a[10];
	int i; 
	int oddTotal = 0; 

	
	a[1] = 2;
	a[2] = 3;


	for (i = 0; i < 10; i = i + 2)
	{
		a[i] = i + 1;
		oddTotal += a[i];  
		printf("a[%d]=%d, oddTotal = %d\n", i, a[i], oddTotal);
	}
	printf("гу╟Х : %d\n", oddTotal);


	return 0;
}