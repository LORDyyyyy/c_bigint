#include "bigint.h"


/**
 * @brief checks if string contains only digits and - for negative numbers
 *
 * @param[char *] n the string to check on it
 * @return 1 if only digits and -, 0 other wise.
 */
int is_integer(BigInt n)
{
	if (n == NULL)
		return (0);

	size_t i;
	size_t size = strlen(n);

	for (i = 0; i < size; i++)
	{
		if (i == 0 && n[i] == '-')
			continue;
		else if (!(n[i] >= '0' && n[i] <= '9'))
			return (0);
	}
	if (size == 1 && n[0] == '-')
		return (0);

	return (1);
}


/**
 * @brief check if the number is negative or not
 *
 * @param[char *] n the string to check
 * @return 1 if negative, 0 otherwise.
 */
int is_negative(BigInt n)
{
	return (n[0] == '-');
}

/**
 * @brief remove the negative sign of a number of exists
 *
 * @param[char *] n the number as a string
 * @return the number as a string without the negaive sign
 */
BigInt to_positive(BigInt n)
{
	return (!n ? NULL : is_negative(n) ? n + 1 : n);
}
