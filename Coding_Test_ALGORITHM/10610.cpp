//https://www.acmicpc.net/problem/10610
//���� ���� 30 ��� �ִ밪 ã��
#include<iostream>
#include<algorithm>
#include<functional>
#include<cstring>
using namespace std;

//bool cmp(char A, char B) //�������� ����
//{
//	return A > B;
//}


int main()
{
	char GetNumber[100001]; //���ڷ� ���ڸ� �޴´�.
	cin >> GetNumber;
	int size = strlen(GetNumber); // ���̸� �ľ��س��´�.
	int sum = 0; // �� �ڸ� ���� �� ���� 3���� ������ ����������
	int flag = 0; // ���ڿ� 0�� ������ flag = 1, ������ 0���� ������.
	for (int i = 0; i < size; i++)
	{
		sum += (GetNumber[i] - '0');
		if (GetNumber[i] == '0')
			flag = 1;
	}

	if (sum % 3 == 0 && flag == 1)
	{
		sort(GetNumber, GetNumber + size, greater<int>()); // �������� ����
		cout << GetNumber;
	}
	else
		cout << -1;

	return 0;
}

