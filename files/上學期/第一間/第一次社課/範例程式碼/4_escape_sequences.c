/**
 * file:   4_escape_sequences.c
 * author: williamlin
 * date:   08/28/2019
 */

#include<stdio.h>

int main(void)
{
	printf("A line.\\n\nA new line.\n\n");
	printf("\t\tThis is\\r\ra sentence.\n\n");
	printf("\t\\t represents Tab.\n\n");
	printf("\\\' prints: \'; only \': error.\n");
	printf("\\\" prints: \"; only \": error.\n");
	printf("\\\\ prints: \\; only \\: error.\n");
	return 0;
}

/**
 * example_input:  none
 * example_output: 
 *   A line.\n
 *   A new line.
 *
 *   a sentence.     This is\r
 *
 *          \t represents Tab.
 *
 *   \' prints: '; only ': error.
 *   \" prints: "; only ": error.
 *   \\ prints: \; only \: error.
 */

