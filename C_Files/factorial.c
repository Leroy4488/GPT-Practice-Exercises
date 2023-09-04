#include <stdio.h>
// Function Declaration
int calculateFactorial(int n);

// Main Function
int main()
{
  int number;
  printf("Welcome!\nThis program calculates the factorial of a number given.\n");
  printf("Enter a positive number: ");
  scanf("%d", &number);
  int factorial = calculateFactorial(number);
  printf("Factorial number: %d", factorial);
}

// Function definition
int calculateFactorial(int n)
{
  int factorial = 1;
  for (int x = 1; x <= n; x++)
  {
    factorial *= x;
  }
  return factorial;
}
