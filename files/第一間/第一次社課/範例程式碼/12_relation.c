/**
 * file: 12_relation.c
 * author: nevikw39
 * date: 08/27, 2019
 */

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d > %d = %d\n%d >= %d = %d\n%d == %d = %d\n%d != %d = %d\n%d <= %d = %d\n%d < %d = %d\n", a, b, a > b, a, b, a >= b, a, b, a == b, a, b, a != b, a, b, a <= b, a, b, a < b);
    return 0;
}

/**
 * example_input:
 *   87 69
 * example_output:
 *   87 > 69 = 1
 *   87 >= 69 = 1
 *   87 == 69 = 0
 *   87 != 69 = 1
 *   87 <= 69 = 0
 *   87 < 69 = 0
 */