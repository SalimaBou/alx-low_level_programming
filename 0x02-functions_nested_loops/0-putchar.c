#include "main.h"
/**
 *main - main of this program is to print -putchar
 *
 * Return:0
 */
int main(void)
{
int s;
char c[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
for (s = 0; s <= 7; s++)
{
_putchar(c[s]);
}
_putchar('\n');
return (0);
}
