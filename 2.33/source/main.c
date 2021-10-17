#include<stdio.h>
#include<stdlib.h>
float totalmiles, gasoline, gallon, parking, tollspar;

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

	printf("%.2f %.2f %.2f %.2f %.2f", totalmiles, gasoline, gallon, parking, tollspar);

	system("pause");
}