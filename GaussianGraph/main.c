#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define LEN 5
#define PI 3.14


int main(void) {
	float data[LEN], fn[LEN], mean=0, sum=0, sd =0, temp=0;

	//getting the data
	printf("Enter the data: \n");
	for (int i = 0; i < LEN; i++)
	{
		printf("%dth data:",i+1);
		scanf("%f", &data[i]);
		sum = sum + data[i];
	}

	//calculating mean
	mean = sum / LEN;

	//calculating standard deviation
	for (int i = 0; i < LEN; i++)
	{
		temp = temp + (mean - data[i]) * (mean - data[i]);
	}
	temp = temp / (LEN - 1);
	sd = sqrt(temp);

	//sorting the data
	for (int i = 0; i < LEN; i++)
	{
		for (int j = i + 1; j < LEN; j++)
		{
			if (data[i] > data[j])
			{
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
	printf("#######\n");
	for (int i = 0; i < LEN; i++)
	{
		printf("%f ", data[i]);
	}
	printf("#######\n");

	//calculating function of data

	for (int i = 0; i < LEN; i++)
	{
		temp = (data[i] - mean) / sd;
		temp = (temp * temp)/2;
		temp = 0 - temp;
		temp = pow(2.72,temp);
		temp = temp / sd;
		temp = temp / (sqrt(2 * PI));

		fn[i] = temp;
	}

	printf("#######\n");
	for (int i = 0; i < LEN; i++)
	{
		printf("%f ", fn[i]);
	}
	printf("#######\n");

	return 0;
}