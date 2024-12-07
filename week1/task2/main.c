#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, temp;

    // Taking input from the user
    printf("Enter first float number: ");
    scanf("%f", &num1);

    printf("Enter second float number: ");
    scanf("%f", &num2);

    printf("\nBefore swapping:\n");
    printf("First number: %.2f\n", num1);
    printf("Second number: %.2f\n", num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter swapping:\n");
    printf("First number: %.2f\n", num1);
    printf("Second number: %.2f\n", num2);
    return 0;
}
