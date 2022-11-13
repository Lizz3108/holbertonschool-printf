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
		write(1, "(null)", 6);
		return (6);
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
	char interger_string[] = "           ";
	int i, digit_MAX = 11, num_duplicate = num, digit_amount;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	for (i = 10; num != 0; i--)
	{
		char digit = num % 10;
			if (digit < 0)
			{
				digit = -1 * digit;
			}
		interger_string[i] = '0' + digit;
		num = num / 10;
	}
	if (num_duplicate < 10)
	{
		interger_string[i] = '-';
	}
	else
	{
		i++;
	}
	digit_amount = digit_MAX - i;
	write(1, &interger_string[i], digit_amount);
	return (digit_amount);
}
