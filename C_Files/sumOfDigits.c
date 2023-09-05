#include <stdio.h>

// Function Declaration
int sumOfDigits(int number);

// Main Function
int main()
{
  int digits;
  printf("Hello\nThis program can calculate the sum of the digits you enter.\nFor example (123) will become 6 (1+2+3)\n");
  printf("Enter digits: ");
  scanf("%d", &digits);
  int result = sumOfDigits(digits);
  printf("The total amount is: %d", result);
}

// Function Definition
int sumOfDigits(int number)
{
  int total = 0;
  while (number > 0)
  {
    total = total + (number % 10);
    number = number / 10;
  }
  return total;
}