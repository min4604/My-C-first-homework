#include<stdio.h>
#include<stdlib.h>
float totalmiles, gasoline, gallon, parking, tollspar,totalpay;

void main(void)
{
	printf("Total miles driven per day:");
	scanf_s("%f", &totalmiles);
	printf("\nCost pergallon of gasoline:");
	scanf_s("%f", &gasoline);
	printf("\nAverage miles per gallon:");
	scanf_s("%f", &gallon);
	printf("\nparking feesper day:");
	scanf_s("%f", &parking);
	printf("\nTolls per day:");
	scanf_s("%f", &tollspar);

	totalpay = totalmiles / gallon * gasoline;
	totalpay += (parking + tollspar);
	printf("one day you need pay %.2f", totalpay);

	system("pause");
}