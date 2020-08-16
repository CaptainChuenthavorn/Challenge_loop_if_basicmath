#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, i, count = 0;
	double average, k=0.00, sd;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	average = (a + b) / (double)2;

	if (a < b)
	{
		for (i = a;i <= b;i++)
		{
			printf("%d ", i);
			k = k + pow((i - average), 2);
			count++;
		}

	}
	else if (a >= b)
	{
		for (i = a;i >= b;i--)
		{
			printf("%d ", i);
			k += pow((i - average), 2);
			count++;
		}
	}
	printf("\nAverage = %.1lf", average);
	if (a == b)	printf("\nSD = 0");
	else {
		sd = sqrt(k / (count - 1));
		printf("\nSD = %.2lf", sd);
	}
	return 0;
}