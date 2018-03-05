#include<iostream>
using namespace std;
/*Minji, who was studying mathematics, found interesting facts. The fact is that there are many ways to express a certain number as a sum of consecutive natural numbers. For example, the way to express 15 is
(1 + 2 + 3 + 4 + 5)
(4 + 5 + 6)
(7 + 8)
(15)
There are a total of four. Help Minji create an expressions function that returns a way to take a number and represent it as a sequence of numbers. For example, if 15 is entered, it returns 4.*/
int recuSum(int k, int n, int test)
{
	if (test == n)
	{
		return 1;
	}
	else if (test > n)
	{
		return 0;
	}
	else
	{
		test += k;
		recuSum(k + 1, n, test);
	}
}

int expressions(int testCase)
{
	int answer = 0;
	for (int i = 1; i <= testCase + 1; i++)
	{
		answer += recuSum(i, testCase, 0);
	}
	return answer;
}

int main()
{
	int testNo = 15;
	int testAnswer = expressions(testNo);
	// 아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << testAnswer;
}
