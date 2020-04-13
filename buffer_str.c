#include "simple_shell.h"

/**
 * str_to arrays - Split the strings to sub-strings
 *@buffer_str: String to Split
 *
 * Return: Double pointer with address to sub-strings
 */
char **str_to_arrays(char *buffer_str)
{
	char *aux_len;
	char *aux_split;
	char sep[] = " ";


	aux_len = strdup(buffer_str);
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
}
