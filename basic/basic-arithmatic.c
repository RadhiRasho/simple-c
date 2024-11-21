// A simple arithmetic operation on two integers

#include <stdio.h>

int main()
{
	int number1, number2, addition, subtraction, multiplication, division, modulo;

	printf("Enter two numbers: ");
	scanf("%d %d", &number1, &number2);

	addition = number1 + number2;
	subtraction = number1 - number2;
	multiplication = number1 * number2;
	division = number1 / number2;
	modulo = number1 % number2;

	printf("Addition: %d\n", addition);
	printf("Subtraction: %d\n", subtraction);
	printf("Multiplication: %d\n", multiplication);
	printf("Division: %d\n", division);
	printf("Modulo: %d\n", modulo);

	return 0;
}