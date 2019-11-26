//https://www.acmicpc.net/problem/1120
//문자열 비교하여 중복 최소값 구하기
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
	string A, B;

	cin >> A >> B;
	int cnt;
	int ans = 51;
	for (int i = 0; i <= (B.size() - A.size()); i++)
	{
		cnt = 0; // 비교를 위한값이므로 매번 초기화
		for (int j = 0; j < A.size(); j++)
		{
			if (A[j] != B[j + i])
				cnt++;
		}
		ans = min(cnt, ans); // 두 값을 비교해서 최소값을 구한다. ans 변수 재활용.
	}
	cout << ans;


	return 0;
}