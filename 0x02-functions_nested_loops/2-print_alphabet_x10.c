#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets x10
 */
void print_alphabet_x10(void)
{
int s;
char a;

while (s < 10)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
s++;
_putchar('\n');
}
}
