//https://www.acmicpc.net/problem/2217
// ���� �̿��ؼ� �ִ� �߷� ���ϱ�
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int Getnum;
	cin >> Getnum;
	int* arry = new int[Getnum];
	int* comp = new int[Getnum];

	for (int i = 0; i < Getnum; i++)
	{
		cin >> arry[i];
	}
	sort(arry, arry + Getnum);

	int count = Getnum;
	for (int i = 0; i < Getnum; i++)
	{
		comp[i] = (arry[i] * count--);

	}

	sort(comp, comp + Getnum);
	cout << comp[Getnum - 1];

	return 0;
}