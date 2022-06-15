#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: Input value
 * @s2: Input value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2);
{
	int y;

	y = 0;
	while (s1[y] != '\0' && s2[y] != '\0')
	{
		if (s1[y] != s2[y])
		{
			return (s1[y] - s2[y]);
		}
		y++;
	}
	return (0);
}
