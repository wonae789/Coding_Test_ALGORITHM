//https://www.acmicpc.net/problem/1946
//���Ի�� �ִ� �ο��� ���ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

//bool cmp(const pair<int, int>& a, const pair<int, int>& b)
//{
//	return a.first < b.first;// �������� ����
//}

int main(void)
{


	int T;
	cin >> T;
	cin.ignore();
	int a, b; // �� �ֱ�
	int count = 1; // �ּ� �ο� 1 ���Ѵ�.
	int index = 0; //�ڡڡں���ġ�� ����ϱ� ����. �ٽ� �κ�
	int end[20]; // ������ �迭�� ���� , �׽�Ʈ ���̽��� �ִ� 20���̹Ƿ� ������� �ִ� 20����.
	vector < pair<int, int> >Grade;

	for (int k = 0; k < T; k++) // �׽�Ʈ ���̽� ����
	{
		int NUMBER; // ������ ����
		cin >> NUMBER;
		cin.ignore();
		for (int i = 0; i < NUMBER; i++)
		{
			cin >> a >> b;
			cin.ignore(); // ���� ����
			Grade.push_back(make_pair(a, b));
		}
		sort(Grade.begin(), Grade.end()); // vector.first �� �������� ����

		for (int i = 0; i < NUMBER - 1; i++)
		{

			if (Grade[index].second > Grade[i + 1].second)// vector.second �� ����� ���� ������ ��
			{
				count++; // ������ �����Ƿ� 1�� ������.
				index = i + 1; // ���ǿ� �ȸ����� if���� ����ϹǷ� index�� �ö��� �ʴ´�
			}                  // �ڡڡں���ġ�� ����ϱ� ����. �ٽ� �κ�
		}
		end[k] = count; // ������� �迭�� ����
		count = 1; // �׽�Ʈ ���̽� 1ȸ �Ϸ�ø��� �ʱ�ȭ
		index = 0; // 
		Grade.clear(); // ���� �ʱ�ȭ
	}

	for (int i = 0; i < T; i++)
	{
		cout << end[i] << endl;

	}

	//for (int i = 0; i < NUMBER; i++)
	//{
	//	cout << Grade[i].first << " " << Grade[i].second << endl;
	//}


	return 0;
}