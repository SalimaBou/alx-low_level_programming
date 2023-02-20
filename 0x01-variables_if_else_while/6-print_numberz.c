#include <stdio.h>
/**
 * main - this program prints all digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int s;
	{
		for (s = '0'; s <= '9'; s++)
			putchar(s);
	}
	putchar('\n');
	return (0);
}
