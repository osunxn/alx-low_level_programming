#include <string.h>
/**
* is_palindrome_recursive - Check if a
* string is a palindrome recursively.
*
* @s: The input string to check.
* @start: The starting index of the substring to check.
* @end: The ending index of the substring to check.
*
* Return: 1 if the substring is a palindrome, 0 otherwise.
*/
int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
return (1);
/* Base case: empty string or single character, it's a palindrome */

if (s[start] != s[end])
return (0); /* Characters don't match, not a palindrome */

return (is_palindrome_recursive(s, start + 1, end - 1));
/* Recursively check the next pair of characters */
}

/**
* is_palindrome - Check if a string is a palindrome.
*
* @s: The input string to check.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
int length = strlen(s); /* Calculate the length of the string */

if (length == 0 || length == 1)
return (1);
/* An empty string or a single character is a palindrome */

return (is_palindrome_recursive(s, 0, length - 1));
/* Start recursive check from the first and last characters */
}
