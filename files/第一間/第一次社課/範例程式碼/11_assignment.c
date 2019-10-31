/**
 * file: 11_assign.c
 * author: nevikw39
 * date: 08/27, 2019
 */

#include <stdio.h>

int main()
{
    int n = 87;
    printf("\tn  = 87\nn is %d now.\n", n);
    n = 69;
    printf("\tn  = 69\nn is %d now.\n", n);
    n += 9418;
    printf("\tn += 9418\nn is %d now.\n", n);
    n -= 8798;
    printf("\tn -= 8798\nn is %d now.\n", n);
    putchar('\n');
    printf("n: %d, n++: %2d, n: %2d\n", n = 0, n++, n);
    printf("n: %d, ++n: %2d, n: %2d\n", n = 0, ++n, n);
    printf("n: %d, n--: %2d, n: %2d\n", n = 0, n--, n);
    printf("n: %d, --n: %2d, n: %2d\n", n = 0, --n, n);
    return 0;
}

/**
 * example_input: none
 * example_output:
 *      n  = 87
 *   n is 87 now.
 *      n  = 69
 *   n is 69 now.
 *      n += 9418
 *   n is 9487 now.
 *      n -= 8798
 *   n is 689 now.
 *   
 *   n: 0, n++:  0, n:  1
 *   n: 0, ++n:  1, n:  1
 *   n: 0, n--:  0, n: -1
 *   n: 0, --n: -1, n: -1
 */