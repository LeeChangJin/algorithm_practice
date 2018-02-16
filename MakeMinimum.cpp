#include<iostream>
#include<vector>
#include<algorithm>
/*There are the same sequence of lengths A and B of natural numbers. The minimum value is calculated by subtracting one number from each of A and B, and multiplying the result by two. The goal is to repeat this process for the length of the sequence so that the final cumulative value is minimized.*/
using namespace std;

int getMinSum(vector<int> A, vector<int> B)
{
	int answer = 0;
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	for (int i =0;i<A.size();i++)
	{
		answer = A[i] * B[(A.size()) - 1 - i] + answer;

	}
	return answer;
}
int main()
{
	vector<int> tA{ 1,2 }, tB{ 3,4 };

	//아래는 테스트 출력을 위한 코드입니다.
	cout << getMinSum(tA, tB);
}