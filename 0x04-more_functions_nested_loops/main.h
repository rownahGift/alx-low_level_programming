#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_nu,ber(int n);

#endif

_putchar.c
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c:The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned,and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
