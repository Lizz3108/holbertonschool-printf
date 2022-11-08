#include "main.h"

/* Backing functions */

/**
 * _strlen - Return the lenght of a string
 * @s: pointer to the string
 * Return: the lenght of the string.
 */
int _strlen(char *s)
{
	int lenght;

	for (lenght = 0; s[lenght] != '\0'; lenght++)
		;

	return (lenght);
}

/* Main functions */

/**
 * print_char - prints a given character
 * @c: How many character are to be printed
 * Return: the number of character printed
 */
int print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * print_str - prints a given string
 * @s: address to the string
 * Return: how long was the character
 */
int print_str(char *s)
{
	int len = _strlen(s);

	write(1, s, len);
	return (len);
}
