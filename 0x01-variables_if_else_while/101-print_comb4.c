#include <stdio.h>
/**
 * main-progrtam entry point
 * Return:0 success, non zero fail
 */
int main(void)
{
int a, b, c;

for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
for (c = '0'; c <= '9'; c++)
{
if (a < b && b < c)
{
putchar(a);
putchar(b);
putchar(c);
if (a == '7' && b == '8' && c == '9')
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar ('\n');
return (0);
}
