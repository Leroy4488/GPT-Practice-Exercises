#include <stdio.h>

// Function Declaration
int isEven(int number);

// Main Function
int main()
{
    int input;
    printf("Welcome!\nThis program will let you now if the number you entered is even or odd!\n");
    printf("Enter your number: ");
    scanf("%d", &input);
    int result = isEven(input);
    if (result == 0)
    {
        printf("Your number is odd");
    }
    else
    {
        printf("Your number is even");
    }
}

// Function Definition
int isEven(int number)
{
    if (number % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}