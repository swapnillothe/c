#include <stdio.h>

int factorial(int number, int preResult)
{
  if (number == 1)
  {
    return preResult;
  }
  return factorial(number - 1, number * preResult);
}

int main()
{
  int number;
  printf("Enter an integer: ");
  scanf(" %d", &number);
  printf("This is the factorial of %d : %d\n", number, factorial(number, 1));
}