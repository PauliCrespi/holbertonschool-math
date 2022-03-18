#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <math.h>
#include <stdio.h>
/**
 * struct complex - struct
 * @re : float
 * @im : float
 */
typedef struct complex
{
	float re;
	float im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
#endif
