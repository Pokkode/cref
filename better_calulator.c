#include <stdio.h>
#include <stdlib.h>

int main()
{
	double num1;
	double num2;
	char op;
	/*
   * op stands for operator
   */

	printf("Enter a number: ");
	scanf("%lf", &num1);
	printf("Enter operator: ");
	scanf(" %c", &op);
	/*
   * whenever you're getting a character(operator) from a user using "scanf", you need to put a space before "%c" otherwise, it won't work
   */
	printf("Enter a number: ");
	scanf("%lf", &num2);

	if (op == '+')
	{
		printf("%f", num1 + num2);
	}
	else if (op == '-')
	{
		printf("%f", num1 - num2);
	}
	else if (op == '/')
	{
		printf("%f", num1 / num2);
	}
	else if (op == '*')
	{
		printf("%f", num1 * num2);
	}
	else
	{
		printf("invalid operator");
	}
	return 0;
}