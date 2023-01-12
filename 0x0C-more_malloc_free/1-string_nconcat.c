#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings (s1,
 * followed by the first n bytes of s2)
 * @s1: The first string to copy
 * @s2: the second string (only the first n bytes)
 * @n: the number of bytes to take from s2
 *
 * Return: a pointer to the newly generated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	int len1;
	int len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	new_str = malloc((len1 + n + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		new_str[i] = s2[j];
		i++;
	}
	new_str[i] = '\0';

	return (new_str);
}
