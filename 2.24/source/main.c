#include <stdio.h>
#include <stdlib.h>

int num[3];

void main(void)
{
	printf("Please write three number :");
	scanf_s("%d %d %d", &num[0], &num[1], &num[2]);
	
	for (int i = 3; i > 0; i--)
	{
		for (int b = 0; b < i; b++)
		{
			if (num[i] > num[b])
			{
				int save = num[i];
				num[i] = num[b];
				num[b] = save;
			}
		}
	}
	printf("largest number: %d\nsmallest number :%d\n",num[0],num[2]);
	system("pause");
	
}