#include "simple_shell.h"
/**
 * token_num - number of words on a string
 * @str: string to split
 *
 * Return: number of words
 */
unsigned int token_num(char *str)
{
	char *token;
	char sep[] = " \n\t";
	unsigned int i;

	token = strtok(str, sep);
	i = 0;
	while (token != '\0')
	{
		token = strtok('\0', sep);
		i++;
	}
	return (i);
}
/**
 * split_token - split a string on diferent arrays
 * @str: String to split
 * @splt_str: pointer with the memory allocated fo the strs
 * @i: number of words to split
 *
 * Return: Address of the sub-strings
 */
char **split_token(char **splt_str, char *str, unsigned int i)
{
	char *token;
	char sep[] = " \n\t";
	unsigned int j;

	token = strtok(str, sep);
	j = 0;
	while (j < i)
	{
		splt_str[j] = _strdup(token);
		if (splt_str[j] == '\0')
		{
			while (j > 0)
			{
				free(splt_str[j]);
				j--;
			}
			free(splt_str[0]);
			free(splt_str);
			free(str);
			perror("Failed to allocate memmory to array");
			exit(1);
		}
		token = strtok('\0', sep);
		j++;
	}
	splt_str[j] = '\0';
	return (splt_str);
}
/**
 *str_to_arrays - Split the strings to sub-strings
 *@buffer_size: String to Split
 *
 * Return: (Double pointer)Address to sub-strings
 */
char **str_to_arrays(char *buffer_size)
{
	char *aux_len, *aux_split;
	char **split_str;
	unsigned int i;

	aux_len = strdup(buffer_size);
	if (aux_len == '\0')
	{
		perror("Failed to allocate memory");
		exit(1);
	}
	aux_split = strdup(buffer_size);
	if (aux_split == '\0')
	{
		perror("Failed to allocate memory");
		free(aux_len);
		exit(1);
	}
	i = token_num(aux_len);
	aux_len = '\0';
	free(aux_len);
	split_str = malloc((i * sizeof(char *)) + 1);
	if (split_str == '\0')
	{
		perror("Failed to allocate memmory");
		free(aux_split);
		exit(1);
	}
	split_str = split_token(split_str, aux_split, i);
	aux_split = '\0';
	free(aux_split);
	return (split_str);
}
