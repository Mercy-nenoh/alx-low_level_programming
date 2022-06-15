#include "main.h"

/**
 *_strcat - function commute srtings
* @dest: param pointer to a char
* @src: param pointer to a char
* Return: The value of dest.
*/
char *_strcat(char *dest, char *src)
{
	int y = 0;
	int x = 0;

	while (dest[y] != '\0')
	{
		y++;
	}

	while (src[x] != '\0')
	{
		dest[y] = src[x];
		y++;
		x++;
	}

	dest[y] = '\0';
	return (dest);
}
