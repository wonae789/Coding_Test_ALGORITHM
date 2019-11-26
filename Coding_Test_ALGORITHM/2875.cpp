//https://www.acmicpc.net/problem/2875
//대회 or 인턴(최대가능한 팀 개수구하기)
#include <iostream>

using namespace std;


int main()
{
	int N, M, K;
	cin >> N >> M >> K;
	int num = 0;
	int total = N + M - K;

	while (N > 1 && M > 0 && total > 2)
	{
		N -= 2;
		M -= 1;
		total -= 3;
		num++;
	}

	cout << num;


	return 0;
}