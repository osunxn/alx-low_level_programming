#include "main.h"

/**
 * check - checks for the square root
 * @a: int
 * @b: int
 *
 * Return: int
 */
int check(int a, int b)
{
if (a * a == b) /* Check if a * a is equal to b */
return (a);
if (a * a > b) /* Check if a * a is greater than b */
return (-1);
return (check(a + 1, b)); /* Recursively call check with incremented a */
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
if (n == 0) /* Check if n is 0 */
return (0);
return (check(1, n)); /* Call check function with initial values */
}
