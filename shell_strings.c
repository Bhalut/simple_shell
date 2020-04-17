#include "shell.h"
/**
 * _strcat - Concatenates 2 strings
 * @str1: String 1
 * @str2: String 2
 *
 * Return: Adress of 2 ats strings
 */
char *_strcat(char *str1, char *str2)
{
	char *res;
	unsigned int i, j, n;

	if (str1 == '\0')
	{
		str1 = "";
	}
	if (str2 == '\0')
	{
		str2 = "";
	}
	i = _strlen(str1);
	j = _strlen(str2);
	res = malloc((sizeof(char) * (i + j)) + 1);
	if (res == '\0')
	{
		perror("Failed to allocate memory for temp process");
		exit(1);
	}
	for (n = 0; n < i; n++)
	{
		res[n] = str1[n];
	}
	i = n;
	for (n = 0; n < j; n++)
	{
		res[i] = str2[n];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/**
 * _strcmp - compare two strings
 * @str1: first string
 * @str2: second string to compare to first string
 *
 * Return: Integer with the diference between str1 and str2
 */
int _strcmp(const char *str1, const char *str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return (0);
		}
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: duplicate of the string
 *
 * Return: Address of the array
 */
char *_strdup(char *str)
{
	int i, a;
	char *m;

	if (str == '\0')
	{
		return ('\0');
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	m = malloc((i * sizeof(char)) + 1);
	if (m == '\0')
	{
		return ('\0');
	}
	for (a = 0; a < i; a++)
	{
		m[a] = str[a];
	}
	m[a] = '\0';

	return (m);
}

/**
 * _strlen - returns the length of a string.
 * @str: array with the characters of the word
 *
 * Return: number of character of the string.
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
