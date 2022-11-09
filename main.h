#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - formated output function
 * @format: character string
 * Return: the number of character the printed
 */
int _printf(const char *format, ...); /*Prototype of _printf*/

/*Function declaraction*/
int print_char(char c);
int print_str(char *s);
int print_interger(int num);

#endif
