//https://www.acmicpc.net/problem/2875
//��ȸ or ����(�ִ밡���� �� �������ϱ�)
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