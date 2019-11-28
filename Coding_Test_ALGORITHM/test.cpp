#include<iostream>
using namespace std;
int NUM;


void add();

int main()
{
	for (int i = 0; i < 9999; i++)
	{
		
		for (int j = 0; j < 219999; j++)
		{
			printf("[%d] - %d\n", NUM, j);
		}
		add();
	}


	return 0;
}

void add()
{
	getchar();
	NUM++;
}
