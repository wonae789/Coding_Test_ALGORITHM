//https://www.acmicpc.net/problem/5585
//∞≈Ω∫∏ß ¿‹µ∑ ±∏«œ±‚


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N;
	int coin[6] = { 1,5,10,50,100,500 };
	int result = 0;
	scanf("%d", &N);
	int K = 1000 - N;
	//coin = (int*)malloc(sizeof(int) * N);
	//for (int i = 0; i < N; i++)
	//{
	//	scanf("%d", &coin[i]);		
	//}

	for (int i = 5; i >= 0; i--)
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