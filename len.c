#include "main.h"

/**
 * _strlen - function name
 * @s: function param
 * Return: return value
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}

/**
 * _strlen_const - function name
 * @s: function param
 * Return: return value
 */

int _strlen_const(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
