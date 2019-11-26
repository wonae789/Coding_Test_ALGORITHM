//https://www.acmicpc.net/problem/1946
//신입사원 최대 인원수 구하기
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

//bool cmp(const pair<int, int>& a, const pair<int, int>& b)
//{
//	return a.first < b.first;// 오름차순 정렬
//}

int main(void)
{


	int T;
	cin >> T;
	cin.ignore();
	int a, b; // 값 넣기
	int count = 1; // 최소 인원 1 더한다.
	int index = 0; //★★★비교위치를 기억하기 위함. 핵심 부분
	int end[20]; // 정답을 배열에 저장 , 테스트 케이스가 최대 20개이므로 결과물도 최대 20개다.
	vector < pair<int, int> >Grade;

	for (int k = 0; k < T; k++) // 테스트 케이스 개수
	{
		int NUMBER; // 지원자 숫자
		cin >> NUMBER;
		cin.ignore();
		for (int i = 0; i < NUMBER; i++)
		{
			cin >> a >> b;
			cin.ignore(); // 버퍼 제거
			Grade.push_back(make_pair(a, b));
		}
		sort(Grade.begin(), Grade.end()); // vector.first 를 내림차순 정렬

		for (int i = 0; i < NUMBER - 1; i++)
		{

			if (Grade[index].second > Grade[i + 1].second)// vector.second 를 현재와 다음 지원자 비교
			{
				count++; // 조건이 맞으므로 1씩 더해줌.
				index = i + 1; // 조건에 안맞으면 if문을 통과하므로 index가 올라가지 않는다
			}                  // ★★★비교위치를 기억하기 위함. 핵심 부분
		}
		end[k] = count; // 결과물을 배열에 저장
		count = 1; // 테스트 케이스 1회 완료시마다 초기화
		index = 0; // 
		Grade.clear(); // 벡터 초기화
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