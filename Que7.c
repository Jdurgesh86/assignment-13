
#include <stdio.h>

int gcd(int a, int b)
{
	// Everything divides 0
	if (a == 0)
		return b;
	if (b == 0)
		return a;

	// Base case
	if (a == b)
		return a;

	// a is greater
	if (a > b)
		return gcd(a - b, b);
	return gcd(a, b - a);
}

// Driver code
int main()
{
	int a = 3, b =43 ;
	printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
	return 0;
}
