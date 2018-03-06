#include<iostream>
#include<vector>
#include<utility>
using namespace std;
/*There are tables filled with O and X. Table 1 consists of 1 x 1 square. Complete the findLargestSquare function to find the largest square of O in the table and return the width. For example

1 2 3 4 5
X O O O X
X O O O O
X X O O O
X X O O O
X X X X X
If there is

1 2 3 4 5
X O O O X
X O O O O
X X O O O
X X O O O
X X X X X
And the width is 9, so you can return 9.*/
int findLargestSquare(vector<vector<char>> board)
{
	int answer = 0;
	int siz = board.size();
	int tmp = 0;
	int tmp2 = 0;
	int smaller = 0;
	for (int i = 0; i < siz-1; i++)
	{
		for (int j = 0; j < siz-1; j++)
		{
			//I cover everything on the outside.
			if (board[i][j] == 'O')
			{
				if ((siz - i) < (siz - j))
				{
					smaller = siz - i;
				}
				else
				{
					smaller = siz - j;
				}

				for (int k = 1; k < smaller; k++)
				{
					if (board[i + k][j] == 'O')
					{
						if (board[i][j + k] == 'O')
						{
							if (board[i + k][j + k] == 'O')
							{
								//Find four vertices.
								for (int u = i; u <= i + k; u++)
								{
									for (int v = j; v <= j + k; v++)
									{
										if (board[u][v] == 'X')break;
										tmp2 += 1;
										//Investigate whether the inside of the vertex is all o.
									}

								}
								if (tmp2 == (k + 1)*(k + 1))
								{
									if (tmp2 > tmp)
										tmp = tmp2;
								}
								tmp2 = 0;
							}

						}
					}
					else	break;
				}
			}
		}
	}
	answer = tmp;
	return answer;
}
int main()
{

	vector<vector<char>> board{
		{ 'X','O','O','O','X' },
		{ 'X','O','O','O','O' },
		{ 'X','X','O','O','O' },
		{ 'X','X','O','O','O' },
		{ 'X','X','X','X','X' } };
	//아래는 테스트 출력을 위한 코드입니다.
	cout << findLargestSquare(board);
}
