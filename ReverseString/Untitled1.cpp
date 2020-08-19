#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

char *reverseWords(char *string)
{
    int size = strlen(string);   // Length of input string
    char *reverse =(char*) malloc(size + 1 * sizeof(2));  // Variable to store reversed string
    int i, j = 0;
    int start = size - 1, end = size - 1;   // "start" and "end" pointers for each word
    while (start > 0)    // "start" will run from end to beginning of input string
    {
        if (string[start] == ' ')   // if "start" at position of Space character
        {
            i = start + 1;    // start+1 is the first character of that word
            while (i <= end)     // word will transfer from input string to "reverse" string
            {
                reverse[j] = string[i];  
                i++; j++;
            }
            reverse[j++] = ' ';      // "reverse" string add more Space character
            end = start - 1;   // "end" pointer will move to "start" pointer to find the next word
        }
        start--;    // "start" pointer will find the next word
    }
    for (i = 0; i <= end; i++)   // this loop will print the last word of input string
    {
        reverse[j] = string[i];
        j++;
    }
    reverse[j] = '\0';    // Add end of file 
    return reverse;      // Return reversed string
}

int main(){
		char string[100];
        printf("Please enter string: ");
        gets(string);
        printf("The original string:  %s\n", string);                   // Print input string
        printf("The reverse string:   %s\n", reverseWords(string));     // Print reverse string
}
