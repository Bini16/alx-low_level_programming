#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * @s: memory area to return
 * @b: constant byte
 * @n: size of bytes
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i += 1;
	}
	return (s);
}
