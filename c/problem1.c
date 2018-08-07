//
// Project Euler
// Problem 1 - Multiples of 3 and 5
//
// jeffhaines@me.com
// Aug 2nd, 2018
//

#include <stdio.h>

int main() 
{
	int result = 0;
	int n = 1000;
	int i;	

	for (i = 0; i < n; i++) 
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result += i;
		}
	} 
	
	printf("%d\n", result);
}
