#define _CRT_SECURE_NO_WARNINGS

/* Include header file */
#include "tokenizing.h"

/* Tokenizing method */
void tokenizing() {
	printf("*** Start of Tokenizing Words Demo ***\n");
	char words[200]; // define char array size by 200
	char* word; // define pointer to char (c string)
	int w_counter; // define int variable
	while (TRUE) { // start while loop
		printf("Type a few words separated by space(q - to quit):\n");
		gets(words); // call function 'gets' with variable 'word' to retrieve input from keyboard
		if (strcmp(words, "q") == 0) break; // if condition for break (when 'word'==q)
		word = strtok(words, " "); // call function 'strtok' and assigning result to a variable 'word'. This tokenizes string and returns first element before delimiter " "
		w_counter = 1; // assigning variable 'w_counter' value 1
		while (word) { // start while loop
			printf("Word #%d is \'%s\'\n", w_counter++, word);
			word = strtok(NULL, " "); // call function 'strtok' and assigning the output to a variable 'word'
		}
	}
	printf("*** End of Tokenizing Words Demo ***\n\n");
}