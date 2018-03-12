#include<iostream>
#include<vector>
#include<string>
using namespace std;
/*There are 124 countries that use only 1, 2, and 4 numbers.

124 Numbers used in the country are converted as follows.

Decimal 1 ¡æ 1
Decimal 2 ¡æ 2
Decimal 3 ¡æ 4
Decimal 4 ¡æ 11
Decimal 5 ¡æ 12
Decimal 6 ¡æ 14
Decimal 7 ¡æ 21
When the number N of decimal numbers is entered, complete the change124 function, which converts the numbers to 124 numbers and returns them. For example, if N = 10, return "41".

The return type is a string*/
string change124(int no)
{
	string answer = "";
	
	int rema;
	string tmp;

	while (no > 3)
	{
		rema = no % 3;
		no = (int)no / 3;	 
		if (rema == 0)
		{
			no -= 1;
			rema = 3;
		}
		if (rema == 3)rema += 1;
		tmp = to_string(rema);
		answer.insert(0,tmp);
		if (rema == 4)rema -= 1;
		if (no <= 3)
		{
			if (no == 3) no += 1;
			tmp = to_string(no);
			answer.insert(0,tmp);
			if (no == 4) no -= 1;
		}
	}
	
	return answer;
}
int main()
{
	int testNo = 10;
	string testAnswer = change124(testNo);

	cout << testAnswer;
}
/*other solution

use
answer = "412"[a] + answer;


*/