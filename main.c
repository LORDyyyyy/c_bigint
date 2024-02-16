#include "bigint.h"



int main()
{
    printf("%s <=> %s ===> %d\n", "123", "123", bigint_compare("123", "123"));

    printf("%s <=> %s ===> %d\n", "123", "90", bigint_compare("123", "90"));

    printf("%s <=> %s ===> %d\n", "88", "158", bigint_compare("88", "158"));

    printf("%s <=> %s ===> %d\n", "123", "-48", bigint_compare("123", "-48"));

    printf("%s <=> %s ===> %d\n", "123", "-123", bigint_compare("123", "-123"));

    printf("%s <=> %s ===> %d\n", "-458", "-88", bigint_compare("-458", "-88"));

    printf("%s <=> %s ===> %d\n", "-50", "-50", bigint_compare("-50", "-50"));

    printf("%s <=> %s ===> %d\n", "0", "0", bigint_compare("0", "0"));

    printf("%s <=> %s ===> %d\n", "0", "1", bigint_compare("0", "1"));

    printf("%s <=> %s ===> %d\n", "1", "0", bigint_compare("1", "0"));

    printf("%s <=> %s ===> %d\n", "0", "-1", bigint_compare("0", "-1"));

    printf("%s <=> %s ===> %d\n", "-1", "0", bigint_compare("-1", "0"));


    return (0);
}
