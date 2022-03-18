#include "holberton.h"
/**
 *conjugate - function
 *@c : to be conjugated
 *Return: conjugate of c
 */
complex conjugate(complex c)
{
	c.im = c.im * (-1);
	return (c);
}
