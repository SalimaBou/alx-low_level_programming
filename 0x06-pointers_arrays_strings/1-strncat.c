#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int s, b;

	for (s = 0; dest[s] != '\0'; s++)
		;

	for (b = 0; src[b] != '\0' && n > 0; b++, n--, s++)
	{
		dest[s] = src[b];
	}
	return (dest);
}
