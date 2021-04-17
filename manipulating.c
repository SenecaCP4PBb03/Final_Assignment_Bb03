//include header file
#include "manipulating.h"

//manipulating method
void manipulating() {
printf ("*** Start of Concatenating Strings Demo ***\n");
char string1 [80]; //char string [80] means that an 80 character space is alloted here even if space isnt fully used
char string2[80];
while (TRUE) { // TRUE is worldwide variable and is equal to 1 

	printf ("Type the lst string (q - to quit):\n");
	gets(string1); //gets function is used for reading line of text from standard input
	if (strcmp(string1, "q") == 0) break; //strcmp compares the strings and returns an integer value based on results

	printf ("Type the 2nd string:\n");
	gets (string2);
	strcat(string1, string2); //concatenating the string2 to the string1

	printf ("Concatenated string is \'%s\'\n", string1); //displating destination string
	}
printf ("*** End of Concatenating Strings Demo ***\n\n");
}
