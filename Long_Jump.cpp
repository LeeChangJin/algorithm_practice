#include<iostream>
#include<vector>
using namespace std;
/*Hyosin is practicing to run away. Hijin can play 1 space or 2 spaces at a time. When there are four squares,
(1 space, 1 space, 1 space, 1 space)
(1 space, 2 spaces, 1 space)
(1 space, 1 space, 2 spaces)
(2 spaces, 1 space, 1 space)
(2 spaces, 2 spaces)
You can reach the last column in five ways. Given the number n of squares to be used in the long jump, complete the jumpCase function, which prints out how to reach the end of the jump. For example, if 4 is entered, 5 is returned.*/

int jumpCase(int n)
{
	int answer = 0;

	if (n == 1)
	{
		return 1;
	}
	else if(n ==2)
	{
		return 2;
	}
	else if (n == 3)
	{
		return 4;
	}
	else if (n == 4)
	{
		return 5;
	}
	else if (n == 5)
	{
		return 8;
	}
	else
	{
		return jumpCase(n - 1) + jumpCase(n - 2);
	}
	return 0;
}
int main()
{
	int test = 6;

	//아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << jumpCase(test);
}

/*
//맞으나 실행타임이 너무 오래걸려서 정답이 될수없어 다른 답을 찾아봄

int factorial(int x)
{
	if (x <= 1)
	{
		return 1;
	}
	else
	{
		return x*factorial(x - 1);
	}
}

int jumpCase(int n)
{
	int answer = 0;
	int maxvalue;

	maxvalue = (int)(n / 2);
	answer += 1;
	for (int i = 1; i <= maxvalue; i++)
	{
		answer += factorial(n - i)/(factorial(i)*factorial(n-2*i));

	}
	return answer;
}
int main()
{
	int test = 9;

	//아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << jumpCase(test);
}
*/