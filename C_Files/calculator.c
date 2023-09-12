#include <stdio.h>

// Functions Declaration
float calculator(char operator, float number_1, float number_2);

// Main Function
int main()
{
  char more = 'y';
  while (more == 'y')
  {
    float number_1;
    float number_2;
    char operator;
    printf("Welcome!\n\nThis program functions as a basic calculator.\nYou can "
           "choose for: \"Addition(+), Substraction(-), Multiplication(*) and "
           "Division(/).");
    printf("You can choose an operation by typing the symbol behind it.\n");
    do
    {
      printf("\nOperation type: ");
      scanf(" %c", &operator);
    } while (operator!= '+' && operator!= '-' && operator!= '*' && operator!= '/');
    printf("\nEnter first digit: ");
    scanf("%f", &number_1);
    printf("\nEnter second digit: ");
    scanf("%f", &number_2);
    if (number_2 != 0 && number_2 != 0 && number_1 != 0 && number_1 != 0)
    {
      float result = calculator(operator, number_1, number_2);
      printf("\nResult: %.2f\n\n", result);
    }
    else
    {
      printf("\nPlease enter a number higher than 0\n");
    }
    do
    {
      printf("\nDo you want to make another calculation? (y/n): ");
      scanf(" %c", &more);
    } while (more != 'y' && more != 'n');
    printf("\n");
  }
}

// Functions Definition
float calculator(char operator, float number_1, float number_2)
{
  float result;
  if (operator== '+')
  {
    result = number_1 + number_2;
  }
  else if (operator== '-')
  {
    result = number_1 - number_2;
  }
  else if (operator== '/')
  {
    result = number_1 / number_2;
  }
  else
  {
    result = number_1 * number_2;
  }
  return result;
}