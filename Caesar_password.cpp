#include<iostream>
#include<string>
/*A cipher scheme is a scheme in which each alphabet in a sentence is pushed a certain distance and replaced with another alphabet.

If you push A by 3, it becomes D, and if you push z by 1, it becomes a. Spaces are not modified.

Complete the caesar function to create a passphrase by inputting the string s to send and the n to indicate how much.*/

using namespace std;
string caesar(string s, int n)
{
	string answer = "";
	int strsize = s.size();
	int charintvalue = 0;

	n = n % 26;
	for (int i = 0; i < strsize; i++)
	{
		charintvalue = s[i];

		if ((65 <= charintvalue) && (charintvalue < 91))
		{
			charintvalue += n;
			if (charintvalue > 90)
			{
				charintvalue -= 26;
			}
		}
		if ((96 < charintvalue) && (charintvalue < 123))
		{
			charintvalue += n;
			if (charintvalue > 122)
			{
				charintvalue -= 26;
			}
		}
		answer += charintvalue;


	}

	return answer;
}
int main()
{
	string text = "a B z";
	int testNo = 4;

	string testAnswer = caesar(text, testNo);

	cout << testAnswer;
}