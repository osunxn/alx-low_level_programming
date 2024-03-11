#include "main.h"

/**
 * _islower - Checks for lowercase character.
 * @c: The character to check
 *
 * Note: ASCII values for lowercase letters
 * 'a' and 'z' are 97 and 122, respectively.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
