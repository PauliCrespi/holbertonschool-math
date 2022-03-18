#include "holberton.h"
/**
 *display_complex_number - function
 *@c : complex
 */
void display_complex_number(complex c)
{
	if (!c.re && !c.im)
		printf("0\n");

	if (c.re != 0)
		printf("%g", c.re);

	if (c.im > 0 && c.re != 0)
	{
		printf(" + ");

		if (c.im == 1)
			printf("i\n");
		else
			printf("%gi\n", c.im);
	}

	if (c.im < 0 && c.re != 0)
	{
		printf(" - ");

		if (c.im == -1)
			printf("i\n");
		else
			printf("%gi\n", c.im * -1);
	}

	if (c.im == 0)
		printf("\n");
}
