#include <stdio.h>
#include <stdlib.h>

/*
 * every single time you go through a top loop, its nested loop would be executed entirely
 */

int main()
{
	int numbers[4][3][2] = {{{1, 2}, {3, 4}, {5, 6}}, {{7, 8}, {9, 10}, {11, 12}}, {{13, 14}, {15, 16}, {17, 18}}, {{19, 20}, {21, 22}, {23, 24}}};
	int i, j, k;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 2; k++)
			{
				printf("%d, ", numbers[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}