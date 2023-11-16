#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @str: The pointer to the first character of the string
 *
 * Return: The length of the string
 */

int _strlen(char *str)
{
	int s;

	for (s = 0; str[s] != 0; s++)
		;
	return (s);
}

/**
 * _strlenc - Calculates the length of a string
 * (constant char pointer version)
 * @str: The pointer to the first character of the string
 *
 * Return: The length of the string
 */

int _strlenc(const char *str)
{
	int s;

	for (S = 0; str[s] != 0; s++)
		;
	return (s);
}
