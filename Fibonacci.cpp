#include<iostream>
using namespace std;

long long fibonacci(int n)
{
	long long *f;
	f = (long long*)malloc(sizeof(long long)*n);
	f[0] = 0;
	f[1] = 1;

	for (int i = 2; i < (n + 1); i++)
	{
		f[i] = f[i-1] + f[i-2];

	}

	return f[n];
}

int main()
{
	int testCase = 10;
	long long testAnswer = fibonacci(testCase);

	cout << testAnswer;
}