#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets x10
 */
void print_alphabet_x10(void)
{
int s;
char a;

for (s = 0; s <= 9; s++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
