#include "main.h"
/**
 * string_toupper - changes all the lowercase letters of a string
 * to uppercase
 * @s: input string
 * Return: the value of the pointer.
 */
char *string_toupper(char *s);
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
