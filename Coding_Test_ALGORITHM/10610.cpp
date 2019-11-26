//https://www.acmicpc.net/problem/10610
//숫자 섞어 30 배수 최대값 찾기
#include<iostream>
#include<algorithm>
#include<functional>
#include<cstring>
using namespace std;

//bool cmp(char A, char B) //내림차순 정렬
//{
//	return A > B;
//}


int main()
{
	char GetNumber[100001]; //문자로 숫자를 받는다.
	cin >> GetNumber;
	int size = strlen(GetNumber); // 길이를 파악해놓는다.
	int sum = 0; // 각 자리 숫자 총 합이 3으로 나누어 떨어져야함
	int flag = 0; // 숫자에 0이 있으면 flag = 1, 없으면 0으로 유지됨.
	for (int i = 0; i < size; i++)
	{
		sum += (GetNumber[i] - '0');
		if (GetNumber[i] == '0')
			flag = 1;
	}

	if (sum % 3 == 0 && flag == 1)
	{
		sort(GetNumber, GetNumber + size, greater<int>()); // 내림차순 정렬
		cout << GetNumber;
	}
	else
		cout << -1;

	return 0;
}

