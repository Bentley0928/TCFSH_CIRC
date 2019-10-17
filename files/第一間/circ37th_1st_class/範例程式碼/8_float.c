/**
 * file: 8_float.c
 * author: nevikw39
 * date: 08/27, 2019
 */

#include <stdio.h>
#include <float.h> // DBL_DECIMAL_DIG: digits of double in decimal

int main()
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("%.*lf\n", DBL_DECIMAL_DIG, a + b);
    return 0;
}

/**
 * example_input:
 *   0.1 0.2
 * example_output:
 *   0.30000000000000004
 */