#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"

// Indexing strings
void fundamentals()
{
    printf("*** Start of Indexing Strings Demo ***\n");
    char buffer1[80]; // [79+1]- 1 for the NULL-terminator
    char num_input[10];
    int position;
    while (TRUE) // TRUE is a global variable and is equal to 1
    {
        printf("Type a string (q - to quit):\n");
        gets(buffer1);
        // to compare if the user input equal to q (for quit)
        if (strcmp(buffer1, "q") == 0) break;
        while (TRUE) // TRUE is a global variable and is equal to 1
        {
            printf("Type the character position within the string:\n");
            gets(num_input);
            // to convert a string or a character 
           // into an integer numerical representation            
            position = atoi(num_input);

            // print error message if entered position
           // is greater then the string length
            if (position >= strlen(buffer1))
            {
                printf("Wrong position... type again, please\n");
                continue;
            }
            printf("The character found at %d position is \'%c\'\n",
                position, buffer1[position]);
            break;
        }
    }
    printf("*** End of Indexing Strings Demo ***\n\n");


    printf("*** Start of Measuring Strings Demo ***\n");
    //character array sized by 79+1(1 is for the NULL-terminator) 
    char buffer2[80];
    while (TRUE) // TRUE is a global variable and is equal to 1
    {
        printf("Type a string (q - to quit):\n");
        gets(buffer2);
        // to compare if the user input equal to q (for quit)
        if (strcmp(buffer2, "q") == 0) break;
        // to check and display the string lenght
        printf("The length is %lu\n", strlen(buffer2));
    }
    printf("*** End of Measuring Strings Demo ***\n\n");


    printf("*** Start of Copying Strings Demo ***\n");
    char destination[80]; //[79+1] - 1 for the NULL-terminator
    char source[80]; // [79+1] - 1 for the NULL-terminator
    while (TRUE) // TRUE is a global variable and is equal to 1
    {
        // reset destination string to empty every time the "while" loop begins
        destination[0] = '\0';
        printf("Destination string is reset to empty\n");
        printf("Type a source string (q - to quit):\n");
        gets(source);
        // to compare if the user input equal to q (for quit)
        if (strcmp(source, "q") == 0) break;
        // to copy sourse string to destination string
        strcpy(destination, source);
        printf("New destination string is \'%s\':\n", destination);
    }
    printf("*** End of Copying Strings Demo ***\n\n");
    return;
}