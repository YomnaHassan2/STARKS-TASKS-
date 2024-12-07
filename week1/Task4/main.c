#include <stdio.h>
#include <stdlib.h>

int main()
{
     float num1, num2;

    // Taking two numbers as input from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("\nAddition: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);

    printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);

    printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);

    if (num2 != 0) {
        printf("Division: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    } else {
        printf("Division: Cannot divide by zero\n");
    }
    return 0;
}
