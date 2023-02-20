#include <stdio.h>
/**
 * main - this program shows lowercase alphabets reversed
 *
 * Return:0
 */
int main(void)
{
	char s;

	{
		for (s = 'z'; s <= 'a'; s--)
			putchar(s);
	}
	putchar('\n');
	return (0);
}
