#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *fn_strcapitalize(char *str);

int main(void) {
    char *letters = "new lEtteRs To ITERatE!?";
    char *getter = fn_strcapitalize(letters);

    printf("%s\n", getter);

    return 0;
}

// <summary> Set first char of the word to uppercase and rest to lowercase
// <parameter=*str> Target string
// <return> Modified string
char *fn_strcapitalize(char *str) {
    char *returnValue = (char*)malloc(strlen(str));
    
    int k = 0;
    while (*str) {
        char temp = *str;
        if (isalpha(*str)) {
            // If the alphabet a lowcase and has a space infront of the char
            // or if the alphabet is a first of the letter
            if ((islower(temp) && *(str - 1) == ' ') || (k == 0)) {
                temp = toupper(temp);
            }
            // If the alphabet is uppercase and doesn't have a space infront of the char
            else if (isupper(temp) && *(str - 1) != ' ') {
                temp = tolower(temp);
            }
        }

        *returnValue = temp;

        returnValue++;
        str++;
        k++;
    }
    
    *returnValue = '\0';
    returnValue -= k;

    return returnValue;
}