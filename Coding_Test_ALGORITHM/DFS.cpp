#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;


void dfs(int R, int NODE, int arr[][30], int* visited)
{
	int i;
	visited[R] = 1;
	for (i = 0; i <= NODE; i++)
	{
		if (arr[R][i] == 1 && !visited[i]) // !visited[i] �߿�
		{
			cout << R << "���� " << i << "�� �̵� " << endl;
			dfs(i, NODE, arr, visited);
		}
	}
}
int main()
{
	int NODE;
	int arr[30][30];
	int visited[30] = { 0, };// ���������� �����Ⱚ, ���������� 1�� �ʱ�ȭ
	int START;
	cin >> NODE >> START;
	int x, y;
	while (1)
	{

		cin >> x >> y;
		if (x == -1 && y == -1)
			break;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}
	dfs(START, NODE, arr, visited);
	return 0;
}






































//#include <stdio.h>
//
//int n;
//int map[30][30], visit[30];
//
//void DFS(int v)
//{
//	int i;
//
//	visit[v] = 1;
//	for (i = 1; i <= n; i++) {
//		if (map[v][i] == 1 && !visit[i]) {
//			printf("%d���� %d�� �̵�\n", v, i);
//
//			DFS(i);        // ��� !        ��Ͷ� ���ư� ���� ������ �ٽ� ���ƿ´�.
//		}
//	}
//}
//
//int main(void)
//{
//	int start;
//	int v1, v2;
//
//	scanf("%d%d", &n, &start);
//
//	while (1)
//	{
//		scanf("%d%d", &v1, &v2);
//		if (v1 == -1 && v2 == -1) {
//			break;
//		}
//		map[v1][v2] = map[v2][v1] = 1;
//	}
//
//	DFS(start);
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<vector<int> > edge;
//vector<bool> visited;
//int N, M;
//int u, v;
//
//void dfs(int cur) {
//	visited[cur] = true;
//	cout << cur << ' ';
//	for (int i = 0; i < edge[cur].size(); i++) {
//		int there = edge[cur][i];
//		if (visited[there]) continue;
//		dfs(there);
//	}
//}
//
//int main() {
//	cin >> N >> M;
//	edge.resize(N + 1);
//	visited.resize(N + 1);
//	for (int i = 0; i < M; i++) {
//		cin >> u >> v;
//		edge[u].push_back(v);
//	}
//	dfs(1); // ��Ʈ�� 0������ ������ 1����
//}
