#define _CRT_SECURE_NO_WARNINGS
#include "common.h"

void readString(char* string, int max) // method that takes a pointer to an array as an argument; the maximum size of the array
{
	int i = 0;
	while (1)
	{
		char c = getchar(); // gets a character from stdin and assign it to var. c
		if (c == '\n') // check if c is equal to a new line
		{
			string[i++] = 0; // assign null terminator of string after last meaningful character
			return; //return to 
		}
		if (i >= max - 1) // check: i-th element of array less than size of array - 1 (because there is last element for zero pointer)
		{
			printf("Wrong input! Enter no more then %d chars\n", max - 1);
			while (getchar() != '\n');
			i = 0;
			continue;
		}
		string[i++] = c; //assign c to i++ element of array 
	}
}
