#include "main.h"
/**
 * _isalpha - checks if character is a letter
 * both lowercase or uppercase
 *
 * @c: takes input from other functions.
 *
 * Note: ASCII range of lowercase letters (97 to 122) a and z
 * or uppercase letters (65 to 90) A and Z
 * if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
 *
 * Return: 1 is c if true else 0
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
