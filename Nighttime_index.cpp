#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
/*
Night index
Many things are piled up. To minimize night shifts, Sumin decided to use the workload of the remaining jobs and decided to reduce the night jobs index of the jobs. The night work index is the sum of the tasks performed by the remaining days squared. Sumin can be treated as one workload by selecting one of the remaining tasks for one hour. If you do not have time to work each day when you have N days remaining, create an emergency function and output a result that minimizes the nighttime index of moisture. For example, if N = 4 and the workload of the remaining job is [4, 3, 3], the job done to minimize the night index is [2, 2, 2] 22 = 12 and returns 12.*/
int noOvertime(int no, vector<int> works)
{
	int answer = 0;

	while (no != 0)
	{
		*max_element(works.begin(), works.end()) -= 1;
		no -= 1;

	}
	for (int i = 0; i < works.size(); i++)
	{
		answer += works[i] * works[i];
	}

	return answer;
}

int main()
{
	vector<int> works{ 4,3,3 };
	int testNo = 4;

	int testAnswer = noOvertime(testNo, works);

	cout << testAnswer;
}