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

	//�Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
	cout << jumpCase(test);
}

/*
//������ ����Ÿ���� �ʹ� �����ɷ��� ������ �ɼ����� �ٸ� ���� ã�ƺ�

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

	//�Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
	cout << jumpCase(test);
}
*/