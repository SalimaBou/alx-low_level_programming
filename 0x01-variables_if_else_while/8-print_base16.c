#include <stdio.h>
/**
 * main - this program shows base 16 numbers
 *
 * Return: 0
 */
int main(void)
{
	int s;

	for (s = 0; s <= 9; s++)
		putchar(s + '0');
	for (s = 'a'; s <= 'f'; s++)
		putchar(s);
	putchar('\n');
	return (0);
}
