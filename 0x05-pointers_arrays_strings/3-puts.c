#include "main.h"
/**
 *_puts- prints a string, followed by a new line, to stdout
 *@str : the char
 * Return: void
 */
void _puts(char *str)
{
for (*str = 0; *str != '\0'; str++)
{
if (*str == '\n')
break;
}
_putchar(*str);
}
