/**
 * is_prime_number_recursive - check if number is prime recursively
 *
 * @n : input number
 *
 * @i : number input
 *
 * Return: 1 if the number is prime, 0 otherwise.
*/
int is_prime_number_recursive(int n, int i)
{
if (n <= 1)
return (0); /* Numbers less than or equal to 1 are not prime */

if (i == 1)
return (1); /* Base case: no divisors found, the number is prime */

if (n % i == 0)
return (0); /* Found a divisor other than 1 and itself, not prime */

return (is_prime_number_recursive(n, i - 1));
/* Recursively check for divisors */
}
/**
* is_prime_number - check if number is prime
* @n: input number
*
* Return: 1 if the number is prime, 0 otherwise.
*/
int is_prime_number(int n)
{
return (is_prime_number_recursive(n, n - 1)); /* Start with i = n - 1 */
}
