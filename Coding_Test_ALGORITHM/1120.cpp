//https://www.acmicpc.net/problem/1120
//���ڿ� ���Ͽ� �ߺ� �ּҰ� ���ϱ�
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
		cnt = 0; // �񱳸� ���Ѱ��̹Ƿ� �Ź� �ʱ�ȭ
		for (int j = 0; j < A.size(); j++)
		{
			if (A[j] != B[j + i])
				cnt++;
		}
		ans = min(cnt, ans); // �� ���� ���ؼ� �ּҰ��� ���Ѵ�. ans ���� ��Ȱ��.
	}
	cout << ans;


	return 0;
}