#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination
 * @src: source
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int y = 0;
	int x = 0;

	while (dest[y] != '\0')
	{
		y++;
	}

	while (x < n)
	{
		dest[y] = src[x];
		if (*(src + x) == '\0')
			break;
		y++;
		x++;
	}
	return (dest);
}
