#include <stdio.h>

/**
 * fact - returns factorial of a number
 * @n: the number
 * Return: factorial
 */

int fact(int n)
{
	if (n == 0)
		return (1);
	else
		return (n * fact(n - 1));
}

/**
 * nCr - returns combination of an int
 * @n: the number
 * @r: subset number
 * Return: combination number
 */

int nCr(int n, int r)
{
	int a;

	a = fact(n) / (fact(r) * fact(n - r));

	return (a);
}

/**
 * main - driver code
 * Return: 0 (success)
 */
int main(void)
{
	int nCrRes;

	nCrRes = nCr(5, 3);
	printf("%d \n", nCrRes);

	return (0);
}


