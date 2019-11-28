//https://www.acmicpc.net/problem/11399
//ATM 대기시간
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
BubbleSort(int* arry, int getnum)
{
	int temp;
	for (int i = 0; i < getnum - 1; i++)
	{
		for (int j = 0; j < (getnum - i) - 1; j++)
		{
			if (arry[j] > arry[j + 1])
			{
				temp = arry[j];
				arry[j] = arry[j + 1];
				arry[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int* arry;
	int getnum;

	int sum = 0;
	scanf("%d", &getnum);
	arry = (int*)malloc(sizeof(int) * getnum);


	for (int i = 0; i < getnum; i++)
	{
		scanf("%d", &arry[i]);
	}


	BubbleSort(arry, getnum);


	for (int i = 0; i < getnum; i++)
	{
		for (int k = 0; k <= i; k++)
		{
			sum += arry[k];
					}
	}

	printf("%d", sum);
	return 0;
}