#include <stdio.h>

/**
 * replace - replaces each tab, backspace, and backlash
 * in a string by their escape character
 * Return: 0 (success)
 */
int main(void)
{
	int c;
	c = getchar();

	while (c != '\0')
	{
		if (c == '\t')
			printf("\\t");
		else if (c == '\\')
			printf("\\\\");
		else if (c == '\b')
			printf("\\b");
		else 
			putchar(c);
	}
	return (0);
}

