#include <iostream>
#include <ctime>
#include <time.h>

using namespace std;

#define R 10
#define T 7

int main()
{
	int A[R][T];
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < T; j++)
		{
			A[i][j] = i + j;
			cout << A[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
	
	int sum = 0;
	time_t t = time(NULL);
	struct tm buf;
	int day = localtime_s(&buf, &t);;

	for (int x = 0; x < T; x++)
	{
		sum += A[day % T][x];
	}
	cout << sum << endl;

	return 0;
}
