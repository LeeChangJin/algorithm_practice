//Sum_of_divisors
#include<iostream>
using namespace std;

int sumDivisor(int n)
{
	int sum=0;
	
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			sum = sum + i;
		}

	}

	return sum;
}

int main()
{
	int testCase = 10;
	int testAnswer = sumDivisor(testCase);

	cout << testAnswer;
}

