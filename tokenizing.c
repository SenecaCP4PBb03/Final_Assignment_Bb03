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
	printf ("*** Start of Tokenizing Phrases Demo ***\n");
	char phrases[200]; // define char array size by 200
	char* phrase; // define pointer to char (c string)
	int p_counter; // define int variables
	while (TRUE) { // start while loop
		printf("Type a few phrases separated by comma(q - to quit):\n");
		gets(phrases); // call function 'gets' with variable 'phrases' to retrieve input from keyboard
		if (strcmp(phrases, "q") == 0) break; // if condition for break (when 'phrases'==q)
		phrase = strtok(phrases, ","); // call function 'strtok' and assigning result to a variable 'phrases'. This tokenizes string and returns first element before delimiter ","
		p_counter = 1; // assigning variable 'p_counter' value 1
		while (phrase) { // start while loop
			printf("Phrase #%d is \'%s\'\n", p_counter++, phrase);
			phrase = strtok(NULL, ","); // call function 'strtok' and assigning the output to a variable 'phrase'
		}
	}
	printf("*** End of Tokenizing Phrases Demo ***\n\n");
	printf("*** Start of Tokenizing Sentences Demo ***\n");
	char sentences[200]; // define char array size by 200
	char* sentence; // define pointer to char (c string)
	int s_counter; // define int variables
	while (TRUE) { // start while loop
		printf("Type a few sentences separated by dot(q - to quit):\n");
		gets(sentences); // call function 'gets' with variable 'sentences' to retrieve input from keyboard
		if (strcmp(sentences, "q") == 0) break; // if condition for break (when 'sentences'==q)
		sentence = strtok(sentences, "."); // call function 'strtok' and assigning result to a variable 'sentence'. This tokenizes string and returns first element before delimiter "."
		s_counter = 1; // assigning variable 's_counter' value 1
		while (sentence) { // start while loop
			printf("sentence #%d is \'%s\'\n", s_counter++, sentence);
			sentence = strtok(NULL, "."); // call function 'strtok' and assigning the output to a variable 'sentence'
		}
	}
	printf("*** End of Tokenizing Sentences Demo ***\n\n");
	return;
}
