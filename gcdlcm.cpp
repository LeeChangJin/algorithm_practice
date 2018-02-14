#include<vector>
#include<iostream>
using namespace std;
//최대공약수랑 최대공배수를 구하는방법
vector<int> gcdlcm(int a, int b)
{
	vector<int> answer;
	int small=a, big=b;
	int sol1=1, sol2=a*b;

	answer.resize(2);

	if (a > b)
	{
		small = b;
		big = a;

	}
	else if(a == b)
	{
		sol1 = a;
		sol2 = a;
	}
	else
	{
		small = a;
		big = b;
	}
	sol1 = 1;
	sol2 = a*b;
	for (int i = small ; i>1; i--)
	{
		if (small%i == 0)
		{
			if (big%i == 0)
			{
				sol1 = i;
				break;
			}
		}
	}
	sol2 = (small / sol1)*(big / sol1)*sol1;
	answer[0] = sol1;
	answer[1] = sol2;

		return answer;
}

int main()
{
	int a = 3, b = 12;
	vector<int> testAnswer = gcdlcm(a, b);

	cout << testAnswer[0] << " " << testAnswer[1];
}
/*
//다른사람풀이
#include<vector>
#include<iostream>
using namespace std;

vector<int> gcdlcm(int a,int b)
{

int temp = a;

if(a > b){
a = b;
b = temp;
}

vector<int> answer;

for(int i = a; i > 0; i--){
if(((a%i) == 0) && ((b%i) == 0)){
answer.push_back(i);
answer.push_back((a*b)/i);
break;
}
}
return answer;
}

int main()
{
int a=3, b=12;
vector<int> testAnswer = gcdlcm(a,b);

cout<<testAnswer[0]<<" "<<testAnswer[1];
}
*/