#include <stdio.h>
#include <stdlib.h>

int num;

void main(void)
{
	printf("Please write one number :");
	scanf_s("%d", &num);
	if ((num % 2) == 1)
	{
		printf("number %d is odd\n", num);
	}
	else
	{
		printf("number %d is even\n", num);
	}
	system("pause");
	
}