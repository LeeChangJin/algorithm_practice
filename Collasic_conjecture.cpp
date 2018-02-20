#include<iostream>
using namespace std;
/*This assumption, made by a person named Collatz in 1937, divides by 2 if the number entered is even, multiplies by 3 if it is odd, adds 1, and then repeats the same operation until the result is 1 1 is a guess. For example, if the input number is 6, it becomes 6 ¡æ 3 ¡æ 10 ¡æ 5 ¡æ 16 ¡æ 8 ¡æ 4 ¡æ 2 ¡æ 1, and becomes 1 in total 8 times. Create a collatz function to return how many times the number entered is 1. However, if it is not 1 even after repeating 500 times, please return -1*/
int collatz(int num)
{
	int answer = 0;

	while (num != 1)
	{
		if (answer >= 500)
		{
			return -1;
		}
		if (num % 2 == 0)
		{
			num = num / 2;
			// << num<<" ";

		}
		else
		{
			num = num * 3 + 1;
			//cout << num << " ";
		}
		answer = answer + 1;

	}

	return answer;
}

int main()
{
	int testCase = 6;
	int testAnswer = collatz(testCase);

	cout << testAnswer;
}