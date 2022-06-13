#include<stdio.h>
#include "main.h"
/**
 * _strcpy - update value.
 * @dest: value to be evaluated.
 * @src: value to be evaluated.
 * Return: not
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int x = 0;

	while (*(src + y) != '\0')
	{
		l++;
	}
	for ( ; x < y ; x++)
	{
		dest[x] = src[x];
	}
	dest[y] = '\0';
	return (dest);
}
