#include "holberton.h"
/**
 *display_complex_number - function
 *@c : complex
 */
void display_complex_number(complex c)
{
	if (c.re != 0)
		printf("%g", c.re);
	if (c.re != 0 && c.im != 0)
		printf(" + ");
	if (c.im != 0)
		printf("%gi\n", c.im);
	else
		printf("\n");
}
