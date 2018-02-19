#include<iostream>
using namespace std;
//Create a numberOfPrime method to return a prime number between 1 and n.
int numOfPrime(int n)
{
	int answer = 0;
	int numOfDivisor = 0;

	for (int j = n; j > 1; j--)
	{
		numOfDivisor = 0;
		for (int i = j ; i >= 1; i--)
		{
			if (j%i == 0)
			{
				numOfDivisor = numOfDivisor + 1;
				//printf_s("%d", numOfDivisor);//test
			}

		}
		if (numOfDivisor == 2) { answer = answer + 1; }
	}

	return answer;
}

int main()
{
	int testCase = 10;
	int testAnswer = numOfPrime(testCase);

	cout << testAnswer;
}
