#include <stdio.h>
#include <stdlib.h>



int hight, weight;
float ans;
void main(void)
{
	printf("Enter your hight(cm) and body weight(KG)");
	scanf_s("%d %d", &hight, &weight);
	ans = ((float)weight / ((float)(hight*hight)/10000));
	printf("Your BMI : %3.2f\n\n",ans);
	printf("BMI VALUES\nUnderweight:\tLess than 18.5\nNormal:\tbetween 18.5 and 24.9\n");
	printf("Overweight:\tbetween 25 and 29.9\nObese:\t30 or greater\n");

	system("pause");
	
}