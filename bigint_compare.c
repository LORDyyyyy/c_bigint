#include "bigint.h"


/**
 * @brief compare between two string numbers
 *
 * @param[char *] n1 the frist number as a string
 * @param[char *] n2 the second number as a string
 * @return if n1 == n2 : 0. if n1 > n2 : 1. if n2 > n1 : 2, -1 otherwise.
 */
int bigint_compare(BigInt n1, BigInt n2)
{
	if (!n1 || !n2)
		return (-1);

	size_t len1 = strlen(n1);
	size_t len2 = strlen(n2);
	size_t i;

	if (is_negative(n1) && is_negative(n2))
	{
		char *pos_n1 = to_positive(n1);
		char *pos_n2 = to_positive(n2);

		len1 -= 1;
		len2 -= 1;
		if (len1 > len2)
			return (2);
		if (len2 > len1)
			return (1);

		for (i = 0; i < len1; i++)
		{
			if (pos_n1[i] > pos_n2[i])
				return (2);
			if (pos_n2[i] > pos_n1[i])
				return (1);
		}
		return (0);
	}
	if (is_negative(n1))
		return (2);
	if (is_negative(n2))
		return (1);

	if (len1 > len2)
		return (1);
	if (len2 > len1)
		return (2);

	for (i = 0; i < len1; i++)
	{
		if (n1[i] > n2[i])
			return (1);
		if (n2[i] > n1[i])
			return (2);
	}
	return (0);
}
