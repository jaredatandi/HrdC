#include <stdio.h>

/**
 * printchar - removes extra spaces from input string
 * main - test printchar
 * @s: pointer to string array
 * Return: pointer to modified string
 */

char *printchar(char *s)
{
	int c, sum;

	sum = 'a';
	c = 0;

	while (s[c] != '\0')
	{
		if (s[c] != ' ')
			putchar(s[c]);
		if (s[c] == ' ')
		{
			if (sum != ' ')
				putchar(s[c]);
		}
		sum = s[c];
		c++;
	}

	return (s);
}

int main(void)
{
	char *c = "Hello	Jared	keago\n";

	printchar(c);

	return (0);
}

