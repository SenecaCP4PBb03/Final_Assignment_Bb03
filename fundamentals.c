//include header file
#include "fundamentals.h"

// Indexing method
void fundamentals()
{
    printf("*** Start of Indexing Strings Demo ***\n");
    char buffer1[80]; 
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
    return;
}