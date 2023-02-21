#include "main.h"
/**
 * _isalpha -_isalpha will detect if the char is from alphabet or not
 * @c : character
 * Return: 0 || 1
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
