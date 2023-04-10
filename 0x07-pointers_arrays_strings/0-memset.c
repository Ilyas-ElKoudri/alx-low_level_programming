#include "main.h"

/**
<<<<<<< HEAD
 * _memset - fill memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to fill the memory with
 * @n: number of bytes to be filled
 *
 * Return: pointer to the filled memory area01~
=======
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
>>>>>>> 0d09e77796c066d771787b072fee240a7520c7df
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

<<<<<<< HEAD
	return s;
=======
	return (s);
>>>>>>> 0d09e77796c066d771787b072fee240a7520c7df
}
