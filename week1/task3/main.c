#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    // Ask the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Display the character, its ASCII value, previous and next characters
    printf("\nYou entered: %c\n", ch);
    printf("ASCII value of '%c': %d\n", ch, (int)ch);
    printf("Previous character: %c\n", ch - 1);
    printf("Next character: %c\n", ch + 1);
    return 0;
}
