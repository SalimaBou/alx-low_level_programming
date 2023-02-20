#include <stdio.h>
/**
 * main - I want to use putchar
 * description: writing alphabets but e and q
 * Return: 0
 */
int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		if (s == 'e' || s == 'q')
			s++;
		putchar(s);
	}
	putchar('\n');
	return (0);
}
