#include "main.h"
/**
 * print_last_digit- prints last digit with abs
 * @n: the character
 *
 * Return: number
 */
int print_last_digit(int n)
{
int number;

number = n % 10;
if (n < 0)
{
_putchar(-number + '0');
return (-number);
}
_putchar(number + '0');
return (number);
}
