#include <stdio.h>
#include <stdlib.h>

/*
 * get a user's full name with spaces inbetween i.e (john doe smith) using "fgets"
 * syntax:- fgets(variablename, size of array, stdin);
 * stdin stands for standard input
 * using "scanf", you have to be specific about what you want from the user i.e(use two variables and two %s if two names are required)
 * syntax:-
 * int main()
 * {
 *   char firstName;
 *   char lastName;
 *
 *   printf("Enter your names: ");
 *   scanf("%s%s", firstName, lastName);
 *   printf("%s %s", firstName, lastName);
 *
 *   return 0;
 * }
 */
int main()
{
	char fullName[50];
	printf("Enter your full name: ");
	fgets(fullName, 50, stdin);
	printf("your name is %s", fullName);
	return 0;
}

/*
 * for the most part, whenever you're getting a string from the user, you just wanna use "fgets". One of the downsides of using "fgets" is that the program when executed ends with a new line and adding a character after the %s i.e "printf("your name is %s right??", fullName);" would result to representing a new line character.
 */