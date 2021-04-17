//including header file 
#include "converting.h"

//defining converting method
void converting()
{
	printf("*** Start of Converting Strings to int Demo ***\n");
	char int_string[80]; //defining CString with 79 valid char and 1 null terminator. String initialize with 0 ensuring safty.
	int int_number; //defining integer value initialize with 0
	while (TRUE) //loop runs until TURE is 1. if TRUE not equal to 1 the loop stops
	{
		printf("Type the int numeric string (q - to quit):\n");
		gets(int_string); //allows user to enter value and stores in int_string variable
		if (strcmp(int_string, "q") == 0) break; //if user enters q then loops break
		int_number = atoi(int_string); //user entred string is converted to interger value 
		printf("Converted number is %d\n", int_number); //prints the converted value
	}
	printf("*** End of Converting Strings to int Demo ***\n\n");
}
