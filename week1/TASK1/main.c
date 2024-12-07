#include <stdio.h>
#include <stdlib.h>

int main()
{
int inputInt;
char inputChar;
float inputFloat;
/* Take input from user using scanf function */
printf("Enter Integer,Character and Float number\n");
scanf("%d %c %f", &inputInt, &inputChar, &inputFloat);
printf("\nInteger you have entered is : %d", inputInt);
printf("\nCharacter you have entered is : %c", inputChar);
printf("\nFloating point number you have entered is : %f", inputFloat);
    return 0;
}
