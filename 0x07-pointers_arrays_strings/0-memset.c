#include "main.h"

/**
 * memset - Entry point
 * @s: A pointed deztination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
