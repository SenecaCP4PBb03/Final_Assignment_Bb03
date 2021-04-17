//indexing strings
#include "manipulating.h"

void manipulating() {
	printf("*** Start of Concatenating Strings Demo ***\n");
	char string1[80]; //char string [80] means that an 80 character space is alloted here even if space isnt fully used
	char string2[80];
	while (TRUE) { // TRUE is worldwide variable and is equal to 1 

		printf("Type the lst string (q - to quit):\n");
		gets(string1); //gets function is used for reading line of text from standard input
		if (strcmp(string1, "q") == 0) break; //strcmp compares the strings and returns an integer value based on results

		printf("Type the 2nd string:\n");
		gets(string2);
		strcat(string1, string2); //concatenating the string2 to the string1

		printf("Concatenated string is \'%s\'\n", string1); //displating destination string
	}
	printf("*** End of Concatenating Strings Demo ***\n\n");
	printf("*** Start of Comparing Strings Demo ***\n");
	char comparel[80]; //means that an 80 character space is alloted here even if space isnt fully used
	char compare2[80];
	int result; //the variable result is going to be an integer value
	while (TRUE) { // TRUE is worldwide variable and is equal to 1 
		printf("Type the lst string to compare (q - to quit):\n");
		gets(comparel);
		if (strcmp(comparel, "q") == 0) break;
		printf("Type the 2nd string to compare:\n");
		gets(compare2);
		result = strcmp(comparel, compare2); //strcmp compares the strings and returns an integer value based on results
		if (result < 0) //checking the result of the of the string comparison
			printf("lst string is less than 2nd\n"); //if result is less than zero, means that compare1 is less than compare2
		else if (result == 0) //if the resulted of the compared strings are zero then print it means they are equal 
			printf("lst string is equal to 2nd\n");
		else //but if they are not equal and also not less than zero must mean that compare1 is greater than compare2
			printf("lst string is greater than 2nd\n");
	}
	printf("*** End of Comparing Strings Demo ***\n\n");
}