/**
* wildcmp_recursive - Compare two strings recursively
* and check if they can be considered identical.
*
* @s1: The first string.
* @s2: The second string with special character *.
*
* Return: 1 if the strings can be considered identical, 0 otherwise.
*/
int wildcmp_recursive(char *s1, char *s2)
{
if (*s2 == '\0')
return (*s1 == '\0'); /* If both strings are empty, they are identical */

if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp_recursive(s1, s2 + 1)); /* Skip consecutive * in s2 */

if (*s1 != '\0' && wildcmp_recursive(s1 + 1, s2))
/* Try matching s1 with the rest of s2 */
return (1);

return (wildcmp_recursive(s1, s2 + 1)); /* Handle the case when s1 is empty */
}

if (*s1 != *s2)
return (0); /* Characters don't match, not identical */

return (wildcmp_recursive(s1 + 1, s2 + 1));
/* Move to the next characters in both strings */
}

/**
* wildcmp - Compare two strings and check if they can be considered identical.
*
* @s1: The first string.
* @s2: The second string with special character *.
*
* Return: 1 if the strings can be considered identical, 0 otherwise.
*/
int wildcmp(char *s1, char *s2)
{
return (wildcmp_recursive(s1, s2));
}
