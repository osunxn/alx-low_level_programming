/**
* _isdigit - checks if input is digit between 0 - 9
* Note: if if (c >= 48 && c <= 57) could be use aswell
* @c: input
*
* Return: 1 if is digit, 0 if not
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
