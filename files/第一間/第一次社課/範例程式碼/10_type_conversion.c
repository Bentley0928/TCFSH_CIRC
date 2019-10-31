/**
 * file: 10_type_conversion.c
 * author: nevikw39
 * date: 08/27, 2019
 */

#include <stdio.h>

int main()
{
    double a = 10 / 3, b = 10 / 3.0, c = (double)10 / 3;
    printf("10 / 3 = %lf\n10 / 3.0 = %lf\n(double)10 / 3 = %lf\n", a, b, c);
    return 0;
}

/**
 * example_input: none
 * example_output:
 *   10 / 3 = 3.000000
 *   10 / 3.0 = 3.333333
 *   (double)10 / 3 = 3.333333
 */