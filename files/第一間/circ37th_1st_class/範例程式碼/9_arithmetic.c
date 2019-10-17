/**
 * file: 9_arithmetic.c
 * author: nevikw39
 * date: 08/27, 2019
 */

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n%d %% %d = %d\n", a, b, a + b, a, b, a - b, a, b, a * b, a, b, a / b, a, b, a % b);
    return 0;
}

/**
 * example_input:
 *   9487 689
 * example_output:
 *   9487 + 689 = 10176
 *   9487 - 689 = 8798
 *   9487 * 689 = 6536543
 *   9487 / 689 = 13
 *   9487 % 689 = 530
 */