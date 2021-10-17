#include <stdio.h>
#include <stdlib.h>

int num[3];

void main(void)
{
	printf("number\tsquare\tcube\n");
	for (int i = 0; i < 11; i++)
	{
		num[0] = i;
		num[1] = i*i;
		num[2] = i*i*i;
		printf("%d\t%d\t%d\n", num[0],num[1],num[2]);
	}

	system("pause");
	
}