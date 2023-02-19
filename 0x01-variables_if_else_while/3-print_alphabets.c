#include <stdio.h>
/**
 * main - this programme print alphabet in lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char s;
	char b;

	for (s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
		if (s == 'z')
		{
			for (b = 'A'; b <= 'Z'; b++)
				putchar(b);
		}
	}
	putchar('\n');
	return (0);
}
