#include<iostream>
#include<vector>
using namespace std;
/*There is a tile with two 1x1 squares. Use this tile to fill a total of 2xN board. Tiles can be placed in two orientations: landscape and portrait.

Given the length N of the board, complete the tiling function, which returns the number of cases where 2xN can be filled with tiles.

For example, if N is 7, the figure below is where you can place the tile.
tiles

For example, if N = 2, you might want to place it horizontally or vertically, so you might want to use 2 You can return it. But if the answer is 123456789, just return 56789. If the leading digit of the returned number is 0, return the number except 0. The return type must be an integer.*/
int Fibonacci(int n)
{
	if (n == 1)return 1;
	if (n == 2) return 2;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int realsum(int n)
{
	if (n == 1)return 1;
	if (n == 2)return 2;
	return realsum(n - 1) + Fibonacci(n - 2);
}
int tiling(int n)
{
	int answer = 0;
	answer = realsum(n);
	if (answer > 9999)answer = answer % 10000;
	return answer;
}
int main()
{
	int testn = 5;
	int testAnswer = tiling(testn);
	cout << testAnswer;
}
