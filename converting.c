#define _CRT_SECURE_NO_WARNINGS
//including header file 
#include "converting.h"

//defining function 
void converting(void)
{
	printf("*** Start of Converting Strings to int Demo ***\n");
	char int_string[80]; //defining CString with 79 valid char and 1 null terminator. 
	int int_number; //defining integer value 
	while (TRUE) { //loop runs until TURE is 1. if TRUE not equal to 1 the loop stops
		printf("Type the int numeric string (q - to quit):\n");
		gets(int_string); //allows user to enter value and stores in int_string variable
		if (strcmp(int_string, "q") == 0) break; //if user enters q then loops break
		int_number = atoi(int_string); //user entred string is converted to interger value 
		printf("Converted number is %d\n", int_number); //prints the converted value
	}
	printf("*** End of Converting Strings to int Demo ***\n\n");
	printf("*** Start of Converting String to double Demo ***\n");
	char double_string[80]; //defining CString with 79 vaild char and 1 null terminator
	double double_number; //defining double value
	while (TRUE) { //loop runs until TRUE is 1. if TRUE not equal to 1 the loop stops
		printf("Type the double numeric string (q - to quit):\n");
		gets(double_string); //allows user to enter value and stores in double_string variable
		if (strcmp(double_string, "q") == 0) break; //if user enters q then loops break
		double_number = atof(double_string); //user entred string is converted to double value 
		printf("Converted number is %f\n", double_number); //prints the converted value
	}
	printf("*** End of Converting Strings to double Demo ***\n\n");
	printf("*** Start of Converting String to long double Demo ***\n");
	char long_string[80]; //defining CString with 79 vaild char and 1 null terminator
	long long_number; //defining long value
	while (TRUE) { //loop runs until TRUE is 1. if TRUE not equal to 1 the loop stops
		printf("Type the double numeric string (q - to quit):\n");
		gets(long_string); //allows user to enter value and stores in long_string variable
		if (strcmp(long_string, "q") == 0) break; //if user enters q then loops break
		long_number = atol(long_string); //user entred string is converted to long value
		printf("Converted number is %ld\n", long_number); //prints the converted value
	}
	printf("*** End of Converting String to long double Demo ***\n");
	return;
}

