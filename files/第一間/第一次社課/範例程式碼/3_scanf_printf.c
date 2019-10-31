/**
 * file:   3_scanf_printf.c
 * author: williamlin
 * date:   08/25/2019
 */

#include<stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%x (16) == %o (8)\n", n, n);
	return 0;
}

/**
 * example_input:
 *   9487
 * example_output:
 *   250f (16) == 22417 (8)
 */