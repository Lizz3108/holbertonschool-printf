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
int print_char(char c)
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
	int len;

	if (s == NULL)
	{
		write(1, "(null)\n", 7);
		return (5);
	}
	len = _strlen(s);
	write(1, s, len);
	return (len);
}

/**
 * print_interger - prints interger given
 * @num: given number to print
 * Return: the number, if its negative include the line.
 */
int print_interger(int num)
{
	char interger_string[] = "          ";
	int i, digit_MAX = 10, is_negative = 0, digit_amount;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (num < 0)
	{
		write(1, "-", 1);
		num = -1 * num;
		is_negative++;
	}
	for (i = 9; num != 0; i--)
	{
		interger_string[i] = '0' + (num % 10);
		num = num / 10;
	}
	i++;
	digit_amount = digit_MAX - i;
	write(1, &interger_string[i], digit_amount);
	return (is_negative + digit_amount);
}
