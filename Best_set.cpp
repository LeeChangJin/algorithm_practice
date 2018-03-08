#include<vector>
#include<iostream>
using namespace std;
/*Among the set of N natural numbers, there are a number of sets in which the sum of each element is S. The best set refers to the set of elements that satisfy the above conditions and the product of each element is the maximum. Given the number n of elements of a set and the sum s of elements, create a bestSet function that finds the best set and returns the elements in ascending order. If there is no set that satisfies the condition, return -1 by putting it at the beginning of the array. For example, if n = 3 and s = 13, [4,4,5] is returned.
(If Java does not have a set, return -1 with an array of size 1)*/
vector<int> bestSet(int no, int sum)
{
	int temp;
	int residue;
	vector<int> answer;

	if (sum > no)
	{
		temp = (int)(sum / no);
		residue = sum%no;
		answer.assign(no, temp);
		for (int i = (answer.size() - 1); i > ((answer.size() - 1) - residue); i--)
		{
			answer[i] += 1;
		}
	}
	else if (sum == no)
	{
		answer.assign(no, 1);
	}
	else
	{
		answer[0] = -1;
	}
	return answer;
}
int main()
{
	int n = 3, s = 13;
	vector<int> test = bestSet(n, s);

	// 아래는 테스트로 출력해 보기 위한 코드입니다.
	for (int i = 0; i < test.size(); i++)
		cout << test[i] << " ";
}
