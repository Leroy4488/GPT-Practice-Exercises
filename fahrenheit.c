#include <stdio.h>

//Function declaration
int calcFahrenheit(int temperature);

//Main function
int main() {
  int celcius;
  printf("Welcome!\nThis program calculates the temperature from celcius to fahrenheit.\n");
  printf("Enter Temperature: ");
  scanf("%d", &celcius);
  int fahrenheit = calcFahrenheit(celcius);
  printf("Temperature in fahrenheit: %d", fahrenheit);
}

//Function definition
int calcFahrenheit(int temperature) {
  int fahrenheit = (temperature * 1.8) + 32;
  return fahrenheit;
}
