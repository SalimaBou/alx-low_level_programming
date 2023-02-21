#include "main.h"
/**
 * _islower -_islower will detect if the char in lowercase or not
 * @c : character
 * Return: 0 || 1
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
