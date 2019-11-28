//https://www.acmicpc.net/problem/1049
// ��Ÿ�� �ּҺ�� ���ϱ�
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int CutGuitar, BrandNumber; // ������ ��Ÿ��, �귣�� ��ü ����
	int Package[1000]; // 6�� ��Ű�� ����
	int Single[1000]; // 1�� ����

	cin >> CutGuitar >> BrandNumber; // ������ ��Ÿ���� �� �귣�� ��ü ������ �Է� �޴´�.

	for (int i = 0; i < BrandNumber; i++)
	{
		cin >> Package[i] >> Single[i]; // �귣�� ���� ���� ��Ű�� ���ݰ� ��ǰ ������ �Է� �޴´�.
	}

	sort(Package, Package + BrandNumber); // ������������ �����Ѱ� ����
	sort(Single, Single + BrandNumber);

	if (Package[0] >= Single[0] * 6) // ��ʸ� ������ ��ǰ�� �����Ұ�� ��ǰ*�ʿ䰹�� �Ͽ� ��� ����.
	{
		cout << Single[0] * CutGuitar;
	}

	else // ��Ʈ�� �����Ѱ��, ��Ʈ������ �ʿ��� �������� (+1��Ʈ)�ʰ��Ͽ� ��������, ��Ȯ�� ������ ���缭 ���� �����Ͽ� ���.
	{
		if (((CutGuitar / 6) + 1) * Package[0] < (Package[0] * (CutGuitar / 6)) + (Single[0] * (CutGuitar % 6)))
		{
			cout << ((CutGuitar / 6) + 1) * Package[0];
		}
		else
			cout << (Package[0] * (CutGuitar / 6)) + (Single[0] * (CutGuitar % 6));
	}
		return 0;
}