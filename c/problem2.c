//
// Project Euler
// Problem 2 - Even Fibonacci numbers
//
// jeffhaines@me.com
// Aug 2nd, 2018
//

#include <stdio.h>

int FibEven(int curNum, int prevNum, int sum, int maxNum) 
{
	if (curNum % 2 == 0) 
	{
		sum += curNum;
	}

	int tmpNum = curNum;
	curNum += prevNum;
	prevNum = tmpNum;

	if (curNum < maxNum) 
	{
		return FibEven(curNum, prevNum, sum, maxNum);
	}
	else 
	{
		return sum;
	}
}

int main() 
{
	int result = FibEven(1, 1, 0, 4000000);

	printf("%d\n", result);
}
