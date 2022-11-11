![_printf banner](https://user-images.githubusercontent.com/96942307/201234320-27b3afa1-900a-49ee-920d-7605688034c1.png)

## Table of Content
:computer: _printf.c: This is the main code, of our custom function, it's a replica of the printf function.

:computer: function_declaration.c: Contains all the functions that are call in our _printf.c file.

:computer: main.h: It's the header file, contains the prototype to our functions.

:computer: man_3_printf: This file contains the man page for the function _printf.

## Description

The function _printf main focus is to print a output according to a certain format. Different ways to print an output is with the use of a format specifier.

### What is format specifier?

A format specifier in c are used to take input and print the output of a type. The symbol we use in every format specifier is %. The specifier tells the compiler about the type of data that most be given or input and the type of data that most be printed on the screen.

| Format Specifier | Used for...                                                   |
|------------------|---------------------------------------------------------------|
| %%               | Write a function that returns the sum of all its parameters.  |
| %i, %d           | Write a function that prints numbers, followed by a new line. |
| %s               | Write a function that prints strings, followed by a new line. |
| %c               | Write a function that prints anything.                        |

### Usage Example
``Example:
Input: _printf("%c", H);
Output: H``

## Technology

The language we use for the creation of _printf() is the C language. This low level language allow us to create and control function from scratch and define its output. We are currently in our foundation trimester of C language and we are testing our knowledge by building the _print() from scratch.

### Compilation
All the files that were used are compiled using:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

## Challenges

Some of the challenge we faced creating project were trying to make out _printf() function break and figure a solution for the problem. In addiction, try creating a function with the little information that it was given to us. This helps us develop critical thinking and emphasize collaboration. Creating the function for the conversion of intergers.

## Reference
This function work similar to ![printf(3)](https://man7.org/linux/man-pages/man3/printf.3.html). 

## Credits
![Lizbeth Garcia Lebron](https://www.linkedin.com/in/lizbeth-garcia-53657a22a/)

![Guillermo Rosario](https://www.linkedin.com/in/guillermo-rosario-085195133/)
