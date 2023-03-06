#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: memory area to be filled
 * @b: constant byte
 * @n: size of byte
 * Return: A pointer to the filled memory area
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
