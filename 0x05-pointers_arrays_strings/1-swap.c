#include <stdio.h>
#include "main.h"
/**
 * swap_int - Swaps the value of 2 int
 * @a: An int to swap
 * @b: an int to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
