#include <stdio.h>
/**
 * main - main
 *
 * Return:0
 */
int main(void)
{
int a;
int b;
int k = 0;
for (a = 0; a <= 9; a++)
{
for (b = k; b <= 9; b++)
{
if (a != b)
{
putchar(a + '0');
putchar(b + '0');
}
if (a == b)
{
continue;
}
if (a == 8 && b == 9)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
k++;
}
return (0);
}
