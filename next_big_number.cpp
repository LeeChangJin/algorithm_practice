#include<iostream>
using namespace std;
/*Given a number N (1≤N≤1,000,000), the next largest number of N is:

The next larger number of N is the number of numbers equal to the number of 1's when N is converted to binary.
Find the smallest number among the numbers that satisfy the first condition and greater than N.
For example, replacing 78 with a binary number would result in 1001110, the next big number in 78 would be 83, and the binary number would be 1010011.
When N is given, complete the nextBigNumber function to find the next largest number of N*/
int test(int n)
{
	int howmany1 = 0;
	int howmany0 = 0, i = 0;
	int binarynum = 0;
	int temp;

	while (n >1)
	{
		temp = n % 2;
		n = (int)(n / 2);
		if (temp == 1)
		{
			howmany1 += 1;
		}
		if (temp == 0)
		{
			howmany0 += 1;
		}
		binarynum = 2 ^ (temp)+binarynum;
	}

	
	return howmany1;
}
int nextBigNumber(int n)
{
	int answer = 0;
	int result;
	int temp = 0;
	result = test(n);
	
	for (int i =(n+1);temp != result;i++)
	{
		temp = test(i);
		answer = i;
	}
	
	return answer;
}
int main()
{
	int n = 78;

	//아래는 테스트 출력을 위한 코드입니다.
	cout << nextBigNumber(n);
}
