//https://www.acmicpc.net/source/16254723
//동전 개수 최소값 구하기

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N, K;
	int* coin;
	int result = 0;
	scanf("%d %d", &N, &K);
	coin = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &coin[i]);
	}

	for (int i = (N - 1); i >= 0; i--)
	{
		if (coin[i] <= K)
		{
			result += (K / coin[i]);
			K = (K % coin[i]);
		}
	}
	printf("%d", result);

	return 0;
}