#include <stdio.h>

int main(void)
{
    for (int i = 30; i < 38; i++)
	    printf("\033[;%dmTCIRC", i);
    putchar('\n');
    for (int i = 1; i < 8; i++, putchar('\n'))
        for (int j = 30; j < 38; j++)
	        printf("\033[;%d;%dmTCIRC", i, j);
    puts("\033[0m");
	return 0;
}
/*
 * example_input: none
 * possible_output: https://imgur.com/RcD7NVw.mp4
 * builded on Apple LLVM version 10.0.1 (clang-1001.0.46.4)
 */