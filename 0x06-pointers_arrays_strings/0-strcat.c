#include "main.h"

/**
 * _strcat - Cat 2strings at the same time
 * @dest:char 1
 * @src:char 2
 * Return: i
 */
char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (i);
}
