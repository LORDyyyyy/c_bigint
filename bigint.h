#ifndef BIGINT
#define BIGINT

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define BigInt char *

#define MAX(A, B) ((A > B) ? (A) : (B))
#define MIN(A, B) ((A < B) ? (A) : (B))


/*  bigint_helpers.c */
int is_integer(BigInt);
int is_negative(BigInt);
BigInt to_positive(BigInt);

/*  bigint_add.c     */
BigInt bigint_add(BigInt, BigInt);

/* bigint_compare.c */
int bigint_compare(BigInt, BigInt);



#endif // BIGINT
