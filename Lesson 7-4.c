//7.4 More About printf and Introduction to Placeholders
#include <stdio.h>
int main(void) {
	int i = 7;
	unsigned int j = 5;
	char my_char = 'a';

	// %i or %d - signed integer
	// %u - unsigned integer
	// %c - single character
	// %s - a (null-terminated) string of text

	printf("The int is %i \n", i);
	printf("The unsigned int is %u \n", j);
	printf("The char is %c \n", my_char);
	printf("The string is %s \n", "A string of text");

	return 0;
}